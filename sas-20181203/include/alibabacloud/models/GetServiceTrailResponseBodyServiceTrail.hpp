// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODYSERVICETRAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODYSERVICETRAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServiceTrailResponseBodyServiceTrail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTrailResponseBodyServiceTrail& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTrailResponseBodyServiceTrail& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetServiceTrailResponseBodyServiceTrail() = default ;
    GetServiceTrailResponseBodyServiceTrail(const GetServiceTrailResponseBodyServiceTrail &) = default ;
    GetServiceTrailResponseBodyServiceTrail(GetServiceTrailResponseBodyServiceTrail &&) = default ;
    GetServiceTrailResponseBodyServiceTrail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTrailResponseBodyServiceTrail() = default ;
    GetServiceTrailResponseBodyServiceTrail& operator=(const GetServiceTrailResponseBodyServiceTrail &) = default ;
    GetServiceTrailResponseBodyServiceTrail& operator=(GetServiceTrailResponseBodyServiceTrail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->createTime_ != nullptr && this->updateTime_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetServiceTrailResponseBodyServiceTrail& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetServiceTrailResponseBodyServiceTrail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetServiceTrailResponseBodyServiceTrail& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The status of the service trail. Valid values:
    // 
    // *   **on:**
    // *   **off:**
    std::shared_ptr<string> config_ = nullptr;
    // The timestamp generated when the service trail was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The timestamp generated when the service trail was last updated. Unit: milliseconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
