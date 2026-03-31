// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class CreateRoleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRolePolicyDocument, assumeRolePolicyDocument_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxSessionDuration, maxSessionDuration_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreateRoleShrinkRequest() = default ;
    CreateRoleShrinkRequest(const CreateRoleShrinkRequest &) = default ;
    CreateRoleShrinkRequest(CreateRoleShrinkRequest &&) = default ;
    CreateRoleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleShrinkRequest() = default ;
    CreateRoleShrinkRequest& operator=(const CreateRoleShrinkRequest &) = default ;
    CreateRoleShrinkRequest& operator=(CreateRoleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeRolePolicyDocument_ == nullptr
        && this->description_ == nullptr && this->maxSessionDuration_ == nullptr && this->roleName_ == nullptr && this->tagShrink_ == nullptr; };
    // assumeRolePolicyDocument Field Functions 
    bool hasAssumeRolePolicyDocument() const { return this->assumeRolePolicyDocument_ != nullptr;};
    void deleteAssumeRolePolicyDocument() { this->assumeRolePolicyDocument_ = nullptr;};
    inline string getAssumeRolePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(assumeRolePolicyDocument_, "") };
    inline CreateRoleShrinkRequest& setAssumeRolePolicyDocument(string assumeRolePolicyDocument) { DARABONBA_PTR_SET_VALUE(assumeRolePolicyDocument_, assumeRolePolicyDocument) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRoleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxSessionDuration Field Functions 
    bool hasMaxSessionDuration() const { return this->maxSessionDuration_ != nullptr;};
    void deleteMaxSessionDuration() { this->maxSessionDuration_ = nullptr;};
    inline int64_t getMaxSessionDuration() const { DARABONBA_PTR_GET_DEFAULT(maxSessionDuration_, 0L) };
    inline CreateRoleShrinkRequest& setMaxSessionDuration(int64_t maxSessionDuration) { DARABONBA_PTR_SET_VALUE(maxSessionDuration_, maxSessionDuration) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateRoleShrinkRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateRoleShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The trust policy that specifies one or more trusted entities to assume the RAM role. The trusted entities can be Alibaba Cloud accounts, Alibaba Cloud services, or identity providers (IdPs).
    // 
    // >  RAM users cannot assume the RAM roles of trusted Alibaba Cloud services.
    shared_ptr<string> assumeRolePolicyDocument_ {};
    // The description of the RAM role.
    // 
    // The description must be 1 to 1,024 characters in length.
    shared_ptr<string> description_ {};
    // The maximum session time of the RAM role.
    // 
    // Valid values: 3600 to 43200. Unit: seconds. Default value: 3600.
    // 
    // If you do not specify this parameter, the default value is used.
    shared_ptr<int64_t> maxSessionDuration_ {};
    // The name of the RAM role.
    // 
    // The name must be 1 to 64 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    shared_ptr<string> roleName_ {};
    // The tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
