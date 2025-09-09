// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeExpandLogicTableInfoListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeExpandLogicTableInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpandLogicTableInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpandLogicTableInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeExpandLogicTableInfoListResponseBody() = default ;
    DescribeExpandLogicTableInfoListResponseBody(const DescribeExpandLogicTableInfoListResponseBody &) = default ;
    DescribeExpandLogicTableInfoListResponseBody(DescribeExpandLogicTableInfoListResponseBody &&) = default ;
    DescribeExpandLogicTableInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpandLogicTableInfoListResponseBody() = default ;
    DescribeExpandLogicTableInfoListResponseBody& operator=(const DescribeExpandLogicTableInfoListResponseBody &) = default ;
    DescribeExpandLogicTableInfoListResponseBody& operator=(DescribeExpandLogicTableInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeExpandLogicTableInfoListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeExpandLogicTableInfoListResponseBodyData) };
    inline DescribeExpandLogicTableInfoListResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeExpandLogicTableInfoListResponseBodyData) };
    inline DescribeExpandLogicTableInfoListResponseBody& setData(const DescribeExpandLogicTableInfoListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeExpandLogicTableInfoListResponseBody& setData(DescribeExpandLogicTableInfoListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpandLogicTableInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeExpandLogicTableInfoListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the result that is returned.
    std::shared_ptr<DescribeExpandLogicTableInfoListResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
