// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTLIVINGFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTLIVINGFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectLivingFaceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectLivingFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectLivingFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DetectLivingFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DetectLivingFaceRequest() = default ;
    DetectLivingFaceRequest(const DetectLivingFaceRequest &) = default ;
    DetectLivingFaceRequest(DetectLivingFaceRequest &&) = default ;
    DetectLivingFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectLivingFaceRequest() = default ;
    DetectLivingFaceRequest& operator=(const DetectLivingFaceRequest &) = default ;
    DetectLivingFaceRequest& operator=(DetectLivingFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tasks_ == nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DetectLivingFaceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DetectLivingFaceRequestTasks>) };
    inline vector<DetectLivingFaceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DetectLivingFaceRequestTasks>) };
    inline DetectLivingFaceRequest& setTasks(const vector<DetectLivingFaceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DetectLivingFaceRequest& setTasks(vector<DetectLivingFaceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DetectLivingFaceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
