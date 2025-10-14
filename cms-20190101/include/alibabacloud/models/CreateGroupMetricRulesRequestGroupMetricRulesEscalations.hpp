// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULESESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULESESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical.hpp>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo.hpp>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesRequestGroupMetricRulesEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesRequestGroupMetricRulesEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Warn, warn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesRequestGroupMetricRulesEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Warn, warn_);
    };
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations() = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations(const CreateGroupMetricRulesRequestGroupMetricRulesEscalations &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations(CreateGroupMetricRulesRequestGroupMetricRulesEscalations &&) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesRequestGroupMetricRulesEscalations() = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations& operator=(const CreateGroupMetricRulesRequestGroupMetricRulesEscalations &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRulesEscalations& operator=(CreateGroupMetricRulesRequestGroupMetricRulesEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->info_ == nullptr && return this->warn_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical) };
    inline Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical critical() { DARABONBA_PTR_GET(critical_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setCritical(const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setCritical(Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo & info() const { DARABONBA_PTR_GET_CONST(info_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo) };
    inline Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo info() { DARABONBA_PTR_GET(info_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setInfo(const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setInfo(Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // warn Field Functions 
    bool hasWarn() const { return this->warn_ != nullptr;};
    void deleteWarn() { this->warn_ = nullptr;};
    inline const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn & warn() const { DARABONBA_PTR_GET_CONST(warn_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn) };
    inline Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn warn() { DARABONBA_PTR_GET(warn_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setWarn(const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn & warn) { DARABONBA_PTR_SET_VALUE(warn_, warn) };
    inline CreateGroupMetricRulesRequestGroupMetricRulesEscalations& setWarn(Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn && warn) { DARABONBA_PTR_SET_RVALUE(warn_, warn) };


  protected:
    std::shared_ptr<Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsCritical> critical_ = nullptr;
    std::shared_ptr<Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsInfo> info_ = nullptr;
    std::shared_ptr<Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalationsWarn> warn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
