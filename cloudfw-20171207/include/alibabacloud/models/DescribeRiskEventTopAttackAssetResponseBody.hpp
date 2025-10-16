// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTTOPATTACKASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskEventTopAttackAssetResponseBodyAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventTopAttackAssetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventTopAttackAssetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventTopAttackAssetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRiskEventTopAttackAssetResponseBody() = default ;
    DescribeRiskEventTopAttackAssetResponseBody(const DescribeRiskEventTopAttackAssetResponseBody &) = default ;
    DescribeRiskEventTopAttackAssetResponseBody(DescribeRiskEventTopAttackAssetResponseBody &&) = default ;
    DescribeRiskEventTopAttackAssetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventTopAttackAssetResponseBody() = default ;
    DescribeRiskEventTopAttackAssetResponseBody& operator=(const DescribeRiskEventTopAttackAssetResponseBody &) = default ;
    DescribeRiskEventTopAttackAssetResponseBody& operator=(DescribeRiskEventTopAttackAssetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assets_ == nullptr
        && return this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeRiskEventTopAttackAssetResponseBodyAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeRiskEventTopAttackAssetResponseBodyAssets>) };
    inline vector<DescribeRiskEventTopAttackAssetResponseBodyAssets> assets() { DARABONBA_PTR_GET(assets_, vector<DescribeRiskEventTopAttackAssetResponseBodyAssets>) };
    inline DescribeRiskEventTopAttackAssetResponseBody& setAssets(const vector<DescribeRiskEventTopAttackAssetResponseBodyAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeRiskEventTopAttackAssetResponseBody& setAssets(vector<DescribeRiskEventTopAttackAssetResponseBodyAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventTopAttackAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeRiskEventTopAttackAssetResponseBodyAssets>> assets_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
