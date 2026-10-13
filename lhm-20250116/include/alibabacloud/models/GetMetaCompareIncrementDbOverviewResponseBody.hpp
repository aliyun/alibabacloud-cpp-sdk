// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOMPAREINCREMENTDBOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOMPAREINCREMENTDBOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaCompareIncrementDbOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCompareIncrementDbOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCompareIncrementDbOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMetaCompareIncrementDbOverviewResponseBody() = default ;
    GetMetaCompareIncrementDbOverviewResponseBody(const GetMetaCompareIncrementDbOverviewResponseBody &) = default ;
    GetMetaCompareIncrementDbOverviewResponseBody(GetMetaCompareIncrementDbOverviewResponseBody &&) = default ;
    GetMetaCompareIncrementDbOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCompareIncrementDbOverviewResponseBody() = default ;
    GetMetaCompareIncrementDbOverviewResponseBody& operator=(const GetMetaCompareIncrementDbOverviewResponseBody &) = default ;
    GetMetaCompareIncrementDbOverviewResponseBody& operator=(GetMetaCompareIncrementDbOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(compareJobId, compareJobId_);
        DARABONBA_PTR_TO_JSON(curVersionTime, curVersionTime_);
        DARABONBA_PTR_TO_JSON(diffAddPartitionNum, diffAddPartitionNum_);
        DARABONBA_PTR_TO_JSON(diffAddTableNum, diffAddTableNum_);
        DARABONBA_PTR_TO_JSON(diffDelPartitionNum, diffDelPartitionNum_);
        DARABONBA_PTR_TO_JSON(diffDelTableNum, diffDelTableNum_);
        DARABONBA_PTR_TO_JSON(diffModifyPartitionNum, diffModifyPartitionNum_);
        DARABONBA_PTR_TO_JSON(diffModifyTableNum, diffModifyTableNum_);
        DARABONBA_PTR_TO_JSON(diffPartitionNum, diffPartitionNum_);
        DARABONBA_PTR_TO_JSON(diffTableNum, diffTableNum_);
        DARABONBA_PTR_TO_JSON(prevVersionTime, prevVersionTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(compareJobId, compareJobId_);
        DARABONBA_PTR_FROM_JSON(curVersionTime, curVersionTime_);
        DARABONBA_PTR_FROM_JSON(diffAddPartitionNum, diffAddPartitionNum_);
        DARABONBA_PTR_FROM_JSON(diffAddTableNum, diffAddTableNum_);
        DARABONBA_PTR_FROM_JSON(diffDelPartitionNum, diffDelPartitionNum_);
        DARABONBA_PTR_FROM_JSON(diffDelTableNum, diffDelTableNum_);
        DARABONBA_PTR_FROM_JSON(diffModifyPartitionNum, diffModifyPartitionNum_);
        DARABONBA_PTR_FROM_JSON(diffModifyTableNum, diffModifyTableNum_);
        DARABONBA_PTR_FROM_JSON(diffPartitionNum, diffPartitionNum_);
        DARABONBA_PTR_FROM_JSON(diffTableNum, diffTableNum_);
        DARABONBA_PTR_FROM_JSON(prevVersionTime, prevVersionTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->compareJobId_ == nullptr
        && this->curVersionTime_ == nullptr && this->diffAddPartitionNum_ == nullptr && this->diffAddTableNum_ == nullptr && this->diffDelPartitionNum_ == nullptr && this->diffDelTableNum_ == nullptr
        && this->diffModifyPartitionNum_ == nullptr && this->diffModifyTableNum_ == nullptr && this->diffPartitionNum_ == nullptr && this->diffTableNum_ == nullptr && this->prevVersionTime_ == nullptr; };
      // compareJobId Field Functions 
      bool hasCompareJobId() const { return this->compareJobId_ != nullptr;};
      void deleteCompareJobId() { this->compareJobId_ = nullptr;};
      inline int64_t getCompareJobId() const { DARABONBA_PTR_GET_DEFAULT(compareJobId_, 0L) };
      inline Data& setCompareJobId(int64_t compareJobId) { DARABONBA_PTR_SET_VALUE(compareJobId_, compareJobId) };


      // curVersionTime Field Functions 
      bool hasCurVersionTime() const { return this->curVersionTime_ != nullptr;};
      void deleteCurVersionTime() { this->curVersionTime_ = nullptr;};
      inline string getCurVersionTime() const { DARABONBA_PTR_GET_DEFAULT(curVersionTime_, "") };
      inline Data& setCurVersionTime(string curVersionTime) { DARABONBA_PTR_SET_VALUE(curVersionTime_, curVersionTime) };


      // diffAddPartitionNum Field Functions 
      bool hasDiffAddPartitionNum() const { return this->diffAddPartitionNum_ != nullptr;};
      void deleteDiffAddPartitionNum() { this->diffAddPartitionNum_ = nullptr;};
      inline int64_t getDiffAddPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(diffAddPartitionNum_, 0L) };
      inline Data& setDiffAddPartitionNum(int64_t diffAddPartitionNum) { DARABONBA_PTR_SET_VALUE(diffAddPartitionNum_, diffAddPartitionNum) };


      // diffAddTableNum Field Functions 
      bool hasDiffAddTableNum() const { return this->diffAddTableNum_ != nullptr;};
      void deleteDiffAddTableNum() { this->diffAddTableNum_ = nullptr;};
      inline int64_t getDiffAddTableNum() const { DARABONBA_PTR_GET_DEFAULT(diffAddTableNum_, 0L) };
      inline Data& setDiffAddTableNum(int64_t diffAddTableNum) { DARABONBA_PTR_SET_VALUE(diffAddTableNum_, diffAddTableNum) };


      // diffDelPartitionNum Field Functions 
      bool hasDiffDelPartitionNum() const { return this->diffDelPartitionNum_ != nullptr;};
      void deleteDiffDelPartitionNum() { this->diffDelPartitionNum_ = nullptr;};
      inline int64_t getDiffDelPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(diffDelPartitionNum_, 0L) };
      inline Data& setDiffDelPartitionNum(int64_t diffDelPartitionNum) { DARABONBA_PTR_SET_VALUE(diffDelPartitionNum_, diffDelPartitionNum) };


      // diffDelTableNum Field Functions 
      bool hasDiffDelTableNum() const { return this->diffDelTableNum_ != nullptr;};
      void deleteDiffDelTableNum() { this->diffDelTableNum_ = nullptr;};
      inline int64_t getDiffDelTableNum() const { DARABONBA_PTR_GET_DEFAULT(diffDelTableNum_, 0L) };
      inline Data& setDiffDelTableNum(int64_t diffDelTableNum) { DARABONBA_PTR_SET_VALUE(diffDelTableNum_, diffDelTableNum) };


      // diffModifyPartitionNum Field Functions 
      bool hasDiffModifyPartitionNum() const { return this->diffModifyPartitionNum_ != nullptr;};
      void deleteDiffModifyPartitionNum() { this->diffModifyPartitionNum_ = nullptr;};
      inline int64_t getDiffModifyPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(diffModifyPartitionNum_, 0L) };
      inline Data& setDiffModifyPartitionNum(int64_t diffModifyPartitionNum) { DARABONBA_PTR_SET_VALUE(diffModifyPartitionNum_, diffModifyPartitionNum) };


      // diffModifyTableNum Field Functions 
      bool hasDiffModifyTableNum() const { return this->diffModifyTableNum_ != nullptr;};
      void deleteDiffModifyTableNum() { this->diffModifyTableNum_ = nullptr;};
      inline int64_t getDiffModifyTableNum() const { DARABONBA_PTR_GET_DEFAULT(diffModifyTableNum_, 0L) };
      inline Data& setDiffModifyTableNum(int64_t diffModifyTableNum) { DARABONBA_PTR_SET_VALUE(diffModifyTableNum_, diffModifyTableNum) };


      // diffPartitionNum Field Functions 
      bool hasDiffPartitionNum() const { return this->diffPartitionNum_ != nullptr;};
      void deleteDiffPartitionNum() { this->diffPartitionNum_ = nullptr;};
      inline int64_t getDiffPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(diffPartitionNum_, 0L) };
      inline Data& setDiffPartitionNum(int64_t diffPartitionNum) { DARABONBA_PTR_SET_VALUE(diffPartitionNum_, diffPartitionNum) };


      // diffTableNum Field Functions 
      bool hasDiffTableNum() const { return this->diffTableNum_ != nullptr;};
      void deleteDiffTableNum() { this->diffTableNum_ = nullptr;};
      inline int64_t getDiffTableNum() const { DARABONBA_PTR_GET_DEFAULT(diffTableNum_, 0L) };
      inline Data& setDiffTableNum(int64_t diffTableNum) { DARABONBA_PTR_SET_VALUE(diffTableNum_, diffTableNum) };


      // prevVersionTime Field Functions 
      bool hasPrevVersionTime() const { return this->prevVersionTime_ != nullptr;};
      void deletePrevVersionTime() { this->prevVersionTime_ = nullptr;};
      inline string getPrevVersionTime() const { DARABONBA_PTR_GET_DEFAULT(prevVersionTime_, "") };
      inline Data& setPrevVersionTime(string prevVersionTime) { DARABONBA_PTR_SET_VALUE(prevVersionTime_, prevVersionTime) };


    protected:
      // The unique identifier of the current metadata comparison job.
      shared_ptr<int64_t> compareJobId_ {};
      // The metadata version time corresponding to the current comparison.
      shared_ptr<string> curVersionTime_ {};
      // The number of partitions added compared to the last comparison.
      shared_ptr<int64_t> diffAddPartitionNum_ {};
      // The number of tables added compared to the last comparison.
      shared_ptr<int64_t> diffAddTableNum_ {};
      // The number of partitions deleted compared to the last comparison.
      shared_ptr<int64_t> diffDelPartitionNum_ {};
      // The number of tables deleted compared to the last comparison.
      shared_ptr<int64_t> diffDelTableNum_ {};
      // The number of partitions whose properties changed compared to the last comparison.
      shared_ptr<int64_t> diffModifyPartitionNum_ {};
      // The number of tables whose structure underwent schema evolution compared to the last comparison.
      shared_ptr<int64_t> diffModifyTableNum_ {};
      // The total number of differences at the partition level, which is the sum of the number of added, deleted, and modified partitions.
      shared_ptr<int64_t> diffPartitionNum_ {};
      // The total number of differences at the table level, which is the sum of the number of added, deleted, and modified tables.
      shared_ptr<int64_t> diffTableNum_ {};
      // The metadata version time corresponding to the last comparison.
      shared_ptr<string> prevVersionTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaCompareIncrementDbOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaCompareIncrementDbOverviewResponseBody::Data) };
    inline GetMetaCompareIncrementDbOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaCompareIncrementDbOverviewResponseBody::Data) };
    inline GetMetaCompareIncrementDbOverviewResponseBody& setData(const GetMetaCompareIncrementDbOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaCompareIncrementDbOverviewResponseBody& setData(GetMetaCompareIncrementDbOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetMetaCompareIncrementDbOverviewResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetMetaCompareIncrementDbOverviewResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaCompareIncrementDbOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of data returned by the API operation. For the element structure, see the descriptions of the child fields.
    shared_ptr<GetMetaCompareIncrementDbOverviewResponseBody::Data> data_ {};
    // The fault message code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: The call was successful.
    // - false: The call failed. If the call fails, troubleshoot the issue based on errCode and errMessage.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
