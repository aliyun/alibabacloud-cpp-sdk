// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTCONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTCONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateAlertContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAlertContactGroupRequest() = default ;
    CreateAlertContactGroupRequest(const CreateAlertContactGroupRequest &) = default ;
    CreateAlertContactGroupRequest(CreateAlertContactGroupRequest &&) = default ;
    CreateAlertContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertContactGroupRequest() = default ;
    CreateAlertContactGroupRequest& operator=(const CreateAlertContactGroupRequest &) = default ;
    CreateAlertContactGroupRequest& operator=(CreateAlertContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupName_ == nullptr
        && this->contactIds_ == nullptr && this->regionId_ == nullptr; };
    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline CreateAlertContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string getContactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline CreateAlertContactGroupRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAlertContactGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> contactGroupName_ {};
    shared_ptr<string> contactIds_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
