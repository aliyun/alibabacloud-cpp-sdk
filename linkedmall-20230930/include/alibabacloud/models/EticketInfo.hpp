// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ETICKETINFO_HPP_
#define ALIBABACLOUD_MODELS_ETICKETINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class EticketInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EticketInfo& obj) { 
      DARABONBA_PTR_TO_JSON(availableNum, availableNum_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(codeStatus, codeStatus_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(lockNum, lockNum_);
      DARABONBA_PTR_TO_JSON(qrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(useTime, useTime_);
      DARABONBA_PTR_TO_JSON(usedNum, usedNum_);
    };
    friend void from_json(const Darabonba::Json& j, EticketInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(availableNum, availableNum_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(codeStatus, codeStatus_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(lockNum, lockNum_);
      DARABONBA_PTR_FROM_JSON(qrcodeUrl, qrcodeUrl_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(useTime, useTime_);
      DARABONBA_PTR_FROM_JSON(usedNum, usedNum_);
    };
    EticketInfo() = default ;
    EticketInfo(const EticketInfo &) = default ;
    EticketInfo(EticketInfo &&) = default ;
    EticketInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EticketInfo() = default ;
    EticketInfo& operator=(const EticketInfo &) = default ;
    EticketInfo& operator=(EticketInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableNum_ == nullptr
        && this->code_ == nullptr && this->codeStatus_ == nullptr && this->endTime_ == nullptr && this->lockNum_ == nullptr && this->qrcodeUrl_ == nullptr
        && this->startTime_ == nullptr && this->useTime_ == nullptr && this->usedNum_ == nullptr; };
    // availableNum Field Functions 
    bool hasAvailableNum() const { return this->availableNum_ != nullptr;};
    void deleteAvailableNum() { this->availableNum_ = nullptr;};
    inline int64_t getAvailableNum() const { DARABONBA_PTR_GET_DEFAULT(availableNum_, 0L) };
    inline EticketInfo& setAvailableNum(int64_t availableNum) { DARABONBA_PTR_SET_VALUE(availableNum_, availableNum) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EticketInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeStatus Field Functions 
    bool hasCodeStatus() const { return this->codeStatus_ != nullptr;};
    void deleteCodeStatus() { this->codeStatus_ = nullptr;};
    inline int64_t getCodeStatus() const { DARABONBA_PTR_GET_DEFAULT(codeStatus_, 0L) };
    inline EticketInfo& setCodeStatus(int64_t codeStatus) { DARABONBA_PTR_SET_VALUE(codeStatus_, codeStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline EticketInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lockNum Field Functions 
    bool hasLockNum() const { return this->lockNum_ != nullptr;};
    void deleteLockNum() { this->lockNum_ = nullptr;};
    inline int64_t getLockNum() const { DARABONBA_PTR_GET_DEFAULT(lockNum_, 0L) };
    inline EticketInfo& setLockNum(int64_t lockNum) { DARABONBA_PTR_SET_VALUE(lockNum_, lockNum) };


    // qrcodeUrl Field Functions 
    bool hasQrcodeUrl() const { return this->qrcodeUrl_ != nullptr;};
    void deleteQrcodeUrl() { this->qrcodeUrl_ = nullptr;};
    inline string getQrcodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrcodeUrl_, "") };
    inline EticketInfo& setQrcodeUrl(string qrcodeUrl) { DARABONBA_PTR_SET_VALUE(qrcodeUrl_, qrcodeUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline EticketInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // useTime Field Functions 
    bool hasUseTime() const { return this->useTime_ != nullptr;};
    void deleteUseTime() { this->useTime_ = nullptr;};
    inline string getUseTime() const { DARABONBA_PTR_GET_DEFAULT(useTime_, "") };
    inline EticketInfo& setUseTime(string useTime) { DARABONBA_PTR_SET_VALUE(useTime_, useTime) };


    // usedNum Field Functions 
    bool hasUsedNum() const { return this->usedNum_ != nullptr;};
    void deleteUsedNum() { this->usedNum_ = nullptr;};
    inline int64_t getUsedNum() const { DARABONBA_PTR_GET_DEFAULT(usedNum_, 0L) };
    inline EticketInfo& setUsedNum(int64_t usedNum) { DARABONBA_PTR_SET_VALUE(usedNum_, usedNum) };


  protected:
    shared_ptr<int64_t> availableNum_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> codeStatus_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> lockNum_ {};
    shared_ptr<string> qrcodeUrl_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> useTime_ {};
    shared_ptr<int64_t> usedNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
