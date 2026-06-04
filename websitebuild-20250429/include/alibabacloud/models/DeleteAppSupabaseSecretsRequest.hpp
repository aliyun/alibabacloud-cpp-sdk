// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPSUPABASESECRETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPSUPABASESECRETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteAppSupabaseSecretsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(KeysJson, keysJson_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppSupabaseSecretsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(KeysJson, keysJson_);
    };
    DeleteAppSupabaseSecretsRequest() = default ;
    DeleteAppSupabaseSecretsRequest(const DeleteAppSupabaseSecretsRequest &) = default ;
    DeleteAppSupabaseSecretsRequest(DeleteAppSupabaseSecretsRequest &&) = default ;
    DeleteAppSupabaseSecretsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppSupabaseSecretsRequest() = default ;
    DeleteAppSupabaseSecretsRequest& operator=(const DeleteAppSupabaseSecretsRequest &) = default ;
    DeleteAppSupabaseSecretsRequest& operator=(DeleteAppSupabaseSecretsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->keysJson_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DeleteAppSupabaseSecretsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // keysJson Field Functions 
    bool hasKeysJson() const { return this->keysJson_ != nullptr;};
    void deleteKeysJson() { this->keysJson_ = nullptr;};
    inline string getKeysJson() const { DARABONBA_PTR_GET_DEFAULT(keysJson_, "") };
    inline DeleteAppSupabaseSecretsRequest& setKeysJson(string keysJson) { DARABONBA_PTR_SET_VALUE(keysJson_, keysJson) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> keysJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
