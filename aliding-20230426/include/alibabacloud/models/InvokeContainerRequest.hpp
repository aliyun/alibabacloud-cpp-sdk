// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKECONTAINERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKECONTAINERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeContainerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeContainerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeContainerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    InvokeContainerRequest() = default ;
    InvokeContainerRequest(const InvokeContainerRequest &) = default ;
    InvokeContainerRequest(InvokeContainerRequest &&) = default ;
    InvokeContainerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeContainerRequest() = default ;
    InvokeContainerRequest& operator=(const InvokeContainerRequest &) = default ;
    InvokeContainerRequest& operator=(InvokeContainerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationId_ == nullptr
        && this->params_ == nullptr; };
    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline InvokeContainerRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline InvokeContainerRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // This parameter is required.
    shared_ptr<string> operationId_ {};
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
