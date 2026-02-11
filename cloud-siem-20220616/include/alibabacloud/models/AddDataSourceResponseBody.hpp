// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDataSourceResponseBody() = default ;
    AddDataSourceResponseBody(const AddDataSourceResponseBody &) = default ;
    AddDataSourceResponseBody(AddDataSourceResponseBody &&) = default ;
    AddDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceResponseBody() = default ;
    AddDataSourceResponseBody& operator=(const AddDataSourceResponseBody &) = default ;
    AddDataSourceResponseBody& operator=(AddDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DataSourceInstanceId, dataSourceInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DataSourceInstanceId, dataSourceInstanceId_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->dataSourceInstanceId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // dataSourceInstanceId Field Functions 
      bool hasDataSourceInstanceId() const { return this->dataSourceInstanceId_ != nullptr;};
      void deleteDataSourceInstanceId() { this->dataSourceInstanceId_ = nullptr;};
      inline string getDataSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceInstanceId_, "") };
      inline Data& setDataSourceInstanceId(string dataSourceInstanceId) { DARABONBA_PTR_SET_VALUE(dataSourceInstanceId_, dataSourceInstanceId) };


    protected:
      // The number of data sources that are added. The value 1 indicates that data source is added, and a value less than or equal to 0 indicates that the data source failed to be added.
      shared_ptr<int32_t> count_ {};
      // The ID of the data source. The ID is an MD5 hash value that is calculated by the threat analysis feature based on specific parameters.
      shared_ptr<string> dataSourceInstanceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddDataSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddDataSourceResponseBody::Data) };
    inline AddDataSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddDataSourceResponseBody::Data) };
    inline AddDataSourceResponseBody& setData(const AddDataSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddDataSourceResponseBody& setData(AddDataSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<AddDataSourceResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
