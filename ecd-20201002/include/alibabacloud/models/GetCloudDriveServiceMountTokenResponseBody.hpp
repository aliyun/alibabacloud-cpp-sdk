// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDDRIVESERVICEMOUNTTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCloudDriveServiceMountTokenResponseBodyToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetCloudDriveServiceMountTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudDriveServiceMountTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudDriveServiceMountTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetCloudDriveServiceMountTokenResponseBody() = default ;
    GetCloudDriveServiceMountTokenResponseBody(const GetCloudDriveServiceMountTokenResponseBody &) = default ;
    GetCloudDriveServiceMountTokenResponseBody(GetCloudDriveServiceMountTokenResponseBody &&) = default ;
    GetCloudDriveServiceMountTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudDriveServiceMountTokenResponseBody() = default ;
    GetCloudDriveServiceMountTokenResponseBody& operator=(const GetCloudDriveServiceMountTokenResponseBody &) = default ;
    GetCloudDriveServiceMountTokenResponseBody& operator=(GetCloudDriveServiceMountTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->token_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCloudDriveServiceMountTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline const GetCloudDriveServiceMountTokenResponseBodyToken & token() const { DARABONBA_PTR_GET_CONST(token_, GetCloudDriveServiceMountTokenResponseBodyToken) };
    inline GetCloudDriveServiceMountTokenResponseBodyToken token() { DARABONBA_PTR_GET(token_, GetCloudDriveServiceMountTokenResponseBodyToken) };
    inline GetCloudDriveServiceMountTokenResponseBody& setToken(const GetCloudDriveServiceMountTokenResponseBodyToken & token) { DARABONBA_PTR_SET_VALUE(token_, token) };
    inline GetCloudDriveServiceMountTokenResponseBody& setToken(GetCloudDriveServiceMountTokenResponseBodyToken && token) { DARABONBA_PTR_SET_RVALUE(token_, token) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetCloudDriveServiceMountTokenResponseBodyToken> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
