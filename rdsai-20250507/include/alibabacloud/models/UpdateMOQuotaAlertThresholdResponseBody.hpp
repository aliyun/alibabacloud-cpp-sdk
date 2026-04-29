// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateMOQuotaAlertThresholdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMOQuotaAlertThresholdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMOQuotaAlertThresholdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateMOQuotaAlertThresholdResponseBody() = default ;
    UpdateMOQuotaAlertThresholdResponseBody(const UpdateMOQuotaAlertThresholdResponseBody &) = default ;
    UpdateMOQuotaAlertThresholdResponseBody(UpdateMOQuotaAlertThresholdResponseBody &&) = default ;
    UpdateMOQuotaAlertThresholdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMOQuotaAlertThresholdResponseBody() = default ;
    UpdateMOQuotaAlertThresholdResponseBody& operator=(const UpdateMOQuotaAlertThresholdResponseBody &) = default ;
    UpdateMOQuotaAlertThresholdResponseBody& operator=(UpdateMOQuotaAlertThresholdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Apikey, apikey_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(KeyType, keyType_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Apikey, apikey_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apikey_ == nullptr
        && this->instanceId_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr && this->thresholdPercent_ == nullptr; };
      // apikey Field Functions 
      bool hasApikey() const { return this->apikey_ != nullptr;};
      void deleteApikey() { this->apikey_ = nullptr;};
      inline string getApikey() const { DARABONBA_PTR_GET_DEFAULT(apikey_, "") };
      inline Results& setApikey(string apikey) { DARABONBA_PTR_SET_VALUE(apikey_, apikey) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Results& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline Results& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // keyType Field Functions 
      bool hasKeyType() const { return this->keyType_ != nullptr;};
      void deleteKeyType() { this->keyType_ = nullptr;};
      inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
      inline Results& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline int32_t getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0) };
      inline Results& setThresholdPercent(int32_t thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    protected:
      // API Key
      shared_ptr<string> apikey_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> keyName_ {};
      shared_ptr<string> keyType_ {};
      shared_ptr<int32_t> thresholdPercent_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMOQuotaAlertThresholdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<UpdateMOQuotaAlertThresholdResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<UpdateMOQuotaAlertThresholdResponseBody::Results>) };
    inline vector<UpdateMOQuotaAlertThresholdResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<UpdateMOQuotaAlertThresholdResponseBody::Results>) };
    inline UpdateMOQuotaAlertThresholdResponseBody& setResults(const vector<UpdateMOQuotaAlertThresholdResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline UpdateMOQuotaAlertThresholdResponseBody& setResults(vector<UpdateMOQuotaAlertThresholdResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateMOQuotaAlertThresholdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<UpdateMOQuotaAlertThresholdResponseBody::Results>> results_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
