// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessTaskCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTaskCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessTaskCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessTaskCountResponseBody() = default ;
    DescribeProcessTaskCountResponseBody(const DescribeProcessTaskCountResponseBody &) = default ;
    DescribeProcessTaskCountResponseBody(DescribeProcessTaskCountResponseBody &&) = default ;
    DescribeProcessTaskCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTaskCountResponseBody() = default ;
    DescribeProcessTaskCountResponseBody& operator=(const DescribeProcessTaskCountResponseBody &) = default ;
    DescribeProcessTaskCountResponseBody& operator=(DescribeProcessTaskCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(EntityUuid, entityUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(EntityUuid, entityUuid_);
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
        && this->entityUuid_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // entityUuid Field Functions 
      bool hasEntityUuid() const { return this->entityUuid_ != nullptr;};
      void deleteEntityUuid() { this->entityUuid_ = nullptr;};
      inline string getEntityUuid() const { DARABONBA_PTR_GET_DEFAULT(entityUuid_, "") };
      inline Data& setEntityUuid(string entityUuid) { DARABONBA_PTR_SET_VALUE(entityUuid_, entityUuid) };


    protected:
      // Count.
      shared_ptr<int64_t> count_ {};
      // Entity UUID.
      shared_ptr<string> entityUuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeProcessTaskCountResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeProcessTaskCountResponseBody::Data>) };
    inline vector<DescribeProcessTaskCountResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeProcessTaskCountResponseBody::Data>) };
    inline DescribeProcessTaskCountResponseBody& setData(const vector<DescribeProcessTaskCountResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeProcessTaskCountResponseBody& setData(vector<DescribeProcessTaskCountResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessTaskCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Transmitted data.
    shared_ptr<vector<DescribeProcessTaskCountResponseBody::Data>> data_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for this request, used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
