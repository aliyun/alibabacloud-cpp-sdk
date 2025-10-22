// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKEXECDETAILRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKEXECDETAILRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskExecDetailResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskExecDetailResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastCallResult, lastCallResult_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskExecDetailResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchVersion, batchVersion_);
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastCallResult, lastCallResult_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    GetAiOutboundTaskExecDetailResponseBodyDataList() = default ;
    GetAiOutboundTaskExecDetailResponseBodyDataList(const GetAiOutboundTaskExecDetailResponseBodyDataList &) = default ;
    GetAiOutboundTaskExecDetailResponseBodyDataList(GetAiOutboundTaskExecDetailResponseBodyDataList &&) = default ;
    GetAiOutboundTaskExecDetailResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskExecDetailResponseBodyDataList() = default ;
    GetAiOutboundTaskExecDetailResponseBodyDataList& operator=(const GetAiOutboundTaskExecDetailResponseBodyDataList &) = default ;
    GetAiOutboundTaskExecDetailResponseBodyDataList& operator=(GetAiOutboundTaskExecDetailResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchVersion_ == nullptr
        && return this->bizData_ == nullptr && return this->callCount_ == nullptr && return this->caseId_ == nullptr && return this->createTime_ == nullptr && return this->lastCallResult_ == nullptr
        && return this->phoneNum_ == nullptr && return this->status_ == nullptr && return this->statusDesc_ == nullptr; };
    // batchVersion Field Functions 
    bool hasBatchVersion() const { return this->batchVersion_ != nullptr;};
    void deleteBatchVersion() { this->batchVersion_ = nullptr;};
    inline int32_t batchVersion() const { DARABONBA_PTR_GET_DEFAULT(batchVersion_, 0) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setBatchVersion(int32_t batchVersion) { DARABONBA_PTR_SET_VALUE(batchVersion_, batchVersion) };


    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int32_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setCallCount(int32_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline int64_t caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastCallResult Field Functions 
    bool hasLastCallResult() const { return this->lastCallResult_ != nullptr;};
    void deleteLastCallResult() { this->lastCallResult_ = nullptr;};
    inline string lastCallResult() const { DARABONBA_PTR_GET_DEFAULT(lastCallResult_, "") };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setLastCallResult(string lastCallResult) { DARABONBA_PTR_SET_VALUE(lastCallResult_, lastCallResult) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline int32_t statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, 0) };
    inline GetAiOutboundTaskExecDetailResponseBodyDataList& setStatusDesc(int32_t statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    std::shared_ptr<int32_t> batchVersion_ = nullptr;
    std::shared_ptr<string> bizData_ = nullptr;
    std::shared_ptr<int32_t> callCount_ = nullptr;
    std::shared_ptr<int64_t> caseId_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> lastCallResult_ = nullptr;
    std::shared_ptr<string> phoneNum_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
