// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGrayDomainFunctionResponseBodyDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class GetGrayDomainFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Progression, progression_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrayDomainFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfigList, domainConfigList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Progression, progression_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetGrayDomainFunctionResponseBody() = default ;
    GetGrayDomainFunctionResponseBody(const GetGrayDomainFunctionResponseBody &) = default ;
    GetGrayDomainFunctionResponseBody(GetGrayDomainFunctionResponseBody &&) = default ;
    GetGrayDomainFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrayDomainFunctionResponseBody() = default ;
    GetGrayDomainFunctionResponseBody& operator=(const GetGrayDomainFunctionResponseBody &) = default ;
    GetGrayDomainFunctionResponseBody& operator=(GetGrayDomainFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainConfigList_ != nullptr
        && this->domainName_ != nullptr && this->progression_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // domainConfigList Field Functions 
    bool hasDomainConfigList() const { return this->domainConfigList_ != nullptr;};
    void deleteDomainConfigList() { this->domainConfigList_ = nullptr;};
    inline const vector<GetGrayDomainFunctionResponseBodyDomainConfigList> & domainConfigList() const { DARABONBA_PTR_GET_CONST(domainConfigList_, vector<GetGrayDomainFunctionResponseBodyDomainConfigList>) };
    inline vector<GetGrayDomainFunctionResponseBodyDomainConfigList> domainConfigList() { DARABONBA_PTR_GET(domainConfigList_, vector<GetGrayDomainFunctionResponseBodyDomainConfigList>) };
    inline GetGrayDomainFunctionResponseBody& setDomainConfigList(const vector<GetGrayDomainFunctionResponseBodyDomainConfigList> & domainConfigList) { DARABONBA_PTR_SET_VALUE(domainConfigList_, domainConfigList) };
    inline GetGrayDomainFunctionResponseBody& setDomainConfigList(vector<GetGrayDomainFunctionResponseBodyDomainConfigList> && domainConfigList) { DARABONBA_PTR_SET_RVALUE(domainConfigList_, domainConfigList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetGrayDomainFunctionResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // progression Field Functions 
    bool hasProgression() const { return this->progression_ != nullptr;};
    void deleteProgression() { this->progression_ = nullptr;};
    inline string progression() const { DARABONBA_PTR_GET_DEFAULT(progression_, "") };
    inline GetGrayDomainFunctionResponseBody& setProgression(string progression) { DARABONBA_PTR_SET_VALUE(progression_, progression) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGrayDomainFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetGrayDomainFunctionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<GetGrayDomainFunctionResponseBodyDomainConfigList>> domainConfigList_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> progression_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
