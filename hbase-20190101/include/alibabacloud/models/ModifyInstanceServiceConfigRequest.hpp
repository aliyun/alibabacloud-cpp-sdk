// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESERVICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESERVICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyInstanceServiceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceServiceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigureName, configureName_);
      DARABONBA_PTR_TO_JSON(ConfigureValue, configureValue_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceServiceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigureName, configureName_);
      DARABONBA_PTR_FROM_JSON(ConfigureValue, configureValue_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    ModifyInstanceServiceConfigRequest() = default ;
    ModifyInstanceServiceConfigRequest(const ModifyInstanceServiceConfigRequest &) = default ;
    ModifyInstanceServiceConfigRequest(ModifyInstanceServiceConfigRequest &&) = default ;
    ModifyInstanceServiceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceServiceConfigRequest() = default ;
    ModifyInstanceServiceConfigRequest& operator=(const ModifyInstanceServiceConfigRequest &) = default ;
    ModifyInstanceServiceConfigRequest& operator=(ModifyInstanceServiceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->configureName_ == nullptr && this->configureValue_ == nullptr && this->parameters_ == nullptr && this->restart_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyInstanceServiceConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configureName Field Functions 
    bool hasConfigureName() const { return this->configureName_ != nullptr;};
    void deleteConfigureName() { this->configureName_ = nullptr;};
    inline string getConfigureName() const { DARABONBA_PTR_GET_DEFAULT(configureName_, "") };
    inline ModifyInstanceServiceConfigRequest& setConfigureName(string configureName) { DARABONBA_PTR_SET_VALUE(configureName_, configureName) };


    // configureValue Field Functions 
    bool hasConfigureValue() const { return this->configureValue_ != nullptr;};
    void deleteConfigureValue() { this->configureValue_ = nullptr;};
    inline string getConfigureValue() const { DARABONBA_PTR_GET_DEFAULT(configureValue_, "") };
    inline ModifyInstanceServiceConfigRequest& setConfigureValue(string configureValue) { DARABONBA_PTR_SET_VALUE(configureValue_, configureValue) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyInstanceServiceConfigRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline ModifyInstanceServiceConfigRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // The ID of target instance. You can call the [DescribeInstances](https://help.aliyun.com/document_detail/144595.html) operation to obtain target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // <props="china">The name of the configuration item to modify. You can call the [ListInstanceServiceConfigurations](https://help.aliyun.com/document_detail/201980.html) operation to query the configuration item name.
    // <props="intl">The name of the configuration item to modify.
    // 
    // > If you want to modify multiple configuration items, specify the Parameters parameter.
    // 
    // This parameter is required.
    shared_ptr<string> configureName_ {};
    // <props="china">The value of the configuration item to modify. You can call the [ListInstanceServiceConfigurations](https://help.aliyun.com/document_detail/201980.html) operation to query the configuration item value.
    // <props="intl">The value of the configuration item to modify.
    // 
    // > If you want to modify multiple configuration items, specify the Parameters parameter.
    // 
    // This parameter is required.
    shared_ptr<string> configureValue_ {};
    // The JSON-formatted parameters for modifying multiple configuration items. The key specifies the name of the configuration item, and the value specifies the value of the configuration item.
    shared_ptr<string> parameters_ {};
    // Specifies whether to restart the instance after the configuration is modified. Valid values:
    // 
    // - **true**: Restart the instance.
    // - **false**: Do not restart the instance.
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
