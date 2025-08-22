// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupId, contactGroupId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
    };
    CreateOrUpdateContactGroupRequest() = default ;
    CreateOrUpdateContactGroupRequest(const CreateOrUpdateContactGroupRequest &) = default ;
    CreateOrUpdateContactGroupRequest(CreateOrUpdateContactGroupRequest &&) = default ;
    CreateOrUpdateContactGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactGroupRequest() = default ;
    CreateOrUpdateContactGroupRequest& operator=(const CreateOrUpdateContactGroupRequest &) = default ;
    CreateOrUpdateContactGroupRequest& operator=(CreateOrUpdateContactGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupId_ != nullptr
        && this->contactGroupName_ != nullptr && this->contactIds_ != nullptr; };
    // contactGroupId Field Functions 
    bool hasContactGroupId() const { return this->contactGroupId_ != nullptr;};
    void deleteContactGroupId() { this->contactGroupId_ = nullptr;};
    inline int64_t contactGroupId() const { DARABONBA_PTR_GET_DEFAULT(contactGroupId_, 0L) };
    inline CreateOrUpdateContactGroupRequest& setContactGroupId(int64_t contactGroupId) { DARABONBA_PTR_SET_VALUE(contactGroupId_, contactGroupId) };


    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline CreateOrUpdateContactGroupRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline CreateOrUpdateContactGroupRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


  protected:
    // The ID of the alert contact group.
    // 
    // *   If you do not specify this parameter, an alert contact group is created.
    // *   If you specify this parameter, the specified alert contact group is modified.
    std::shared_ptr<int64_t> contactGroupId_ = nullptr;
    // The name of the alert contact group.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the contact that you want to add to the contact group. Separate multiple IDs with commas (,).
    std::shared_ptr<string> contactIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
