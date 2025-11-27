// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHRCINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachRCInstancesResponseBodyResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AttachRCInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Responses, responses_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachRCInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Responses, responses_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AttachRCInstancesResponseBody() = default ;
    AttachRCInstancesResponseBody(const AttachRCInstancesResponseBody &) = default ;
    AttachRCInstancesResponseBody(AttachRCInstancesResponseBody &&) = default ;
    AttachRCInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachRCInstancesResponseBody() = default ;
    AttachRCInstancesResponseBody& operator=(const AttachRCInstancesResponseBody &) = default ;
    AttachRCInstancesResponseBody& operator=(AttachRCInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->responses_ == nullptr && return this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachRCInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const vector<AttachRCInstancesResponseBodyResponses> & responses() const { DARABONBA_PTR_GET_CONST(responses_, vector<AttachRCInstancesResponseBodyResponses>) };
    inline vector<AttachRCInstancesResponseBodyResponses> responses() { DARABONBA_PTR_GET(responses_, vector<AttachRCInstancesResponseBodyResponses>) };
    inline AttachRCInstancesResponseBody& setResponses(const vector<AttachRCInstancesResponseBodyResponses> & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline AttachRCInstancesResponseBody& setResponses(vector<AttachRCInstancesResponseBodyResponses> && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AttachRCInstancesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<vector<AttachRCInstancesResponseBodyResponses>> responses_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
