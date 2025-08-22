// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateAlertContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateAlertContactGroupRequest() = default ;
    UpdateAlertContactGroupRequest(const UpdateAlertContactGroupRequest &) = default ;
    UpdateAlertContactGroupRequest(UpdateAlertContactGroupRequest &&) = default ;
    UpdateAlertContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertContactGroupRequest() = default ;
    UpdateAlertContactGroupRequest& operator=(const UpdateAlertContactGroupRequest &) = default ;
    UpdateAlertContactGroupRequest& operator=(UpdateAlertContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupId_ != nullptr
        && this->contactGroupName_ != nullptr && this->contactIds_ != nullptr && this->regionId_ != nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline int64_t contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
    inline UpdateAlertContactGroupRequest& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline UpdateAlertContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline UpdateAlertContactGroupRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertContactGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the alert contact group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactGroupId_ = nullptr;
    // The name of the alert contact group.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the alert contact.
    std::shared_ptr<string> contactIds_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
