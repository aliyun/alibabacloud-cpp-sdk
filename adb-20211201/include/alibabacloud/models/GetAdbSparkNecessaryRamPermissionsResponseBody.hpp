// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADBSPARKNECESSARYRAMPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetADBSparkNecessaryRAMPermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetADBSparkNecessaryRAMPermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetADBSparkNecessaryRAMPermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetADBSparkNecessaryRAMPermissionsResponseBody() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBody(const GetADBSparkNecessaryRAMPermissionsResponseBody &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBody(GetADBSparkNecessaryRAMPermissionsResponseBody &&) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetADBSparkNecessaryRAMPermissionsResponseBody() = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBody& operator=(const GetADBSparkNecessaryRAMPermissionsResponseBody &) = default ;
    GetADBSparkNecessaryRAMPermissionsResponseBody& operator=(GetADBSparkNecessaryRAMPermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeniedDetail, deniedDetail_);
        DARABONBA_PTR_TO_JSON(Passed, passed_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeniedDetail, deniedDetail_);
        DARABONBA_PTR_FROM_JSON(Passed, passed_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeniedDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeniedDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
          DARABONBA_PTR_TO_JSON(ResourceAuthTargetInfo, resourceAuthTargetInfo_);
          DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        };
        friend void from_json(const Darabonba::Json& j, DeniedDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
          DARABONBA_PTR_FROM_JSON(ResourceAuthTargetInfo, resourceAuthTargetInfo_);
          DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        };
        DeniedDetail() = default ;
        DeniedDetail(const DeniedDetail &) = default ;
        DeniedDetail(DeniedDetail &&) = default ;
        DeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeniedDetail() = default ;
        DeniedDetail& operator=(const DeniedDetail &) = default ;
        DeniedDetail& operator=(DeniedDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->noPermissionType_ == nullptr && this->policyType_ == nullptr && this->principalType_ == nullptr && this->resourceAuthTargetInfo_ == nullptr && this->resourceOwnerId_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DeniedDetail& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // noPermissionType Field Functions 
        bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
        void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
        inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
        inline DeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline DeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline DeniedDetail& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


        // resourceAuthTargetInfo Field Functions 
        bool hasResourceAuthTargetInfo() const { return this->resourceAuthTargetInfo_ != nullptr;};
        void deleteResourceAuthTargetInfo() { this->resourceAuthTargetInfo_ = nullptr;};
        inline string getResourceAuthTargetInfo() const { DARABONBA_PTR_GET_DEFAULT(resourceAuthTargetInfo_, "") };
        inline DeniedDetail& setResourceAuthTargetInfo(string resourceAuthTargetInfo) { DARABONBA_PTR_SET_VALUE(resourceAuthTargetInfo_, resourceAuthTargetInfo) };


        // resourceOwnerId Field Functions 
        bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
        void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
        inline string getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
        inline DeniedDetail& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      protected:
        // The name of the RAM action that failed the authentication.
        shared_ptr<string> action_ {};
        // The type of the policy denial. Valid values:
        // 
        // *   ImplicitDeny: Resource owner has not configured relevant permission policies for the current user, default denial of unauthorized operations.
        // *   ExplicitDeny: RAM policies configured by the resource owner explicitly deny the current user access to corresponding resources
        shared_ptr<string> noPermissionType_ {};
        // The type of the policy that causes the access denied error.
        // 
        // *   ControlPolicy: control policy
        // *   SessionPolicy: Temporary Token additional permission policy
        // *   AssumeRolePolicy: RAM role trust policy
        // *   AccountLevelIdentityBasedPolicy: Principal policy within account authorization scope, including custom policies and system policies
        // *   ResourceGroupLevelIdentityBasedPolicy: Principal policy within resource group authorization scope, including custom policies and system policies.
        shared_ptr<string> policyType_ {};
        // The identity type of the current user. Valid values:
        // 
        // *   SubUser: a RAM user
        // *   AssumedRoleUser: a RAM role
        shared_ptr<string> principalType_ {};
        // Authentication object information, can be the current user\\"s RAM account ID, or the role information corresponding to the current visitor.
        shared_ptr<string> resourceAuthTargetInfo_ {};
        // The ID of the resource owner.
        shared_ptr<string> resourceOwnerId_ {};
      };

      virtual bool empty() const override { return this->deniedDetail_ == nullptr
        && this->passed_ == nullptr && this->suggestion_ == nullptr; };
      // deniedDetail Field Functions 
      bool hasDeniedDetail() const { return this->deniedDetail_ != nullptr;};
      void deleteDeniedDetail() { this->deniedDetail_ = nullptr;};
      inline const Data::DeniedDetail & getDeniedDetail() const { DARABONBA_PTR_GET_CONST(deniedDetail_, Data::DeniedDetail) };
      inline Data::DeniedDetail getDeniedDetail() { DARABONBA_PTR_GET(deniedDetail_, Data::DeniedDetail) };
      inline Data& setDeniedDetail(const Data::DeniedDetail & deniedDetail) { DARABONBA_PTR_SET_VALUE(deniedDetail_, deniedDetail) };
      inline Data& setDeniedDetail(Data::DeniedDetail && deniedDetail) { DARABONBA_PTR_SET_RVALUE(deniedDetail_, deniedDetail) };


      // passed Field Functions 
      bool hasPassed() const { return this->passed_ != nullptr;};
      void deletePassed() { this->passed_ = nullptr;};
      inline bool getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
      inline Data& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline Data& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    protected:
      // When permission check fails, returns diagnostic information related to permission check failure.
      shared_ptr<Data::DeniedDetail> deniedDetail_ {};
      // Check whether the use has the basic permissions to use Analytic DB for Spark.
      // 
      // *   true: The check is passed and the basic permissions are granted.
      // *   false: The check fails and some permissions are missing.
      shared_ptr<bool> passed_ {};
      // Based on diagnostic information, recommends configurations for customers to perform in the RAM system.
      shared_ptr<string> suggestion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetADBSparkNecessaryRAMPermissionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetADBSparkNecessaryRAMPermissionsResponseBody::Data) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetADBSparkNecessaryRAMPermissionsResponseBody::Data) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBody& setData(const GetADBSparkNecessaryRAMPermissionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetADBSparkNecessaryRAMPermissionsResponseBody& setData(GetADBSparkNecessaryRAMPermissionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetADBSparkNecessaryRAMPermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<GetADBSparkNecessaryRAMPermissionsResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
