// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINLINEPOLICYFORACCESSCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINLINEPOLICYFORACCESSCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateInlinePolicyForAccessConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInlinePolicyForAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(InlinePolicyName, inlinePolicyName_);
      DARABONBA_PTR_TO_JSON(NewInlinePolicyDocument, newInlinePolicyDocument_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInlinePolicyForAccessConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(InlinePolicyName, inlinePolicyName_);
      DARABONBA_PTR_FROM_JSON(NewInlinePolicyDocument, newInlinePolicyDocument_);
    };
    UpdateInlinePolicyForAccessConfigurationRequest() = default ;
    UpdateInlinePolicyForAccessConfigurationRequest(const UpdateInlinePolicyForAccessConfigurationRequest &) = default ;
    UpdateInlinePolicyForAccessConfigurationRequest(UpdateInlinePolicyForAccessConfigurationRequest &&) = default ;
    UpdateInlinePolicyForAccessConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInlinePolicyForAccessConfigurationRequest() = default ;
    UpdateInlinePolicyForAccessConfigurationRequest& operator=(const UpdateInlinePolicyForAccessConfigurationRequest &) = default ;
    UpdateInlinePolicyForAccessConfigurationRequest& operator=(UpdateInlinePolicyForAccessConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->directoryId_ == nullptr && this->inlinePolicyName_ == nullptr && this->newInlinePolicyDocument_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline UpdateInlinePolicyForAccessConfigurationRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateInlinePolicyForAccessConfigurationRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // inlinePolicyName Field Functions 
    bool hasInlinePolicyName() const { return this->inlinePolicyName_ != nullptr;};
    void deleteInlinePolicyName() { this->inlinePolicyName_ = nullptr;};
    inline string getInlinePolicyName() const { DARABONBA_PTR_GET_DEFAULT(inlinePolicyName_, "") };
    inline UpdateInlinePolicyForAccessConfigurationRequest& setInlinePolicyName(string inlinePolicyName) { DARABONBA_PTR_SET_VALUE(inlinePolicyName_, inlinePolicyName) };


    // newInlinePolicyDocument Field Functions 
    bool hasNewInlinePolicyDocument() const { return this->newInlinePolicyDocument_ != nullptr;};
    void deleteNewInlinePolicyDocument() { this->newInlinePolicyDocument_ = nullptr;};
    inline string getNewInlinePolicyDocument() const { DARABONBA_PTR_GET_DEFAULT(newInlinePolicyDocument_, "") };
    inline UpdateInlinePolicyForAccessConfigurationRequest& setNewInlinePolicyDocument(string newInlinePolicyDocument) { DARABONBA_PTR_SET_VALUE(newInlinePolicyDocument_, newInlinePolicyDocument) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The name of the inline policy.
    shared_ptr<string> inlinePolicyName_ {};
    // The new configurations of the inline policy.
    // 
    // The value can be up to 4,096 characters in length.
    // 
    // For more information about the syntax and structure of RAM policies, see [Policy syntax and structure](https://help.aliyun.com/document_detail/93739.html).
    shared_ptr<string> newInlinePolicyDocument_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
