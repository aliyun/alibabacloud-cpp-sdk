// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODYAPIKEYS_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTAPIKEYSRESPONSEBODYAPIKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectApiKeysResponseBodyApiKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectApiKeysResponseBodyApiKeys& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectApiKeysResponseBodyApiKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetSupabaseProjectApiKeysResponseBodyApiKeys() = default ;
    GetSupabaseProjectApiKeysResponseBodyApiKeys(const GetSupabaseProjectApiKeysResponseBodyApiKeys &) = default ;
    GetSupabaseProjectApiKeysResponseBodyApiKeys(GetSupabaseProjectApiKeysResponseBodyApiKeys &&) = default ;
    GetSupabaseProjectApiKeysResponseBodyApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectApiKeysResponseBodyApiKeys() = default ;
    GetSupabaseProjectApiKeysResponseBodyApiKeys& operator=(const GetSupabaseProjectApiKeysResponseBodyApiKeys &) = default ;
    GetSupabaseProjectApiKeysResponseBodyApiKeys& operator=(GetSupabaseProjectApiKeysResponseBodyApiKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->name_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline GetSupabaseProjectApiKeysResponseBodyApiKeys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSupabaseProjectApiKeysResponseBodyApiKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
