// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUESTESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_PUTGROUPMETRICRULEREQUESTESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutGroupMetricRuleRequestEscalationsCritical.hpp>
#include <alibabacloud/models/PutGroupMetricRuleRequestEscalationsInfo.hpp>
#include <alibabacloud/models/PutGroupMetricRuleRequestEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutGroupMetricRuleRequestEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutGroupMetricRuleRequestEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, PutGroupMetricRuleRequestEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    PutGroupMetricRuleRequestEscalations() = default ;
    PutGroupMetricRuleRequestEscalations(const PutGroupMetricRuleRequestEscalations &) = default ;
    PutGroupMetricRuleRequestEscalations(PutGroupMetricRuleRequestEscalations &&) = default ;
    PutGroupMetricRuleRequestEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutGroupMetricRuleRequestEscalations() = default ;
    PutGroupMetricRuleRequestEscalations& operator=(const PutGroupMetricRuleRequestEscalations &) = default ;
    PutGroupMetricRuleRequestEscalations& operator=(PutGroupMetricRuleRequestEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->info_ != nullptr && this->warn_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::PutGroupMetricRuleRequestEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::PutGroupMetricRuleRequestEscalationsCritical) };
    inline Models::PutGroupMetricRuleRequestEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::PutGroupMetricRuleRequestEscalationsCritical) };
    inline PutGroupMetricRuleRequestEscalations& setCritical(const Models::PutGroupMetricRuleRequestEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline PutGroupMetricRuleRequestEscalations& setCritical(Models::PutGroupMetricRuleRequestEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::PutGroupMetricRuleRequestEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::PutGroupMetricRuleRequestEscalationsInfo) };
    inline Models::PutGroupMetricRuleRequestEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::PutGroupMetricRuleRequestEscalationsInfo) };
    inline PutGroupMetricRuleRequestEscalations& setInfo(const Models::PutGroupMetricRuleRequestEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline PutGroupMetricRuleRequestEscalations& setInfo(Models::PutGroupMetricRuleRequestEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::PutGroupMetricRuleRequestEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::PutGroupMetricRuleRequestEscalationsWarn) };
    inline Models::PutGroupMetricRuleRequestEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::PutGroupMetricRuleRequestEscalationsWarn) };
    inline PutGroupMetricRuleRequestEscalations& setWarn(const Models::PutGroupMetricRuleRequestEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline PutGroupMetricRuleRequestEscalations& setWarn(Models::PutGroupMetricRuleRequestEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::PutGroupMetricRuleRequestEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::PutGroupMetricRuleRequestEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::PutGroupMetricRuleRequestEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
