// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDomainResponseBodyDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDomainResponseBody() = default ;
    ModifyDomainResponseBody(const ModifyDomainResponseBody &) = default ;
    ModifyDomainResponseBody(ModifyDomainResponseBody &&) = default ;
    ModifyDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDomainResponseBody() = default ;
    ModifyDomainResponseBody& operator=(const ModifyDomainResponseBody &) = default ;
    ModifyDomainResponseBody& operator=(ModifyDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const ModifyDomainResponseBodyDomainInfo & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, ModifyDomainResponseBodyDomainInfo) };
    inline ModifyDomainResponseBodyDomainInfo domainInfo() { DARABONBA_PTR_GET(domainInfo_, ModifyDomainResponseBodyDomainInfo) };
    inline ModifyDomainResponseBody& setDomainInfo(const ModifyDomainResponseBodyDomainInfo & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline ModifyDomainResponseBody& setDomainInfo(ModifyDomainResponseBodyDomainInfo && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the domain name.
    std::shared_ptr<ModifyDomainResponseBodyDomainInfo> domainInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
