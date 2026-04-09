// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRESOLVECACHESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRESOLVECACHESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class RefreshResolveCacheShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshResolveCacheShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domainsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshResolveCacheShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domainsShrink_);
    };
    RefreshResolveCacheShrinkRequest() = default ;
    RefreshResolveCacheShrinkRequest(const RefreshResolveCacheShrinkRequest &) = default ;
    RefreshResolveCacheShrinkRequest(RefreshResolveCacheShrinkRequest &&) = default ;
    RefreshResolveCacheShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshResolveCacheShrinkRequest() = default ;
    RefreshResolveCacheShrinkRequest& operator=(const RefreshResolveCacheShrinkRequest &) = default ;
    RefreshResolveCacheShrinkRequest& operator=(RefreshResolveCacheShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainsShrink_ == nullptr; };
    // domainsShrink Field Functions 
    bool hasDomainsShrink() const { return this->domainsShrink_ != nullptr;};
    void deleteDomainsShrink() { this->domainsShrink_ = nullptr;};
    inline string getDomainsShrink() const { DARABONBA_PTR_GET_DEFAULT(domainsShrink_, "") };
    inline RefreshResolveCacheShrinkRequest& setDomainsShrink(string domainsShrink) { DARABONBA_PTR_SET_VALUE(domainsShrink_, domainsShrink) };


  protected:
    shared_ptr<string> domainsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
