// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROTATETOKENPLANKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROTATETOKENPLANKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class RotateTokenPlanKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RotateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, RotateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
    };
    RotateTokenPlanKeyRequest() = default ;
    RotateTokenPlanKeyRequest(const RotateTokenPlanKeyRequest &) = default ;
    RotateTokenPlanKeyRequest(RotateTokenPlanKeyRequest &&) = default ;
    RotateTokenPlanKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RotateTokenPlanKeyRequest() = default ;
    RotateTokenPlanKeyRequest& operator=(const RotateTokenPlanKeyRequest &) = default ;
    RotateTokenPlanKeyRequest& operator=(RotateTokenPlanKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
    inline RotateTokenPlanKeyRequest& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


  protected:
    // API Key ID
    // 
    // This parameter is required.
    shared_ptr<string> apiKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
