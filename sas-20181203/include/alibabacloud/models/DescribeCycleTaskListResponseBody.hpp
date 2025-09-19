// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECYCLETASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCycleTaskListResponseBodyCycleScheduleResponseList.hpp>
#include <alibabacloud/models/DescribeCycleTaskListResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCycleTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCycleTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CycleScheduleResponseList, cycleScheduleResponseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCycleTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleScheduleResponseList, cycleScheduleResponseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCycleTaskListResponseBody() = default ;
    DescribeCycleTaskListResponseBody(const DescribeCycleTaskListResponseBody &) = default ;
    DescribeCycleTaskListResponseBody(DescribeCycleTaskListResponseBody &&) = default ;
    DescribeCycleTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCycleTaskListResponseBody() = default ;
    DescribeCycleTaskListResponseBody& operator=(const DescribeCycleTaskListResponseBody &) = default ;
    DescribeCycleTaskListResponseBody& operator=(DescribeCycleTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleScheduleResponseList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // cycleScheduleResponseList Field Functions 
    bool hasCycleScheduleResponseList() const { return this->cycleScheduleResponseList_ != nullptr;};
    void deleteCycleScheduleResponseList() { this->cycleScheduleResponseList_ = nullptr;};
    inline const vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList> & cycleScheduleResponseList() const { DARABONBA_PTR_GET_CONST(cycleScheduleResponseList_, vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList>) };
    inline vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList> cycleScheduleResponseList() { DARABONBA_PTR_GET(cycleScheduleResponseList_, vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList>) };
    inline DescribeCycleTaskListResponseBody& setCycleScheduleResponseList(const vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList> & cycleScheduleResponseList) { DARABONBA_PTR_SET_VALUE(cycleScheduleResponseList_, cycleScheduleResponseList) };
    inline DescribeCycleTaskListResponseBody& setCycleScheduleResponseList(vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList> && cycleScheduleResponseList) { DARABONBA_PTR_SET_RVALUE(cycleScheduleResponseList_, cycleScheduleResponseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeCycleTaskListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeCycleTaskListResponseBodyPageInfo) };
    inline DescribeCycleTaskListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeCycleTaskListResponseBodyPageInfo) };
    inline DescribeCycleTaskListResponseBody& setPageInfo(const DescribeCycleTaskListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeCycleTaskListResponseBody& setPageInfo(DescribeCycleTaskListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCycleTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of periodic scan tasks.
    std::shared_ptr<vector<DescribeCycleTaskListResponseBodyCycleScheduleResponseList>> cycleScheduleResponseList_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeCycleTaskListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
