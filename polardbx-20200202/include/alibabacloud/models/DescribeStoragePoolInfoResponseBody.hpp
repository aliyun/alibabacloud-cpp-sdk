// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStoragePoolInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStoragePoolInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePoolInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePoolInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeStoragePoolInfoResponseBody() = default ;
    DescribeStoragePoolInfoResponseBody(const DescribeStoragePoolInfoResponseBody &) = default ;
    DescribeStoragePoolInfoResponseBody(DescribeStoragePoolInfoResponseBody &&) = default ;
    DescribeStoragePoolInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePoolInfoResponseBody() = default ;
    DescribeStoragePoolInfoResponseBody& operator=(const DescribeStoragePoolInfoResponseBody &) = default ;
    DescribeStoragePoolInfoResponseBody& operator=(DescribeStoragePoolInfoResponseBody &&) = default ;
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
    inline DescribeStoragePoolInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeStoragePoolInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeStoragePoolInfoResponseBodyData) };
    inline DescribeStoragePoolInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeStoragePoolInfoResponseBodyData) };
    inline DescribeStoragePoolInfoResponseBody& setData(const DescribeStoragePoolInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeStoragePoolInfoResponseBody& setData(DescribeStoragePoolInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStoragePoolInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<DescribeStoragePoolInfoResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
