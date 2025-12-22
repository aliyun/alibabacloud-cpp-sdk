// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEEDBACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEEDBACKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFeedbacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeedbacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskIdList, taskIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeedbacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskIdList, taskIdList_);
    };
    ListFeedbacksRequest() = default ;
    ListFeedbacksRequest(const ListFeedbacksRequest &) = default ;
    ListFeedbacksRequest(ListFeedbacksRequest &&) = default ;
    ListFeedbacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeedbacksRequest() = default ;
    ListFeedbacksRequest& operator=(const ListFeedbacksRequest &) = default ;
    ListFeedbacksRequest& operator=(ListFeedbacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->taskIdList_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFeedbacksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline string taskIdList() const { DARABONBA_PTR_GET_DEFAULT(taskIdList_, "") };
    inline ListFeedbacksRequest& setTaskIdList(string taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
