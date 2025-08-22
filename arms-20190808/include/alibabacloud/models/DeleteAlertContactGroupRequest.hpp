// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteAlertContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAlertContactGroupRequest() = default ;
    DeleteAlertContactGroupRequest(const DeleteAlertContactGroupRequest &) = default ;
    DeleteAlertContactGroupRequest(DeleteAlertContactGroupRequest &&) = default ;
    DeleteAlertContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertContactGroupRequest() = default ;
    DeleteAlertContactGroupRequest& operator=(const DeleteAlertContactGroupRequest &) = default ;
    DeleteAlertContactGroupRequest& operator=(DeleteAlertContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupId_ != nullptr
        && this->regionId_ != nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline int64_t contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
    inline DeleteAlertContactGroupRequest& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAlertContactGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the alert contact group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactGroupId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
