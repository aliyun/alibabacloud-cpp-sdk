// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDLOGSTASHRESTARTTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class EstimatedLogstashRestartTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedLogstashRestartTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedLogstashRestartTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    EstimatedLogstashRestartTimeResponseBody() = default ;
    EstimatedLogstashRestartTimeResponseBody(const EstimatedLogstashRestartTimeResponseBody &) = default ;
    EstimatedLogstashRestartTimeResponseBody(EstimatedLogstashRestartTimeResponseBody &&) = default ;
    EstimatedLogstashRestartTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedLogstashRestartTimeResponseBody() = default ;
    EstimatedLogstashRestartTimeResponseBody& operator=(const EstimatedLogstashRestartTimeResponseBody &) = default ;
    EstimatedLogstashRestartTimeResponseBody& operator=(EstimatedLogstashRestartTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(unit, unit_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->unit_ == nullptr
        && this->value_ == nullptr; };
      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Result& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline Result& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The unit.
      shared_ptr<string> unit_ {};
      // The estimated restart time.
      shared_ptr<int64_t> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EstimatedLogstashRestartTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const EstimatedLogstashRestartTimeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, EstimatedLogstashRestartTimeResponseBody::Result) };
    inline EstimatedLogstashRestartTimeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, EstimatedLogstashRestartTimeResponseBody::Result) };
    inline EstimatedLogstashRestartTimeResponseBody& setResult(const EstimatedLogstashRestartTimeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline EstimatedLogstashRestartTimeResponseBody& setResult(EstimatedLogstashRestartTimeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<EstimatedLogstashRestartTimeResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
