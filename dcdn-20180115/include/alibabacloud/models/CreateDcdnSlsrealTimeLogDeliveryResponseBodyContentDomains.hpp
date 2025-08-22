// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains(const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains(CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains &&) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& operator=(const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& operator=(CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->domainName_ != nullptr && this->region_ != nullptr && this->status_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the returned result.
    std::shared_ptr<string> desc_ = nullptr;
    // The domain name from which real-time logs were collected.
    std::shared_ptr<string> domainName_ = nullptr;
    // The region to which real-time logs were delivered.
    std::shared_ptr<string> region_ = nullptr;
    // The status of real-time logs.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
