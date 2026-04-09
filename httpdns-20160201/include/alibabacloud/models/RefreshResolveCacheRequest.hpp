// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRESOLVECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRESOLVECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class RefreshResolveCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshResolveCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshResolveCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    RefreshResolveCacheRequest() = default ;
    RefreshResolveCacheRequest(const RefreshResolveCacheRequest &) = default ;
    RefreshResolveCacheRequest(RefreshResolveCacheRequest &&) = default ;
    RefreshResolveCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshResolveCacheRequest() = default ;
    RefreshResolveCacheRequest& operator=(const RefreshResolveCacheRequest &) = default ;
    RefreshResolveCacheRequest& operator=(RefreshResolveCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<string> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<string>) };
    inline vector<string> getDomains() { DARABONBA_PTR_GET(domains_, vector<string>) };
    inline RefreshResolveCacheRequest& setDomains(const vector<string> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline RefreshResolveCacheRequest& setDomains(vector<string> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    shared_ptr<vector<string>> domains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
