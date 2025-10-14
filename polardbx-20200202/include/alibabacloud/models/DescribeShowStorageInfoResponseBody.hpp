// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeShowStorageInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeShowStorageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowStorageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeShowStorageInfoResponseBody() = default ;
    DescribeShowStorageInfoResponseBody(const DescribeShowStorageInfoResponseBody &) = default ;
    DescribeShowStorageInfoResponseBody(DescribeShowStorageInfoResponseBody &&) = default ;
    DescribeShowStorageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowStorageInfoResponseBody() = default ;
    DescribeShowStorageInfoResponseBody& operator=(const DescribeShowStorageInfoResponseBody &) = default ;
    DescribeShowStorageInfoResponseBody& operator=(DescribeShowStorageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeShowStorageInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeShowStorageInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeShowStorageInfoResponseBodyData) };
    inline DescribeShowStorageInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeShowStorageInfoResponseBodyData) };
    inline DescribeShowStorageInfoResponseBody& setData(const DescribeShowStorageInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeShowStorageInfoResponseBody& setData(DescribeShowStorageInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeShowStorageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<DescribeShowStorageInfoResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
