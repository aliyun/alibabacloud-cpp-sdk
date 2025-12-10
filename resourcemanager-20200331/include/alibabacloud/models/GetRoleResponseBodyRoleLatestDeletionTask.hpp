// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLERESPONSEBODYROLELATESTDELETIONTASK_HPP_
#define ALIBABACLOUD_MODELS_GETROLERESPONSEBODYROLELATESTDELETIONTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetRoleResponseBodyRoleLatestDeletionTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleResponseBodyRoleLatestDeletionTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeletionTaskId, deletionTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleResponseBodyRoleLatestDeletionTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeletionTaskId, deletionTaskId_);
    };
    GetRoleResponseBodyRoleLatestDeletionTask() = default ;
    GetRoleResponseBodyRoleLatestDeletionTask(const GetRoleResponseBodyRoleLatestDeletionTask &) = default ;
    GetRoleResponseBodyRoleLatestDeletionTask(GetRoleResponseBodyRoleLatestDeletionTask &&) = default ;
    GetRoleResponseBodyRoleLatestDeletionTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleResponseBodyRoleLatestDeletionTask() = default ;
    GetRoleResponseBodyRoleLatestDeletionTask& operator=(const GetRoleResponseBodyRoleLatestDeletionTask &) = default ;
    GetRoleResponseBodyRoleLatestDeletionTask& operator=(GetRoleResponseBodyRoleLatestDeletionTask &&) = default ;
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
    inline GetRoleResponseBodyRoleLatestDeletionTask& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deletionTaskId Field Functions 
    bool hasDeletionTaskId() const { return this->deletionTaskId_ != nullptr;};
    void deleteDeletionTaskId() { this->deletionTaskId_ = nullptr;};
    inline string deletionTaskId() const { DARABONBA_PTR_GET_DEFAULT(deletionTaskId_, "") };
    inline GetRoleResponseBodyRoleLatestDeletionTask& setDeletionTaskId(string deletionTaskId) { DARABONBA_PTR_SET_VALUE(deletionTaskId_, deletionTaskId) };


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
