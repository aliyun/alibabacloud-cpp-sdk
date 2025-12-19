// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetResourceAPIKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceAPIKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceAPIKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceAPIKeyResponseBody() = default ;
    GetResourceAPIKeyResponseBody(const GetResourceAPIKeyResponseBody &) = default ;
    GetResourceAPIKeyResponseBody(GetResourceAPIKeyResponseBody &&) = default ;
    GetResourceAPIKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceAPIKeyResponseBody() = default ;
    GetResourceAPIKeyResponseBody& operator=(const GetResourceAPIKeyResponseBody &) = default ;
    GetResourceAPIKeyResponseBody& operator=(GetResourceAPIKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKey_ == nullptr
        && return this->requestId_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string APIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline GetResourceAPIKeyResponseBody& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceAPIKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> APIKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
