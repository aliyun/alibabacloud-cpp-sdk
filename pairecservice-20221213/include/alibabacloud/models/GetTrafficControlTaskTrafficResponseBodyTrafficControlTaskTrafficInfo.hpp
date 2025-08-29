// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODYTRAFFICCONTROLTASKTRAFFICINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODYTRAFFICCONTROLTASKTRAFFICINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics.hpp>
#include <map>
#include <alibabacloud/models/TrafficControlTaskTrafficInfoTaskTrafficsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& obj) { 
      DARABONBA_PTR_TO_JSON(TargetTraffics, targetTraffics_);
      DARABONBA_PTR_TO_JSON(TaskTraffics, taskTraffics_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetTraffics, targetTraffics_);
      DARABONBA_PTR_FROM_JSON(TaskTraffics, taskTraffics_);
    };
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo() = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo(const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo &) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo(GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo &&) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo() = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& operator=(const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo &) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& operator=(GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetTraffics_ != nullptr
        && this->taskTraffics_ != nullptr; };
    // targetTraffics Field Functions 
    bool hasTargetTraffics() const { return this->targetTraffics_ != nullptr;};
    void deleteTargetTraffics() { this->targetTraffics_ = nullptr;};
    inline const vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics> & targetTraffics() const { DARABONBA_PTR_GET_CONST(targetTraffics_, vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics>) };
    inline vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics> targetTraffics() { DARABONBA_PTR_GET(targetTraffics_, vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics>) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& setTargetTraffics(const vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics> & targetTraffics) { DARABONBA_PTR_SET_VALUE(targetTraffics_, targetTraffics) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& setTargetTraffics(vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics> && targetTraffics) { DARABONBA_PTR_SET_RVALUE(targetTraffics_, targetTraffics) };


    // taskTraffics Field Functions 
    bool hasTaskTraffics() const { return this->taskTraffics_ != nullptr;};
    void deleteTaskTraffics() { this->taskTraffics_ = nullptr;};
    inline const map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue> & taskTraffics() const { DARABONBA_PTR_GET_CONST(taskTraffics_, map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue>) };
    inline map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue> taskTraffics() { DARABONBA_PTR_GET(taskTraffics_, map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue>) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& setTaskTraffics(const map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue> & taskTraffics) { DARABONBA_PTR_SET_VALUE(taskTraffics_, taskTraffics) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfo& setTaskTraffics(map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue> && taskTraffics) { DARABONBA_PTR_SET_RVALUE(taskTraffics_, taskTraffics) };


  protected:
    std::shared_ptr<vector<Models::GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics>> targetTraffics_ = nullptr;
    std::shared_ptr<map<string, Models::TrafficControlTaskTrafficInfoTaskTrafficsValue>> taskTraffics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
