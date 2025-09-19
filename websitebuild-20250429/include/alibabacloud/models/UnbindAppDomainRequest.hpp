// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDAPPDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDAPPDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UnbindAppDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindAppDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindAppDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    UnbindAppDomainRequest() = default ;
    UnbindAppDomainRequest(const UnbindAppDomainRequest &) = default ;
    UnbindAppDomainRequest(UnbindAppDomainRequest &&) = default ;
    UnbindAppDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindAppDomainRequest() = default ;
    UnbindAppDomainRequest& operator=(const UnbindAppDomainRequest &) = default ;
    UnbindAppDomainRequest& operator=(UnbindAppDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->domainName_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UnbindAppDomainRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UnbindAppDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
