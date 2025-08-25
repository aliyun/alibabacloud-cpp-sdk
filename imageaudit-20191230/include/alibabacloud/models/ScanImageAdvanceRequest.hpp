// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageAdvanceRequestTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    ScanImageAdvanceRequest() = default ;
    ScanImageAdvanceRequest(const ScanImageAdvanceRequest &) = default ;
    ScanImageAdvanceRequest(ScanImageAdvanceRequest &&) = default ;
    ScanImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageAdvanceRequest() = default ;
    ScanImageAdvanceRequest& operator=(const ScanImageAdvanceRequest &) = default ;
    ScanImageAdvanceRequest& operator=(ScanImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scene_ != nullptr
        && this->task_ != nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const vector<string> & scene() const { DARABONBA_PTR_GET_CONST(scene_, vector<string>) };
    inline vector<string> scene() { DARABONBA_PTR_GET(scene_, vector<string>) };
    inline ScanImageAdvanceRequest& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline ScanImageAdvanceRequest& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<ScanImageAdvanceRequestTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<ScanImageAdvanceRequestTask>) };
    inline vector<ScanImageAdvanceRequestTask> task() { DARABONBA_PTR_GET(task_, vector<ScanImageAdvanceRequestTask>) };
    inline ScanImageAdvanceRequest& setTask(const vector<ScanImageAdvanceRequestTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ScanImageAdvanceRequest& setTask(vector<ScanImageAdvanceRequestTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> scene_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<ScanImageAdvanceRequestTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
