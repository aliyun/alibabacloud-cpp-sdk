// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetAuditCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(SqlCount, sqlCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCount, riskCount_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(SqlCount, sqlCount_);
    };
    GetAuditCountResponseBody() = default ;
    GetAuditCountResponseBody(const GetAuditCountResponseBody &) = default ;
    GetAuditCountResponseBody(GetAuditCountResponseBody &&) = default ;
    GetAuditCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditCountResponseBody() = default ;
    GetAuditCountResponseBody& operator=(const GetAuditCountResponseBody &) = default ;
    GetAuditCountResponseBody& operator=(GetAuditCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->riskCount_ == nullptr && this->sessionCount_ == nullptr && this->sqlCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCount Field Functions 
    bool hasRiskCount() const { return this->riskCount_ != nullptr;};
    void deleteRiskCount() { this->riskCount_ = nullptr;};
    inline int64_t getRiskCount() const { DARABONBA_PTR_GET_DEFAULT(riskCount_, 0L) };
    inline GetAuditCountResponseBody& setRiskCount(int64_t riskCount) { DARABONBA_PTR_SET_VALUE(riskCount_, riskCount) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline GetAuditCountResponseBody& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // sqlCount Field Functions 
    bool hasSqlCount() const { return this->sqlCount_ != nullptr;};
    void deleteSqlCount() { this->sqlCount_ = nullptr;};
    inline int64_t getSqlCount() const { DARABONBA_PTR_GET_DEFAULT(sqlCount_, 0L) };
    inline GetAuditCountResponseBody& setSqlCount(int64_t sqlCount) { DARABONBA_PTR_SET_VALUE(sqlCount_, sqlCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> riskCount_ {};
    shared_ptr<int64_t> sessionCount_ {};
    shared_ptr<int64_t> sqlCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
