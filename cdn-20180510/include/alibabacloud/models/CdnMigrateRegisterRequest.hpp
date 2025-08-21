// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CDNMIGRATEREGISTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CDNMIGRATEREGISTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CdnMigrateRegisterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CdnMigrateRegisterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, CdnMigrateRegisterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    CdnMigrateRegisterRequest() = default ;
    CdnMigrateRegisterRequest(const CdnMigrateRegisterRequest &) = default ;
    CdnMigrateRegisterRequest(CdnMigrateRegisterRequest &&) = default ;
    CdnMigrateRegisterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CdnMigrateRegisterRequest() = default ;
    CdnMigrateRegisterRequest& operator=(const CdnMigrateRegisterRequest &) = default ;
    CdnMigrateRegisterRequest& operator=(CdnMigrateRegisterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CdnMigrateRegisterRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // The accelerated domain name for which you want to register the dynamic routing feature. You can specify only one domain name in each request.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
