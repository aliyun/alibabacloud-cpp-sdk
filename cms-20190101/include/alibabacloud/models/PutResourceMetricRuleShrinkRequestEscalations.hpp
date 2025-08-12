// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESHRINKREQUESTESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESHRINKREQUESTESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRuleShrinkRequestEscalationsCritical.hpp>
#include <alibabacloud/models/PutResourceMetricRuleShrinkRequestEscalationsInfo.hpp>
#include <alibabacloud/models/PutResourceMetricRuleShrinkRequestEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleShrinkRequestEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleShrinkRequestEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleShrinkRequestEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    PutResourceMetricRuleShrinkRequestEscalations() = default ;
    PutResourceMetricRuleShrinkRequestEscalations(const PutResourceMetricRuleShrinkRequestEscalations &) = default ;
    PutResourceMetricRuleShrinkRequestEscalations(PutResourceMetricRuleShrinkRequestEscalations &&) = default ;
    PutResourceMetricRuleShrinkRequestEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleShrinkRequestEscalations() = default ;
    PutResourceMetricRuleShrinkRequestEscalations& operator=(const PutResourceMetricRuleShrinkRequestEscalations &) = default ;
    PutResourceMetricRuleShrinkRequestEscalations& operator=(PutResourceMetricRuleShrinkRequestEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->warn_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::PutResourceMetricRuleShrinkRequestEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::PutResourceMetricRuleShrinkRequestEscalationsCritical) };
    inline Models::PutResourceMetricRuleShrinkRequestEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::PutResourceMetricRuleShrinkRequestEscalationsCritical) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setCritical(const Models::PutResourceMetricRuleShrinkRequestEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setCritical(Models::PutResourceMetricRuleShrinkRequestEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::PutResourceMetricRuleShrinkRequestEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::PutResourceMetricRuleShrinkRequestEscalationsInfo) };
    inline Models::PutResourceMetricRuleShrinkRequestEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::PutResourceMetricRuleShrinkRequestEscalationsInfo) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setInfo(const Models::PutResourceMetricRuleShrinkRequestEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setInfo(Models::PutResourceMetricRuleShrinkRequestEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::PutResourceMetricRuleShrinkRequestEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::PutResourceMetricRuleShrinkRequestEscalationsWarn) };
    inline Models::PutResourceMetricRuleShrinkRequestEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::PutResourceMetricRuleShrinkRequestEscalationsWarn) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setWarn(const Models::PutResourceMetricRuleShrinkRequestEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline PutResourceMetricRuleShrinkRequestEscalations& setWarn(Models::PutResourceMetricRuleShrinkRequestEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::PutResourceMetricRuleShrinkRequestEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRuleShrinkRequestEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRuleShrinkRequestEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
