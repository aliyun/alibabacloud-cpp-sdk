// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEPUBLICFACEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizePublicFaceAdvanceRequestTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class RecognizePublicFaceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizePublicFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizePublicFaceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    RecognizePublicFaceAdvanceRequest() = default ;
    RecognizePublicFaceAdvanceRequest(const RecognizePublicFaceAdvanceRequest &) = default ;
    RecognizePublicFaceAdvanceRequest(RecognizePublicFaceAdvanceRequest &&) = default ;
    RecognizePublicFaceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizePublicFaceAdvanceRequest() = default ;
    RecognizePublicFaceAdvanceRequest& operator=(const RecognizePublicFaceAdvanceRequest &) = default ;
    RecognizePublicFaceAdvanceRequest& operator=(RecognizePublicFaceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->task_ == nullptr; };
    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<RecognizePublicFaceAdvanceRequestTask> & task() const { DARABONBA_PTR_GET_CONST(task_, vector<RecognizePublicFaceAdvanceRequestTask>) };
    inline vector<RecognizePublicFaceAdvanceRequestTask> task() { DARABONBA_PTR_GET(task_, vector<RecognizePublicFaceAdvanceRequestTask>) };
    inline RecognizePublicFaceAdvanceRequest& setTask(const vector<RecognizePublicFaceAdvanceRequestTask> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline RecognizePublicFaceAdvanceRequest& setTask(vector<RecognizePublicFaceAdvanceRequestTask> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // 1
    std::shared_ptr<vector<RecognizePublicFaceAdvanceRequestTask>> task_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
