// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
namespace Models
{
  class GetStsTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStsTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StsTokenModel, stsTokenModel_);
    };
    friend void from_json(const Darabonba::Json& j, GetStsTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StsTokenModel, stsTokenModel_);
    };
    GetStsTokenResponseBody() = default ;
    GetStsTokenResponseBody(const GetStsTokenResponseBody &) = default ;
    GetStsTokenResponseBody(GetStsTokenResponseBody &&) = default ;
    GetStsTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStsTokenResponseBody() = default ;
    GetStsTokenResponseBody& operator=(const GetStsTokenResponseBody &) = default ;
    GetStsTokenResponseBody& operator=(GetStsTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StsTokenModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StsTokenModel& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, StsTokenModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      StsTokenModel() = default ;
      StsTokenModel(const StsTokenModel &) = default ;
      StsTokenModel(StsTokenModel &&) = default ;
      StsTokenModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StsTokenModel() = default ;
      StsTokenModel& operator=(const StsTokenModel &) = default ;
      StsTokenModel& operator=(StsTokenModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->sessionId_ == nullptr && this->stsToken_ == nullptr && this->tenantId_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline StsTokenModel& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline StsTokenModel& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // stsToken Field Functions 
      bool hasStsToken() const { return this->stsToken_ != nullptr;};
      void deleteStsToken() { this->stsToken_ = nullptr;};
      inline string getStsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
      inline StsTokenModel& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline StsTokenModel& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<int64_t> aliUid_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> stsToken_ {};
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stsTokenModel_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStsTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stsTokenModel Field Functions 
    bool hasStsTokenModel() const { return this->stsTokenModel_ != nullptr;};
    void deleteStsTokenModel() { this->stsTokenModel_ = nullptr;};
    inline const GetStsTokenResponseBody::StsTokenModel & getStsTokenModel() const { DARABONBA_PTR_GET_CONST(stsTokenModel_, GetStsTokenResponseBody::StsTokenModel) };
    inline GetStsTokenResponseBody::StsTokenModel getStsTokenModel() { DARABONBA_PTR_GET(stsTokenModel_, GetStsTokenResponseBody::StsTokenModel) };
    inline GetStsTokenResponseBody& setStsTokenModel(const GetStsTokenResponseBody::StsTokenModel & stsTokenModel) { DARABONBA_PTR_SET_VALUE(stsTokenModel_, stsTokenModel) };
    inline GetStsTokenResponseBody& setStsTokenModel(GetStsTokenResponseBody::StsTokenModel && stsTokenModel) { DARABONBA_PTR_SET_RVALUE(stsTokenModel_, stsTokenModel) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetStsTokenResponseBody::StsTokenModel> stsTokenModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
