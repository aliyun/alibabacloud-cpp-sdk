// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetStorageResponseBody() = default ;
    GetStorageResponseBody(const GetStorageResponseBody &) = default ;
    GetStorageResponseBody(GetStorageResponseBody &&) = default ;
    GetStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageResponseBody() = default ;
    GetStorageResponseBody& operator=(const GetStorageResponseBody &) = default ;
    GetStorageResponseBody& operator=(GetStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanOperate, canOperate_);
        DARABONBA_PTR_TO_JSON(DisplayRegion, displayRegion_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanOperate, canOperate_);
        DARABONBA_PTR_FROM_JSON(DisplayRegion, displayRegion_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
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
      virtual bool empty() const override { return this->canOperate_ == nullptr
        && this->displayRegion_ == nullptr && this->region_ == nullptr && this->ttl_ == nullptr; };
      // canOperate Field Functions 
      bool hasCanOperate() const { return this->canOperate_ != nullptr;};
      void deleteCanOperate() { this->canOperate_ = nullptr;};
      inline bool getCanOperate() const { DARABONBA_PTR_GET_DEFAULT(canOperate_, false) };
      inline Data& setCanOperate(bool canOperate) { DARABONBA_PTR_SET_VALUE(canOperate_, canOperate) };


      // displayRegion Field Functions 
      bool hasDisplayRegion() const { return this->displayRegion_ != nullptr;};
      void deleteDisplayRegion() { this->displayRegion_ = nullptr;};
      inline bool getDisplayRegion() const { DARABONBA_PTR_GET_DEFAULT(displayRegion_, false) };
      inline Data& setDisplayRegion(bool displayRegion) { DARABONBA_PTR_SET_VALUE(displayRegion_, displayRegion) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline Data& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // Indicates whether the storage region can be changed for once. Default value: false Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> canOperate_ {};
      // Indicates whether the storage region can be changed. Default value: false Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> displayRegion_ {};
      // The region where the data is stored.
      // 
      // If the data management center is **cn-hangzhou**, the default value of **Region** is cn-shanghai, which specifies the China (Shanghai) region. If the data management center is **ap-southeast-1**, the default value of **Region** is ap-southeast-1, which specifies the Singapore region.
      shared_ptr<string> region_ {};
      // The storage period of logs. Unit: day. Default value: 180. Valid values: 30 to 3000.
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStorageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStorageResponseBody::Data) };
    inline GetStorageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStorageResponseBody::Data) };
    inline GetStorageResponseBody& setData(const GetStorageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStorageResponseBody& setData(GetStorageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the storage.
    shared_ptr<GetStorageResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
