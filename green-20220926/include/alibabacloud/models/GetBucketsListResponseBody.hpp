// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetBucketsListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketsListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketsListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBucketsListResponseBody() = default ;
    GetBucketsListResponseBody(const GetBucketsListResponseBody &) = default ;
    GetBucketsListResponseBody(GetBucketsListResponseBody &&) = default ;
    GetBucketsListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketsListResponseBody() = default ;
    GetBucketsListResponseBody& operator=(const GetBucketsListResponseBody &) = default ;
    GetBucketsListResponseBody& operator=(GetBucketsListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bucket, bucket_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      virtual bool empty() const override { return this->bucket_ == nullptr
        && this->region_ == nullptr; };
      // bucket Field Functions 
      bool hasBucket() const { return this->bucket_ != nullptr;};
      void deleteBucket() { this->bucket_ = nullptr;};
      inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
      inline Data& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // OSS file storage bucket name.
      shared_ptr<string> bucket_ {};
      // Region ID.
      shared_ptr<string> region_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetBucketsListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetBucketsListResponseBody::Data>) };
    inline vector<GetBucketsListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetBucketsListResponseBody::Data>) };
    inline GetBucketsListResponseBody& setData(const vector<GetBucketsListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBucketsListResponseBody& setData(vector<GetBucketsListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBucketsListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    shared_ptr<vector<GetBucketsListResponseBody::Data>> data_ {};
    // Backend-assigned ID, used to uniquely identify a request. Can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
