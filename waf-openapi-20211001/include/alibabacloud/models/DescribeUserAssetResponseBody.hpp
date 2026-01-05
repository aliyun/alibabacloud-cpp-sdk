// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Assets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Assets& obj) { 
        DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, Assets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      Assets() = default ;
      Assets(const Assets &) = default ;
      Assets(Assets &&) = default ;
      Assets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Assets() = default ;
      Assets& operator=(const Assets &) = default ;
      Assets& operator=(Assets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetNum_ == nullptr
        && this->timeStamp_ == nullptr; };
      // assetNum Field Functions 
      bool hasAssetNum() const { return this->assetNum_ != nullptr;};
      void deleteAssetNum() { this->assetNum_ = nullptr;};
      inline int64_t getAssetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0L) };
      inline Assets& setAssetNum(int64_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline Assets& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The number of APIs returned.
      shared_ptr<int64_t> assetNum_ {};
      // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> timeStamp_ {};
    };

    virtual bool empty() const override { return this->assets_ == nullptr
        && this->requestId_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeUserAssetResponseBody::Assets> & getAssets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeUserAssetResponseBody::Assets>) };
    inline vector<DescribeUserAssetResponseBody::Assets> getAssets() { DARABONBA_PTR_GET(assets_, vector<DescribeUserAssetResponseBody::Assets>) };
    inline DescribeUserAssetResponseBody& setAssets(const vector<DescribeUserAssetResponseBody::Assets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeUserAssetResponseBody& setAssets(vector<DescribeUserAssetResponseBody::Assets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAssetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API statistics.
    shared_ptr<vector<DescribeUserAssetResponseBody::Assets>> assets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
