// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDomainTransferStatusResponseBodyDomainTransferStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryDomainTransferStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTransferStatus, domainTransferStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainTransferStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTransferStatus, domainTransferStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryDomainTransferStatusResponseBody() = default ;
    QueryDomainTransferStatusResponseBody(const QueryDomainTransferStatusResponseBody &) = default ;
    QueryDomainTransferStatusResponseBody(QueryDomainTransferStatusResponseBody &&) = default ;
    QueryDomainTransferStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainTransferStatusResponseBody() = default ;
    QueryDomainTransferStatusResponseBody& operator=(const QueryDomainTransferStatusResponseBody &) = default ;
    QueryDomainTransferStatusResponseBody& operator=(QueryDomainTransferStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainTransferStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainTransferStatus Field Functions 
    bool hasDomainTransferStatus() const { return this->domainTransferStatus_ != nullptr;};
    void deleteDomainTransferStatus() { this->domainTransferStatus_ = nullptr;};
    inline const vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus> & domainTransferStatus() const { DARABONBA_PTR_GET_CONST(domainTransferStatus_, vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus>) };
    inline vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus> domainTransferStatus() { DARABONBA_PTR_GET(domainTransferStatus_, vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus>) };
    inline QueryDomainTransferStatusResponseBody& setDomainTransferStatus(const vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus> & domainTransferStatus) { DARABONBA_PTR_SET_VALUE(domainTransferStatus_, domainTransferStatus) };
    inline QueryDomainTransferStatusResponseBody& setDomainTransferStatus(vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus> && domainTransferStatus) { DARABONBA_PTR_SET_RVALUE(domainTransferStatus_, domainTransferStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainTransferStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryDomainTransferStatusResponseBodyDomainTransferStatus>> domainTransferStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
