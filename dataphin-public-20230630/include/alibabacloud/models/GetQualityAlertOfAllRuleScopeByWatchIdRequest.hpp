// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYALERTOFALLRULESCOPEBYWATCHIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYALERTOFALLRULESCOPEBYWATCHIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetQualityAlertOfAllRuleScopeByWatchIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityAlertOfAllRuleScopeByWatchIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(WatchId, watchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityAlertOfAllRuleScopeByWatchIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
    };
    GetQualityAlertOfAllRuleScopeByWatchIdRequest() = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdRequest(const GetQualityAlertOfAllRuleScopeByWatchIdRequest &) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdRequest(GetQualityAlertOfAllRuleScopeByWatchIdRequest &&) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityAlertOfAllRuleScopeByWatchIdRequest() = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdRequest& operator=(const GetQualityAlertOfAllRuleScopeByWatchIdRequest &) = default ;
    GetQualityAlertOfAllRuleScopeByWatchIdRequest& operator=(GetQualityAlertOfAllRuleScopeByWatchIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->watchId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // watchId Field Functions 
    bool hasWatchId() const { return this->watchId_ != nullptr;};
    void deleteWatchId() { this->watchId_ = nullptr;};
    inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
    inline GetQualityAlertOfAllRuleScopeByWatchIdRequest& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<int64_t> watchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
