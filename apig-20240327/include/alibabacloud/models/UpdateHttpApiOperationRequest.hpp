// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPAPIOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPAPIOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateHttpApiOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operation, operation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operation, operation_);
    };
    UpdateHttpApiOperationRequest() = default ;
    UpdateHttpApiOperationRequest(const UpdateHttpApiOperationRequest &) = default ;
    UpdateHttpApiOperationRequest(UpdateHttpApiOperationRequest &&) = default ;
    UpdateHttpApiOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpApiOperationRequest() = default ;
    UpdateHttpApiOperationRequest& operator=(const UpdateHttpApiOperationRequest &) = default ;
    UpdateHttpApiOperationRequest& operator=(UpdateHttpApiOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operation_ != nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline const HttpApiOperation & operation() const { DARABONBA_PTR_GET_CONST(operation_, HttpApiOperation) };
    inline HttpApiOperation operation() { DARABONBA_PTR_GET(operation_, HttpApiOperation) };
    inline UpdateHttpApiOperationRequest& setOperation(const HttpApiOperation & operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };
    inline UpdateHttpApiOperationRequest& setOperation(HttpApiOperation && operation) { DARABONBA_PTR_SET_RVALUE(operation_, operation) };


  protected:
    // operation definition.
    std::shared_ptr<HttpApiOperation> operation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
