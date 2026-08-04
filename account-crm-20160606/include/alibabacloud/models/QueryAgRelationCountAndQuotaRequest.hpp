// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAGRELATIONCOUNTANDQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAGRELATIONCOUNTANDQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAgRelationCountAndQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAgRelationCountAndQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CallerBid, callerBid_);
      DARABONBA_PTR_TO_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_TO_JSON(CallerType, callerType_);
      DARABONBA_PTR_TO_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(NullObject, nullObject_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StsTokenCallerBid, stsTokenCallerBid_);
      DARABONBA_PTR_TO_JSON(StsTokenCallerUid, stsTokenCallerUid_);
      DARABONBA_PTR_TO_JSON(StsTokenRoleId, stsTokenRoleId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAgRelationCountAndQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CallerBid, callerBid_);
      DARABONBA_PTR_FROM_JSON(CallerParentId, callerParentId_);
      DARABONBA_PTR_FROM_JSON(CallerType, callerType_);
      DARABONBA_PTR_FROM_JSON(CallerUid, callerUid_);
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(NullObject, nullObject_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StsTokenCallerBid, stsTokenCallerBid_);
      DARABONBA_PTR_FROM_JSON(StsTokenCallerUid, stsTokenCallerUid_);
      DARABONBA_PTR_FROM_JSON(StsTokenRoleId, stsTokenRoleId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    QueryAgRelationCountAndQuotaRequest() = default ;
    QueryAgRelationCountAndQuotaRequest(const QueryAgRelationCountAndQuotaRequest &) = default ;
    QueryAgRelationCountAndQuotaRequest(QueryAgRelationCountAndQuotaRequest &&) = default ;
    QueryAgRelationCountAndQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAgRelationCountAndQuotaRequest() = default ;
    QueryAgRelationCountAndQuotaRequest& operator=(const QueryAgRelationCountAndQuotaRequest &) = default ;
    QueryAgRelationCountAndQuotaRequest& operator=(QueryAgRelationCountAndQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->callerBid_ == nullptr && this->callerParentId_ == nullptr && this->callerType_ == nullptr && this->callerUid_ == nullptr && this->mpk_ == nullptr
        && this->nullObject_ == nullptr && this->requestId_ == nullptr && this->securityToken_ == nullptr && this->sourceIp_ == nullptr && this->stsTokenCallerBid_ == nullptr
        && this->stsTokenCallerUid_ == nullptr && this->stsTokenRoleId_ == nullptr && this->version_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // callerBid Field Functions 
    bool hasCallerBid() const { return this->callerBid_ != nullptr;};
    void deleteCallerBid() { this->callerBid_ = nullptr;};
    inline int64_t getCallerBid() const { DARABONBA_PTR_GET_DEFAULT(callerBid_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setCallerBid(int64_t callerBid) { DARABONBA_PTR_SET_VALUE(callerBid_, callerBid) };


    // callerParentId Field Functions 
    bool hasCallerParentId() const { return this->callerParentId_ != nullptr;};
    void deleteCallerParentId() { this->callerParentId_ = nullptr;};
    inline int64_t getCallerParentId() const { DARABONBA_PTR_GET_DEFAULT(callerParentId_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setCallerParentId(int64_t callerParentId) { DARABONBA_PTR_SET_VALUE(callerParentId_, callerParentId) };


    // callerType Field Functions 
    bool hasCallerType() const { return this->callerType_ != nullptr;};
    void deleteCallerType() { this->callerType_ = nullptr;};
    inline string getCallerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


    // callerUid Field Functions 
    bool hasCallerUid() const { return this->callerUid_ != nullptr;};
    void deleteCallerUid() { this->callerUid_ = nullptr;};
    inline int64_t getCallerUid() const { DARABONBA_PTR_GET_DEFAULT(callerUid_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setCallerUid(int64_t callerUid) { DARABONBA_PTR_SET_VALUE(callerUid_, callerUid) };


    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // nullObject Field Functions 
    bool hasNullObject() const { return this->nullObject_ != nullptr;};
    void deleteNullObject() { this->nullObject_ = nullptr;};
    inline bool getNullObject() const { DARABONBA_PTR_GET_DEFAULT(nullObject_, false) };
    inline QueryAgRelationCountAndQuotaRequest& setNullObject(bool nullObject) { DARABONBA_PTR_SET_VALUE(nullObject_, nullObject) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // stsTokenCallerBid Field Functions 
    bool hasStsTokenCallerBid() const { return this->stsTokenCallerBid_ != nullptr;};
    void deleteStsTokenCallerBid() { this->stsTokenCallerBid_ = nullptr;};
    inline int64_t getStsTokenCallerBid() const { DARABONBA_PTR_GET_DEFAULT(stsTokenCallerBid_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setStsTokenCallerBid(int64_t stsTokenCallerBid) { DARABONBA_PTR_SET_VALUE(stsTokenCallerBid_, stsTokenCallerBid) };


    // stsTokenCallerUid Field Functions 
    bool hasStsTokenCallerUid() const { return this->stsTokenCallerUid_ != nullptr;};
    void deleteStsTokenCallerUid() { this->stsTokenCallerUid_ = nullptr;};
    inline int64_t getStsTokenCallerUid() const { DARABONBA_PTR_GET_DEFAULT(stsTokenCallerUid_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setStsTokenCallerUid(int64_t stsTokenCallerUid) { DARABONBA_PTR_SET_VALUE(stsTokenCallerUid_, stsTokenCallerUid) };


    // stsTokenRoleId Field Functions 
    bool hasStsTokenRoleId() const { return this->stsTokenRoleId_ != nullptr;};
    void deleteStsTokenRoleId() { this->stsTokenRoleId_ = nullptr;};
    inline int64_t getStsTokenRoleId() const { DARABONBA_PTR_GET_DEFAULT(stsTokenRoleId_, 0L) };
    inline QueryAgRelationCountAndQuotaRequest& setStsTokenRoleId(int64_t stsTokenRoleId) { DARABONBA_PTR_SET_VALUE(stsTokenRoleId_, stsTokenRoleId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline QueryAgRelationCountAndQuotaRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<int64_t> callerBid_ {};
    shared_ptr<int64_t> callerParentId_ {};
    shared_ptr<string> callerType_ {};
    shared_ptr<int64_t> callerUid_ {};
    shared_ptr<string> mpk_ {};
    shared_ptr<bool> nullObject_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> sourceIp_ {};
    shared_ptr<int64_t> stsTokenCallerBid_ {};
    shared_ptr<int64_t> stsTokenCallerUid_ {};
    shared_ptr<int64_t> stsTokenRoleId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
