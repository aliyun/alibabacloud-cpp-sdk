// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODYDOMAINTRANSFERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSRESPONSEBODYDOMAINTRANSFERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryDomainTransferStatusResponseBodyDomainTransferStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainTransferStatusResponseBodyDomainTransferStatus& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatusDescription, domainStatusDescription_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainTransferStatusResponseBodyDomainTransferStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatusDescription, domainStatusDescription_);
    };
    QueryDomainTransferStatusResponseBodyDomainTransferStatus() = default ;
    QueryDomainTransferStatusResponseBodyDomainTransferStatus(const QueryDomainTransferStatusResponseBodyDomainTransferStatus &) = default ;
    QueryDomainTransferStatusResponseBodyDomainTransferStatus(QueryDomainTransferStatusResponseBodyDomainTransferStatus &&) = default ;
    QueryDomainTransferStatusResponseBodyDomainTransferStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainTransferStatusResponseBodyDomainTransferStatus() = default ;
    QueryDomainTransferStatusResponseBodyDomainTransferStatus& operator=(const QueryDomainTransferStatusResponseBodyDomainTransferStatus &) = default ;
    QueryDomainTransferStatusResponseBodyDomainTransferStatus& operator=(QueryDomainTransferStatusResponseBodyDomainTransferStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->domainStatusDescription_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainTransferStatusResponseBodyDomainTransferStatus& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatusDescription Field Functions 
    bool hasDomainStatusDescription() const { return this->domainStatusDescription_ != nullptr;};
    void deleteDomainStatusDescription() { this->domainStatusDescription_ = nullptr;};
    inline string domainStatusDescription() const { DARABONBA_PTR_GET_DEFAULT(domainStatusDescription_, "") };
    inline QueryDomainTransferStatusResponseBodyDomainTransferStatus& setDomainStatusDescription(string domainStatusDescription) { DARABONBA_PTR_SET_VALUE(domainStatusDescription_, domainStatusDescription) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainStatusDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
