// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWhiteListAssetResponseBodyAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWhiteListAssetResponseBody() = default ;
    DescribeWhiteListAssetResponseBody(const DescribeWhiteListAssetResponseBody &) = default ;
    DescribeWhiteListAssetResponseBody(DescribeWhiteListAssetResponseBody &&) = default ;
    DescribeWhiteListAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListAssetResponseBody() = default ;
    DescribeWhiteListAssetResponseBody& operator=(const DescribeWhiteListAssetResponseBody &) = default ;
    DescribeWhiteListAssetResponseBody& operator=(DescribeWhiteListAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assets_ == nullptr
        && return this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeWhiteListAssetResponseBodyAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeWhiteListAssetResponseBodyAssets>) };
    inline vector<DescribeWhiteListAssetResponseBodyAssets> assets() { DARABONBA_PTR_GET(assets_, vector<DescribeWhiteListAssetResponseBodyAssets>) };
    inline DescribeWhiteListAssetResponseBody& setAssets(const vector<DescribeWhiteListAssetResponseBodyAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeWhiteListAssetResponseBody& setAssets(vector<DescribeWhiteListAssetResponseBodyAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the servers.
    std::shared_ptr<vector<DescribeWhiteListAssetResponseBodyAssets>> assets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
