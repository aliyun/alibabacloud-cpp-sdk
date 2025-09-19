// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyWebPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyWebPathRequest() = default ;
    ModifyWebPathRequest(const ModifyWebPathRequest &) = default ;
    ModifyWebPathRequest(ModifyWebPathRequest &&) = default ;
    ModifyWebPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebPathRequest() = default ;
    ModifyWebPathRequest& operator=(const ModifyWebPathRequest &) = default ;
    ModifyWebPathRequest& operator=(ModifyWebPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->target_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyWebPathRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyWebPathRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyWebPathRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration of the web directory. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **webPathType**: the type of the web directory
    // *   **webPath**: the web directory
    std::shared_ptr<string> config_ = nullptr;
    // The protected asset to which the web directory belongs. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **target**: the protected asset.
    // *   **targetType**: the type of the asset. Set the value to uuid.
    // *   **flag**: the type of the operation.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the configuration item. Set the value to **web_path**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
