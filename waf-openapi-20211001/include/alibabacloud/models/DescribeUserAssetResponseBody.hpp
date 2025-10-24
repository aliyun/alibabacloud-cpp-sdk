// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserAssetResponseBodyAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserAssetResponseBody() = default ;
    DescribeUserAssetResponseBody(const DescribeUserAssetResponseBody &) = default ;
    DescribeUserAssetResponseBody(DescribeUserAssetResponseBody &&) = default ;
    DescribeUserAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAssetResponseBody() = default ;
    DescribeUserAssetResponseBody& operator=(const DescribeUserAssetResponseBody &) = default ;
    DescribeUserAssetResponseBody& operator=(DescribeUserAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assets_ == nullptr
        && return this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeUserAssetResponseBodyAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeUserAssetResponseBodyAssets>) };
    inline vector<DescribeUserAssetResponseBodyAssets> assets() { DARABONBA_PTR_GET(assets_, vector<DescribeUserAssetResponseBodyAssets>) };
    inline DescribeUserAssetResponseBody& setAssets(const vector<DescribeUserAssetResponseBodyAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeUserAssetResponseBody& setAssets(vector<DescribeUserAssetResponseBodyAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API statistics.
    std::shared_ptr<vector<DescribeUserAssetResponseBodyAssets>> assets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
