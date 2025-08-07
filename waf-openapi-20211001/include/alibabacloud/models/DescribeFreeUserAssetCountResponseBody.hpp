// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSERASSETCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSERASSETCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFreeUserAssetCountResponseBodyAsset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserAssetCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserAssetCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Asset, asset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserAssetCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Asset, asset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserAssetCountResponseBody() = default ;
    DescribeFreeUserAssetCountResponseBody(const DescribeFreeUserAssetCountResponseBody &) = default ;
    DescribeFreeUserAssetCountResponseBody(DescribeFreeUserAssetCountResponseBody &&) = default ;
    DescribeFreeUserAssetCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserAssetCountResponseBody() = default ;
    DescribeFreeUserAssetCountResponseBody& operator=(const DescribeFreeUserAssetCountResponseBody &) = default ;
    DescribeFreeUserAssetCountResponseBody& operator=(DescribeFreeUserAssetCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asset_ != nullptr
        && this->requestId_ != nullptr; };
    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline const DescribeFreeUserAssetCountResponseBodyAsset & asset() const { DARABONBA_PTR_GET_CONST(asset_, DescribeFreeUserAssetCountResponseBodyAsset) };
    inline DescribeFreeUserAssetCountResponseBodyAsset asset() { DARABONBA_PTR_GET(asset_, DescribeFreeUserAssetCountResponseBodyAsset) };
    inline DescribeFreeUserAssetCountResponseBody& setAsset(const DescribeFreeUserAssetCountResponseBodyAsset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
    inline DescribeFreeUserAssetCountResponseBody& setAsset(DescribeFreeUserAssetCountResponseBodyAsset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserAssetCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset statistics provided by basic detection.
    std::shared_ptr<DescribeFreeUserAssetCountResponseBodyAsset> asset_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
