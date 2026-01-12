// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAICINSTANCEIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAICINSTANCEIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UpgradeAICInstanceImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAICInstanceImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIdsShrink_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAICInstanceImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpgradeAICInstanceImageShrinkRequest() = default ;
    UpgradeAICInstanceImageShrinkRequest(const UpgradeAICInstanceImageShrinkRequest &) = default ;
    UpgradeAICInstanceImageShrinkRequest(UpgradeAICInstanceImageShrinkRequest &&) = default ;
    UpgradeAICInstanceImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAICInstanceImageShrinkRequest() = default ;
    UpgradeAICInstanceImageShrinkRequest& operator=(const UpgradeAICInstanceImageShrinkRequest &) = default ;
    UpgradeAICInstanceImageShrinkRequest& operator=(UpgradeAICInstanceImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->serverIdsShrink_ == nullptr && this->timeout_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeAICInstanceImageShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // serverIdsShrink Field Functions 
    bool hasServerIdsShrink() const { return this->serverIdsShrink_ != nullptr;};
    void deleteServerIdsShrink() { this->serverIdsShrink_ = nullptr;};
    inline string getServerIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(serverIdsShrink_, "") };
    inline UpgradeAICInstanceImageShrinkRequest& setServerIdsShrink(string serverIdsShrink) { DARABONBA_PTR_SET_VALUE(serverIdsShrink_, serverIdsShrink) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpgradeAICInstanceImageShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the AIC image.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The IDs of the servers.
    // 
    // This parameter is required.
    shared_ptr<string> serverIdsShrink_ {};
    // The timeout period of the update. Unit: seconds.
    shared_ptr<int32_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
