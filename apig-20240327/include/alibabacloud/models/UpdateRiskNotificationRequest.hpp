// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERISKNOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERISKNOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateRiskNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRiskNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isMute, isMute_);
      DARABONBA_PTR_TO_JSON(riskCode, riskCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRiskNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isMute, isMute_);
      DARABONBA_PTR_FROM_JSON(riskCode, riskCode_);
    };
    UpdateRiskNotificationRequest() = default ;
    UpdateRiskNotificationRequest(const UpdateRiskNotificationRequest &) = default ;
    UpdateRiskNotificationRequest(UpdateRiskNotificationRequest &&) = default ;
    UpdateRiskNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRiskNotificationRequest() = default ;
    UpdateRiskNotificationRequest& operator=(const UpdateRiskNotificationRequest &) = default ;
    UpdateRiskNotificationRequest& operator=(UpdateRiskNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isMute_ == nullptr
        && this->riskCode_ == nullptr; };
    // isMute Field Functions 
    bool hasIsMute() const { return this->isMute_ != nullptr;};
    void deleteIsMute() { this->isMute_ = nullptr;};
    inline bool getIsMute() const { DARABONBA_PTR_GET_DEFAULT(isMute_, false) };
    inline UpdateRiskNotificationRequest& setIsMute(bool isMute) { DARABONBA_PTR_SET_VALUE(isMute_, isMute) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline UpdateRiskNotificationRequest& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


  protected:
    shared_ptr<bool> isMute_ {};
    shared_ptr<string> riskCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
