// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CheckModelFeatureFGFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FGCheckResults, FGCheckResults_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FGCheckResults, FGCheckResults_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CheckModelFeatureFGFeatureResponseBody() = default ;
    CheckModelFeatureFGFeatureResponseBody(const CheckModelFeatureFGFeatureResponseBody &) = default ;
    CheckModelFeatureFGFeatureResponseBody(CheckModelFeatureFGFeatureResponseBody &&) = default ;
    CheckModelFeatureFGFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckModelFeatureFGFeatureResponseBody() = default ;
    CheckModelFeatureFGFeatureResponseBody& operator=(const CheckModelFeatureFGFeatureResponseBody &) = default ;
    CheckModelFeatureFGFeatureResponseBody& operator=(CheckModelFeatureFGFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FGCheckResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FGCheckResults& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RuleCode, ruleCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, FGCheckResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RuleCode, ruleCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      FGCheckResults() = default ;
      FGCheckResults(const FGCheckResults &) = default ;
      FGCheckResults(FGCheckResults &&) = default ;
      FGCheckResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FGCheckResults() = default ;
      FGCheckResults& operator=(const FGCheckResults &) = default ;
      FGCheckResults& operator=(FGCheckResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->ruleCode_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FGCheckResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // ruleCode Field Functions 
      bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
      void deleteRuleCode() { this->ruleCode_ = nullptr;};
      inline string getRuleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, "") };
      inline FGCheckResults& setRuleCode(string ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline FGCheckResults& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> ruleCode_ {};
      shared_ptr<bool> status_ {};
    };

    virtual bool empty() const override { return this->FGCheckResults_ == nullptr
        && this->requestId_ == nullptr; };
    // FGCheckResults Field Functions 
    bool hasFGCheckResults() const { return this->FGCheckResults_ != nullptr;};
    void deleteFGCheckResults() { this->FGCheckResults_ = nullptr;};
    inline const vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults> & getFGCheckResults() const { DARABONBA_PTR_GET_CONST(FGCheckResults_, vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults>) };
    inline vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults> getFGCheckResults() { DARABONBA_PTR_GET(FGCheckResults_, vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults>) };
    inline CheckModelFeatureFGFeatureResponseBody& setFGCheckResults(const vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults> & fGCheckResults) { DARABONBA_PTR_SET_VALUE(FGCheckResults_, fGCheckResults) };
    inline CheckModelFeatureFGFeatureResponseBody& setFGCheckResults(vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults> && fGCheckResults) { DARABONBA_PTR_SET_RVALUE(FGCheckResults_, fGCheckResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckModelFeatureFGFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<CheckModelFeatureFGFeatureResponseBody::FGCheckResults>> FGCheckResults_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
