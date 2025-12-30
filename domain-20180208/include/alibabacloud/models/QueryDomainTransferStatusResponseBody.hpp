// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class DomainTransferStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTransferStatus& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainStatusDescription, domainStatusDescription_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTransferStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainStatusDescription, domainStatusDescription_);
      };
      DomainTransferStatus() = default ;
      DomainTransferStatus(const DomainTransferStatus &) = default ;
      DomainTransferStatus(DomainTransferStatus &&) = default ;
      DomainTransferStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTransferStatus() = default ;
      DomainTransferStatus& operator=(const DomainTransferStatus &) = default ;
      DomainTransferStatus& operator=(DomainTransferStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainStatusDescription_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainTransferStatus& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainStatusDescription Field Functions 
      bool hasDomainStatusDescription() const { return this->domainStatusDescription_ != nullptr;};
      void deleteDomainStatusDescription() { this->domainStatusDescription_ = nullptr;};
      inline string getDomainStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(domainStatusDescription_, "") };
      inline DomainTransferStatus& setDomainStatusDescription(string domainStatusDescription) { DARABONBA_PTR_SET_VALUE(domainStatusDescription_, domainStatusDescription) };


    protected:
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainStatusDescription_ {};
    };

    virtual bool empty() const override { return this->domainTransferStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTransferStatus Field Functions 
    bool hasDomainTransferStatus() const { return this->domainTransferStatus_ != nullptr;};
    void deleteDomainTransferStatus() { this->domainTransferStatus_ = nullptr;};
    inline const vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus> & getDomainTransferStatus() const { DARABONBA_PTR_GET_CONST(domainTransferStatus_, vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus>) };
    inline vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus> getDomainTransferStatus() { DARABONBA_PTR_GET(domainTransferStatus_, vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus>) };
    inline QueryDomainTransferStatusResponseBody& setDomainTransferStatus(const vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus> & domainTransferStatus) { DARABONBA_PTR_SET_VALUE(domainTransferStatus_, domainTransferStatus) };
    inline QueryDomainTransferStatusResponseBody& setDomainTransferStatus(vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus> && domainTransferStatus) { DARABONBA_PTR_SET_RVALUE(domainTransferStatus_, domainTransferStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainTransferStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryDomainTransferStatusResponseBody::DomainTransferStatus>> domainTransferStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
