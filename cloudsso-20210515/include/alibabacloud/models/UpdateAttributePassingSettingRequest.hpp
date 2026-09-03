// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATTRIBUTEPASSINGSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATTRIBUTEPASSINGSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateAttributePassingSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAttributePassingSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(SourceIdentityPassing, sourceIdentityPassing_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAttributePassingSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(SourceIdentityPassing, sourceIdentityPassing_);
    };
    UpdateAttributePassingSettingRequest() = default ;
    UpdateAttributePassingSettingRequest(const UpdateAttributePassingSettingRequest &) = default ;
    UpdateAttributePassingSettingRequest(UpdateAttributePassingSettingRequest &&) = default ;
    UpdateAttributePassingSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAttributePassingSettingRequest() = default ;
    UpdateAttributePassingSettingRequest& operator=(const UpdateAttributePassingSettingRequest &) = default ;
    UpdateAttributePassingSettingRequest& operator=(UpdateAttributePassingSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->sourceIdentityPassing_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateAttributePassingSettingRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // sourceIdentityPassing Field Functions 
    bool hasSourceIdentityPassing() const { return this->sourceIdentityPassing_ != nullptr;};
    void deleteSourceIdentityPassing() { this->sourceIdentityPassing_ = nullptr;};
    inline string getSourceIdentityPassing() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentityPassing_, "") };
    inline UpdateAttributePassingSettingRequest& setSourceIdentityPassing(string sourceIdentityPassing) { DARABONBA_PTR_SET_VALUE(sourceIdentityPassing_, sourceIdentityPassing) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The SourceIdentity pass-through mode. Three pass-through modes are supported. If this parameter is not specified, the existing configuration is not modified.
    // 
    // Valid values:
    // 
    // - IdP: Uses the SourceIdentity attribute value carried in the SAML assertion from the external identity provider (IdP). The attribute value must be 2 to 64 characters in length and can contain only letters, digits, and the following special characters: =,.@-_.
    // - UserName: Uses the CloudSSO username as the SourceIdentity. The system automatically adds a reserved prefix, resulting in the format acs:sso:<username>, with a total length of no more than 64 characters.
    // - Disabled: Does not pass through SourceIdentity.
    shared_ptr<string> sourceIdentityPassing_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
