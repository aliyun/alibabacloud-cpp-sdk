// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCANRESULTFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCANRESULTFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateScanResultFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScanResultFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScanResultFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    UpdateScanResultFeedbackRequest() = default ;
    UpdateScanResultFeedbackRequest(const UpdateScanResultFeedbackRequest &) = default ;
    UpdateScanResultFeedbackRequest(UpdateScanResultFeedbackRequest &&) = default ;
    UpdateScanResultFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScanResultFeedbackRequest() = default ;
    UpdateScanResultFeedbackRequest& operator=(const UpdateScanResultFeedbackRequest &) = default ;
    UpdateScanResultFeedbackRequest& operator=(UpdateScanResultFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feedback_ == nullptr
        && this->labels_ == nullptr && this->queryRequestId_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->riskLevel_ == nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline UpdateScanResultFeedbackRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline UpdateScanResultFeedbackRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // queryRequestId Field Functions 
    bool hasQueryRequestId() const { return this->queryRequestId_ != nullptr;};
    void deleteQueryRequestId() { this->queryRequestId_ = nullptr;};
    inline string getQueryRequestId() const { DARABONBA_PTR_GET_DEFAULT(queryRequestId_, "") };
    inline UpdateScanResultFeedbackRequest& setQueryRequestId(string queryRequestId) { DARABONBA_PTR_SET_VALUE(queryRequestId_, queryRequestId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateScanResultFeedbackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateScanResultFeedbackRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline UpdateScanResultFeedbackRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // Feedback
    shared_ptr<string> feedback_ {};
    // Labels.
    shared_ptr<string> labels_ {};
    // Request ID
    shared_ptr<string> queryRequestId_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Resource Type
    shared_ptr<string> resourceType_ {};
    // Risk Level
    shared_ptr<string> riskLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
