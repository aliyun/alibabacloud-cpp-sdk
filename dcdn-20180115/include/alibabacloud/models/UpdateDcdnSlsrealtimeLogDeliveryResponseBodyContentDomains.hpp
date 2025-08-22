// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENTDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENTDOMAINS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains(const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains(UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains &&) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& operator=(const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& operator=(UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains &&) = default ;
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
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the returned result.
    std::shared_ptr<string> desc_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the region.
    std::shared_ptr<string> region_ = nullptr;
    // Indicates whether the real-time log delivery project was successfully updated. Valid values:
    // 
    // *   **success**
    // *   **fail**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
