// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetAccessTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
    };
    GetAccessTokenResponseBodyData() = default ;
    GetAccessTokenResponseBodyData(const GetAccessTokenResponseBodyData &) = default ;
    GetAccessTokenResponseBodyData(GetAccessTokenResponseBodyData &&) = default ;
    GetAccessTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessTokenResponseBodyData() = default ;
    GetAccessTokenResponseBodyData& operator=(const GetAccessTokenResponseBodyData &) = default ;
    GetAccessTokenResponseBodyData& operator=(GetAccessTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GetAccessTokenResponseBodyData& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
