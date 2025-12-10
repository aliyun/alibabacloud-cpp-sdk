// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYROLESROLELATESTDELETIONTASK_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYROLESROLELATESTDELETIONTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListRolesResponseBodyRolesRoleLatestDeletionTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyRolesRoleLatestDeletionTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeletionTaskId, deletionTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyRolesRoleLatestDeletionTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeletionTaskId, deletionTaskId_);
    };
    ListRolesResponseBodyRolesRoleLatestDeletionTask() = default ;
    ListRolesResponseBodyRolesRoleLatestDeletionTask(const ListRolesResponseBodyRolesRoleLatestDeletionTask &) = default ;
    ListRolesResponseBodyRolesRoleLatestDeletionTask(ListRolesResponseBodyRolesRoleLatestDeletionTask &&) = default ;
    ListRolesResponseBodyRolesRoleLatestDeletionTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyRolesRoleLatestDeletionTask() = default ;
    ListRolesResponseBodyRolesRoleLatestDeletionTask& operator=(const ListRolesResponseBodyRolesRoleLatestDeletionTask &) = default ;
    ListRolesResponseBodyRolesRoleLatestDeletionTask& operator=(ListRolesResponseBodyRolesRoleLatestDeletionTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->deletionTaskId_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListRolesResponseBodyRolesRoleLatestDeletionTask& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deletionTaskId Field Functions 
    bool hasDeletionTaskId() const { return this->deletionTaskId_ != nullptr;};
    void deleteDeletionTaskId() { this->deletionTaskId_ = nullptr;};
    inline string deletionTaskId() const { DARABONBA_PTR_GET_DEFAULT(deletionTaskId_, "") };
    inline ListRolesResponseBodyRolesRoleLatestDeletionTask& setDeletionTaskId(string deletionTaskId) { DARABONBA_PTR_SET_VALUE(deletionTaskId_, deletionTaskId) };


  protected:
    // The time when the deletion task was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The ID of the deletion task.
    std::shared_ptr<string> deletionTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
