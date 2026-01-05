// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSERASSETCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSERASSETCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Asset : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Asset& obj) { 
        DARABONBA_PTR_TO_JSON(AssetActive, assetActive_);
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(AssetOffline, assetOffline_);
      };
      friend void from_json(const Darabonba::Json& j, Asset& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetActive, assetActive_);
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(AssetOffline, assetOffline_);
      };
      Asset() = default ;
      Asset(const Asset &) = default ;
      Asset(Asset &&) = default ;
      Asset(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Asset() = default ;
      Asset& operator=(const Asset &) = default ;
      Asset& operator=(Asset &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetActive_ == nullptr
        && this->assetCount_ == nullptr && this->assetOffline_ == nullptr; };
      // assetActive Field Functions 
      bool hasAssetActive() const { return this->assetActive_ != nullptr;};
      void deleteAssetActive() { this->assetActive_ = nullptr;};
      inline int64_t getAssetActive() const { DARABONBA_PTR_GET_DEFAULT(assetActive_, 0L) };
      inline Asset& setAssetActive(int64_t assetActive) { DARABONBA_PTR_SET_VALUE(assetActive_, assetActive) };


      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int64_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
      inline Asset& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // assetOffline Field Functions 
      bool hasAssetOffline() const { return this->assetOffline_ != nullptr;};
      void deleteAssetOffline() { this->assetOffline_ = nullptr;};
      inline int64_t getAssetOffline() const { DARABONBA_PTR_GET_DEFAULT(assetOffline_, 0L) };
      inline Asset& setAssetOffline(int64_t assetOffline) { DARABONBA_PTR_SET_VALUE(assetOffline_, assetOffline) };


    protected:
      // The number of active APIs.
      shared_ptr<int64_t> assetActive_ {};
      // The total number of APIs.
      shared_ptr<int64_t> assetCount_ {};
      // The number of deactivated APIs.
      shared_ptr<int64_t> assetOffline_ {};
    };

    virtual bool empty() const override { return this->asset_ == nullptr
        && this->requestId_ == nullptr; };
    // asset Field Functions 
    bool hasAsset() const { return this->asset_ != nullptr;};
    void deleteAsset() { this->asset_ = nullptr;};
    inline const DescribeFreeUserAssetCountResponseBody::Asset & getAsset() const { DARABONBA_PTR_GET_CONST(asset_, DescribeFreeUserAssetCountResponseBody::Asset) };
    inline DescribeFreeUserAssetCountResponseBody::Asset getAsset() { DARABONBA_PTR_GET(asset_, DescribeFreeUserAssetCountResponseBody::Asset) };
    inline DescribeFreeUserAssetCountResponseBody& setAsset(const DescribeFreeUserAssetCountResponseBody::Asset & asset) { DARABONBA_PTR_SET_VALUE(asset_, asset) };
    inline DescribeFreeUserAssetCountResponseBody& setAsset(DescribeFreeUserAssetCountResponseBody::Asset && asset) { DARABONBA_PTR_SET_RVALUE(asset_, asset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserAssetCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset statistics provided by basic detection.
    shared_ptr<DescribeFreeUserAssetCountResponseBody::Asset> asset_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
