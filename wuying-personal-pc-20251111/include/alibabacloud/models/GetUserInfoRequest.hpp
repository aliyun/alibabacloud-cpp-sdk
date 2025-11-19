// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
    };
    GetUserInfoRequest() = default ;
    GetUserInfoRequest(const GetUserInfoRequest &) = default ;
    GetUserInfoRequest(GetUserInfoRequest &&) = default ;
    GetUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInfoRequest() = default ;
    GetUserInfoRequest& operator=(const GetUserInfoRequest &) = default ;
    GetUserInfoRequest& operator=(GetUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline GetUserInfoRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
