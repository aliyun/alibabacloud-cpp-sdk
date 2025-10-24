// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKUPBACKENDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKUPBACKENDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDetailResponseBodyRedirectBackupBackends : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodyRedirectBackupBackends& obj) { 
      DARABONBA_PTR_TO_JSON(Backend, backend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodyRedirectBackupBackends& obj) { 
      DARABONBA_PTR_FROM_JSON(Backend, backend_);
    };
    DescribeDomainDetailResponseBodyRedirectBackupBackends() = default ;
    DescribeDomainDetailResponseBodyRedirectBackupBackends(const DescribeDomainDetailResponseBodyRedirectBackupBackends &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackupBackends(DescribeDomainDetailResponseBodyRedirectBackupBackends &&) = default ;
    DescribeDomainDetailResponseBodyRedirectBackupBackends(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodyRedirectBackupBackends() = default ;
    DescribeDomainDetailResponseBodyRedirectBackupBackends& operator=(const DescribeDomainDetailResponseBodyRedirectBackupBackends &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackupBackends& operator=(DescribeDomainDetailResponseBodyRedirectBackupBackends &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backend_ == nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline string backend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
    inline DescribeDomainDetailResponseBodyRedirectBackupBackends& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


  protected:
    // The back-to-origin IP address or domain name.
    std::shared_ptr<string> backend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
