// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSyncAssetTaskListResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSyncAssetTaskListResponseBodyTaskRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskRecords, taskRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskRecords, taskRecords_);
    };
    DescribeSyncAssetTaskListResponseBody() = default ;
    DescribeSyncAssetTaskListResponseBody(const DescribeSyncAssetTaskListResponseBody &) = default ;
    DescribeSyncAssetTaskListResponseBody(DescribeSyncAssetTaskListResponseBody &&) = default ;
    DescribeSyncAssetTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskListResponseBody() = default ;
    DescribeSyncAssetTaskListResponseBody& operator=(const DescribeSyncAssetTaskListResponseBody &) = default ;
    DescribeSyncAssetTaskListResponseBody& operator=(DescribeSyncAssetTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->taskRecords_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSyncAssetTaskListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSyncAssetTaskListResponseBodyPageInfo) };
    inline DescribeSyncAssetTaskListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSyncAssetTaskListResponseBodyPageInfo) };
    inline DescribeSyncAssetTaskListResponseBody& setPageInfo(const DescribeSyncAssetTaskListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSyncAssetTaskListResponseBody& setPageInfo(DescribeSyncAssetTaskListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAssetTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskRecords Field Functions 
    bool hasTaskRecords() const { return this->taskRecords_ != nullptr;};
    void deleteTaskRecords() { this->taskRecords_ = nullptr;};
    inline const vector<DescribeSyncAssetTaskListResponseBodyTaskRecords> & taskRecords() const { DARABONBA_PTR_GET_CONST(taskRecords_, vector<DescribeSyncAssetTaskListResponseBodyTaskRecords>) };
    inline vector<DescribeSyncAssetTaskListResponseBodyTaskRecords> taskRecords() { DARABONBA_PTR_GET(taskRecords_, vector<DescribeSyncAssetTaskListResponseBodyTaskRecords>) };
    inline DescribeSyncAssetTaskListResponseBody& setTaskRecords(const vector<DescribeSyncAssetTaskListResponseBodyTaskRecords> & taskRecords) { DARABONBA_PTR_SET_VALUE(taskRecords_, taskRecords) };
    inline DescribeSyncAssetTaskListResponseBody& setTaskRecords(vector<DescribeSyncAssetTaskListResponseBodyTaskRecords> && taskRecords) { DARABONBA_PTR_SET_RVALUE(taskRecords_, taskRecords) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeSyncAssetTaskListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDC scan tasks.
    std::shared_ptr<vector<DescribeSyncAssetTaskListResponseBodyTaskRecords>> taskRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
