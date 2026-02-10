// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsScaProcessNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsScaProcessNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsScaProcessNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAssetsScaProcessNumResponseBody() = default ;
    DescribeAssetsScaProcessNumResponseBody(const DescribeAssetsScaProcessNumResponseBody &) = default ;
    DescribeAssetsScaProcessNumResponseBody(DescribeAssetsScaProcessNumResponseBody &&) = default ;
    DescribeAssetsScaProcessNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsScaProcessNumResponseBody() = default ;
    DescribeAssetsScaProcessNumResponseBody& operator=(const DescribeAssetsScaProcessNumResponseBody &) = default ;
    DescribeAssetsScaProcessNumResponseBody& operator=(DescribeAssetsScaProcessNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
        && this->uuid_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The number of Java processes.
      // 
      // >  If no processes exist on the asset, no statistical result is returned.
      shared_ptr<int32_t> count_ {};
      // The UUID of the asset.
      // 
      // >  If no processes exist on the asset, no statistical result is returned.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAssetsScaProcessNumResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAssetsScaProcessNumResponseBody::Data>) };
    inline vector<DescribeAssetsScaProcessNumResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAssetsScaProcessNumResponseBody::Data>) };
    inline DescribeAssetsScaProcessNumResponseBody& setData(const vector<DescribeAssetsScaProcessNumResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAssetsScaProcessNumResponseBody& setData(vector<DescribeAssetsScaProcessNumResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAssetsScaProcessNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistical results.
    shared_ptr<vector<DescribeAssetsScaProcessNumResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
