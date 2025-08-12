// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestEscalationsCritical.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestEscalationsInfo.hpp>
#include <alibabacloud/models/PutResourceMetricRuleRequestEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequestEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequestEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequestEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    PutResourceMetricRuleRequestEscalations() = default ;
    PutResourceMetricRuleRequestEscalations(const PutResourceMetricRuleRequestEscalations &) = default ;
    PutResourceMetricRuleRequestEscalations(PutResourceMetricRuleRequestEscalations &&) = default ;
    PutResourceMetricRuleRequestEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequestEscalations() = default ;
    PutResourceMetricRuleRequestEscalations& operator=(const PutResourceMetricRuleRequestEscalations &) = default ;
    PutResourceMetricRuleRequestEscalations& operator=(PutResourceMetricRuleRequestEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->warn_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::PutResourceMetricRuleRequestEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::PutResourceMetricRuleRequestEscalationsCritical) };
    inline Models::PutResourceMetricRuleRequestEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::PutResourceMetricRuleRequestEscalationsCritical) };
    inline PutResourceMetricRuleRequestEscalations& setCritical(const Models::PutResourceMetricRuleRequestEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline PutResourceMetricRuleRequestEscalations& setCritical(Models::PutResourceMetricRuleRequestEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::PutResourceMetricRuleRequestEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::PutResourceMetricRuleRequestEscalationsInfo) };
    inline Models::PutResourceMetricRuleRequestEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::PutResourceMetricRuleRequestEscalationsInfo) };
    inline PutResourceMetricRuleRequestEscalations& setInfo(const Models::PutResourceMetricRuleRequestEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline PutResourceMetricRuleRequestEscalations& setInfo(Models::PutResourceMetricRuleRequestEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::PutResourceMetricRuleRequestEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::PutResourceMetricRuleRequestEscalationsWarn) };
    inline Models::PutResourceMetricRuleRequestEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::PutResourceMetricRuleRequestEscalationsWarn) };
    inline PutResourceMetricRuleRequestEscalations& setWarn(const Models::PutResourceMetricRuleRequestEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline PutResourceMetricRuleRequestEscalations& setWarn(Models::PutResourceMetricRuleRequestEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::PutResourceMetricRuleRequestEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRuleRequestEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRuleRequestEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
