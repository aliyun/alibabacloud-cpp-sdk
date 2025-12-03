// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCACCESSANDUPDATEAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCACCESSANDUPDATEAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyVpcAccessAndUpdateApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcAccessAndUpdateApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcAccessAndUpdateApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyVpcAccessAndUpdateApisResponseBody() = default ;
    ModifyVpcAccessAndUpdateApisResponseBody(const ModifyVpcAccessAndUpdateApisResponseBody &) = default ;
    ModifyVpcAccessAndUpdateApisResponseBody(ModifyVpcAccessAndUpdateApisResponseBody &&) = default ;
    ModifyVpcAccessAndUpdateApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcAccessAndUpdateApisResponseBody() = default ;
    ModifyVpcAccessAndUpdateApisResponseBody& operator=(const ModifyVpcAccessAndUpdateApisResponseBody &) = default ;
    ModifyVpcAccessAndUpdateApisResponseBody& operator=(ModifyVpcAccessAndUpdateApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr
        && return this->requestId_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ModifyVpcAccessAndUpdateApisResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpcAccessAndUpdateApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the asynchronous task.
    // 
    // > 
    // 
    // *   If the associated API is updated, you can use the task ID in the **DescribeUpdateVpcInfoTask** operation to query the update result.
    std::shared_ptr<string> operationId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
