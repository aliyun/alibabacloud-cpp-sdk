// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAPIKEYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAPIKEYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class RevokeApiKeyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeApiKeyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceIds, serviceIdsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeApiKeyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceIds, serviceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RevokeApiKeyShrinkRequest() = default ;
    RevokeApiKeyShrinkRequest(const RevokeApiKeyShrinkRequest &) = default ;
    RevokeApiKeyShrinkRequest(RevokeApiKeyShrinkRequest &&) = default ;
    RevokeApiKeyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeApiKeyShrinkRequest() = default ;
    RevokeApiKeyShrinkRequest& operator=(const RevokeApiKeyShrinkRequest &) = default ;
    RevokeApiKeyShrinkRequest& operator=(RevokeApiKeyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && this->regionId_ == nullptr && this->serviceIdsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline RevokeApiKeyShrinkRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RevokeApiKeyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceIdsShrink Field Functions 
    bool hasServiceIdsShrink() const { return this->serviceIdsShrink_ != nullptr;};
    void deleteServiceIdsShrink() { this->serviceIdsShrink_ = nullptr;};
    inline string getServiceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceIdsShrink_, "") };
    inline RevokeApiKeyShrinkRequest& setServiceIdsShrink(string serviceIdsShrink) { DARABONBA_PTR_SET_VALUE(serviceIdsShrink_, serviceIdsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RevokeApiKeyShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // API KEY ID。
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The list of service IDs to be authorized.
    // 
    // This parameter is required.
    shared_ptr<string> serviceIdsShrink_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
