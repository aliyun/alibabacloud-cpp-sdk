// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCHRONIZEAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCHRONIZEAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class SynchronizeAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SynchronizeAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TargetRegionIds, targetRegionIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SynchronizeAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TargetRegionIds, targetRegionIdsShrink_);
    };
    SynchronizeAppShrinkRequest() = default ;
    SynchronizeAppShrinkRequest(const SynchronizeAppShrinkRequest &) = default ;
    SynchronizeAppShrinkRequest(SynchronizeAppShrinkRequest &&) = default ;
    SynchronizeAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SynchronizeAppShrinkRequest() = default ;
    SynchronizeAppShrinkRequest& operator=(const SynchronizeAppShrinkRequest &) = default ;
    SynchronizeAppShrinkRequest& operator=(SynchronizeAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->targetRegionIdsShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SynchronizeAppShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // targetRegionIdsShrink Field Functions 
    bool hasTargetRegionIdsShrink() const { return this->targetRegionIdsShrink_ != nullptr;};
    void deleteTargetRegionIdsShrink() { this->targetRegionIdsShrink_ = nullptr;};
    inline string targetRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetRegionIdsShrink_, "") };
    inline SynchronizeAppShrinkRequest& setTargetRegionIdsShrink(string targetRegionIdsShrink) { DARABONBA_PTR_SET_VALUE(targetRegionIdsShrink_, targetRegionIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> targetRegionIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
