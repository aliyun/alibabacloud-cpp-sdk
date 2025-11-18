// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODYSTSTOKENMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETSTSTOKENRESPONSEBODYSTSTOKENMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetStsTokenResponseBodyStsTokenModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStsTokenResponseBodyStsTokenModel& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStsTokenResponseBodyStsTokenModel& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    GetStsTokenResponseBodyStsTokenModel() = default ;
    GetStsTokenResponseBodyStsTokenModel(const GetStsTokenResponseBodyStsTokenModel &) = default ;
    GetStsTokenResponseBodyStsTokenModel(GetStsTokenResponseBodyStsTokenModel &&) = default ;
    GetStsTokenResponseBodyStsTokenModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStsTokenResponseBodyStsTokenModel() = default ;
    GetStsTokenResponseBodyStsTokenModel& operator=(const GetStsTokenResponseBodyStsTokenModel &) = default ;
    GetStsTokenResponseBodyStsTokenModel& operator=(GetStsTokenResponseBodyStsTokenModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && return this->stsToken_ == nullptr && return this->tenantId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetStsTokenResponseBodyStsTokenModel& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stsToken Field Functions 
    bool hasStsToken() const { return this->stsToken_ != nullptr;};
    void deleteStsToken() { this->stsToken_ = nullptr;};
    inline string stsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
    inline GetStsTokenResponseBodyStsTokenModel& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetStsTokenResponseBodyStsTokenModel& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> stsToken_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
