// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, InvokePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    InvokePageRequest() = default ;
    InvokePageRequest(const InvokePageRequest &) = default ;
    InvokePageRequest(InvokePageRequest &&) = default ;
    InvokePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokePageRequest() = default ;
    InvokePageRequest& operator=(const InvokePageRequest &) = default ;
    InvokePageRequest& operator=(InvokePageRequest &&) = default ;
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
    inline InvokePageRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline InvokePageRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    // This parameter is required.
    shared_ptr<string> operationId_ {};
    shared_ptr<string> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
