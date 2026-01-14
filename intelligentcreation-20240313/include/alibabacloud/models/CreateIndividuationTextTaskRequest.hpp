// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDIVIDUATIONTEXTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDIVIDUATIONTEXTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateIndividuationTextTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndividuationTextTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(crowdPack, crowdPack_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndividuationTextTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(crowdPack, crowdPack_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    CreateIndividuationTextTaskRequest() = default ;
    CreateIndividuationTextTaskRequest(const CreateIndividuationTextTaskRequest &) = default ;
    CreateIndividuationTextTaskRequest(CreateIndividuationTextTaskRequest &&) = default ;
    CreateIndividuationTextTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndividuationTextTaskRequest() = default ;
    CreateIndividuationTextTaskRequest& operator=(const CreateIndividuationTextTaskRequest &) = default ;
    CreateIndividuationTextTaskRequest& operator=(CreateIndividuationTextTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crowdPack_ == nullptr
        && this->projectId_ == nullptr && this->taskName_ == nullptr; };
    // crowdPack Field Functions 
    bool hasCrowdPack() const { return this->crowdPack_ != nullptr;};
    void deleteCrowdPack() { this->crowdPack_ = nullptr;};
    inline const vector<vector<string>> & getCrowdPack() const { DARABONBA_PTR_GET_CONST(crowdPack_, vector<vector<string>>) };
    inline vector<vector<string>> getCrowdPack() { DARABONBA_PTR_GET(crowdPack_, vector<vector<string>>) };
    inline CreateIndividuationTextTaskRequest& setCrowdPack(const vector<vector<string>> & crowdPack) { DARABONBA_PTR_SET_VALUE(crowdPack_, crowdPack) };
    inline CreateIndividuationTextTaskRequest& setCrowdPack(vector<vector<string>> && crowdPack) { DARABONBA_PTR_SET_RVALUE(crowdPack_, crowdPack) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateIndividuationTextTaskRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateIndividuationTextTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<vector<vector<string>>> crowdPack_ {};
    shared_ptr<string> projectId_ {};
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
