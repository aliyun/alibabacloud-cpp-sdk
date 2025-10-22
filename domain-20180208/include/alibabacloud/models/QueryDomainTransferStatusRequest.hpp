// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINTRANSFERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryDomainTransferStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainTransferStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainTransferStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    QueryDomainTransferStatusRequest() = default ;
    QueryDomainTransferStatusRequest(const QueryDomainTransferStatusRequest &) = default ;
    QueryDomainTransferStatusRequest(QueryDomainTransferStatusRequest &&) = default ;
    QueryDomainTransferStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainTransferStatusRequest() = default ;
    QueryDomainTransferStatusRequest& operator=(const QueryDomainTransferStatusRequest &) = default ;
    QueryDomainTransferStatusRequest& operator=(QueryDomainTransferStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainTransferStatusRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
