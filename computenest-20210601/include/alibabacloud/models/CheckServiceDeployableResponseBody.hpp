// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICEDEPLOYABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CheckServiceDeployableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceDeployableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResults, checkResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceDeployableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResults, checkResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckServiceDeployableResponseBody() = default ;
    CheckServiceDeployableResponseBody(const CheckServiceDeployableResponseBody &) = default ;
    CheckServiceDeployableResponseBody(CheckServiceDeployableResponseBody &&) = default ;
    CheckServiceDeployableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceDeployableResponseBody() = default ;
    CheckServiceDeployableResponseBody& operator=(const CheckServiceDeployableResponseBody &) = default ;
    CheckServiceDeployableResponseBody& operator=(CheckServiceDeployableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckResults& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Skippable, skippable_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CheckResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Skippable, skippable_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CheckResults() = default ;
      CheckResults(const CheckResults &) = default ;
      CheckResults(CheckResults &&) = default ;
      CheckResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckResults() = default ;
      CheckResults& operator=(const CheckResults &) = default ;
      CheckResults& operator=(CheckResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->skippable_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline CheckResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // skippable Field Functions 
      bool hasSkippable() const { return this->skippable_ != nullptr;};
      void deleteSkippable() { this->skippable_ = nullptr;};
      inline bool getSkippable() const { DARABONBA_PTR_GET_DEFAULT(skippable_, false) };
      inline CheckResults& setSkippable(bool skippable) { DARABONBA_PTR_SET_VALUE(skippable_, skippable) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CheckResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CheckResults& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Returns a hint message for the result.
      shared_ptr<string> message_ {};
      shared_ptr<bool> skippable_ {};
      // Check type, invalid values:
      // 
      // - Balance ：Account balance.
      // 
      // - Quota:  Account quota.
      shared_ptr<string> type_ {};
      // Inspection result.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->checkResults_ == nullptr
        && this->requestId_ == nullptr; };
    // checkResults Field Functions 
    bool hasCheckResults() const { return this->checkResults_ != nullptr;};
    void deleteCheckResults() { this->checkResults_ = nullptr;};
    inline const vector<CheckServiceDeployableResponseBody::CheckResults> & getCheckResults() const { DARABONBA_PTR_GET_CONST(checkResults_, vector<CheckServiceDeployableResponseBody::CheckResults>) };
    inline vector<CheckServiceDeployableResponseBody::CheckResults> getCheckResults() { DARABONBA_PTR_GET(checkResults_, vector<CheckServiceDeployableResponseBody::CheckResults>) };
    inline CheckServiceDeployableResponseBody& setCheckResults(const vector<CheckServiceDeployableResponseBody::CheckResults> & checkResults) { DARABONBA_PTR_SET_VALUE(checkResults_, checkResults) };
    inline CheckServiceDeployableResponseBody& setCheckResults(vector<CheckServiceDeployableResponseBody::CheckResults> && checkResults) { DARABONBA_PTR_SET_RVALUE(checkResults_, checkResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckServiceDeployableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Inspection result.
    shared_ptr<vector<CheckServiceDeployableResponseBody::CheckResults>> checkResults_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
