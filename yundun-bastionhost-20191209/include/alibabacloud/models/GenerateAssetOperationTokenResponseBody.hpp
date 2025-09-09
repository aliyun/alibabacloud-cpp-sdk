// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GenerateAssetOperationTokenResponseBodyAssetOperationToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GenerateAssetOperationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAssetOperationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetOperationToken, assetOperationToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAssetOperationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetOperationToken, assetOperationToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAssetOperationTokenResponseBody() = default ;
    GenerateAssetOperationTokenResponseBody(const GenerateAssetOperationTokenResponseBody &) = default ;
    GenerateAssetOperationTokenResponseBody(GenerateAssetOperationTokenResponseBody &&) = default ;
    GenerateAssetOperationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAssetOperationTokenResponseBody() = default ;
    GenerateAssetOperationTokenResponseBody& operator=(const GenerateAssetOperationTokenResponseBody &) = default ;
    GenerateAssetOperationTokenResponseBody& operator=(GenerateAssetOperationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetOperationToken_ != nullptr
        && this->requestId_ != nullptr; };
    // assetOperationToken Field Functions 
    bool hasAssetOperationToken() const { return this->assetOperationToken_ != nullptr;};
    void deleteAssetOperationToken() { this->assetOperationToken_ = nullptr;};
    inline const GenerateAssetOperationTokenResponseBodyAssetOperationToken & assetOperationToken() const { DARABONBA_PTR_GET_CONST(assetOperationToken_, GenerateAssetOperationTokenResponseBodyAssetOperationToken) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken assetOperationToken() { DARABONBA_PTR_GET(assetOperationToken_, GenerateAssetOperationTokenResponseBodyAssetOperationToken) };
    inline GenerateAssetOperationTokenResponseBody& setAssetOperationToken(const GenerateAssetOperationTokenResponseBodyAssetOperationToken & assetOperationToken) { DARABONBA_PTR_SET_VALUE(assetOperationToken_, assetOperationToken) };
    inline GenerateAssetOperationTokenResponseBody& setAssetOperationToken(GenerateAssetOperationTokenResponseBodyAssetOperationToken && assetOperationToken) { DARABONBA_PTR_SET_RVALUE(assetOperationToken_, assetOperationToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAssetOperationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GenerateAssetOperationTokenResponseBodyAssetOperationToken> assetOperationToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
