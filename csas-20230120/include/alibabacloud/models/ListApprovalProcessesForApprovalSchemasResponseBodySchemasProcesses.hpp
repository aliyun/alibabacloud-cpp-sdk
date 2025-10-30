// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODYSCHEMASPROCESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESFORAPPROVALSCHEMASRESPONSEBODYSCHEMASPROCESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
    };
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses(const ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses(ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses &&) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses() = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& operator=(const ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses &) = default ;
    ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& operator=(ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->processId_ == nullptr && return this->processName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline ListApprovalProcessesForApprovalSchemasResponseBodySchemasProcesses& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> processId_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
