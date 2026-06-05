// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEHIVEEDGEWORKERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVEHIVEEDGEWORKERSRESPONSEBODY_HPP_
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
  class MoveHiveEdgeWorkersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveHiveEdgeWorkersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_TO_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_TO_JSON(SuccessInstances, successInstances_);
    };
    friend void from_json(const Darabonba::Json& j, MoveHiveEdgeWorkersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedInstanceCount, failedInstanceCount_);
      DARABONBA_PTR_FROM_JSON(FailedInstances, failedInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessInstanceCount, successInstanceCount_);
      DARABONBA_PTR_FROM_JSON(SuccessInstances, successInstances_);
    };
    MoveHiveEdgeWorkersResponseBody() = default ;
    MoveHiveEdgeWorkersResponseBody(const MoveHiveEdgeWorkersResponseBody &) = default ;
    MoveHiveEdgeWorkersResponseBody(MoveHiveEdgeWorkersResponseBody &&) = default ;
    MoveHiveEdgeWorkersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveHiveEdgeWorkersResponseBody() = default ;
    MoveHiveEdgeWorkersResponseBody& operator=(const MoveHiveEdgeWorkersResponseBody &) = default ;
    MoveHiveEdgeWorkersResponseBody& operator=(MoveHiveEdgeWorkersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessInstances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->message_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SuccessInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SuccessInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> message_ {};
    };

    class FailedInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedInstances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, FailedInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->message_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FailedInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FailedInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->failedInstanceCount_ == nullptr
        && this->failedInstances_ == nullptr && this->requestId_ == nullptr && this->successInstanceCount_ == nullptr && this->successInstances_ == nullptr; };
    // failedInstanceCount Field Functions 
    bool hasFailedInstanceCount() const { return this->failedInstanceCount_ != nullptr;};
    void deleteFailedInstanceCount() { this->failedInstanceCount_ = nullptr;};
    inline int32_t getFailedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(failedInstanceCount_, 0) };
    inline MoveHiveEdgeWorkersResponseBody& setFailedInstanceCount(int32_t failedInstanceCount) { DARABONBA_PTR_SET_VALUE(failedInstanceCount_, failedInstanceCount) };


    // failedInstances Field Functions 
    bool hasFailedInstances() const { return this->failedInstances_ != nullptr;};
    void deleteFailedInstances() { this->failedInstances_ = nullptr;};
    inline const vector<MoveHiveEdgeWorkersResponseBody::FailedInstances> & getFailedInstances() const { DARABONBA_PTR_GET_CONST(failedInstances_, vector<MoveHiveEdgeWorkersResponseBody::FailedInstances>) };
    inline vector<MoveHiveEdgeWorkersResponseBody::FailedInstances> getFailedInstances() { DARABONBA_PTR_GET(failedInstances_, vector<MoveHiveEdgeWorkersResponseBody::FailedInstances>) };
    inline MoveHiveEdgeWorkersResponseBody& setFailedInstances(const vector<MoveHiveEdgeWorkersResponseBody::FailedInstances> & failedInstances) { DARABONBA_PTR_SET_VALUE(failedInstances_, failedInstances) };
    inline MoveHiveEdgeWorkersResponseBody& setFailedInstances(vector<MoveHiveEdgeWorkersResponseBody::FailedInstances> && failedInstances) { DARABONBA_PTR_SET_RVALUE(failedInstances_, failedInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveHiveEdgeWorkersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successInstanceCount Field Functions 
    bool hasSuccessInstanceCount() const { return this->successInstanceCount_ != nullptr;};
    void deleteSuccessInstanceCount() { this->successInstanceCount_ = nullptr;};
    inline int32_t getSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(successInstanceCount_, 0) };
    inline MoveHiveEdgeWorkersResponseBody& setSuccessInstanceCount(int32_t successInstanceCount) { DARABONBA_PTR_SET_VALUE(successInstanceCount_, successInstanceCount) };


    // successInstances Field Functions 
    bool hasSuccessInstances() const { return this->successInstances_ != nullptr;};
    void deleteSuccessInstances() { this->successInstances_ = nullptr;};
    inline const vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances> & getSuccessInstances() const { DARABONBA_PTR_GET_CONST(successInstances_, vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances>) };
    inline vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances> getSuccessInstances() { DARABONBA_PTR_GET(successInstances_, vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances>) };
    inline MoveHiveEdgeWorkersResponseBody& setSuccessInstances(const vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances> & successInstances) { DARABONBA_PTR_SET_VALUE(successInstances_, successInstances) };
    inline MoveHiveEdgeWorkersResponseBody& setSuccessInstances(vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances> && successInstances) { DARABONBA_PTR_SET_RVALUE(successInstances_, successInstances) };


  protected:
    shared_ptr<int32_t> failedInstanceCount_ {};
    shared_ptr<vector<MoveHiveEdgeWorkersResponseBody::FailedInstances>> failedInstances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> successInstanceCount_ {};
    shared_ptr<vector<MoveHiveEdgeWorkersResponseBody::SuccessInstances>> successInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
