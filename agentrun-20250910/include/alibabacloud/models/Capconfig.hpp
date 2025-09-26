// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CAPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CAPConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CAPConfig& obj) { 
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CAPConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    CAPConfig() = default ;
    CAPConfig(const CAPConfig &) = default ;
    CAPConfig(CAPConfig &&) = default ;
    CAPConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CAPConfig() = default ;
    CAPConfig& operator=(const CAPConfig &) = default ;
    CAPConfig& operator=(CAPConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr
        && this->name_ != nullptr && this->templateId_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline CAPConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CAPConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int32_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0) };
    inline CAPConfig& setTemplateId(int32_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
