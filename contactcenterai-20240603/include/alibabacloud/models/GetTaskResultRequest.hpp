// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(requiredFieldList, requiredFieldList_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(requiredFieldList, requiredFieldList_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetTaskResultRequest() = default ;
    GetTaskResultRequest(const GetTaskResultRequest &) = default ;
    GetTaskResultRequest(GetTaskResultRequest &&) = default ;
    GetTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResultRequest() = default ;
    GetTaskResultRequest& operator=(const GetTaskResultRequest &) = default ;
    GetTaskResultRequest& operator=(GetTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requiredFieldList_ != nullptr
        && this->taskId_ != nullptr; };
    // requiredFieldList Field Functions 
    bool hasRequiredFieldList() const { return this->requiredFieldList_ != nullptr;};
    void deleteRequiredFieldList() { this->requiredFieldList_ = nullptr;};
    inline const vector<string> & requiredFieldList() const { DARABONBA_PTR_GET_CONST(requiredFieldList_, vector<string>) };
    inline vector<string> requiredFieldList() { DARABONBA_PTR_GET(requiredFieldList_, vector<string>) };
    inline GetTaskResultRequest& setRequiredFieldList(const vector<string> & requiredFieldList) { DARABONBA_PTR_SET_VALUE(requiredFieldList_, requiredFieldList) };
    inline GetTaskResultRequest& setRequiredFieldList(vector<string> && requiredFieldList) { DARABONBA_PTR_SET_RVALUE(requiredFieldList_, requiredFieldList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<string>> requiredFieldList_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
