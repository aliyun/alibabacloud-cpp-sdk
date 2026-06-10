// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPPSUPABASESECRETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPPSUPABASESECRETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SaveAppSupabaseSecretsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(SecretsJson, secretsJson_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(SecretsJson, secretsJson_);
    };
    SaveAppSupabaseSecretsRequest() = default ;
    SaveAppSupabaseSecretsRequest(const SaveAppSupabaseSecretsRequest &) = default ;
    SaveAppSupabaseSecretsRequest(SaveAppSupabaseSecretsRequest &&) = default ;
    SaveAppSupabaseSecretsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAppSupabaseSecretsRequest() = default ;
    SaveAppSupabaseSecretsRequest& operator=(const SaveAppSupabaseSecretsRequest &) = default ;
    SaveAppSupabaseSecretsRequest& operator=(SaveAppSupabaseSecretsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->secretsJson_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SaveAppSupabaseSecretsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // secretsJson Field Functions 
    bool hasSecretsJson() const { return this->secretsJson_ != nullptr;};
    void deleteSecretsJson() { this->secretsJson_ = nullptr;};
    inline string getSecretsJson() const { DARABONBA_PTR_GET_DEFAULT(secretsJson_, "") };
    inline SaveAppSupabaseSecretsRequest& setSecretsJson(string secretsJson) { DARABONBA_PTR_SET_VALUE(secretsJson_, secretsJson) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Key list JSON
    shared_ptr<string> secretsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
