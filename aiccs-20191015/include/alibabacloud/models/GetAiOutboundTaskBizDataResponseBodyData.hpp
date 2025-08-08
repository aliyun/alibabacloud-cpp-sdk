// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKBIZDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskBizDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskBizDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizData, bizData_);
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskBizDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizData, bizData_);
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAiOutboundTaskBizDataResponseBodyData() = default ;
    GetAiOutboundTaskBizDataResponseBodyData(const GetAiOutboundTaskBizDataResponseBodyData &) = default ;
    GetAiOutboundTaskBizDataResponseBodyData(GetAiOutboundTaskBizDataResponseBodyData &&) = default ;
    GetAiOutboundTaskBizDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskBizDataResponseBodyData() = default ;
    GetAiOutboundTaskBizDataResponseBodyData& operator=(const GetAiOutboundTaskBizDataResponseBodyData &) = default ;
    GetAiOutboundTaskBizDataResponseBodyData& operator=(GetAiOutboundTaskBizDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizData_ != nullptr
        && this->caseId_ != nullptr && this->phoneNum_ != nullptr && this->taskId_ != nullptr; };
    // bizData Field Functions 
    bool hasBizData() const { return this->bizData_ != nullptr;};
    void deleteBizData() { this->bizData_ = nullptr;};
    inline string bizData() const { DARABONBA_PTR_GET_DEFAULT(bizData_, "") };
    inline GetAiOutboundTaskBizDataResponseBodyData& setBizData(string bizData) { DARABONBA_PTR_SET_VALUE(bizData_, bizData) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline int64_t caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, 0L) };
    inline GetAiOutboundTaskBizDataResponseBodyData& setCaseId(int64_t caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline GetAiOutboundTaskBizDataResponseBodyData& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetAiOutboundTaskBizDataResponseBodyData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> bizData_ = nullptr;
    std::shared_ptr<int64_t> caseId_ = nullptr;
    std::shared_ptr<string> phoneNum_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
