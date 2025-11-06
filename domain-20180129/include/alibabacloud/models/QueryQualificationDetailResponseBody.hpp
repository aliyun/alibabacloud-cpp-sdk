// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYQUALIFICATIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryQualificationDetailResponseBodyCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryQualificationDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryQualificationDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrackId, trackId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryQualificationDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
    };
    QueryQualificationDetailResponseBody() = default ;
    QueryQualificationDetailResponseBody(const QueryQualificationDetailResponseBody &) = default ;
    QueryQualificationDetailResponseBody(QueryQualificationDetailResponseBody &&) = default ;
    QueryQualificationDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryQualificationDetailResponseBody() = default ;
    QueryQualificationDetailResponseBody& operator=(const QueryQualificationDetailResponseBody &) = default ;
    QueryQualificationDetailResponseBody& operator=(QueryQualificationDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->credentials_ == nullptr && return this->requestId_ == nullptr && return this->trackId_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline QueryQualificationDetailResponseBody& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const QueryQualificationDetailResponseBodyCredentials & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, QueryQualificationDetailResponseBodyCredentials) };
    inline QueryQualificationDetailResponseBodyCredentials credentials() { DARABONBA_PTR_GET(credentials_, QueryQualificationDetailResponseBodyCredentials) };
    inline QueryQualificationDetailResponseBody& setCredentials(const QueryQualificationDetailResponseBodyCredentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline QueryQualificationDetailResponseBody& setCredentials(QueryQualificationDetailResponseBodyCredentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryQualificationDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trackId Field Functions 
    bool hasTrackId() const { return this->trackId_ != nullptr;};
    void deleteTrackId() { this->trackId_ = nullptr;};
    inline string trackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, "") };
    inline QueryQualificationDetailResponseBody& setTrackId(string trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


  protected:
    std::shared_ptr<int32_t> auditStatus_ = nullptr;
    std::shared_ptr<QueryQualificationDetailResponseBodyCredentials> credentials_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> trackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
