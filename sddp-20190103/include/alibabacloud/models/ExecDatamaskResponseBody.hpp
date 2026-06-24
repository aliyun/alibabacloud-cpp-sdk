// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATAMASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECDATAMASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class ExecDatamaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDatamaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDatamaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExecDatamaskResponseBody() = default ;
    ExecDatamaskResponseBody(const ExecDatamaskResponseBody &) = default ;
    ExecDatamaskResponseBody(ExecDatamaskResponseBody &&) = default ;
    ExecDatamaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDatamaskResponseBody() = default ;
    ExecDatamaskResponseBody& operator=(const ExecDatamaskResponseBody &) = default ;
    ExecDatamaskResponseBody& operator=(ExecDatamaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ExecDatamaskResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecDatamaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data after it is masked. The data is a string in JSON format and includes the following fields:
    // 
    // - **dataHeaderList**: The column names of the masked data.
    // 
    // - **dataList**: The masked data. The order of the fields corresponds to the order of the column names.
    // 
    // - **ruleList**: The sensitive data type IDs. Each ID corresponds to the unique ID of a sensitive data type that is returned by the [DescribeRules](https://help.aliyun.com/document_detail/410141.html) operation.
    shared_ptr<string> data_ {};
    // The ID of the request. Alibaba Cloud generates a unique ID for each request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
