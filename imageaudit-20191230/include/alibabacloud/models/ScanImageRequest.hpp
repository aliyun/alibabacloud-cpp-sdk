// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanImageRequestTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    ScanImageRequest() = default ;
    ScanImageRequest(const ScanImageRequest &) = default ;
    ScanImageRequest(ScanImageRequest &&) = default ;
    ScanImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageRequest() = default ;
    ScanImageRequest& operator=(const ScanImageRequest &) = default ;
    ScanImageRequest& operator=(ScanImageRequest &&) = default ;
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
    inline ScanImageRequest& setScene(const vector<string> & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline ScanImageRequest& setScene(vector<string> && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<ScanImageRequestTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<ScanImageRequestTask>) };
    inline vector<ScanImageRequestTask> task() { DARABONBA_PTR_GET(task_, vector<ScanImageRequestTask>) };
    inline ScanImageRequest& setTask(const vector<ScanImageRequestTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline ScanImageRequest& setTask(vector<ScanImageRequestTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> scene_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<ScanImageRequestTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
