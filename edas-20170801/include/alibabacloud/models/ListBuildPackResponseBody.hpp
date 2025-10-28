// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUILDPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListBuildPackResponseBodyBuildPackList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListBuildPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBuildPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuildPackList, buildPackList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBuildPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildPackList, buildPackList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBuildPackResponseBody() = default ;
    ListBuildPackResponseBody(const ListBuildPackResponseBody &) = default ;
    ListBuildPackResponseBody(ListBuildPackResponseBody &&) = default ;
    ListBuildPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBuildPackResponseBody() = default ;
    ListBuildPackResponseBody& operator=(const ListBuildPackResponseBody &) = default ;
    ListBuildPackResponseBody& operator=(ListBuildPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildPackList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // buildPackList Field Functions 
    bool hasBuildPackList() const { return this->buildPackList_ != nullptr;};
    void deleteBuildPackList() { this->buildPackList_ = nullptr;};
    inline const ListBuildPackResponseBodyBuildPackList & buildPackList() const { DARABONBA_PTR_GET_CONST(buildPackList_, ListBuildPackResponseBodyBuildPackList) };
    inline ListBuildPackResponseBodyBuildPackList buildPackList() { DARABONBA_PTR_GET(buildPackList_, ListBuildPackResponseBodyBuildPackList) };
    inline ListBuildPackResponseBody& setBuildPackList(const ListBuildPackResponseBodyBuildPackList & buildPackList) { DARABONBA_PTR_SET_VALUE(buildPackList_, buildPackList) };
    inline ListBuildPackResponseBody& setBuildPackList(ListBuildPackResponseBodyBuildPackList && buildPackList) { DARABONBA_PTR_SET_RVALUE(buildPackList_, buildPackList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListBuildPackResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBuildPackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBuildPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned versions of EDAS Container.
    std::shared_ptr<ListBuildPackResponseBodyBuildPackList> buildPackList_ = nullptr;
    // code
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
