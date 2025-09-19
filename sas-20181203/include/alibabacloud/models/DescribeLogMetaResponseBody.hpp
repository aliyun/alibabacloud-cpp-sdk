// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogMetaResponseBodyLogMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogMetaResponseBody() = default ;
    DescribeLogMetaResponseBody(const DescribeLogMetaResponseBody &) = default ;
    DescribeLogMetaResponseBody(DescribeLogMetaResponseBody &&) = default ;
    DescribeLogMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMetaResponseBody() = default ;
    DescribeLogMetaResponseBody& operator=(const DescribeLogMetaResponseBody &) = default ;
    DescribeLogMetaResponseBody& operator=(DescribeLogMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logMetaList_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // logMetaList Field Functions 
    bool hasLogMetaList() const { return this->logMetaList_ != nullptr;};
    void deleteLogMetaList() { this->logMetaList_ = nullptr;};
    inline const vector<DescribeLogMetaResponseBodyLogMetaList> & logMetaList() const { DARABONBA_PTR_GET_CONST(logMetaList_, vector<DescribeLogMetaResponseBodyLogMetaList>) };
    inline vector<DescribeLogMetaResponseBodyLogMetaList> logMetaList() { DARABONBA_PTR_GET(logMetaList_, vector<DescribeLogMetaResponseBodyLogMetaList>) };
    inline DescribeLogMetaResponseBody& setLogMetaList(const vector<DescribeLogMetaResponseBodyLogMetaList> & logMetaList) { DARABONBA_PTR_SET_VALUE(logMetaList_, logMetaList) };
    inline DescribeLogMetaResponseBody& setLogMetaList(vector<DescribeLogMetaResponseBodyLogMetaList> && logMetaList) { DARABONBA_PTR_SET_RVALUE(logMetaList_, logMetaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogMetaResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the configurations of the log analysis feature.
    std::shared_ptr<vector<DescribeLogMetaResponseBodyLogMetaList>> logMetaList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
