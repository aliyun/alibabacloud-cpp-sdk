// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMBODIEDAIPLATFORMSRESPONSEBODYPLATFORMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig.hpp>
#include <alibabacloud/models/DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ADBAI20250812
{
namespace Models
{
  class DescribeEmbodiedAIPlatformsResponseBodyPlatforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmbodiedAIPlatformsResponseBodyPlatforms& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EapConfig, eapConfig_);
      DARABONBA_PTR_TO_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_TO_JSON(PlatformName, platformName_);
      DARABONBA_PTR_TO_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmbodiedAIPlatformsResponseBodyPlatforms& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EapConfig, eapConfig_);
      DARABONBA_PTR_FROM_JSON(OssBucketName, ossBucketName_);
      DARABONBA_PTR_FROM_JSON(PlatformName, platformName_);
      DARABONBA_PTR_FROM_JSON(RayConfig, rayConfig_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms(const DescribeEmbodiedAIPlatformsResponseBodyPlatforms &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms(DescribeEmbodiedAIPlatformsResponseBodyPlatforms &&) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmbodiedAIPlatformsResponseBodyPlatforms() = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms& operator=(const DescribeEmbodiedAIPlatformsResponseBodyPlatforms &) = default ;
    DescribeEmbodiedAIPlatformsResponseBodyPlatforms& operator=(DescribeEmbodiedAIPlatformsResponseBodyPlatforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->eapConfig_ == nullptr && return this->ossBucketName_ == nullptr && return this->platformName_ == nullptr && return this->rayConfig_ == nullptr && return this->state_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // eapConfig Field Functions 
    bool hasEapConfig() const { return this->eapConfig_ != nullptr;};
    void deleteEapConfig() { this->eapConfig_ = nullptr;};
    inline const Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig & eapConfig() const { DARABONBA_PTR_GET_CONST(eapConfig_, Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig) };
    inline Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig eapConfig() { DARABONBA_PTR_GET(eapConfig_, Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setEapConfig(const Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig & eapConfig) { DARABONBA_PTR_SET_VALUE(eapConfig_, eapConfig) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setEapConfig(Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig && eapConfig) { DARABONBA_PTR_SET_RVALUE(eapConfig_, eapConfig) };


    // ossBucketName Field Functions 
    bool hasOssBucketName() const { return this->ossBucketName_ != nullptr;};
    void deleteOssBucketName() { this->ossBucketName_ = nullptr;};
    inline string ossBucketName() const { DARABONBA_PTR_GET_DEFAULT(ossBucketName_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setOssBucketName(string ossBucketName) { DARABONBA_PTR_SET_VALUE(ossBucketName_, ossBucketName) };


    // platformName Field Functions 
    bool hasPlatformName() const { return this->platformName_ != nullptr;};
    void deletePlatformName() { this->platformName_ = nullptr;};
    inline string platformName() const { DARABONBA_PTR_GET_DEFAULT(platformName_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setPlatformName(string platformName) { DARABONBA_PTR_SET_VALUE(platformName_, platformName) };


    // rayConfig Field Functions 
    bool hasRayConfig() const { return this->rayConfig_ != nullptr;};
    void deleteRayConfig() { this->rayConfig_ = nullptr;};
    inline const Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig & rayConfig() const { DARABONBA_PTR_GET_CONST(rayConfig_, Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig) };
    inline Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig rayConfig() { DARABONBA_PTR_GET(rayConfig_, Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setRayConfig(const Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig & rayConfig) { DARABONBA_PTR_SET_VALUE(rayConfig_, rayConfig) };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setRayConfig(Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig && rayConfig) { DARABONBA_PTR_SET_RVALUE(rayConfig_, rayConfig) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeEmbodiedAIPlatformsResponseBodyPlatforms& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsEapConfig> eapConfig_ = nullptr;
    std::shared_ptr<string> ossBucketName_ = nullptr;
    std::shared_ptr<string> platformName_ = nullptr;
    std::shared_ptr<Models::DescribeEmbodiedAIPlatformsResponseBodyPlatformsRayConfig> rayConfig_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ADBAI20250812
#endif
