// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TripTaskQueryResponseBodyModuleRecordTasks.hpp>
#include <alibabacloud/models/TripTaskQueryResponseBodyModuleRunningTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripTaskQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripTaskQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(needRefresh, needRefresh_);
      DARABONBA_PTR_TO_JSON(record_tasks, recordTasks_);
      DARABONBA_PTR_TO_JSON(running_tasks, runningTasks_);
    };
    friend void from_json(const Darabonba::Json& j, TripTaskQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(needRefresh, needRefresh_);
      DARABONBA_PTR_FROM_JSON(record_tasks, recordTasks_);
      DARABONBA_PTR_FROM_JSON(running_tasks, runningTasks_);
    };
    TripTaskQueryResponseBodyModule() = default ;
    TripTaskQueryResponseBodyModule(const TripTaskQueryResponseBodyModule &) = default ;
    TripTaskQueryResponseBodyModule(TripTaskQueryResponseBodyModule &&) = default ;
    TripTaskQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripTaskQueryResponseBodyModule() = default ;
    TripTaskQueryResponseBodyModule& operator=(const TripTaskQueryResponseBodyModule &) = default ;
    TripTaskQueryResponseBodyModule& operator=(TripTaskQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->needRefresh_ != nullptr
        && this->recordTasks_ != nullptr && this->runningTasks_ != nullptr; };
    // needRefresh Field Functions 
    bool hasNeedRefresh() const { return this->needRefresh_ != nullptr;};
    void deleteNeedRefresh() { this->needRefresh_ = nullptr;};
    inline bool needRefresh() const { DARABONBA_PTR_GET_DEFAULT(needRefresh_, false) };
    inline TripTaskQueryResponseBodyModule& setNeedRefresh(bool needRefresh) { DARABONBA_PTR_SET_VALUE(needRefresh_, needRefresh) };


    // recordTasks Field Functions 
    bool hasRecordTasks() const { return this->recordTasks_ != nullptr;};
    void deleteRecordTasks() { this->recordTasks_ = nullptr;};
    inline const vector<Models::TripTaskQueryResponseBodyModuleRecordTasks> & recordTasks() const { DARABONBA_PTR_GET_CONST(recordTasks_, vector<Models::TripTaskQueryResponseBodyModuleRecordTasks>) };
    inline vector<Models::TripTaskQueryResponseBodyModuleRecordTasks> recordTasks() { DARABONBA_PTR_GET(recordTasks_, vector<Models::TripTaskQueryResponseBodyModuleRecordTasks>) };
    inline TripTaskQueryResponseBodyModule& setRecordTasks(const vector<Models::TripTaskQueryResponseBodyModuleRecordTasks> & recordTasks) { DARABONBA_PTR_SET_VALUE(recordTasks_, recordTasks) };
    inline TripTaskQueryResponseBodyModule& setRecordTasks(vector<Models::TripTaskQueryResponseBodyModuleRecordTasks> && recordTasks) { DARABONBA_PTR_SET_RVALUE(recordTasks_, recordTasks) };


    // runningTasks Field Functions 
    bool hasRunningTasks() const { return this->runningTasks_ != nullptr;};
    void deleteRunningTasks() { this->runningTasks_ = nullptr;};
    inline const vector<Models::TripTaskQueryResponseBodyModuleRunningTasks> & runningTasks() const { DARABONBA_PTR_GET_CONST(runningTasks_, vector<Models::TripTaskQueryResponseBodyModuleRunningTasks>) };
    inline vector<Models::TripTaskQueryResponseBodyModuleRunningTasks> runningTasks() { DARABONBA_PTR_GET(runningTasks_, vector<Models::TripTaskQueryResponseBodyModuleRunningTasks>) };
    inline TripTaskQueryResponseBodyModule& setRunningTasks(const vector<Models::TripTaskQueryResponseBodyModuleRunningTasks> & runningTasks) { DARABONBA_PTR_SET_VALUE(runningTasks_, runningTasks) };
    inline TripTaskQueryResponseBodyModule& setRunningTasks(vector<Models::TripTaskQueryResponseBodyModuleRunningTasks> && runningTasks) { DARABONBA_PTR_SET_RVALUE(runningTasks_, runningTasks) };


  protected:
    std::shared_ptr<bool> needRefresh_ = nullptr;
    std::shared_ptr<vector<Models::TripTaskQueryResponseBodyModuleRecordTasks>> recordTasks_ = nullptr;
    std::shared_ptr<vector<Models::TripTaskQueryResponseBodyModuleRunningTasks>> runningTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
