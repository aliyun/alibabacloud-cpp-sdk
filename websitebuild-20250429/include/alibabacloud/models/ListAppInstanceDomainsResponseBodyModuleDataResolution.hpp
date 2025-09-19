// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATARESOLUTION_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATARESOLUTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleDataResolution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleDataResolution& obj) { 
      DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ResolutionStatus, resolutionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleDataResolution& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ResolutionStatus, resolutionStatus_);
    };
    ListAppInstanceDomainsResponseBodyModuleDataResolution() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataResolution(const ListAppInstanceDomainsResponseBodyModuleDataResolution &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataResolution(ListAppInstanceDomainsResponseBodyModuleDataResolution &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataResolution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleDataResolution() = default ;
    ListAppInstanceDomainsResponseBodyModuleDataResolution& operator=(const ListAppInstanceDomainsResponseBodyModuleDataResolution &) = default ;
    ListAppInstanceDomainsResponseBodyModuleDataResolution& operator=(ListAppInstanceDomainsResponseBodyModuleDataResolution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsRecord_ != nullptr
        && this->errorMsg_ != nullptr && this->resolutionStatus_ != nullptr; };
    // dnsRecord Field Functions 
    bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
    void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord & dnsRecord() const { DARABONBA_PTR_GET_CONST(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord dnsRecord() { DARABONBA_PTR_GET(dnsRecord_, Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleDataResolution& setDnsRecord(const Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord & dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };
    inline ListAppInstanceDomainsResponseBodyModuleDataResolution& setDnsRecord(Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord && dnsRecord) { DARABONBA_PTR_SET_RVALUE(dnsRecord_, dnsRecord) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataResolution& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // resolutionStatus Field Functions 
    bool hasResolutionStatus() const { return this->resolutionStatus_ != nullptr;};
    void deleteResolutionStatus() { this->resolutionStatus_ = nullptr;};
    inline string resolutionStatus() const { DARABONBA_PTR_GET_DEFAULT(resolutionStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleDataResolution& setResolutionStatus(string resolutionStatus) { DARABONBA_PTR_SET_VALUE(resolutionStatus_, resolutionStatus) };


  protected:
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataResolutionDnsRecord> dnsRecord_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> resolutionStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
