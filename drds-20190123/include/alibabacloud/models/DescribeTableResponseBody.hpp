// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTableResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeTableResponseBody() = default ;
    DescribeTableResponseBody(const DescribeTableResponseBody &) = default ;
    DescribeTableResponseBody(DescribeTableResponseBody &&) = default ;
    DescribeTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableResponseBody() = default ;
    DescribeTableResponseBody& operator=(const DescribeTableResponseBody &) = default ;
    DescribeTableResponseBody& operator=(DescribeTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTableResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeTableResponseBodyData) };
    inline DescribeTableResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeTableResponseBodyData) };
    inline DescribeTableResponseBody& setData(const DescribeTableResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTableResponseBody& setData(DescribeTableResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the returned data.
    std::shared_ptr<DescribeTableResponseBodyData> data_ = nullptr;
    // Indicates the unique ID of the request. If the request fails, provide this ID for technical support to troubleshoot the failure.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
