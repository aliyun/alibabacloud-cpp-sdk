// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKNOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRISKNOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetRiskNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(riskCode, riskCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(riskCode, riskCode_);
    };
    GetRiskNotificationRequest() = default ;
    GetRiskNotificationRequest(const GetRiskNotificationRequest &) = default ;
    GetRiskNotificationRequest(GetRiskNotificationRequest &&) = default ;
    GetRiskNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskNotificationRequest() = default ;
    GetRiskNotificationRequest& operator=(const GetRiskNotificationRequest &) = default ;
    GetRiskNotificationRequest& operator=(GetRiskNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskCode_ == nullptr; };
    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline GetRiskNotificationRequest& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> riskCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
