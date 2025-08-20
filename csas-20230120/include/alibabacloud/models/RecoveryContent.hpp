// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_RECOVERYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AuthReportInterval.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class RecoveryContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoveryContent& obj) { 
      DARABONBA_PTR_TO_JSON(AuthReportInterval, authReportInterval_);
      DARABONBA_PTR_TO_JSON(RecoveryActions, recoveryActions_);
    };
    friend void from_json(const Darabonba::Json& j, RecoveryContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthReportInterval, authReportInterval_);
      DARABONBA_PTR_FROM_JSON(RecoveryActions, recoveryActions_);
    };
    RecoveryContent() = default ;
    RecoveryContent(const RecoveryContent &) = default ;
    RecoveryContent(RecoveryContent &&) = default ;
    RecoveryContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoveryContent() = default ;
    RecoveryContent& operator=(const RecoveryContent &) = default ;
    RecoveryContent& operator=(RecoveryContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authReportInterval_ != nullptr
        && this->recoveryActions_ != nullptr; };
    // authReportInterval Field Functions 
    bool hasAuthReportInterval() const { return this->authReportInterval_ != nullptr;};
    void deleteAuthReportInterval() { this->authReportInterval_ = nullptr;};
    inline const AuthReportInterval & authReportInterval() const { DARABONBA_PTR_GET_CONST(authReportInterval_, AuthReportInterval) };
    inline AuthReportInterval authReportInterval() { DARABONBA_PTR_GET(authReportInterval_, AuthReportInterval) };
    inline RecoveryContent& setAuthReportInterval(const AuthReportInterval & authReportInterval) { DARABONBA_PTR_SET_VALUE(authReportInterval_, authReportInterval) };
    inline RecoveryContent& setAuthReportInterval(AuthReportInterval && authReportInterval) { DARABONBA_PTR_SET_RVALUE(authReportInterval_, authReportInterval) };


    // recoveryActions Field Functions 
    bool hasRecoveryActions() const { return this->recoveryActions_ != nullptr;};
    void deleteRecoveryActions() { this->recoveryActions_ = nullptr;};
    inline const vector<string> & recoveryActions() const { DARABONBA_PTR_GET_CONST(recoveryActions_, vector<string>) };
    inline vector<string> recoveryActions() { DARABONBA_PTR_GET(recoveryActions_, vector<string>) };
    inline RecoveryContent& setRecoveryActions(const vector<string> & recoveryActions) { DARABONBA_PTR_SET_VALUE(recoveryActions_, recoveryActions) };
    inline RecoveryContent& setRecoveryActions(vector<string> && recoveryActions) { DARABONBA_PTR_SET_RVALUE(recoveryActions_, recoveryActions) };


  protected:
    std::shared_ptr<AuthReportInterval> authReportInterval_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> recoveryActions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
