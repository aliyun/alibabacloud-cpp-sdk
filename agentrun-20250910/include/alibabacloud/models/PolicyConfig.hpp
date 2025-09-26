// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLICYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_POLICYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AiFallbackConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class PolicyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PolicyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(aiFallbackConfig, aiFallbackConfig_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PolicyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(aiFallbackConfig, aiFallbackConfig_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PolicyConfig() = default ;
    PolicyConfig(const PolicyConfig &) = default ;
    PolicyConfig(PolicyConfig &&) = default ;
    PolicyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PolicyConfig() = default ;
    PolicyConfig& operator=(const PolicyConfig &) = default ;
    PolicyConfig& operator=(PolicyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiFallbackConfig_ != nullptr
        && this->enable_ != nullptr && this->type_ != nullptr; };
    // aiFallbackConfig Field Functions 
    bool hasAiFallbackConfig() const { return this->aiFallbackConfig_ != nullptr;};
    void deleteAiFallbackConfig() { this->aiFallbackConfig_ = nullptr;};
    inline const AiFallbackConfig & aiFallbackConfig() const { DARABONBA_PTR_GET_CONST(aiFallbackConfig_, AiFallbackConfig) };
    inline AiFallbackConfig aiFallbackConfig() { DARABONBA_PTR_GET(aiFallbackConfig_, AiFallbackConfig) };
    inline PolicyConfig& setAiFallbackConfig(const AiFallbackConfig & aiFallbackConfig) { DARABONBA_PTR_SET_VALUE(aiFallbackConfig_, aiFallbackConfig) };
    inline PolicyConfig& setAiFallbackConfig(AiFallbackConfig && aiFallbackConfig) { DARABONBA_PTR_SET_RVALUE(aiFallbackConfig_, aiFallbackConfig) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline PolicyConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PolicyConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<AiFallbackConfig> aiFallbackConfig_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
