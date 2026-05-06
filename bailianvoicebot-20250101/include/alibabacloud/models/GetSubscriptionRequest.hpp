// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GetSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
    };
    GetSubscriptionRequest() = default ;
    GetSubscriptionRequest(const GetSubscriptionRequest &) = default ;
    GetSubscriptionRequest(GetSubscriptionRequest &&) = default ;
    GetSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionRequest() = default ;
    GetSubscriptionRequest& operator=(const GetSubscriptionRequest &) = default ;
    GetSubscriptionRequest& operator=(GetSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline GetSubscriptionRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


  protected:
    shared_ptr<string> businessUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
