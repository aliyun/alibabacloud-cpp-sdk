// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESYNCQUALITYCHECKDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESYNCQUALITYCHECKDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UpdateSyncQualityCheckDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSyncQualityCheckDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSyncQualityCheckDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateSyncQualityCheckDataResponseBodyData() = default ;
    UpdateSyncQualityCheckDataResponseBodyData(const UpdateSyncQualityCheckDataResponseBodyData &) = default ;
    UpdateSyncQualityCheckDataResponseBodyData(UpdateSyncQualityCheckDataResponseBodyData &&) = default ;
    UpdateSyncQualityCheckDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSyncQualityCheckDataResponseBodyData() = default ;
    UpdateSyncQualityCheckDataResponseBodyData& operator=(const UpdateSyncQualityCheckDataResponseBodyData &) = default ;
    UpdateSyncQualityCheckDataResponseBodyData& operator=(UpdateSyncQualityCheckDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->tid_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateSyncQualityCheckDataResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline UpdateSyncQualityCheckDataResponseBodyData& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
