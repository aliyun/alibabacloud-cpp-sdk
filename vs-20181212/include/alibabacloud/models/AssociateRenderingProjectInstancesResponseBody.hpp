// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
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
  class AssociateRenderingProjectInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    AssociateRenderingProjectInstancesResponseBody() = default ;
    AssociateRenderingProjectInstancesResponseBody(const AssociateRenderingProjectInstancesResponseBody &) = default ;
    AssociateRenderingProjectInstancesResponseBody(AssociateRenderingProjectInstancesResponseBody &&) = default ;
    AssociateRenderingProjectInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateRenderingProjectInstancesResponseBody() = default ;
    AssociateRenderingProjectInstancesResponseBody& operator=(const AssociateRenderingProjectInstancesResponseBody &) = default ;
    AssociateRenderingProjectInstancesResponseBody& operator=(AssociateRenderingProjectInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      SuccessInstances() = default ;
      SuccessInstances(const SuccessInstances &) = default ;
      SuccessInstances(SuccessInstances &&) = default ;
      SuccessInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessInstances() = default ;
      SuccessInstances& operator=(const SuccessInstances &) = default ;
      SuccessInstances& operator=(SuccessInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SuccessInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline SuccessInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> renderingInstanceId_ {};
    };

    class FailedInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FailedInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      };
      FailedInstances() = default ;
      FailedInstances(const FailedInstances &) = default ;
      FailedInstances(FailedInstances &&) = default ;
      FailedInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedInstances() = default ;
      FailedInstances& operator=(const FailedInstances &) = default ;
      FailedInstances& operator=(FailedInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FailedInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline FailedInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> renderingInstanceId_ {};
    };

    virtual bool empty() const override { return this->failedInstanceCount_ == nullptr
        && this->failedInstances_ == nullptr && this->requestId_ == nullptr && this->successInstanceCount_ == nullptr && this->successInstances_ == nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline string getFailedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, "") };
    inline AssociateRenderingProjectInstancesResponseBody& setFailedInstanceCount(string failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances> & getFailedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances>) };
    inline vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances> getFailedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances>) };
    inline AssociateRenderingProjectInstancesResponseBody& setFailedInstances(const vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline AssociateRenderingProjectInstancesResponseBody& setFailedInstances(vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateRenderingProjectInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline string getSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, "") };
    inline AssociateRenderingProjectInstancesResponseBody& setSuccessInstanceCount(string successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances> & getSuccessInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances>) };
    inline vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances> getSuccessInstances() { DARABONBA_PTR_GET(successInstances_, vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances>) };
    inline AssociateRenderingProjectInstancesResponseBody& setSuccessInstances(const vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline AssociateRenderingProjectInstancesResponseBody& setSuccessInstances(vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    shared_ptr<string> failedInstanceCount_ {};
    shared_ptr<vector<AssociateRenderingProjectInstancesResponseBody::FailedInstances>> failedInstances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> successInstanceCount_ {};
    shared_ptr<vector<AssociateRenderingProjectInstancesResponseBody::SuccessInstances>> successInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
