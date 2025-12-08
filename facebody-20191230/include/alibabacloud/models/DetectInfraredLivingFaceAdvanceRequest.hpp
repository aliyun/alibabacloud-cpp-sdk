// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectInfraredLivingFaceAdvanceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectInfraredLivingFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectInfraredLivingFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DetectInfraredLivingFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DetectInfraredLivingFaceAdvanceRequest() = default ;
    DetectInfraredLivingFaceAdvanceRequest(const DetectInfraredLivingFaceAdvanceRequest &) = default ;
    DetectInfraredLivingFaceAdvanceRequest(DetectInfraredLivingFaceAdvanceRequest &&) = default ;
    DetectInfraredLivingFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectInfraredLivingFaceAdvanceRequest() = default ;
    DetectInfraredLivingFaceAdvanceRequest& operator=(const DetectInfraredLivingFaceAdvanceRequest &) = default ;
    DetectInfraredLivingFaceAdvanceRequest& operator=(DetectInfraredLivingFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tasks_ == nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DetectInfraredLivingFaceAdvanceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DetectInfraredLivingFaceAdvanceRequestTasks>) };
    inline vector<DetectInfraredLivingFaceAdvanceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DetectInfraredLivingFaceAdvanceRequestTasks>) };
    inline DetectInfraredLivingFaceAdvanceRequest& setTasks(const vector<DetectInfraredLivingFaceAdvanceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DetectInfraredLivingFaceAdvanceRequest& setTasks(vector<DetectInfraredLivingFaceAdvanceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DetectInfraredLivingFaceAdvanceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
