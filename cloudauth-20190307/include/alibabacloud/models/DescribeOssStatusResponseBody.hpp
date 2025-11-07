// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOssStatusResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssStatusResponseBody() = default ;
    DescribeOssStatusResponseBody(const DescribeOssStatusResponseBody &) = default ;
    DescribeOssStatusResponseBody(DescribeOssStatusResponseBody &&) = default ;
    DescribeOssStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssStatusResponseBody() = default ;
    DescribeOssStatusResponseBody& operator=(const DescribeOssStatusResponseBody &) = default ;
    DescribeOssStatusResponseBody& operator=(DescribeOssStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOssStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeOssStatusResponseBodyData) };
    inline DescribeOssStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeOssStatusResponseBodyData) };
    inline DescribeOssStatusResponseBody& setData(const DescribeOssStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOssStatusResponseBody& setData(DescribeOssStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data.
    std::shared_ptr<DescribeOssStatusResponseBodyData> data_ = nullptr;
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
