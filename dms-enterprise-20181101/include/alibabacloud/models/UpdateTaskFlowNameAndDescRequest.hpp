// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWNAMEANDDESCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWNAMEANDDESCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateTaskFlowNameAndDescRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowNameAndDescRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowNameAndDescRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowNameAndDescRequest() = default ;
    UpdateTaskFlowNameAndDescRequest(const UpdateTaskFlowNameAndDescRequest &) = default ;
    UpdateTaskFlowNameAndDescRequest(UpdateTaskFlowNameAndDescRequest &&) = default ;
    UpdateTaskFlowNameAndDescRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowNameAndDescRequest() = default ;
    UpdateTaskFlowNameAndDescRequest& operator=(const UpdateTaskFlowNameAndDescRequest &) = default ;
    UpdateTaskFlowNameAndDescRequest& operator=(UpdateTaskFlowNameAndDescRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && return this->dagName_ == nullptr && return this->description_ == nullptr && return this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowNameAndDescRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline UpdateTaskFlowNameAndDescRequest& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTaskFlowNameAndDescRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowNameAndDescRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The new name that you want to specify for the task flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> dagName_ = nullptr;
    // The description that you want to specify for the task flow.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
