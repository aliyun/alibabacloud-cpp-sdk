// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEACCOUNTCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEACCOUNTCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class GetYikeAccountCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeAccountCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreditInfo, creditInfo_);
      DARABONBA_PTR_TO_JSON(MembershipInfo, membershipInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeAccountCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditInfo, creditInfo_);
      DARABONBA_PTR_FROM_JSON(MembershipInfo, membershipInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetYikeAccountCreditResponseBody() = default ;
    GetYikeAccountCreditResponseBody(const GetYikeAccountCreditResponseBody &) = default ;
    GetYikeAccountCreditResponseBody(GetYikeAccountCreditResponseBody &&) = default ;
    GetYikeAccountCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeAccountCreditResponseBody() = default ;
    GetYikeAccountCreditResponseBody& operator=(const GetYikeAccountCreditResponseBody &) = default ;
    GetYikeAccountCreditResponseBody& operator=(GetYikeAccountCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MembershipInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MembershipInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Membership, membership_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, MembershipInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Membership, membership_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      MembershipInfo() = default ;
      MembershipInfo(const MembershipInfo &) = default ;
      MembershipInfo(MembershipInfo &&) = default ;
      MembershipInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MembershipInfo() = default ;
      MembershipInfo& operator=(const MembershipInfo &) = default ;
      MembershipInfo& operator=(MembershipInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->membership_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline MembershipInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // membership Field Functions 
      bool hasMembership() const { return this->membership_ != nullptr;};
      void deleteMembership() { this->membership_ = nullptr;};
      inline string getMembership() const { DARABONBA_PTR_GET_DEFAULT(membership_, "") };
      inline MembershipInfo& setMembership(string membership) { DARABONBA_PTR_SET_VALUE(membership_, membership) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline MembershipInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The end time.
      shared_ptr<string> endTime_ {};
      // The membership level. Valid values:
      // 
      // - basic: Basic Edition.
      // - standard: Standard Edition.
      // - professional: Ultimate Edition.
      // - ultra: Ultra Edition.
      shared_ptr<string> membership_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
    };

    class CreditInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreditInfo& obj) { 
        DARABONBA_PTR_TO_JSON(GrantedCreditQuota, grantedCreditQuota_);
        DARABONBA_PTR_TO_JSON(GrantedCreditQuotaUsage, grantedCreditQuotaUsage_);
        DARABONBA_PTR_TO_JSON(PackCreditQuota, packCreditQuota_);
        DARABONBA_PTR_TO_JSON(PackCreditQuotaUsage, packCreditQuotaUsage_);
        DARABONBA_PTR_TO_JSON(ResourceCreditQuota, resourceCreditQuota_);
        DARABONBA_PTR_TO_JSON(ResourceCreditQuotaUsage, resourceCreditQuotaUsage_);
      };
      friend void from_json(const Darabonba::Json& j, CreditInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantedCreditQuota, grantedCreditQuota_);
        DARABONBA_PTR_FROM_JSON(GrantedCreditQuotaUsage, grantedCreditQuotaUsage_);
        DARABONBA_PTR_FROM_JSON(PackCreditQuota, packCreditQuota_);
        DARABONBA_PTR_FROM_JSON(PackCreditQuotaUsage, packCreditQuotaUsage_);
        DARABONBA_PTR_FROM_JSON(ResourceCreditQuota, resourceCreditQuota_);
        DARABONBA_PTR_FROM_JSON(ResourceCreditQuotaUsage, resourceCreditQuotaUsage_);
      };
      CreditInfo() = default ;
      CreditInfo(const CreditInfo &) = default ;
      CreditInfo(CreditInfo &&) = default ;
      CreditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreditInfo() = default ;
      CreditInfo& operator=(const CreditInfo &) = default ;
      CreditInfo& operator=(CreditInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->grantedCreditQuota_ == nullptr
        && this->grantedCreditQuotaUsage_ == nullptr && this->packCreditQuota_ == nullptr && this->packCreditQuotaUsage_ == nullptr && this->resourceCreditQuota_ == nullptr && this->resourceCreditQuotaUsage_ == nullptr; };
      // grantedCreditQuota Field Functions 
      bool hasGrantedCreditQuota() const { return this->grantedCreditQuota_ != nullptr;};
      void deleteGrantedCreditQuota() { this->grantedCreditQuota_ = nullptr;};
      inline double getGrantedCreditQuota() const { DARABONBA_PTR_GET_DEFAULT(grantedCreditQuota_, 0.0) };
      inline CreditInfo& setGrantedCreditQuota(double grantedCreditQuota) { DARABONBA_PTR_SET_VALUE(grantedCreditQuota_, grantedCreditQuota) };


      // grantedCreditQuotaUsage Field Functions 
      bool hasGrantedCreditQuotaUsage() const { return this->grantedCreditQuotaUsage_ != nullptr;};
      void deleteGrantedCreditQuotaUsage() { this->grantedCreditQuotaUsage_ = nullptr;};
      inline double getGrantedCreditQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(grantedCreditQuotaUsage_, 0.0) };
      inline CreditInfo& setGrantedCreditQuotaUsage(double grantedCreditQuotaUsage) { DARABONBA_PTR_SET_VALUE(grantedCreditQuotaUsage_, grantedCreditQuotaUsage) };


      // packCreditQuota Field Functions 
      bool hasPackCreditQuota() const { return this->packCreditQuota_ != nullptr;};
      void deletePackCreditQuota() { this->packCreditQuota_ = nullptr;};
      inline double getPackCreditQuota() const { DARABONBA_PTR_GET_DEFAULT(packCreditQuota_, 0.0) };
      inline CreditInfo& setPackCreditQuota(double packCreditQuota) { DARABONBA_PTR_SET_VALUE(packCreditQuota_, packCreditQuota) };


      // packCreditQuotaUsage Field Functions 
      bool hasPackCreditQuotaUsage() const { return this->packCreditQuotaUsage_ != nullptr;};
      void deletePackCreditQuotaUsage() { this->packCreditQuotaUsage_ = nullptr;};
      inline double getPackCreditQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(packCreditQuotaUsage_, 0.0) };
      inline CreditInfo& setPackCreditQuotaUsage(double packCreditQuotaUsage) { DARABONBA_PTR_SET_VALUE(packCreditQuotaUsage_, packCreditQuotaUsage) };


      // resourceCreditQuota Field Functions 
      bool hasResourceCreditQuota() const { return this->resourceCreditQuota_ != nullptr;};
      void deleteResourceCreditQuota() { this->resourceCreditQuota_ = nullptr;};
      inline double getResourceCreditQuota() const { DARABONBA_PTR_GET_DEFAULT(resourceCreditQuota_, 0.0) };
      inline CreditInfo& setResourceCreditQuota(double resourceCreditQuota) { DARABONBA_PTR_SET_VALUE(resourceCreditQuota_, resourceCreditQuota) };


      // resourceCreditQuotaUsage Field Functions 
      bool hasResourceCreditQuotaUsage() const { return this->resourceCreditQuotaUsage_ != nullptr;};
      void deleteResourceCreditQuotaUsage() { this->resourceCreditQuotaUsage_ = nullptr;};
      inline double getResourceCreditQuotaUsage() const { DARABONBA_PTR_GET_DEFAULT(resourceCreditQuotaUsage_, 0.0) };
      inline CreditInfo& setResourceCreditQuotaUsage(double resourceCreditQuotaUsage) { DARABONBA_PTR_SET_VALUE(resourceCreditQuotaUsage_, resourceCreditQuotaUsage) };


    protected:
      // The total granted credits.
      shared_ptr<double> grantedCreditQuota_ {};
      // The remaining granted credits.
      shared_ptr<double> grantedCreditQuotaUsage_ {};
      // The total credits of the booster pack.
      shared_ptr<double> packCreditQuota_ {};
      // The remaining credits of the booster pack.
      shared_ptr<double> packCreditQuotaUsage_ {};
      // The total credits of the membership plan.
      shared_ptr<double> resourceCreditQuota_ {};
      // The remaining credits of the membership plan.
      shared_ptr<double> resourceCreditQuotaUsage_ {};
    };

    virtual bool empty() const override { return this->creditInfo_ == nullptr
        && this->membershipInfo_ == nullptr && this->requestId_ == nullptr; };
    // creditInfo Field Functions 
    bool hasCreditInfo() const { return this->creditInfo_ != nullptr;};
    void deleteCreditInfo() { this->creditInfo_ = nullptr;};
    inline const GetYikeAccountCreditResponseBody::CreditInfo & getCreditInfo() const { DARABONBA_PTR_GET_CONST(creditInfo_, GetYikeAccountCreditResponseBody::CreditInfo) };
    inline GetYikeAccountCreditResponseBody::CreditInfo getCreditInfo() { DARABONBA_PTR_GET(creditInfo_, GetYikeAccountCreditResponseBody::CreditInfo) };
    inline GetYikeAccountCreditResponseBody& setCreditInfo(const GetYikeAccountCreditResponseBody::CreditInfo & creditInfo) { DARABONBA_PTR_SET_VALUE(creditInfo_, creditInfo) };
    inline GetYikeAccountCreditResponseBody& setCreditInfo(GetYikeAccountCreditResponseBody::CreditInfo && creditInfo) { DARABONBA_PTR_SET_RVALUE(creditInfo_, creditInfo) };


    // membershipInfo Field Functions 
    bool hasMembershipInfo() const { return this->membershipInfo_ != nullptr;};
    void deleteMembershipInfo() { this->membershipInfo_ = nullptr;};
    inline const GetYikeAccountCreditResponseBody::MembershipInfo & getMembershipInfo() const { DARABONBA_PTR_GET_CONST(membershipInfo_, GetYikeAccountCreditResponseBody::MembershipInfo) };
    inline GetYikeAccountCreditResponseBody::MembershipInfo getMembershipInfo() { DARABONBA_PTR_GET(membershipInfo_, GetYikeAccountCreditResponseBody::MembershipInfo) };
    inline GetYikeAccountCreditResponseBody& setMembershipInfo(const GetYikeAccountCreditResponseBody::MembershipInfo & membershipInfo) { DARABONBA_PTR_SET_VALUE(membershipInfo_, membershipInfo) };
    inline GetYikeAccountCreditResponseBody& setMembershipInfo(GetYikeAccountCreditResponseBody::MembershipInfo && membershipInfo) { DARABONBA_PTR_SET_RVALUE(membershipInfo_, membershipInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetYikeAccountCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The credit information.
    shared_ptr<GetYikeAccountCreditResponseBody::CreditInfo> creditInfo_ {};
    // The membership information.
    shared_ptr<GetYikeAccountCreditResponseBody::MembershipInfo> membershipInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
