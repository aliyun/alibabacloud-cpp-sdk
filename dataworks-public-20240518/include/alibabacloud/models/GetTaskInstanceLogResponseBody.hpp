// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskInstanceLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskInstanceLog, taskInstanceLog_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceLog, taskInstanceLog_);
    };
    GetTaskInstanceLogResponseBody() = default ;
    GetTaskInstanceLogResponseBody(const GetTaskInstanceLogResponseBody &) = default ;
    GetTaskInstanceLogResponseBody(GetTaskInstanceLogResponseBody &&) = default ;
    GetTaskInstanceLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceLogResponseBody() = default ;
    GetTaskInstanceLogResponseBody& operator=(const GetTaskInstanceLogResponseBody &) = default ;
    GetTaskInstanceLogResponseBody& operator=(GetTaskInstanceLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskInstanceLog_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTaskInstanceLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskInstanceLog Field Functions 
    bool hasTaskInstanceLog() const { return this->taskInstanceLog_ != nullptr;};
    void deleteTaskInstanceLog() { this->taskInstanceLog_ = nullptr;};
    inline string taskInstanceLog() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceLog_, "") };
    inline GetTaskInstanceLogResponseBody& setTaskInstanceLog(string taskInstanceLog) { DARABONBA_PTR_SET_VALUE(taskInstanceLog_, taskInstanceLog) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The run log of the instance.
    std::shared_ptr<string> taskInstanceLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
