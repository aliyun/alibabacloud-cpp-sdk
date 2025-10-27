// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMATCHEDMALICIOUSNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMatchedMaliciousNamesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeMatchedMaliciousNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMatchedMaliciousNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMatchedMaliciousNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMatchedMaliciousNamesResponseBody() = default ;
    DescribeMatchedMaliciousNamesResponseBody(const DescribeMatchedMaliciousNamesResponseBody &) = default ;
    DescribeMatchedMaliciousNamesResponseBody(DescribeMatchedMaliciousNamesResponseBody &&) = default ;
    DescribeMatchedMaliciousNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMatchedMaliciousNamesResponseBody() = default ;
    DescribeMatchedMaliciousNamesResponseBody& operator=(const DescribeMatchedMaliciousNamesResponseBody &) = default ;
    DescribeMatchedMaliciousNamesResponseBody& operator=(DescribeMatchedMaliciousNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeMatchedMaliciousNamesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMatchedMaliciousNamesResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMatchedMaliciousNamesResponseBodyData>) };
    inline vector<DescribeMatchedMaliciousNamesResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeMatchedMaliciousNamesResponseBodyData>) };
    inline DescribeMatchedMaliciousNamesResponseBody& setData(const vector<DescribeMatchedMaliciousNamesResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMatchedMaliciousNamesResponseBody& setData(vector<DescribeMatchedMaliciousNamesResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMatchedMaliciousNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of entries on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The response parameters.
    std::shared_ptr<vector<DescribeMatchedMaliciousNamesResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
