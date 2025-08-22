// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODYPAGEBEANALERTIMROBOTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODYPAGEBEANALERTIMROBOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeIMRobotsResponseBodyPageBeanAlertIMRobots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DailyNoc, dailyNoc_);
      DARABONBA_PTR_TO_JSON(DailyNocTime, dailyNocTime_);
      DARABONBA_PTR_TO_JSON(DingSignKey, dingSignKey_);
      DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_TO_JSON(RobotAddr, robotAddr_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(RobotName, robotName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DailyNoc, dailyNoc_);
      DARABONBA_PTR_FROM_JSON(DailyNocTime, dailyNocTime_);
      DARABONBA_PTR_FROM_JSON(DingSignKey, dingSignKey_);
      DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
      DARABONBA_PTR_FROM_JSON(RobotAddr, robotAddr_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots() = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots(const DescribeIMRobotsResponseBodyPageBeanAlertIMRobots &) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots(DescribeIMRobotsResponseBodyPageBeanAlertIMRobots &&) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMRobotsResponseBodyPageBeanAlertIMRobots() = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& operator=(const DescribeIMRobotsResponseBodyPageBeanAlertIMRobots &) = default ;
    DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& operator=(DescribeIMRobotsResponseBodyPageBeanAlertIMRobots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dailyNoc_ != nullptr && this->dailyNocTime_ != nullptr && this->dingSignKey_ != nullptr && this->dispatchRules_ != nullptr && this->robotAddr_ != nullptr
        && this->robotId_ != nullptr && this->robotName_ != nullptr && this->type_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dailyNoc Field Functions 
    bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
    void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
    inline bool dailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


    // dailyNocTime Field Functions 
    bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
    void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
    inline string dailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


    // dingSignKey Field Functions 
    bool hasDingSignKey() const { return this->dingSignKey_ != nullptr;};
    void deleteDingSignKey() { this->dingSignKey_ = nullptr;};
    inline string dingSignKey() const { DARABONBA_PTR_GET_DEFAULT(dingSignKey_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setDingSignKey(string dingSignKey) { DARABONBA_PTR_SET_VALUE(dingSignKey_, dingSignKey) };


    // dispatchRules Field Functions 
    bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
    void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
    inline const vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules> & dispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules>) };
    inline vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules> dispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules>) };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setDispatchRules(const vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setDispatchRules(vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


    // robotAddr Field Functions 
    bool hasRobotAddr() const { return this->robotAddr_ != nullptr;};
    void deleteRobotAddr() { this->robotAddr_ = nullptr;};
    inline string robotAddr() const { DARABONBA_PTR_GET_DEFAULT(robotAddr_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setRobotAddr(string robotAddr) { DARABONBA_PTR_SET_VALUE(robotAddr_, robotAddr) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline float robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0.0) };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setRobotId(float robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // robotName Field Functions 
    bool hasRobotName() const { return this->robotName_ != nullptr;};
    void deleteRobotName() { this->robotName_ = nullptr;};
    inline string robotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeIMRobotsResponseBodyPageBeanAlertIMRobots& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the IM chatbot was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether daily statistics are sent. Valid values:
    // 
    // *   `false` (default): Daily statistics are not sent.
    // *   `true`: Daily statistics are sent.
    std::shared_ptr<bool> dailyNoc_ = nullptr;
    // The point in time at which the daily statistics are sent. The information that ARMS sends at the specified points in time includes the total number of alerts generated on the current day, the number of cleared alerts, and the number of alerts to be cleared.
    std::shared_ptr<string> dailyNocTime_ = nullptr;
    // The signature key of DingTalk. If you specify a signature key, DingTalk authentication is performed by using the signature key. If you do not specify a signature key, a whitelist is used for authentication by default. The keyword of the whitelist is **Alert**.
    std::shared_ptr<string> dingSignKey_ = nullptr;
    // The notification policies.
    std::shared_ptr<vector<Models::DescribeIMRobotsResponseBodyPageBeanAlertIMRobotsDispatchRules>> dispatchRules_ = nullptr;
    // The webhook URL of the IM chatbot.
    std::shared_ptr<string> robotAddr_ = nullptr;
    // The ID of the IM chatbot.
    std::shared_ptr<float> robotId_ = nullptr;
    // The name of the IM chatbot.
    std::shared_ptr<string> robotName_ = nullptr;
    // The type of the IM chatbot. Valid values:
    // 
    // *   `dingding`: DingTalk chatbot
    // *   `wechat`: WeCom chatbot
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
