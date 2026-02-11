// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSCOUNTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSCOUNTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCloudSiemAssetsCounterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemAssetsCounterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemAssetsCounterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudSiemAssetsCounterResponseBody() = default ;
    DescribeCloudSiemAssetsCounterResponseBody(const DescribeCloudSiemAssetsCounterResponseBody &) = default ;
    DescribeCloudSiemAssetsCounterResponseBody(DescribeCloudSiemAssetsCounterResponseBody &&) = default ;
    DescribeCloudSiemAssetsCounterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemAssetsCounterResponseBody() = default ;
    DescribeCloudSiemAssetsCounterResponseBody& operator=(const DescribeCloudSiemAssetsCounterResponseBody &) = default ;
    DescribeCloudSiemAssetsCounterResponseBody& operator=(DescribeCloudSiemAssetsCounterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetNum, assetNum_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
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
      virtual bool empty() const override { return this->assetNum_ == nullptr
        && this->assetType_ == nullptr; };
      // assetNum Field Functions 
      bool hasAssetNum() const { return this->assetNum_ != nullptr;};
      void deleteAssetNum() { this->assetNum_ = nullptr;};
      inline int32_t getAssetNum() const { DARABONBA_PTR_GET_DEFAULT(assetNum_, 0) };
      inline Data& setAssetNum(int32_t assetNum) { DARABONBA_PTR_SET_VALUE(assetNum_, assetNum) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Data& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    protected:
      // The number of assets.
      shared_ptr<int32_t> assetNum_ {};
      // The type of the asset. Valid values:
      // 
      // *   ip
      // *   domain
      // *   url
      // *   process
      // *   file
      // *   host
      shared_ptr<string> assetType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCloudSiemAssetsCounterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeCloudSiemAssetsCounterResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeCloudSiemAssetsCounterResponseBody::Data>) };
    inline vector<DescribeCloudSiemAssetsCounterResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeCloudSiemAssetsCounterResponseBody::Data>) };
    inline DescribeCloudSiemAssetsCounterResponseBody& setData(const vector<DescribeCloudSiemAssetsCounterResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudSiemAssetsCounterResponseBody& setData(vector<DescribeCloudSiemAssetsCounterResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudSiemAssetsCounterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudSiemAssetsCounterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudSiemAssetsCounterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeCloudSiemAssetsCounterResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
