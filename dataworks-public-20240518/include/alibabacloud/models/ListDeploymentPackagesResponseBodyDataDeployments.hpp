// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODYDATADEPLOYMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODYDATADEPLOYMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackagesResponseBodyDataDeployments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackagesResponseBodyDataDeployments& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Executor, executor_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackagesResponseBodyDataDeployments& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Executor, executor_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDeploymentPackagesResponseBodyDataDeployments() = default ;
    ListDeploymentPackagesResponseBodyDataDeployments(const ListDeploymentPackagesResponseBodyDataDeployments &) = default ;
    ListDeploymentPackagesResponseBodyDataDeployments(ListDeploymentPackagesResponseBodyDataDeployments &&) = default ;
    ListDeploymentPackagesResponseBodyDataDeployments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackagesResponseBodyDataDeployments() = default ;
    ListDeploymentPackagesResponseBodyDataDeployments& operator=(const ListDeploymentPackagesResponseBodyDataDeployments &) = default ;
    ListDeploymentPackagesResponseBodyDataDeployments& operator=(ListDeploymentPackagesResponseBodyDataDeployments &&) = default ;
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
    inline ListDeploymentPackagesResponseBodyDataDeployments& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline int64_t executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // executor Field Functions 
    bool hasExecutor() const { return this->executor_ != nullptr;};
    void deleteExecutor() { this->executor_ = nullptr;};
    inline string executor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDeploymentPackagesResponseBodyDataDeployments& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<int64_t> executeTime_ = nullptr;
    std::shared_ptr<string> executor_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
