// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKLEAFRECORDPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks.hpp>
#include <alibabacloud/models/DescribeOnceTaskLeafRecordPageResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskLeafRecordPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskLeafRecordPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskLeafRecordPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOnceTaskLeafRecordPageResponseBody() = default ;
    DescribeOnceTaskLeafRecordPageResponseBody(const DescribeOnceTaskLeafRecordPageResponseBody &) = default ;
    DescribeOnceTaskLeafRecordPageResponseBody(DescribeOnceTaskLeafRecordPageResponseBody &&) = default ;
    DescribeOnceTaskLeafRecordPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskLeafRecordPageResponseBody() = default ;
    DescribeOnceTaskLeafRecordPageResponseBody& operator=(const DescribeOnceTaskLeafRecordPageResponseBody &) = default ;
    DescribeOnceTaskLeafRecordPageResponseBody& operator=(DescribeOnceTaskLeafRecordPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onceTasks_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // onceTasks Field Functions 
    bool hasOnceTasks() const { return this->onceTasks_ != nullptr;};
    void deleteOnceTasks() { this->onceTasks_ = nullptr;};
    inline const vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks> & onceTasks() const { DARABONBA_PTR_GET_CONST(onceTasks_, vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks>) };
    inline vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks> onceTasks() { DARABONBA_PTR_GET(onceTasks_, vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks>) };
    inline DescribeOnceTaskLeafRecordPageResponseBody& setOnceTasks(const vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks> & onceTasks) { DARABONBA_PTR_SET_VALUE(onceTasks_, onceTasks) };
    inline DescribeOnceTaskLeafRecordPageResponseBody& setOnceTasks(vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks> && onceTasks) { DARABONBA_PTR_SET_RVALUE(onceTasks_, onceTasks) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeOnceTaskLeafRecordPageResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeOnceTaskLeafRecordPageResponseBodyPageInfo) };
    inline DescribeOnceTaskLeafRecordPageResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeOnceTaskLeafRecordPageResponseBodyPageInfo) };
    inline DescribeOnceTaskLeafRecordPageResponseBody& setPageInfo(const DescribeOnceTaskLeafRecordPageResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeOnceTaskLeafRecordPageResponseBody& setPageInfo(DescribeOnceTaskLeafRecordPageResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnceTaskLeafRecordPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of tasks.
    std::shared_ptr<vector<DescribeOnceTaskLeafRecordPageResponseBodyOnceTasks>> onceTasks_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeOnceTaskLeafRecordPageResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
