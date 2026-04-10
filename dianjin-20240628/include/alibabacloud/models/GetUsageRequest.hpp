// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(redemptionOrderNo, redemptionOrderNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(externalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(redemptionOrderNo, redemptionOrderNo_);
    };
    GetUsageRequest() = default ;
    GetUsageRequest(const GetUsageRequest &) = default ;
    GetUsageRequest(GetUsageRequest &&) = default ;
    GetUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUsageRequest() = default ;
    GetUsageRequest& operator=(const GetUsageRequest &) = default ;
    GetUsageRequest& operator=(GetUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr
        && this->redemptionOrderNo_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline GetUsageRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // redemptionOrderNo Field Functions 
    bool hasRedemptionOrderNo() const { return this->redemptionOrderNo_ != nullptr;};
    void deleteRedemptionOrderNo() { this->redemptionOrderNo_ = nullptr;};
    inline string getRedemptionOrderNo() const { DARABONBA_PTR_GET_DEFAULT(redemptionOrderNo_, "") };
    inline GetUsageRequest& setRedemptionOrderNo(string redemptionOrderNo) { DARABONBA_PTR_SET_VALUE(redemptionOrderNo_, redemptionOrderNo) };


  protected:
    shared_ptr<string> externalUserId_ {};
    shared_ptr<string> redemptionOrderNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
