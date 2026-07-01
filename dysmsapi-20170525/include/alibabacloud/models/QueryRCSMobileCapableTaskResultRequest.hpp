// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRCSMOBILECAPABLETASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRCSMOBILECAPABLETASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QueryRCSMobileCapableTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRCSMobileCapableTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRCSMobileCapableTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryRCSMobileCapableTaskResultRequest() = default ;
    QueryRCSMobileCapableTaskResultRequest(const QueryRCSMobileCapableTaskResultRequest &) = default ;
    QueryRCSMobileCapableTaskResultRequest(QueryRCSMobileCapableTaskResultRequest &&) = default ;
    QueryRCSMobileCapableTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRCSMobileCapableTaskResultRequest() = default ;
    QueryRCSMobileCapableTaskResultRequest& operator=(const QueryRCSMobileCapableTaskResultRequest &) = default ;
    QueryRCSMobileCapableTaskResultRequest& operator=(QueryRCSMobileCapableTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryRCSMobileCapableTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
