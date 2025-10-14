// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNARVERSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeColumnarVersionListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColumnarVersionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnarVersionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnarVersionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColumnarVersionListResponseBody() = default ;
    DescribeColumnarVersionListResponseBody(const DescribeColumnarVersionListResponseBody &) = default ;
    DescribeColumnarVersionListResponseBody(DescribeColumnarVersionListResponseBody &&) = default ;
    DescribeColumnarVersionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnarVersionListResponseBody() = default ;
    DescribeColumnarVersionListResponseBody& operator=(const DescribeColumnarVersionListResponseBody &) = default ;
    DescribeColumnarVersionListResponseBody& operator=(DescribeColumnarVersionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeColumnarVersionListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeColumnarVersionListResponseBodyData) };
    inline DescribeColumnarVersionListResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeColumnarVersionListResponseBodyData) };
    inline DescribeColumnarVersionListResponseBody& setData(const DescribeColumnarVersionListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeColumnarVersionListResponseBody& setData(DescribeColumnarVersionListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnarVersionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeColumnarVersionListResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
