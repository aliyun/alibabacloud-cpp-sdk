// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(groupExternalId, groupExternalId_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(groupExternalId, groupExternalId_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
    };
    CreateGroupRequest() = default ;
    CreateGroupRequest(const CreateGroupRequest &) = default ;
    CreateGroupRequest(CreateGroupRequest &&) = default ;
    CreateGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupRequest() = default ;
    CreateGroupRequest& operator=(const CreateGroupRequest &) = default ;
    CreateGroupRequest& operator=(CreateGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupExternalId_ == nullptr
        && return this->groupName_ == nullptr; };
    // groupExternalId Field Functions 
    bool hasGroupExternalId() const { return this->groupExternalId_ != nullptr;};
    void deleteGroupExternalId() { this->groupExternalId_ = nullptr;};
    inline string groupExternalId() const { DARABONBA_PTR_GET_DEFAULT(groupExternalId_, "") };
    inline CreateGroupRequest& setGroupExternalId(string groupExternalId) { DARABONBA_PTR_SET_VALUE(groupExternalId_, groupExternalId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The external ID.
    std::shared_ptr<string> groupExternalId_ = nullptr;
    // The organization name.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
