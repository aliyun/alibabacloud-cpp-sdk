// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppInstanceForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    GetAppInstanceForAdminRequest() = default ;
    GetAppInstanceForAdminRequest(const GetAppInstanceForAdminRequest &) = default ;
    GetAppInstanceForAdminRequest(GetAppInstanceForAdminRequest &&) = default ;
    GetAppInstanceForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceForAdminRequest() = default ;
    GetAppInstanceForAdminRequest& operator=(const GetAppInstanceForAdminRequest &) = default ;
    GetAppInstanceForAdminRequest& operator=(GetAppInstanceForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->domain_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppInstanceForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetAppInstanceForAdminRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> domain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
