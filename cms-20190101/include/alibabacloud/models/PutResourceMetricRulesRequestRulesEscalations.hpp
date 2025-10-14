// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULESESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULESREQUESTRULESESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutResourceMetricRulesRequestRulesEscalationsCritical.hpp>
#include <alibabacloud/models/PutResourceMetricRulesRequestRulesEscalationsInfo.hpp>
#include <alibabacloud/models/PutResourceMetricRulesRequestRulesEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRulesRequestRulesEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRulesRequestRulesEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRulesRequestRulesEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    PutResourceMetricRulesRequestRulesEscalations() = default ;
    PutResourceMetricRulesRequestRulesEscalations(const PutResourceMetricRulesRequestRulesEscalations &) = default ;
    PutResourceMetricRulesRequestRulesEscalations(PutResourceMetricRulesRequestRulesEscalations &&) = default ;
    PutResourceMetricRulesRequestRulesEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRulesRequestRulesEscalations() = default ;
    PutResourceMetricRulesRequestRulesEscalations& operator=(const PutResourceMetricRulesRequestRulesEscalations &) = default ;
    PutResourceMetricRulesRequestRulesEscalations& operator=(PutResourceMetricRulesRequestRulesEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->info_ == nullptr && return this->warn_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::PutResourceMetricRulesRequestRulesEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::PutResourceMetricRulesRequestRulesEscalationsCritical) };
    inline Models::PutResourceMetricRulesRequestRulesEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::PutResourceMetricRulesRequestRulesEscalationsCritical) };
    inline PutResourceMetricRulesRequestRulesEscalations& setCritical(const Models::PutResourceMetricRulesRequestRulesEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline PutResourceMetricRulesRequestRulesEscalations& setCritical(Models::PutResourceMetricRulesRequestRulesEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::PutResourceMetricRulesRequestRulesEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::PutResourceMetricRulesRequestRulesEscalationsInfo) };
    inline Models::PutResourceMetricRulesRequestRulesEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::PutResourceMetricRulesRequestRulesEscalationsInfo) };
    inline PutResourceMetricRulesRequestRulesEscalations& setInfo(const Models::PutResourceMetricRulesRequestRulesEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline PutResourceMetricRulesRequestRulesEscalations& setInfo(Models::PutResourceMetricRulesRequestRulesEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::PutResourceMetricRulesRequestRulesEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::PutResourceMetricRulesRequestRulesEscalationsWarn) };
    inline Models::PutResourceMetricRulesRequestRulesEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::PutResourceMetricRulesRequestRulesEscalationsWarn) };
    inline PutResourceMetricRulesRequestRulesEscalations& setWarn(const Models::PutResourceMetricRulesRequestRulesEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline PutResourceMetricRulesRequestRulesEscalations& setWarn(Models::PutResourceMetricRulesRequestRulesEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::PutResourceMetricRulesRequestRulesEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRulesRequestRulesEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::PutResourceMetricRulesRequestRulesEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
