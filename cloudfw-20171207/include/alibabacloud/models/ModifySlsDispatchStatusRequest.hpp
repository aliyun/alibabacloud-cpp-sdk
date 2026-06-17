// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSLSDISPATCHSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSLSDISPATCHSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifySlsDispatchStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySlsDispatchStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchValue, dispatchValue_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_TO_JSON(NewRegionId, newRegionId_);
      DARABONBA_PTR_TO_JSON(Site, site_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySlsDispatchStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchValue, dispatchValue_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(FilterKeys, filterKeys_);
      DARABONBA_PTR_FROM_JSON(NewRegionId, newRegionId_);
      DARABONBA_PTR_FROM_JSON(Site, site_);
    };
    ModifySlsDispatchStatusRequest() = default ;
    ModifySlsDispatchStatusRequest(const ModifySlsDispatchStatusRequest &) = default ;
    ModifySlsDispatchStatusRequest(ModifySlsDispatchStatusRequest &&) = default ;
    ModifySlsDispatchStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySlsDispatchStatusRequest() = default ;
    ModifySlsDispatchStatusRequest& operator=(const ModifySlsDispatchStatusRequest &) = default ;
    ModifySlsDispatchStatusRequest& operator=(ModifySlsDispatchStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dispatchValue_ == nullptr
        && this->enableStatus_ == nullptr && this->filterKeys_ == nullptr && this->newRegionId_ == nullptr && this->site_ == nullptr; };
    // dispatchValue Field Functions 
    bool hasDispatchValue() const { return this->dispatchValue_ != nullptr;};
    void deleteDispatchValue() { this->dispatchValue_ = nullptr;};
    inline string getDispatchValue() const { DARABONBA_PTR_GET_DEFAULT(dispatchValue_, "") };
    inline ModifySlsDispatchStatusRequest& setDispatchValue(string dispatchValue) { DARABONBA_PTR_SET_VALUE(dispatchValue_, dispatchValue) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline bool getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
    inline ModifySlsDispatchStatusRequest& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // filterKeys Field Functions 
    bool hasFilterKeys() const { return this->filterKeys_ != nullptr;};
    void deleteFilterKeys() { this->filterKeys_ = nullptr;};
    inline string getFilterKeys() const { DARABONBA_PTR_GET_DEFAULT(filterKeys_, "") };
    inline ModifySlsDispatchStatusRequest& setFilterKeys(string filterKeys) { DARABONBA_PTR_SET_VALUE(filterKeys_, filterKeys) };


    // newRegionId Field Functions 
    bool hasNewRegionId() const { return this->newRegionId_ != nullptr;};
    void deleteNewRegionId() { this->newRegionId_ = nullptr;};
    inline string getNewRegionId() const { DARABONBA_PTR_GET_DEFAULT(newRegionId_, "") };
    inline ModifySlsDispatchStatusRequest& setNewRegionId(string newRegionId) { DARABONBA_PTR_SET_VALUE(newRegionId_, newRegionId) };


    // site Field Functions 
    bool hasSite() const { return this->site_ != nullptr;};
    void deleteSite() { this->site_ = nullptr;};
    inline string getSite() const { DARABONBA_PTR_GET_DEFAULT(site_, "") };
    inline ModifySlsDispatchStatusRequest& setSite(string site) { DARABONBA_PTR_SET_VALUE(site_, site) };


  protected:
    // The key for the log category. Valid values:
    // 
    // **internet_log**
    // 
    // **vpc_firewall_log**
    // 
    // **nat_firewall_log**
    // 
    // **ipv6_firewall_log**
    // 
    // **dns_firewall_log**.
    shared_ptr<string> dispatchValue_ {};
    // Specifies whether to deliver logs. A value of \\`true\\` enables delivery, and \\`false\\` disables it.
    shared_ptr<bool> enableStatus_ {};
    // The supported filter conditions. Valid values:
    // 
    // **attack**
    // 
    // **acl**
    // 
    // **other**.
    shared_ptr<string> filterKeys_ {};
    // The region.
    shared_ptr<string> newRegionId_ {};
    // The site to modify. If the log version is 1, leave this parameter empty or set it to \\`global\\`. If the log version is 2, set this parameter to \\`cn\\` or \\`intl\\`.
    shared_ptr<string> site_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
