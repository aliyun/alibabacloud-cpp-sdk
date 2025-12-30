// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPRODUCEOPERATELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPRODUCEOPERATELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListUserProduceOperateLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserProduceOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserProduceOperateLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListUserProduceOperateLogsResponseBody() = default ;
    ListUserProduceOperateLogsResponseBody(const ListUserProduceOperateLogsResponseBody &) = default ;
    ListUserProduceOperateLogsResponseBody(ListUserProduceOperateLogsResponseBody &&) = default ;
    ListUserProduceOperateLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserProduceOperateLogsResponseBody() = default ;
    ListUserProduceOperateLogsResponseBody& operator=(const ListUserProduceOperateLogsResponseBody &) = default ;
    ListUserProduceOperateLogsResponseBody& operator=(ListUserProduceOperateLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(OperateName, operateName_);
        DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_TO_JSON(OperateUserType, operateUserType_);
        DARABONBA_PTR_TO_JSON(ToBizStatus, toBizStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(OperateName, operateName_);
        DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
        DARABONBA_PTR_FROM_JSON(OperateUserType, operateUserType_);
        DARABONBA_PTR_FROM_JSON(ToBizStatus, toBizStatus_);
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
      virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizStatus_ == nullptr && this->bizType_ == nullptr && this->note_ == nullptr && this->operateName_ == nullptr && this->operateTime_ == nullptr
        && this->operateUserType_ == nullptr && this->toBizStatus_ == nullptr; };
      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // bizStatus Field Functions 
      bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
      void deleteBizStatus() { this->bizStatus_ = nullptr;};
      inline int32_t getBizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, 0) };
      inline Data& setBizStatus(int32_t bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline Data& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // operateName Field Functions 
      bool hasOperateName() const { return this->operateName_ != nullptr;};
      void deleteOperateName() { this->operateName_ = nullptr;};
      inline string getOperateName() const { DARABONBA_PTR_GET_DEFAULT(operateName_, "") };
      inline Data& setOperateName(string operateName) { DARABONBA_PTR_SET_VALUE(operateName_, operateName) };


      // operateTime Field Functions 
      bool hasOperateTime() const { return this->operateTime_ != nullptr;};
      void deleteOperateTime() { this->operateTime_ = nullptr;};
      inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
      inline Data& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


      // operateUserType Field Functions 
      bool hasOperateUserType() const { return this->operateUserType_ != nullptr;};
      void deleteOperateUserType() { this->operateUserType_ = nullptr;};
      inline string getOperateUserType() const { DARABONBA_PTR_GET_DEFAULT(operateUserType_, "") };
      inline Data& setOperateUserType(string operateUserType) { DARABONBA_PTR_SET_VALUE(operateUserType_, operateUserType) };


      // toBizStatus Field Functions 
      bool hasToBizStatus() const { return this->toBizStatus_ != nullptr;};
      void deleteToBizStatus() { this->toBizStatus_ = nullptr;};
      inline int32_t getToBizStatus() const { DARABONBA_PTR_GET_DEFAULT(toBizStatus_, 0) };
      inline Data& setToBizStatus(int32_t toBizStatus) { DARABONBA_PTR_SET_VALUE(toBizStatus_, toBizStatus) };


    protected:
      shared_ptr<string> bizId_ {};
      shared_ptr<int32_t> bizStatus_ {};
      shared_ptr<string> bizType_ {};
      shared_ptr<string> note_ {};
      shared_ptr<string> operateName_ {};
      shared_ptr<int64_t> operateTime_ {};
      shared_ptr<string> operateUserType_ {};
      shared_ptr<int32_t> toBizStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalItemNum_ == nullptr
        && this->totalPageNum_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUserProduceOperateLogsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUserProduceOperateLogsResponseBody::Data>) };
    inline vector<ListUserProduceOperateLogsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUserProduceOperateLogsResponseBody::Data>) };
    inline ListUserProduceOperateLogsResponseBody& setData(const vector<ListUserProduceOperateLogsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserProduceOperateLogsResponseBody& setData(vector<ListUserProduceOperateLogsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListUserProduceOperateLogsResponseBody& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserProduceOperateLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserProduceOperateLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUserProduceOperateLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListUserProduceOperateLogsResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListUserProduceOperateLogsResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<vector<ListUserProduceOperateLogsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
