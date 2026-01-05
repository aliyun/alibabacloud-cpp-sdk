// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECASSETTRENDRESPONSEBODY_HPP_
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
  class DescribeApisecAssetTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecAssetTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecAssetTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecAssetTrendResponseBody() = default ;
    DescribeApisecAssetTrendResponseBody(const DescribeApisecAssetTrendResponseBody &) = default ;
    DescribeApisecAssetTrendResponseBody(DescribeApisecAssetTrendResponseBody &&) = default ;
    DescribeApisecAssetTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecAssetTrendResponseBody() = default ;
    DescribeApisecAssetTrendResponseBody& operator=(const DescribeApisecAssetTrendResponseBody &) = default ;
    DescribeApisecAssetTrendResponseBody& operator=(DescribeApisecAssetTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetActive, assetActive_);
        DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_TO_JSON(AssetOffline, assetOffline_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetActive, assetActive_);
        DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
        DARABONBA_PTR_FROM_JSON(AssetOffline, assetOffline_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetActive_ == nullptr
        && this->assetCount_ == nullptr && this->assetOffline_ == nullptr && this->timestamp_ == nullptr; };
      // assetActive Field Functions 
      bool hasAssetActive() const { return this->assetActive_ != nullptr;};
      void deleteAssetActive() { this->assetActive_ = nullptr;};
      inline int64_t getAssetActive() const { DARABONBA_PTR_GET_DEFAULT(assetActive_, 0L) };
      inline Data& setAssetActive(int64_t assetActive) { DARABONBA_PTR_SET_VALUE(assetActive_, assetActive) };


      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int64_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
      inline Data& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // assetOffline Field Functions 
      bool hasAssetOffline() const { return this->assetOffline_ != nullptr;};
      void deleteAssetOffline() { this->assetOffline_ = nullptr;};
      inline int64_t getAssetOffline() const { DARABONBA_PTR_GET_DEFAULT(assetOffline_, 0L) };
      inline Data& setAssetOffline(int64_t assetOffline) { DARABONBA_PTR_SET_VALUE(assetOffline_, assetOffline) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The number of active assets.
      shared_ptr<int64_t> assetActive_ {};
      // The total number of assets.
      shared_ptr<int64_t> assetCount_ {};
      // The number of deactivated assets.
      shared_ptr<int64_t> assetOffline_ {};
      // The time for statistics. Specify a UNIX timestamp in UTC. Unit: seconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecAssetTrendResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecAssetTrendResponseBody::Data>) };
    inline vector<DescribeApisecAssetTrendResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecAssetTrendResponseBody::Data>) };
    inline DescribeApisecAssetTrendResponseBody& setData(const vector<DescribeApisecAssetTrendResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecAssetTrendResponseBody& setData(vector<DescribeApisecAssetTrendResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecAssetTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<DescribeApisecAssetTrendResponseBody::Data>> data_ {};
    // Id of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
