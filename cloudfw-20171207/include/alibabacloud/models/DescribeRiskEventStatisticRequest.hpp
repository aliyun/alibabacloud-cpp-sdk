// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApp, attackApp_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(BuyVersion, buyVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRiskEventStatisticRequest() = default ;
    DescribeRiskEventStatisticRequest(const DescribeRiskEventStatisticRequest &) = default ;
    DescribeRiskEventStatisticRequest(DescribeRiskEventStatisticRequest &&) = default ;
    DescribeRiskEventStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventStatisticRequest() = default ;
    DescribeRiskEventStatisticRequest& operator=(const DescribeRiskEventStatisticRequest &) = default ;
    DescribeRiskEventStatisticRequest& operator=(DescribeRiskEventStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApp_ == nullptr
        && this->attackType_ == nullptr && this->buyVersion_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr
        && this->startTime_ == nullptr; };
    // attackApp Field Functions 
    bool hasAttackApp() const { return this->attackApp_ != nullptr;};
    void deleteAttackApp() { this->attackApp_ = nullptr;};
    inline const vector<string> & getAttackApp() const { DARABONBA_PTR_GET_CONST(attackApp_, vector<string>) };
    inline vector<string> getAttackApp() { DARABONBA_PTR_GET(attackApp_, vector<string>) };
    inline DescribeRiskEventStatisticRequest& setAttackApp(const vector<string> & attackApp) { DARABONBA_PTR_SET_VALUE(attackApp_, attackApp) };
    inline DescribeRiskEventStatisticRequest& setAttackApp(vector<string> && attackApp) { DARABONBA_PTR_SET_RVALUE(attackApp_, attackApp) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline DescribeRiskEventStatisticRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // buyVersion Field Functions 
    bool hasBuyVersion() const { return this->buyVersion_ != nullptr;};
    void deleteBuyVersion() { this->buyVersion_ = nullptr;};
    inline string getBuyVersion() const { DARABONBA_PTR_GET_DEFAULT(buyVersion_, "") };
    inline DescribeRiskEventStatisticRequest& setBuyVersion(string buyVersion) { DARABONBA_PTR_SET_VALUE(buyVersion_, buyVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRiskEventStatisticRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskEventStatisticRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeRiskEventStatisticRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRiskEventStatisticRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<string>> attackApp_ {};
    shared_ptr<string> attackType_ {};
    shared_ptr<string> buyVersion_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> sourceIp_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
