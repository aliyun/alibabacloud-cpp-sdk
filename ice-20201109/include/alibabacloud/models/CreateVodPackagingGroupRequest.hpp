// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVODPACKAGINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVODPACKAGINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateVodPackagingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVodPackagingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVodPackagingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    CreateVodPackagingGroupRequest() = default ;
    CreateVodPackagingGroupRequest(const CreateVodPackagingGroupRequest &) = default ;
    CreateVodPackagingGroupRequest(CreateVodPackagingGroupRequest &&) = default ;
    CreateVodPackagingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVodPackagingGroupRequest() = default ;
    CreateVodPackagingGroupRequest& operator=(const CreateVodPackagingGroupRequest &) = default ;
    CreateVodPackagingGroupRequest& operator=(CreateVodPackagingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->groupName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVodPackagingGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateVodPackagingGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The packaging group description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the packaging group. The name must be unique in an account and can be up to 128 characters in length. Letters, digits, underscores (_), and hyphens (-) are supported.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
