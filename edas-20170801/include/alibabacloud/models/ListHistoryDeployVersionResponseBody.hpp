// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHistoryDeployVersionResponseBodyPackageVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListHistoryDeployVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoryDeployVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PackageVersionList, packageVersionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoryDeployVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PackageVersionList, packageVersionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListHistoryDeployVersionResponseBody() = default ;
    ListHistoryDeployVersionResponseBody(const ListHistoryDeployVersionResponseBody &) = default ;
    ListHistoryDeployVersionResponseBody(ListHistoryDeployVersionResponseBody &&) = default ;
    ListHistoryDeployVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoryDeployVersionResponseBody() = default ;
    ListHistoryDeployVersionResponseBody& operator=(const ListHistoryDeployVersionResponseBody &) = default ;
    ListHistoryDeployVersionResponseBody& operator=(ListHistoryDeployVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->packageVersionList_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHistoryDeployVersionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHistoryDeployVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // packageVersionList Field Functions 
    bool hasPackageVersionList() const { return this->packageVersionList_ != nullptr;};
    void deletePackageVersionList() { this->packageVersionList_ = nullptr;};
    inline const ListHistoryDeployVersionResponseBodyPackageVersionList & packageVersionList() const { DARABONBA_PTR_GET_CONST(packageVersionList_, ListHistoryDeployVersionResponseBodyPackageVersionList) };
    inline ListHistoryDeployVersionResponseBodyPackageVersionList packageVersionList() { DARABONBA_PTR_GET(packageVersionList_, ListHistoryDeployVersionResponseBodyPackageVersionList) };
    inline ListHistoryDeployVersionResponseBody& setPackageVersionList(const ListHistoryDeployVersionResponseBodyPackageVersionList & packageVersionList) { DARABONBA_PTR_SET_VALUE(packageVersionList_, packageVersionList) };
    inline ListHistoryDeployVersionResponseBody& setPackageVersionList(ListHistoryDeployVersionResponseBodyPackageVersionList && packageVersionList) { DARABONBA_PTR_SET_RVALUE(packageVersionList_, packageVersionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHistoryDeployVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The information about historical deployment packages.
    std::shared_ptr<ListHistoryDeployVersionResponseBodyPackageVersionList> packageVersionList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
