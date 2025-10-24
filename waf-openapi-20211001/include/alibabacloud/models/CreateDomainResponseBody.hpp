// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDomainResponseBodyDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDomainResponseBody() = default ;
    CreateDomainResponseBody(const CreateDomainResponseBody &) = default ;
    CreateDomainResponseBody(CreateDomainResponseBody &&) = default ;
    CreateDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainResponseBody() = default ;
    CreateDomainResponseBody& operator=(const CreateDomainResponseBody &) = default ;
    CreateDomainResponseBody& operator=(CreateDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const CreateDomainResponseBodyDomainInfo & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, CreateDomainResponseBodyDomainInfo) };
    inline CreateDomainResponseBodyDomainInfo domainInfo() { DARABONBA_PTR_GET(domainInfo_, CreateDomainResponseBodyDomainInfo) };
    inline CreateDomainResponseBody& setDomainInfo(const CreateDomainResponseBodyDomainInfo & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline CreateDomainResponseBody& setDomainInfo(CreateDomainResponseBodyDomainInfo && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the domain name that is added.
    std::shared_ptr<CreateDomainResponseBodyDomainInfo> domainInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
