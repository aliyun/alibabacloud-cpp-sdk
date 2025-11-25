// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICBIZQPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICBIZQPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyElasticBizQpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticBizQpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OpsElasticQps, opsElasticQps_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticBizQpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OpsElasticQps, opsElasticQps_);
    };
    ModifyElasticBizQpsRequest() = default ;
    ModifyElasticBizQpsRequest(const ModifyElasticBizQpsRequest &) = default ;
    ModifyElasticBizQpsRequest(ModifyElasticBizQpsRequest &&) = default ;
    ModifyElasticBizQpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticBizQpsRequest() = default ;
    ModifyElasticBizQpsRequest& operator=(const ModifyElasticBizQpsRequest &) = default ;
    ModifyElasticBizQpsRequest& operator=(ModifyElasticBizQpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->mode_ == nullptr && return this->opsElasticQps_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyElasticBizQpsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ModifyElasticBizQpsRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // opsElasticQps Field Functions 
    bool hasOpsElasticQps() const { return this->opsElasticQps_ != nullptr;};
    void deleteOpsElasticQps() { this->opsElasticQps_ = nullptr;};
    inline int64_t opsElasticQps() const { DARABONBA_PTR_GET_DEFAULT(opsElasticQps_, 0L) };
    inline ModifyElasticBizQpsRequest& setOpsElasticQps(int64_t opsElasticQps) { DARABONBA_PTR_SET_VALUE(opsElasticQps_, opsElasticQps) };


  protected:
    // The ID of the Anti-DDoS Proxy instance.
    // 
    // >  You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The metering method for the burstable QPS. Valid values:
    // 
    // *   **month**: monthly 95th percentile
    // *   **day**: daily 95th percentile QPS
    // 
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // The burstable QPS value.
    // 
    // >  The default value is 300,000 for the Chinese mainland and 150,000 for regions outside the Chinese mainland.
    std::shared_ptr<int64_t> opsElasticQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
