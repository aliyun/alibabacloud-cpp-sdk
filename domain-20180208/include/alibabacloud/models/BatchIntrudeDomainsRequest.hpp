// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSREQUEST_HPP_
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
  class BatchIntrudeDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIntrudeDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIntrudeDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
    };
    BatchIntrudeDomainsRequest() = default ;
    BatchIntrudeDomainsRequest(const BatchIntrudeDomainsRequest &) = default ;
    BatchIntrudeDomainsRequest(BatchIntrudeDomainsRequest &&) = default ;
    BatchIntrudeDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIntrudeDomainsRequest() = default ;
    BatchIntrudeDomainsRequest& operator=(const BatchIntrudeDomainsRequest &) = default ;
    BatchIntrudeDomainsRequest& operator=(BatchIntrudeDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNames_ == nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline const vector<string> & domainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
    inline vector<string> domainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
    inline BatchIntrudeDomainsRequest& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
    inline BatchIntrudeDomainsRequest& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


  protected:
    std::shared_ptr<vector<string>> domainNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
