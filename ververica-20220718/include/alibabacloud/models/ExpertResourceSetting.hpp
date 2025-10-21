// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERTRESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_EXPERTRESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BasicResourceSettingSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ExpertResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExpertResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(jobmanagerResourceSettingSpec, jobmanagerResourceSettingSpec_);
      DARABONBA_PTR_TO_JSON(resourcePlan, resourcePlan_);
    };
    friend void from_json(const Darabonba::Json& j, ExpertResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(jobmanagerResourceSettingSpec, jobmanagerResourceSettingSpec_);
      DARABONBA_PTR_FROM_JSON(resourcePlan, resourcePlan_);
    };
    ExpertResourceSetting() = default ;
    ExpertResourceSetting(const ExpertResourceSetting &) = default ;
    ExpertResourceSetting(ExpertResourceSetting &&) = default ;
    ExpertResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExpertResourceSetting() = default ;
    ExpertResourceSetting& operator=(const ExpertResourceSetting &) = default ;
    ExpertResourceSetting& operator=(ExpertResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobmanagerResourceSettingSpec_ == nullptr
        && return this->resourcePlan_ == nullptr; };
    // jobmanagerResourceSettingSpec Field Functions 
    bool hasJobmanagerResourceSettingSpec() const { return this->jobmanagerResourceSettingSpec_ != nullptr;};
    void deleteJobmanagerResourceSettingSpec() { this->jobmanagerResourceSettingSpec_ = nullptr;};
    inline const BasicResourceSettingSpec & jobmanagerResourceSettingSpec() const { DARABONBA_PTR_GET_CONST(jobmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline BasicResourceSettingSpec jobmanagerResourceSettingSpec() { DARABONBA_PTR_GET(jobmanagerResourceSettingSpec_, BasicResourceSettingSpec) };
    inline ExpertResourceSetting& setJobmanagerResourceSettingSpec(const BasicResourceSettingSpec & jobmanagerResourceSettingSpec) { DARABONBA_PTR_SET_VALUE(jobmanagerResourceSettingSpec_, jobmanagerResourceSettingSpec) };
    inline ExpertResourceSetting& setJobmanagerResourceSettingSpec(BasicResourceSettingSpec && jobmanagerResourceSettingSpec) { DARABONBA_PTR_SET_RVALUE(jobmanagerResourceSettingSpec_, jobmanagerResourceSettingSpec) };


    // resourcePlan Field Functions 
    bool hasResourcePlan() const { return this->resourcePlan_ != nullptr;};
    void deleteResourcePlan() { this->resourcePlan_ = nullptr;};
    inline string resourcePlan() const { DARABONBA_PTR_GET_DEFAULT(resourcePlan_, "") };
    inline ExpertResourceSetting& setResourcePlan(string resourcePlan) { DARABONBA_PTR_SET_VALUE(resourcePlan_, resourcePlan) };


  protected:
    std::shared_ptr<BasicResourceSettingSpec> jobmanagerResourceSettingSpec_ = nullptr;
    std::shared_ptr<string> resourcePlan_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
