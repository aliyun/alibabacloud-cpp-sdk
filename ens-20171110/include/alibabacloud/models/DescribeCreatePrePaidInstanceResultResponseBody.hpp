// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEPREPAIDINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEPREPAIDINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCreatePrePaidInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreatePrePaidInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCreateResult, instanceCreateResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreatePrePaidInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCreateResult, instanceCreateResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreatePrePaidInstanceResultResponseBody() = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(const DescribeCreatePrePaidInstanceResultResponseBody &) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(DescribeCreatePrePaidInstanceResultResponseBody &&) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreatePrePaidInstanceResultResponseBody() = default ;
    DescribeCreatePrePaidInstanceResultResponseBody& operator=(const DescribeCreatePrePaidInstanceResultResponseBody &) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody& operator=(DescribeCreatePrePaidInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceCreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceCreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceCreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceCreateStatus, instanceCreateStatus_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      InstanceCreateResult() = default ;
      InstanceCreateResult(const InstanceCreateResult &) = default ;
      InstanceCreateResult(InstanceCreateResult &&) = default ;
      InstanceCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceCreateResult() = default ;
      InstanceCreateResult& operator=(const InstanceCreateResult &) = default ;
      InstanceCreateResult& operator=(InstanceCreateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceCreateStatus_ == nullptr
        && this->instanceId_ == nullptr; };
      // instanceCreateStatus Field Functions 
      bool hasInstanceCreateStatus() const { return this->instanceCreateStatus_ != nullptr;};
      void deleteInstanceCreateStatus() { this->instanceCreateStatus_ = nullptr;};
      inline string getInstanceCreateStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceCreateStatus_, "") };
      inline InstanceCreateResult& setInstanceCreateStatus(string instanceCreateStatus) { DARABONBA_PTR_SET_VALUE(instanceCreateStatus_, instanceCreateStatus) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceCreateResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The status of the instance creation.
      // 
      // *   Accepted
      // *   Creating
      // *   Failed
      // *   Successed
      shared_ptr<string> instanceCreateStatus_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->instanceCreateResult_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceCreateResult Field Functions 
    bool hasInstanceCreateResult() const { return this->instanceCreateResult_ != nullptr;};
    void deleteInstanceCreateResult() { this->instanceCreateResult_ = nullptr;};
    inline const DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult & getInstanceCreateResult() const { DARABONBA_PTR_GET_CONST(instanceCreateResult_, DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult getInstanceCreateResult() { DARABONBA_PTR_GET(instanceCreateResult_, DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setInstanceCreateResult(const DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult & instanceCreateResult) { DARABONBA_PTR_SET_VALUE(instanceCreateResult_, instanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setInstanceCreateResult(DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult && instanceCreateResult) { DARABONBA_PTR_SET_RVALUE(instanceCreateResult_, instanceCreateResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned results of creating an instance.
    shared_ptr<DescribeCreatePrePaidInstanceResultResponseBody::InstanceCreateResult> instanceCreateResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
