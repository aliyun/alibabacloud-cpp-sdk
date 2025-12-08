// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectLivingFaceAdvanceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DetectLivingFaceAdvanceRequest() = default ;
    DetectLivingFaceAdvanceRequest(const DetectLivingFaceAdvanceRequest &) = default ;
    DetectLivingFaceAdvanceRequest(DetectLivingFaceAdvanceRequest &&) = default ;
    DetectLivingFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceAdvanceRequest() = default ;
    DetectLivingFaceAdvanceRequest& operator=(const DetectLivingFaceAdvanceRequest &) = default ;
    DetectLivingFaceAdvanceRequest& operator=(DetectLivingFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tasks_ == nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DetectLivingFaceAdvanceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DetectLivingFaceAdvanceRequestTasks>) };
    inline vector<DetectLivingFaceAdvanceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DetectLivingFaceAdvanceRequestTasks>) };
    inline DetectLivingFaceAdvanceRequest& setTasks(const vector<DetectLivingFaceAdvanceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DetectLivingFaceAdvanceRequest& setTasks(vector<DetectLivingFaceAdvanceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DetectLivingFaceAdvanceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
