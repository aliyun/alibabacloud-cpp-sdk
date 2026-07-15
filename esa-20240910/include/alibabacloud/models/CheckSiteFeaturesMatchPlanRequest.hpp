// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSITEFEATURESMATCHPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSITEFEATURESMATCHPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CheckSiteFeaturesMatchPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSiteFeaturesMatchPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewInstanceId, newInstanceId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSiteFeaturesMatchPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewInstanceId, newInstanceId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CheckSiteFeaturesMatchPlanRequest() = default ;
    CheckSiteFeaturesMatchPlanRequest(const CheckSiteFeaturesMatchPlanRequest &) = default ;
    CheckSiteFeaturesMatchPlanRequest(CheckSiteFeaturesMatchPlanRequest &&) = default ;
    CheckSiteFeaturesMatchPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSiteFeaturesMatchPlanRequest() = default ;
    CheckSiteFeaturesMatchPlanRequest& operator=(const CheckSiteFeaturesMatchPlanRequest &) = default ;
    CheckSiteFeaturesMatchPlanRequest& operator=(CheckSiteFeaturesMatchPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newInstanceId_ == nullptr
        && this->siteId_ == nullptr; };
    // newInstanceId Field Functions 
    bool hasNewInstanceId() const { return this->newInstanceId_ != nullptr;};
    void deleteNewInstanceId() { this->newInstanceId_ = nullptr;};
    inline string getNewInstanceId() const { DARABONBA_PTR_GET_DEFAULT(newInstanceId_, "") };
    inline CheckSiteFeaturesMatchPlanRequest& setNewInstanceId(string newInstanceId) { DARABONBA_PTR_SET_VALUE(newInstanceId_, newInstanceId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CheckSiteFeaturesMatchPlanRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The target instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> newInstanceId_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
