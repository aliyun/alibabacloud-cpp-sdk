// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKENDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKENDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDetailResponseBodyRedirectBackends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodyRedirectBackends& obj) { 
      DARABONBA_PTR_TO_JSON(Backend, backend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodyRedirectBackends& obj) { 
      DARABONBA_PTR_FROM_JSON(Backend, backend_);
    };
    DescribeDomainDetailResponseBodyRedirectBackends() = default ;
    DescribeDomainDetailResponseBodyRedirectBackends(const DescribeDomainDetailResponseBodyRedirectBackends &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackends(DescribeDomainDetailResponseBodyRedirectBackends &&) = default ;
    DescribeDomainDetailResponseBodyRedirectBackends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodyRedirectBackends() = default ;
    DescribeDomainDetailResponseBodyRedirectBackends& operator=(const DescribeDomainDetailResponseBodyRedirectBackends &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackends& operator=(DescribeDomainDetailResponseBodyRedirectBackends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backend_ != nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline string backend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
    inline DescribeDomainDetailResponseBodyRedirectBackends& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


  protected:
    // The IP address or domain name of the origin server.
    std::shared_ptr<string> backend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
