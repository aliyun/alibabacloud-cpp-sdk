// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaaS20260318
{
namespace Models
{
  class GetApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
    };
    GetApiKeyRequest() = default ;
    GetApiKeyRequest(const GetApiKeyRequest &) = default ;
    GetApiKeyRequest(GetApiKeyRequest &&) = default ;
    GetApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiKeyRequest() = default ;
    GetApiKeyRequest& operator=(const GetApiKeyRequest &) = default ;
    GetApiKeyRequest& operator=(GetApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline GetApiKeyRequest& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


  protected:
    // API Key ID。
    // 
    // This parameter is required.
    shared_ptr<int64_t> apiKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaaS20260318
#endif
