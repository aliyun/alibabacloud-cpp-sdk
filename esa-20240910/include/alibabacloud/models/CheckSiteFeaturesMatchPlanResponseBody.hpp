// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSITEFEATURESMATCHPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSITEFEATURESMATCHPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckSiteFeaturesMatchPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSiteFeaturesMatchPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsPassed, isPassed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnPassedSiteQuotas, unPassedSiteQuotas_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSiteFeaturesMatchPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsPassed, isPassed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnPassedSiteQuotas, unPassedSiteQuotas_);
    };
    CheckSiteFeaturesMatchPlanResponseBody() = default ;
    CheckSiteFeaturesMatchPlanResponseBody(const CheckSiteFeaturesMatchPlanResponseBody &) = default ;
    CheckSiteFeaturesMatchPlanResponseBody(CheckSiteFeaturesMatchPlanResponseBody &&) = default ;
    CheckSiteFeaturesMatchPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSiteFeaturesMatchPlanResponseBody() = default ;
    CheckSiteFeaturesMatchPlanResponseBody& operator=(const CheckSiteFeaturesMatchPlanResponseBody &) = default ;
    CheckSiteFeaturesMatchPlanResponseBody& operator=(CheckSiteFeaturesMatchPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UnPassedSiteQuotas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UnPassedSiteQuotas& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentQuotaValue, currentQuotaValue_);
        DARABONBA_PTR_TO_JSON(DestQuotaValue, destQuotaValue_);
        DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      };
      friend void from_json(const Darabonba::Json& j, UnPassedSiteQuotas& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentQuotaValue, currentQuotaValue_);
        DARABONBA_PTR_FROM_JSON(DestQuotaValue, destQuotaValue_);
        DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      };
      UnPassedSiteQuotas() = default ;
      UnPassedSiteQuotas(const UnPassedSiteQuotas &) = default ;
      UnPassedSiteQuotas(UnPassedSiteQuotas &&) = default ;
      UnPassedSiteQuotas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UnPassedSiteQuotas() = default ;
      UnPassedSiteQuotas& operator=(const UnPassedSiteQuotas &) = default ;
      UnPassedSiteQuotas& operator=(UnPassedSiteQuotas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentQuotaValue_ == nullptr
        && this->destQuotaValue_ == nullptr && this->quotaName_ == nullptr; };
      // currentQuotaValue Field Functions 
      bool hasCurrentQuotaValue() const { return this->currentQuotaValue_ != nullptr;};
      void deleteCurrentQuotaValue() { this->currentQuotaValue_ = nullptr;};
      inline string getCurrentQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(currentQuotaValue_, "") };
      inline UnPassedSiteQuotas& setCurrentQuotaValue(string currentQuotaValue) { DARABONBA_PTR_SET_VALUE(currentQuotaValue_, currentQuotaValue) };


      // destQuotaValue Field Functions 
      bool hasDestQuotaValue() const { return this->destQuotaValue_ != nullptr;};
      void deleteDestQuotaValue() { this->destQuotaValue_ = nullptr;};
      inline string getDestQuotaValue() const { DARABONBA_PTR_GET_DEFAULT(destQuotaValue_, "") };
      inline UnPassedSiteQuotas& setDestQuotaValue(string destQuotaValue) { DARABONBA_PTR_SET_VALUE(destQuotaValue_, destQuotaValue) };


      // quotaName Field Functions 
      bool hasQuotaName() const { return this->quotaName_ != nullptr;};
      void deleteQuotaName() { this->quotaName_ = nullptr;};
      inline string getQuotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
      inline UnPassedSiteQuotas& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    protected:
      // The quota value of the current site.
      shared_ptr<string> currentQuotaValue_ {};
      // The quota value of the target instance.
      shared_ptr<string> destQuotaValue_ {};
      // The quota name.
      shared_ptr<string> quotaName_ {};
    };

    virtual bool empty() const override { return this->isPassed_ == nullptr
        && this->requestId_ == nullptr && this->unPassedSiteQuotas_ == nullptr; };
    // isPassed Field Functions 
    bool hasIsPassed() const { return this->isPassed_ != nullptr;};
    void deleteIsPassed() { this->isPassed_ = nullptr;};
    inline bool getIsPassed() const { DARABONBA_PTR_GET_DEFAULT(isPassed_, false) };
    inline CheckSiteFeaturesMatchPlanResponseBody& setIsPassed(bool isPassed) { DARABONBA_PTR_SET_VALUE(isPassed_, isPassed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckSiteFeaturesMatchPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unPassedSiteQuotas Field Functions 
    bool hasUnPassedSiteQuotas() const { return this->unPassedSiteQuotas_ != nullptr;};
    void deleteUnPassedSiteQuotas() { this->unPassedSiteQuotas_ = nullptr;};
    inline const vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas> & getUnPassedSiteQuotas() const { DARABONBA_PTR_GET_CONST(unPassedSiteQuotas_, vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas>) };
    inline vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas> getUnPassedSiteQuotas() { DARABONBA_PTR_GET(unPassedSiteQuotas_, vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas>) };
    inline CheckSiteFeaturesMatchPlanResponseBody& setUnPassedSiteQuotas(const vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas> & unPassedSiteQuotas) { DARABONBA_PTR_SET_VALUE(unPassedSiteQuotas_, unPassedSiteQuotas) };
    inline CheckSiteFeaturesMatchPlanResponseBody& setUnPassedSiteQuotas(vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas> && unPassedSiteQuotas) { DARABONBA_PTR_SET_RVALUE(unPassedSiteQuotas_, unPassedSiteQuotas) };


  protected:
    // Indicates whether the features of the current site are compatible with the target instance.
    shared_ptr<bool> isPassed_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about site quotas that do not meet the requirements.
    shared_ptr<vector<CheckSiteFeaturesMatchPlanResponseBody::UnPassedSiteQuotas>> unPassedSiteQuotas_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
