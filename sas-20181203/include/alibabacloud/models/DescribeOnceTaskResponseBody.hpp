// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeOnceTaskResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOnceTaskResponseBodyTaskManageResponseList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskManageResponseList, taskManageResponseList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskManageResponseList, taskManageResponseList_);
    };
    DescribeOnceTaskResponseBody() = default ;
    DescribeOnceTaskResponseBody(const DescribeOnceTaskResponseBody &) = default ;
    DescribeOnceTaskResponseBody(DescribeOnceTaskResponseBody &&) = default ;
    DescribeOnceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskResponseBody() = default ;
    DescribeOnceTaskResponseBody& operator=(const DescribeOnceTaskResponseBody &) = default ;
    DescribeOnceTaskResponseBody& operator=(DescribeOnceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->taskManageResponseList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeOnceTaskResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeOnceTaskResponseBodyPageInfo) };
    inline DescribeOnceTaskResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeOnceTaskResponseBodyPageInfo) };
    inline DescribeOnceTaskResponseBody& setPageInfo(const DescribeOnceTaskResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeOnceTaskResponseBody& setPageInfo(DescribeOnceTaskResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOnceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskManageResponseList Field Functions 
    bool hasTaskManageResponseList() const { return this->taskManageResponseList_ != nullptr;};
    void deleteTaskManageResponseList() { this->taskManageResponseList_ = nullptr;};
    inline const vector<DescribeOnceTaskResponseBodyTaskManageResponseList> & taskManageResponseList() const { DARABONBA_PTR_GET_CONST(taskManageResponseList_, vector<DescribeOnceTaskResponseBodyTaskManageResponseList>) };
    inline vector<DescribeOnceTaskResponseBodyTaskManageResponseList> taskManageResponseList() { DARABONBA_PTR_GET(taskManageResponseList_, vector<DescribeOnceTaskResponseBodyTaskManageResponseList>) };
    inline DescribeOnceTaskResponseBody& setTaskManageResponseList(const vector<DescribeOnceTaskResponseBodyTaskManageResponseList> & taskManageResponseList) { DARABONBA_PTR_SET_VALUE(taskManageResponseList_, taskManageResponseList) };
    inline DescribeOnceTaskResponseBody& setTaskManageResponseList(vector<DescribeOnceTaskResponseBodyTaskManageResponseList> && taskManageResponseList) { DARABONBA_PTR_SET_RVALUE(taskManageResponseList_, taskManageResponseList) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeOnceTaskResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the tasks.
    std::shared_ptr<vector<DescribeOnceTaskResponseBodyTaskManageResponseList>> taskManageResponseList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
