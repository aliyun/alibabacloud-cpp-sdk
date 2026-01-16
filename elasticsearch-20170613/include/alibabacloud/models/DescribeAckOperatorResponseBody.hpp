// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKOPERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKOPERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeAckOperatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckOperatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckOperatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeAckOperatorResponseBody() = default ;
    DescribeAckOperatorResponseBody(const DescribeAckOperatorResponseBody &) = default ;
    DescribeAckOperatorResponseBody(DescribeAckOperatorResponseBody &&) = default ;
    DescribeAckOperatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckOperatorResponseBody() = default ;
    DescribeAckOperatorResponseBody& operator=(const DescribeAckOperatorResponseBody &) = default ;
    DescribeAckOperatorResponseBody& operator=(DescribeAckOperatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->version_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The installation status of ES-operator. Valid values:
      // 
      // *   deployed: ES-operator is installed.
      // *   not-deploy: ES-operator is not installed.
      // *   failed: ES-operator fails to be installed.
      // *   unknown: The installation status of ES-operator is unknown.
      shared_ptr<string> status_ {};
      // The version of ES-operator.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAckOperatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeAckOperatorResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeAckOperatorResponseBody::Result) };
    inline DescribeAckOperatorResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeAckOperatorResponseBody::Result) };
    inline DescribeAckOperatorResponseBody& setResult(const DescribeAckOperatorResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeAckOperatorResponseBody& setResult(DescribeAckOperatorResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DescribeAckOperatorResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
