// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUESTOPERATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUESTOPERATECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateInstanceRequestOperateCommandInstanceIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceRequestOperateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceRequestOperateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceRequestOperateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    OperateInstanceRequestOperateCommand() = default ;
    OperateInstanceRequestOperateCommand(const OperateInstanceRequestOperateCommand &) = default ;
    OperateInstanceRequestOperateCommand(OperateInstanceRequestOperateCommand &&) = default ;
    OperateInstanceRequestOperateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceRequestOperateCommand() = default ;
    OperateInstanceRequestOperateCommand& operator=(const OperateInstanceRequestOperateCommand &) = default ;
    OperateInstanceRequestOperateCommand& operator=(OperateInstanceRequestOperateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIdList_ != nullptr
        && this->operation_ != nullptr && this->projectId_ != nullptr; };
    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline const vector<Models::OperateInstanceRequestOperateCommandInstanceIdList> & instanceIdList() const { DARABONBA_PTR_GET_CONST(instanceIdList_, vector<Models::OperateInstanceRequestOperateCommandInstanceIdList>) };
    inline vector<Models::OperateInstanceRequestOperateCommandInstanceIdList> instanceIdList() { DARABONBA_PTR_GET(instanceIdList_, vector<Models::OperateInstanceRequestOperateCommandInstanceIdList>) };
    inline OperateInstanceRequestOperateCommand& setInstanceIdList(const vector<Models::OperateInstanceRequestOperateCommandInstanceIdList> & instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };
    inline OperateInstanceRequestOperateCommand& setInstanceIdList(vector<Models::OperateInstanceRequestOperateCommandInstanceIdList> && instanceIdList) { DARABONBA_PTR_SET_RVALUE(instanceIdList_, instanceIdList) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperateInstanceRequestOperateCommand& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline OperateInstanceRequestOperateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::OperateInstanceRequestOperateCommandInstanceIdList>> instanceIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
