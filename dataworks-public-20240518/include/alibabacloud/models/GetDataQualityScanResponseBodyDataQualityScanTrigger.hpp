// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANTRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanResponseBodyDataQualityScanTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBodyDataQualityScanTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBodyDataQualityScanTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityScanResponseBodyDataQualityScanTrigger() = default ;
    GetDataQualityScanResponseBodyDataQualityScanTrigger(const GetDataQualityScanResponseBodyDataQualityScanTrigger &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanTrigger(GetDataQualityScanResponseBodyDataQualityScanTrigger &&) = default ;
    GetDataQualityScanResponseBodyDataQualityScanTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBodyDataQualityScanTrigger() = default ;
    GetDataQualityScanResponseBodyDataQualityScanTrigger& operator=(const GetDataQualityScanResponseBodyDataQualityScanTrigger &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanTrigger& operator=(GetDataQualityScanResponseBodyDataQualityScanTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskIds_ != nullptr
        && this->type_ != nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<int64_t> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
    inline vector<int64_t> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
    inline GetDataQualityScanResponseBodyDataQualityScanTrigger& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline GetDataQualityScanResponseBodyDataQualityScanTrigger& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScanTrigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // If the trigger mode is set to BySchedule, the scheduling task ID must be specified.
    std::shared_ptr<vector<int64_t>> taskIds_ = nullptr;
    // The trigger mode of the monitoring task.
    // 
    // Valid values:
    // 
    // *   ByManual: Manual trigger. This is the default setting.
    // *   BySchedule: Triggered by a scheduled task instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
