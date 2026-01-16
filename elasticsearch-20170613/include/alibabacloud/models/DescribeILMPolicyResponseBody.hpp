// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEILMPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEILMPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeILMPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeILMPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeILMPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeILMPolicyResponseBody() = default ;
    DescribeILMPolicyResponseBody(const DescribeILMPolicyResponseBody &) = default ;
    DescribeILMPolicyResponseBody(DescribeILMPolicyResponseBody &&) = default ;
    DescribeILMPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeILMPolicyResponseBody() = default ;
    DescribeILMPolicyResponseBody& operator=(const DescribeILMPolicyResponseBody &) = default ;
    DescribeILMPolicyResponseBody& operator=(DescribeILMPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(phases, phases_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(phases, phases_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->phases_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phases Field Functions 
      bool hasPhases() const { return this->phases_ != nullptr;};
      void deletePhases() { this->phases_ = nullptr;};
      inline       const Darabonba::Json & getPhases() const { DARABONBA_GET(phases_) };
      Darabonba::Json & getPhases() { DARABONBA_GET(phases_) };
      inline Result& setPhases(const Darabonba::Json & phases) { DARABONBA_SET_VALUE(phases_, phases) };
      inline Result& setPhases(Darabonba::Json && phases) { DARABONBA_SET_RVALUE(phases_, phases) };


    protected:
      shared_ptr<string> name_ {};
      Darabonba::Json phases_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeILMPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeILMPolicyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeILMPolicyResponseBody::Result) };
    inline DescribeILMPolicyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeILMPolicyResponseBody::Result) };
    inline DescribeILMPolicyResponseBody& setResult(const DescribeILMPolicyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeILMPolicyResponseBody& setResult(DescribeILMPolicyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeILMPolicyResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
