// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUNBINDTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchUnbindTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUnbindTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bindings, bindings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUnbindTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bindings, bindings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchUnbindTemplateResponseBody() = default ;
    BatchUnbindTemplateResponseBody(const BatchUnbindTemplateResponseBody &) = default ;
    BatchUnbindTemplateResponseBody(BatchUnbindTemplateResponseBody &&) = default ;
    BatchUnbindTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUnbindTemplateResponseBody() = default ;
    BatchUnbindTemplateResponseBody& operator=(const BatchUnbindTemplateResponseBody &) = default ;
    BatchUnbindTemplateResponseBody& operator=(BatchUnbindTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bindings& obj) { 
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, Bindings& obj) { 
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      Bindings() = default ;
      Bindings(const Bindings &) = default ;
      Bindings(Bindings &&) = default ;
      Bindings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bindings() = default ;
      Bindings& operator=(const Bindings &) = default ;
      Bindings& operator=(Bindings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->error_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->templateId_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Bindings& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Bindings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Bindings& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Bindings& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      shared_ptr<string> error_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceType_ {};
      shared_ptr<string> templateId_ {};
    };

    virtual bool empty() const override { return this->bindings_ == nullptr
        && this->requestId_ == nullptr; };
    // bindings Field Functions 
    bool hasBindings() const { return this->bindings_ != nullptr;};
    void deleteBindings() { this->bindings_ = nullptr;};
    inline const vector<BatchUnbindTemplateResponseBody::Bindings> & getBindings() const { DARABONBA_PTR_GET_CONST(bindings_, vector<BatchUnbindTemplateResponseBody::Bindings>) };
    inline vector<BatchUnbindTemplateResponseBody::Bindings> getBindings() { DARABONBA_PTR_GET(bindings_, vector<BatchUnbindTemplateResponseBody::Bindings>) };
    inline BatchUnbindTemplateResponseBody& setBindings(const vector<BatchUnbindTemplateResponseBody::Bindings> & bindings) { DARABONBA_PTR_SET_VALUE(bindings_, bindings) };
    inline BatchUnbindTemplateResponseBody& setBindings(vector<BatchUnbindTemplateResponseBody::Bindings> && bindings) { DARABONBA_PTR_SET_RVALUE(bindings_, bindings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUnbindTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<BatchUnbindTemplateResponseBody::Bindings>> bindings_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
