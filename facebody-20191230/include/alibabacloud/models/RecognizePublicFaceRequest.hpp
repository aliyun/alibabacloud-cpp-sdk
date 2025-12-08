// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizePublicFaceRequestTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizePublicFaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePublicFaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePublicFaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    RecognizePublicFaceRequest() = default ;
    RecognizePublicFaceRequest(const RecognizePublicFaceRequest &) = default ;
    RecognizePublicFaceRequest(RecognizePublicFaceRequest &&) = default ;
    RecognizePublicFaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePublicFaceRequest() = default ;
    RecognizePublicFaceRequest& operator=(const RecognizePublicFaceRequest &) = default ;
    RecognizePublicFaceRequest& operator=(RecognizePublicFaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->task_ == nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<RecognizePublicFaceRequestTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<RecognizePublicFaceRequestTask>) };
    inline vector<RecognizePublicFaceRequestTask> task() { DARABONBA_PTR_GET(task_, vector<RecognizePublicFaceRequestTask>) };
    inline RecognizePublicFaceRequest& setTask(const vector<RecognizePublicFaceRequestTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline RecognizePublicFaceRequest& setTask(vector<RecognizePublicFaceRequestTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // 1
    std::shared_ptr<vector<RecognizePublicFaceRequestTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
