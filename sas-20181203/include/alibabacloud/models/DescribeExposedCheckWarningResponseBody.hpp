// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedCheckWarningResponseBodyWarningList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedCheckWarningResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedCheckWarningResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarningList, warningList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedCheckWarningResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarningList, warningList_);
    };
    DescribeExposedCheckWarningResponseBody() = default ;
    DescribeExposedCheckWarningResponseBody(const DescribeExposedCheckWarningResponseBody &) = default ;
    DescribeExposedCheckWarningResponseBody(DescribeExposedCheckWarningResponseBody &&) = default ;
    DescribeExposedCheckWarningResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedCheckWarningResponseBody() = default ;
    DescribeExposedCheckWarningResponseBody& operator=(const DescribeExposedCheckWarningResponseBody &) = default ;
    DescribeExposedCheckWarningResponseBody& operator=(DescribeExposedCheckWarningResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->requestId_ != nullptr && this->warningList_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeExposedCheckWarningResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedCheckWarningResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warningList Field Functions 
    bool hasWarningList() const { return this->warningList_ != nullptr;};
    void deleteWarningList() { this->warningList_ = nullptr;};
    inline const vector<DescribeExposedCheckWarningResponseBodyWarningList> & warningList() const { DARABONBA_PTR_GET_CONST(warningList_, vector<DescribeExposedCheckWarningResponseBodyWarningList>) };
    inline vector<DescribeExposedCheckWarningResponseBodyWarningList> warningList() { DARABONBA_PTR_GET(warningList_, vector<DescribeExposedCheckWarningResponseBodyWarningList>) };
    inline DescribeExposedCheckWarningResponseBody& setWarningList(const vector<DescribeExposedCheckWarningResponseBodyWarningList> & warningList) { DARABONBA_PTR_SET_VALUE(warningList_, warningList) };
    inline DescribeExposedCheckWarningResponseBody& setWarningList(vector<DescribeExposedCheckWarningResponseBodyWarningList> && warningList) { DARABONBA_PTR_SET_RVALUE(warningList_, warningList) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the baseline risk items of the exposed server.
    std::shared_ptr<vector<DescribeExposedCheckWarningResponseBodyWarningList>> warningList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
