// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigInstanceRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    ConfigInstanceRemarkRequest() = default ;
    ConfigInstanceRemarkRequest(const ConfigInstanceRemarkRequest &) = default ;
    ConfigInstanceRemarkRequest(ConfigInstanceRemarkRequest &&) = default ;
    ConfigInstanceRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceRemarkRequest() = default ;
    ConfigInstanceRemarkRequest& operator=(const ConfigInstanceRemarkRequest &) = default ;
    ConfigInstanceRemarkRequest& operator=(ConfigInstanceRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->remark_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceRemarkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ConfigInstanceRemarkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The ID of the HSM.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The description of the HSM.
    // 
    // This parameter is required.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
