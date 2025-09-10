// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUOTAAPPLICATIONSFORTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateQuotaApplicationsForTemplateResponseBodyFailResults.hpp>
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
    virtual bool empty() const override { this->aliyunUids_ != nullptr
        && this->batchQuotaApplicationId_ != nullptr && this->failResults_ != nullptr && this->requestId_ != nullptr; };
    // aliyunUids Field Functions 
    bool hasAliyunUids() const { return this->aliyunUids_ != nullptr;};
    void deleteAliyunUids() { this->aliyunUids_ = nullptr;};
    inline const vector<string> & aliyunUids() const { DARABONBA_PTR_GET_CONST(aliyunUids_, vector<string>) };
    inline vector<string> aliyunUids() { DARABONBA_PTR_GET(aliyunUids_, vector<string>) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setAliyunUids(const vector<string> & aliyunUids) { DARABONBA_PTR_SET_VALUE(aliyunUids_, aliyunUids) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setAliyunUids(vector<string> && aliyunUids) { DARABONBA_PTR_SET_RVALUE(aliyunUids_, aliyunUids) };


    // batchQuotaApplicationId Field Functions 
    bool hasBatchQuotaApplicationId() const { return this->batchQuotaApplicationId_ != nullptr;};
    void deleteBatchQuotaApplicationId() { this->batchQuotaApplicationId_ = nullptr;};
    inline string batchQuotaApplicationId() const { DARABONBA_PTR_GET_DEFAULT(batchQuotaApplicationId_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBody& setBatchQuotaApplicationId(string batchQuotaApplicationId) { DARABONBA_PTR_SET_VALUE(batchQuotaApplicationId_, batchQuotaApplicationId) };


    // failResults Field Functions 
    bool hasFailResults() const { return this->failResults_ != nullptr;};
    void deleteFailResults() { this->failResults_ = nullptr;};
    inline const vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults> & failResults() const { DARABONBA_PTR_GET_CONST(failResults_, vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults>) };
    inline vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults> failResults() { DARABONBA_PTR_GET(failResults_, vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults>) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setFailResults(const vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults> & failResults) { DARABONBA_PTR_SET_VALUE(failResults_, failResults) };
    inline CreateQuotaApplicationsForTemplateResponseBody& setFailResults(vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults> && failResults) { DARABONBA_PTR_SET_RVALUE(failResults_, failResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQuotaApplicationsForTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Alibaba Cloud accounts for which the quotas are applied.
    std::shared_ptr<vector<string>> aliyunUids_ = nullptr;
    // The ID of the quota application batch.
    std::shared_ptr<string> batchQuotaApplicationId_ = nullptr;
    // The Alibaba Cloud accounts of the members in a resource directory whose quota increase request is rejected, and the reason for the rejection.
    std::shared_ptr<vector<CreateQuotaApplicationsForTemplateResponseBodyFailResults>> failResults_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
