// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_APIKEYCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ApiKeyCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
    };
    ApiKeyCreateCmd() = default ;
    ApiKeyCreateCmd(const ApiKeyCreateCmd &) = default ;
    ApiKeyCreateCmd(ApiKeyCreateCmd &&) = default ;
    ApiKeyCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyCreateCmd() = default ;
    ApiKeyCreateCmd& operator=(const ApiKeyCreateCmd &) = default ;
    ApiKeyCreateCmd& operator=(ApiKeyCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ApiKeyCreateCmd& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


  protected:
    shared_ptr<int64_t> clientId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
