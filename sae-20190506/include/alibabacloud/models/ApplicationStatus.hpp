// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLICATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_APPLICATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScaleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ApplicationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplicationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(scaleConfig, scaleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ApplicationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(scaleConfig, scaleConfig_);
    };
    ApplicationStatus() = default ;
    ApplicationStatus(const ApplicationStatus &) = default ;
    ApplicationStatus(ApplicationStatus &&) = default ;
    ApplicationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplicationStatus() = default ;
    ApplicationStatus& operator=(const ApplicationStatus &) = default ;
    ApplicationStatus& operator=(ApplicationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCount_ == nullptr
        && this->scaleConfig_ == nullptr; };
    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline ApplicationStatus& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // scaleConfig Field Functions 
    bool hasScaleConfig() const { return this->scaleConfig_ != nullptr;};
    void deleteScaleConfig() { this->scaleConfig_ = nullptr;};
    inline const ScaleConfig & getScaleConfig() const { DARABONBA_PTR_GET_CONST(scaleConfig_, ScaleConfig) };
    inline ScaleConfig getScaleConfig() { DARABONBA_PTR_GET(scaleConfig_, ScaleConfig) };
    inline ApplicationStatus& setScaleConfig(const ScaleConfig & scaleConfig) { DARABONBA_PTR_SET_VALUE(scaleConfig_, scaleConfig) };
    inline ApplicationStatus& setScaleConfig(ScaleConfig && scaleConfig) { DARABONBA_PTR_SET_RVALUE(scaleConfig_, scaleConfig) };


  protected:
    shared_ptr<int64_t> instanceCount_ {};
    shared_ptr<ScaleConfig> scaleConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
