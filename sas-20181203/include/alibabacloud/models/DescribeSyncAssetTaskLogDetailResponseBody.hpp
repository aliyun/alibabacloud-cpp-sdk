// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCASSETTASKLOGDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSyncAssetTaskLogDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSyncAssetTaskLogDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSyncAssetTaskLogDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskRecordDetails, taskRecordDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSyncAssetTaskLogDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskRecordDetails, taskRecordDetails_);
    };
    DescribeSyncAssetTaskLogDetailResponseBody() = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(const DescribeSyncAssetTaskLogDetailResponseBody &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(DescribeSyncAssetTaskLogDetailResponseBody &&) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSyncAssetTaskLogDetailResponseBody() = default ;
    DescribeSyncAssetTaskLogDetailResponseBody& operator=(const DescribeSyncAssetTaskLogDetailResponseBody &) = default ;
    DescribeSyncAssetTaskLogDetailResponseBody& operator=(DescribeSyncAssetTaskLogDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->taskRecordDetails_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSyncAssetTaskLogDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSyncAssetTaskLogDetailResponseBodyPageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSyncAssetTaskLogDetailResponseBodyPageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setPageInfo(const DescribeSyncAssetTaskLogDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setPageInfo(DescribeSyncAssetTaskLogDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskRecordDetails Field Functions 
    bool hasTaskRecordDetails() const { return this->taskRecordDetails_ != nullptr;};
    void deleteTaskRecordDetails() { this->taskRecordDetails_ = nullptr;};
    inline const vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails> & taskRecordDetails() const { DARABONBA_PTR_GET_CONST(taskRecordDetails_, vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails>) };
    inline vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails> taskRecordDetails() { DARABONBA_PTR_GET(taskRecordDetails_, vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails>) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setTaskRecordDetails(const vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails> & taskRecordDetails) { DARABONBA_PTR_SET_VALUE(taskRecordDetails_, taskRecordDetails) };
    inline DescribeSyncAssetTaskLogDetailResponseBody& setTaskRecordDetails(vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails> && taskRecordDetails) { DARABONBA_PTR_SET_RVALUE(taskRecordDetails_, taskRecordDetails) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeSyncAssetTaskLogDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the tasks.
    std::shared_ptr<vector<DescribeSyncAssetTaskLogDetailResponseBodyTaskRecordDetails>> taskRecordDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
