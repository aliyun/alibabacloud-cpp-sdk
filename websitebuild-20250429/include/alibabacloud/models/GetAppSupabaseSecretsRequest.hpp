// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSUPABASESECRETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSUPABASESECRETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppSupabaseSecretsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
    };
    GetAppSupabaseSecretsRequest() = default ;
    GetAppSupabaseSecretsRequest(const GetAppSupabaseSecretsRequest &) = default ;
    GetAppSupabaseSecretsRequest(GetAppSupabaseSecretsRequest &&) = default ;
    GetAppSupabaseSecretsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSupabaseSecretsRequest() = default ;
    GetAppSupabaseSecretsRequest& operator=(const GetAppSupabaseSecretsRequest &) = default ;
    GetAppSupabaseSecretsRequest& operator=(GetAppSupabaseSecretsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->keyword_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppSupabaseSecretsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetAppSupabaseSecretsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Search keyword
    shared_ptr<string> keyword_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
