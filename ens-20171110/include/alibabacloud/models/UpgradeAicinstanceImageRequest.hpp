// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAICINSTANCEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAICINSTANCEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UpgradeAICInstanceImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeAICInstanceImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeAICInstanceImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ServerIds, serverIds_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpgradeAICInstanceImageRequest() = default ;
    UpgradeAICInstanceImageRequest(const UpgradeAICInstanceImageRequest &) = default ;
    UpgradeAICInstanceImageRequest(UpgradeAICInstanceImageRequest &&) = default ;
    UpgradeAICInstanceImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeAICInstanceImageRequest() = default ;
    UpgradeAICInstanceImageRequest& operator=(const UpgradeAICInstanceImageRequest &) = default ;
    UpgradeAICInstanceImageRequest& operator=(UpgradeAICInstanceImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->serverIds_ != nullptr && this->timeout_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpgradeAICInstanceImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // serverIds Field Functions 
    bool hasServerIds() const { return this->serverIds_ != nullptr;};
    void deleteServerIds() { this->serverIds_ = nullptr;};
    inline const vector<string> & serverIds() const { DARABONBA_PTR_GET_CONST(serverIds_, vector<string>) };
    inline vector<string> serverIds() { DARABONBA_PTR_GET(serverIds_, vector<string>) };
    inline UpgradeAICInstanceImageRequest& setServerIds(const vector<string> & serverIds) { DARABONBA_PTR_SET_VALUE(serverIds_, serverIds) };
    inline UpgradeAICInstanceImageRequest& setServerIds(vector<string> && serverIds) { DARABONBA_PTR_SET_RVALUE(serverIds_, serverIds) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpgradeAICInstanceImageRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the AIC image.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The IDs of the servers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> serverIds_ = nullptr;
    // The timeout period of the update. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
