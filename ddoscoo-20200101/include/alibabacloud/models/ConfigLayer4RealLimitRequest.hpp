// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGLAYER4REALLIMITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGLAYER4REALLIMITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigLayer4RealLimitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigLayer4RealLimitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LimitValue, limitValue_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigLayer4RealLimitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LimitValue, limitValue_);
    };
    ConfigLayer4RealLimitRequest() = default ;
    ConfigLayer4RealLimitRequest(const ConfigLayer4RealLimitRequest &) = default ;
    ConfigLayer4RealLimitRequest(ConfigLayer4RealLimitRequest &&) = default ;
    ConfigLayer4RealLimitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigLayer4RealLimitRequest() = default ;
    ConfigLayer4RealLimitRequest& operator=(const ConfigLayer4RealLimitRequest &) = default ;
    ConfigLayer4RealLimitRequest& operator=(ConfigLayer4RealLimitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->limitValue_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigLayer4RealLimitRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // limitValue Field Functions 
    bool hasLimitValue() const { return this->limitValue_ != nullptr;};
    void deleteLimitValue() { this->limitValue_ = nullptr;};
    inline int64_t limitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0L) };
    inline ConfigLayer4RealLimitRequest& setLimitValue(int64_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


  protected:
    // The ID of the Anti-DDoS Pro or Anti-DDoS Premium instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies the threshold of the clean bandwidth. Valid values: 0 to 15360. The value 0 indicates that rate limiting is never triggered. Unit: Mbit/s
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> limitValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
