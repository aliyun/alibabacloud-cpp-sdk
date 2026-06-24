// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAININFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAININFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryCloseoutDomainInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloseoutDomainInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloseoutDomainInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    QueryCloseoutDomainInfoRequest() = default ;
    QueryCloseoutDomainInfoRequest(const QueryCloseoutDomainInfoRequest &) = default ;
    QueryCloseoutDomainInfoRequest(QueryCloseoutDomainInfoRequest &&) = default ;
    QueryCloseoutDomainInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloseoutDomainInfoRequest() = default ;
    QueryCloseoutDomainInfoRequest& operator=(const QueryCloseoutDomainInfoRequest &) = default ;
    QueryCloseoutDomainInfoRequest& operator=(QueryCloseoutDomainInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryCloseoutDomainInfoRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    shared_ptr<string> domainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
