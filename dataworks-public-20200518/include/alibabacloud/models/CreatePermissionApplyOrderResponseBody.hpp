// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreatePermissionApplyOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionApplyOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionApplyOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreatePermissionApplyOrderResponseBody() = default ;
    CreatePermissionApplyOrderResponseBody(const CreatePermissionApplyOrderResponseBody &) = default ;
    CreatePermissionApplyOrderResponseBody(CreatePermissionApplyOrderResponseBody &&) = default ;
    CreatePermissionApplyOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionApplyOrderResponseBody() = default ;
    CreatePermissionApplyOrderResponseBody& operator=(const CreatePermissionApplyOrderResponseBody &) = default ;
    CreatePermissionApplyOrderResponseBody& operator=(CreatePermissionApplyOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flowId_ != nullptr
        && this->requestId_ != nullptr; };
    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline const vector<string> & flowId() const { DARABONBA_PTR_GET_CONST(flowId_, vector<string>) };
    inline vector<string> flowId() { DARABONBA_PTR_GET(flowId_, vector<string>) };
    inline CreatePermissionApplyOrderResponseBody& setFlowId(const vector<string> & flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };
    inline CreatePermissionApplyOrderResponseBody& setFlowId(vector<string> && flowId) { DARABONBA_PTR_SET_RVALUE(flowId_, flowId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePermissionApplyOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request order ID.
    std::shared_ptr<vector<string>> flowId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
