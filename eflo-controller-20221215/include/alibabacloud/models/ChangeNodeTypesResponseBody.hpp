// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChangeNodeTypesResponseBodyNodeResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeResponse, nodeResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeResponse, nodeResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ChangeNodeTypesResponseBody() = default ;
    ChangeNodeTypesResponseBody(const ChangeNodeTypesResponseBody &) = default ;
    ChangeNodeTypesResponseBody(ChangeNodeTypesResponseBody &&) = default ;
    ChangeNodeTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeTypesResponseBody() = default ;
    ChangeNodeTypesResponseBody& operator=(const ChangeNodeTypesResponseBody &) = default ;
    ChangeNodeTypesResponseBody& operator=(ChangeNodeTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeResponse_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // nodeResponse Field Functions 
    bool hasNodeResponse() const { return this->nodeResponse_ != nullptr;};
    void deleteNodeResponse() { this->nodeResponse_ = nullptr;};
    inline const vector<ChangeNodeTypesResponseBodyNodeResponse> & nodeResponse() const { DARABONBA_PTR_GET_CONST(nodeResponse_, vector<ChangeNodeTypesResponseBodyNodeResponse>) };
    inline vector<ChangeNodeTypesResponseBodyNodeResponse> nodeResponse() { DARABONBA_PTR_GET(nodeResponse_, vector<ChangeNodeTypesResponseBodyNodeResponse>) };
    inline ChangeNodeTypesResponseBody& setNodeResponse(const vector<ChangeNodeTypesResponseBodyNodeResponse> & nodeResponse) { DARABONBA_PTR_SET_VALUE(nodeResponse_, nodeResponse) };
    inline ChangeNodeTypesResponseBody& setNodeResponse(vector<ChangeNodeTypesResponseBodyNodeResponse> && nodeResponse) { DARABONBA_PTR_SET_RVALUE(nodeResponse_, nodeResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeNodeTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ChangeNodeTypesResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<ChangeNodeTypesResponseBodyNodeResponse>> nodeResponse_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
