// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLakeCacheSizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakeCacheSizeResponseBody() = default ;
    DescribeLakeCacheSizeResponseBody(const DescribeLakeCacheSizeResponseBody &) = default ;
    DescribeLakeCacheSizeResponseBody(DescribeLakeCacheSizeResponseBody &&) = default ;
    DescribeLakeCacheSizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakeCacheSizeResponseBody() = default ;
    DescribeLakeCacheSizeResponseBody& operator=(const DescribeLakeCacheSizeResponseBody &) = default ;
    DescribeLakeCacheSizeResponseBody& operator=(DescribeLakeCacheSizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
        DARABONBA_PTR_TO_JSON(EnableLakeCache, enableLakeCache_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
        DARABONBA_PTR_FROM_JSON(EnableLakeCache, enableLakeCache_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
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
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->DBClusterId_ == nullptr && this->dataSize_ == nullptr && this->enableLakeCache_ == nullptr && this->instances_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline Data& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
      inline Data& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // enableLakeCache Field Functions 
      bool hasEnableLakeCache() const { return this->enableLakeCache_ != nullptr;};
      void deleteEnableLakeCache() { this->enableLakeCache_ = nullptr;};
      inline bool getEnableLakeCache() const { DARABONBA_PTR_GET_DEFAULT(enableLakeCache_, false) };
      inline Data& setEnableLakeCache(bool enableLakeCache) { DARABONBA_PTR_SET_VALUE(enableLakeCache_, enableLakeCache) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
      inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
      inline Data& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    protected:
      // The size of the lake cache space. Unit: GB.
      shared_ptr<int64_t> capacity_ {};
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The size of the data that occupies the lake cache space. Unit: GB.
      shared_ptr<int64_t> dataSize_ {};
      // Indicates whether the lake cache feature is enabled.
      shared_ptr<bool> enableLakeCache_ {};
      // The clusters that share the lake cache space.
      shared_ptr<vector<string>> instances_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeLakeCacheSizeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeLakeCacheSizeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeLakeCacheSizeResponseBody::Data) };
    inline DescribeLakeCacheSizeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeLakeCacheSizeResponseBody::Data) };
    inline DescribeLakeCacheSizeResponseBody& setData(const DescribeLakeCacheSizeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeLakeCacheSizeResponseBody& setData(DescribeLakeCacheSizeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakeCacheSizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The value 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<DescribeLakeCacheSizeResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
