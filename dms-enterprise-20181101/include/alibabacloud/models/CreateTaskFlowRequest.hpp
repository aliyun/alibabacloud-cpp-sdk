// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateTaskFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateTaskFlowRequest() = default ;
    CreateTaskFlowRequest(const CreateTaskFlowRequest &) = default ;
    CreateTaskFlowRequest(CreateTaskFlowRequest &&) = default ;
    CreateTaskFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskFlowRequest() = default ;
    CreateTaskFlowRequest& operator=(const CreateTaskFlowRequest &) = default ;
    CreateTaskFlowRequest& operator=(CreateTaskFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagName_ != nullptr
        && this->description_ != nullptr && this->scenarioId_ != nullptr && this->tid_ != nullptr; };
    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline CreateTaskFlowRequest& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTaskFlowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline int64_t scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
    inline CreateTaskFlowRequest& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateTaskFlowRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The name of the task flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dagName_ = nullptr;
    // The description of the task flow.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the scenario.
    std::shared_ptr<int64_t> scenarioId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
