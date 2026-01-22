// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETDERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTDEResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTDEResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody(DescribeDBInstanceTDEResponseBody &&) = default ;
    DescribeDBInstanceTDEResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTDEResponseBody() = default ;
    DescribeDBInstanceTDEResponseBody& operator=(const DescribeDBInstanceTDEResponseBody &) = default ;
    DescribeDBInstanceTDEResponseBody& operator=(DescribeDBInstanceTDEResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TDEStatus, TDEStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TDEStatus, TDEStatus_);
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
      virtual bool empty() const override { return this->TDEStatus_ == nullptr; };
      // TDEStatus Field Functions 
      bool hasTDEStatus() const { return this->TDEStatus_ != nullptr;};
      void deleteTDEStatus() { this->TDEStatus_ = nullptr;};
      inline string getTDEStatus() const { DARABONBA_PTR_GET_DEFAULT(TDEStatus_, "") };
      inline Data& setTDEStatus(string TDEStatus) { DARABONBA_PTR_SET_VALUE(TDEStatus_, TDEStatus) };


    protected:
      shared_ptr<string> TDEStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceTDEResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceTDEResponseBody::Data) };
    inline DescribeDBInstanceTDEResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceTDEResponseBody::Data) };
    inline DescribeDBInstanceTDEResponseBody& setData(const DescribeDBInstanceTDEResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceTDEResponseBody& setData(DescribeDBInstanceTDEResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceTDEResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDBInstanceTDEResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
