// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANTRIGGER_HPP_
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
  class GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger(GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger &&) = default ;
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
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // If the trigger mode is set to BySchedule, the scheduling task ID must be specified.
    std::shared_ptr<vector<int64_t>> taskIds_ = nullptr;
    // The trigger method of the data quality monitor.
    // 
    // *   ByManual
    // *   BySchedule
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
