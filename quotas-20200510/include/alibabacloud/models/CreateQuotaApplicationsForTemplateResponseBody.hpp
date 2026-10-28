// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class CreateQuotaApplicationsForTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQuotaApplicationsForTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_TO_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_TO_JSON(FailResults, failResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQuotaApplicationsForTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUids, aliyunUids_);
      DARABONBA_PTR_FROM_JSON(BatchQuotaApplicationId, batchQuotaApplicationId_);
      DARABONBA_PTR_FROM_JSON(FailResults, failResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateQuotaApplicationsForTemplateResponseBody() = default ;
    CreateQuotaApplicationsForTemplateResponseBody(const CreateQuotaApplicationsForTemplateResponseBody &) = default ;
    CreateQuotaApplicationsForTemplateResponseBody(CreateQuotaApplicationsForTemplateResponseBody &&) = default ;
    CreateQuotaApplicationsForTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQuotaApplicationsForTemplateResponseBody() = default ;
    CreateQuotaApplicationsForTemplateResponseBody& operator=(const CreateQuotaApplicationsForTemplateResponseBody &) = default ;
    CreateQuotaApplicationsForTemplateResponseBody& operator=(CreateQuotaApplicationsForTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailResults& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, FailResults& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
      };
      FailResults() = default ;
      FailResults(const FailResults &) = default ;
      FailResults(FailResults &&) = default ;
      FailResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailResults() = default ;
      FailResults& operator=(const FailResults &) = default ;
      FailResults& operator=(FailResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->reason_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline FailResults& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline FailResults& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // The Alibaba Cloud account that belongs to the resource directory member for which the quota application failed.
      shared_ptr<string> aliyunUid_ {};
      // The reason for the failure.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->aliyunUids_ == nullptr
        && this->batchQuotaApplicationId_ == nullptr && this->failResults_ == nullptr && this->requestId_ == nullptr; };
    // aliyunUids Field Functions 
    bool hasAliyunUids() const { return this->aliyunUids_ != nullptr;};
    void deleteAliyunUids() { this->aliyunUids_ = nullptr;};
    inline const vector<string> & getAliyunUids() const { DARABONBA_PTR_GET_CONST(aliyunUids_, vector<string>) };
    inline vector<string> getAliyunUids() { DARABONBA_PTR_GET(aliyunUids_, vector<string>) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setAliyunUids(const vector<string> & aliyunUids) { DARABONBA_PTR_SET_VALUE(aliyunUids_, aliyunUids) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setAliyunUids(vector<string> && aliyunUids) { DARABONBA_PTR_SET_RVALUE(aliyunUids_, aliyunUids) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string getBatchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBody& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // failResults Field Functions 
    bool hasFailResults() const { return this->failResults_ != nullptr;};
    void deleteFailResults() { this->failResults_ = nullptr;};
    inline const vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults> & getFailResults() const { DARABONBA_PTR_GET_CONST(failResults_, vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults>) };
    inline vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults> getFailResults() { DARABONBA_PTR_GET(failResults_, vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults>) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setFailResults(const vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults> & failResults) { DARABONBA_PTR_SET_VALUE(failResults_, failResults) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setFailResults(vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults> && failResults) { DARABONBA_PTR_SET_RVALUE(failResults_, failResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of Alibaba Cloud accounts that belong to the resource directory members for which quotas are applied.
    shared_ptr<vector<string>> aliyunUids_ {};
    // The batch ID of the quota application.
    shared_ptr<string> batchQuotaApplicationId_ {};
    // The list of Alibaba Cloud accounts that belong to the resource directory members for which quota applications failed and the reasons for the failures.
    shared_ptr<vector<CreateQuotaApplicationsForTemplateResponseBody::FailResults>> failResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
