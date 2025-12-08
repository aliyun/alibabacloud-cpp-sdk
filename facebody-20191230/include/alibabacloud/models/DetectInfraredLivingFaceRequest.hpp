// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTINFRAREDLIVINGFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetectInfraredLivingFaceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectInfraredLivingFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectInfraredLivingFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DetectInfraredLivingFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DetectInfraredLivingFaceRequest() = default ;
    DetectInfraredLivingFaceRequest(const DetectInfraredLivingFaceRequest &) = default ;
    DetectInfraredLivingFaceRequest(DetectInfraredLivingFaceRequest &&) = default ;
    DetectInfraredLivingFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectInfraredLivingFaceRequest() = default ;
    DetectInfraredLivingFaceRequest& operator=(const DetectInfraredLivingFaceRequest &) = default ;
    DetectInfraredLivingFaceRequest& operator=(DetectInfraredLivingFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tasks_ == nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DetectInfraredLivingFaceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DetectInfraredLivingFaceRequestTasks>) };
    inline vector<DetectInfraredLivingFaceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DetectInfraredLivingFaceRequestTasks>) };
    inline DetectInfraredLivingFaceRequest& setTasks(const vector<DetectInfraredLivingFaceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DetectInfraredLivingFaceRequest& setTasks(vector<DetectInfraredLivingFaceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<DetectInfraredLivingFaceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
