// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCSIGNININFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCSIGNININFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class SyncSignInInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncSignInInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(QRCode, QRCode_);
    };
    friend void from_json(const Darabonba::Json& j, SyncSignInInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(QRCode, QRCode_);
    };
    SyncSignInInfoRequest() = default ;
    SyncSignInInfoRequest(const SyncSignInInfoRequest &) = default ;
    SyncSignInInfoRequest(SyncSignInInfoRequest &&) = default ;
    SyncSignInInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncSignInInfoRequest() = default ;
    SyncSignInInfoRequest& operator=(const SyncSignInInfoRequest &) = default ;
    SyncSignInInfoRequest& operator=(SyncSignInInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->QRCode_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline SyncSignInInfoRequest& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // QRCode Field Functions 
    bool hasQRCode() const { return this->QRCode_ != nullptr;};
    void deleteQRCode() { this->QRCode_ = nullptr;};
    inline string QRCode() const { DARABONBA_PTR_GET_DEFAULT(QRCode_, "") };
    inline SyncSignInInfoRequest& setQRCode(string QRCode) { DARABONBA_PTR_SET_VALUE(QRCode_, QRCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> activityId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> QRCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
