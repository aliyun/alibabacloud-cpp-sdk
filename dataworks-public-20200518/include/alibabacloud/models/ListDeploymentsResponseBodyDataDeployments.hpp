// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTSRESPONSEBODYDATADEPLOYMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTSRESPONSEBODYDATADEPLOYMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDeploymentsResponseBodyDataDeployments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentsResponseBodyDataDeployments& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentsResponseBodyDataDeployments& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeploymentsResponseBodyDataDeployments() = default ;
    ListDeploymentsResponseBodyDataDeployments(const ListDeploymentsResponseBodyDataDeployments &) = default ;
    ListDeploymentsResponseBodyDataDeployments(ListDeploymentsResponseBodyDataDeployments &&) = default ;
    ListDeploymentsResponseBodyDataDeployments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentsResponseBodyDataDeployments() = default ;
    ListDeploymentsResponseBodyDataDeployments& operator=(const ListDeploymentsResponseBodyDataDeployments &) = default ;
    ListDeploymentsResponseBodyDataDeployments& operator=(ListDeploymentsResponseBodyDataDeployments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creator_ != nullptr && this->errorMessage_ != nullptr && this->executeTime_ != nullptr && this->executor_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->status_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDeploymentsResponseBodyDataDeployments& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDeploymentsResponseBodyDataDeployments& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDeploymentsResponseBodyDataDeployments& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline ListDeploymentsResponseBodyDataDeployments& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline ListDeploymentsResponseBodyDataDeployments& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDeploymentsResponseBodyDataDeployments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeploymentsResponseBodyDataDeployments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDeploymentsResponseBodyDataDeployments& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the deployment package was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who created the deployment package.
    std::shared_ptr<string> creator_ = nullptr;
    // The error message returned when the deployment package failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the deployment package was run. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the user who ran the deployment package.
    std::shared_ptr<string> executor_ = nullptr;
    // The deployment package ID. You can call the [GetDeployment](https://help.aliyun.com/document_detail/173950.html) operation to obtain the ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the deployment package.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the deployment package. Valid values:
    // 
    // *   0: The deployment package is ready.
    // *   1: The deployment package is deployed.
    // *   2: The deployment package fails to be deployed.
    // *   6: The deployment package is rejected.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
