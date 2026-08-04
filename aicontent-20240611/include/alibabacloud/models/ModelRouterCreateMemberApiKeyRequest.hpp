// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEMEMBERAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateMemberApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateMemberApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateMemberApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ModelRouterCreateMemberApiKeyRequest() = default ;
    ModelRouterCreateMemberApiKeyRequest(const ModelRouterCreateMemberApiKeyRequest &) = default ;
    ModelRouterCreateMemberApiKeyRequest(ModelRouterCreateMemberApiKeyRequest &&) = default ;
    ModelRouterCreateMemberApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateMemberApiKeyRequest() = default ;
    ModelRouterCreateMemberApiKeyRequest& operator=(const ModelRouterCreateMemberApiKeyRequest &) = default ;
    ModelRouterCreateMemberApiKeyRequest& operator=(ModelRouterCreateMemberApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireAt_ == nullptr
        && this->name_ == nullptr; };
    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline ModelRouterCreateMemberApiKeyRequest& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelRouterCreateMemberApiKeyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The expiration time in the format of yyyy-MM-dd HH:mm:ss. This parameter is optional. If not specified, the key is permanently valid.
    shared_ptr<string> expireAt_ {};
    // The name of the API key. This parameter is optional.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
