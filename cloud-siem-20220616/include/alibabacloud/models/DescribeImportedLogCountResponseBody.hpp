// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTEDLOGCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImportedLogCountResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeImportedLogCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportedLogCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportedLogCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImportedLogCountResponseBody() = default ;
    DescribeImportedLogCountResponseBody(const DescribeImportedLogCountResponseBody &) = default ;
    DescribeImportedLogCountResponseBody(DescribeImportedLogCountResponseBody &&) = default ;
    DescribeImportedLogCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportedLogCountResponseBody() = default ;
    DescribeImportedLogCountResponseBody& operator=(const DescribeImportedLogCountResponseBody &) = default ;
    DescribeImportedLogCountResponseBody& operator=(DescribeImportedLogCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImportedLogCountResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeImportedLogCountResponseBodyData) };
    inline DescribeImportedLogCountResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeImportedLogCountResponseBodyData) };
    inline DescribeImportedLogCountResponseBody& setData(const DescribeImportedLogCountResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImportedLogCountResponseBody& setData(DescribeImportedLogCountResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportedLogCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeImportedLogCountResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
