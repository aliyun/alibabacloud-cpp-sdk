// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSITEMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSITEMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppSitemapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSitemapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(SeType, seType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSitemapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(SeType, seType_);
    };
    GetAppSitemapRequest() = default ;
    GetAppSitemapRequest(const GetAppSitemapRequest &) = default ;
    GetAppSitemapRequest(GetAppSitemapRequest &&) = default ;
    GetAppSitemapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSitemapRequest() = default ;
    GetAppSitemapRequest& operator=(const GetAppSitemapRequest &) = default ;
    GetAppSitemapRequest& operator=(GetAppSitemapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->domain_ == nullptr && this->seType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppSitemapRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetAppSitemapRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // seType Field Functions 
    bool hasSeType() const { return this->seType_ != nullptr;};
    void deleteSeType() { this->seType_ = nullptr;};
    inline string getSeType() const { DARABONBA_PTR_GET_DEFAULT(seType_, "") };
    inline GetAppSitemapRequest& setSeType(string seType) { DARABONBA_PTR_SET_VALUE(seType_, seType) };


  protected:
    // The business ID.
    shared_ptr<string> bizId_ {};
    // The domain name.
    shared_ptr<string> domain_ {};
    // The search engine type.
    shared_ptr<string> seType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
