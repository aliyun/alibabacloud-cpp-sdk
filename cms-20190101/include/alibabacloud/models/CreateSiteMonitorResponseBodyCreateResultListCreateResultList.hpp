// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYCREATERESULTLISTCREATERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEMONITORRESPONSEBODYCREATERESULTLISTCREATERESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateSiteMonitorResponseBodyCreateResultListCreateResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteMonitorResponseBodyCreateResultListCreateResultList& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteMonitorResponseBodyCreateResultListCreateResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList() = default ;
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList(const CreateSiteMonitorResponseBodyCreateResultListCreateResultList &) = default ;
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList(CreateSiteMonitorResponseBodyCreateResultListCreateResultList &&) = default ;
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteMonitorResponseBodyCreateResultListCreateResultList() = default ;
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList& operator=(const CreateSiteMonitorResponseBodyCreateResultListCreateResultList &) = default ;
    CreateSiteMonitorResponseBodyCreateResultListCreateResultList& operator=(CreateSiteMonitorResponseBodyCreateResultListCreateResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->taskName_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateSiteMonitorResponseBodyCreateResultListCreateResultList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateSiteMonitorResponseBodyCreateResultListCreateResultList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The ID of the site monitoring task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the site monitoring task.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
