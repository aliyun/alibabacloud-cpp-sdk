// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBWMMIGRATIONSUBMITINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBWMMIGRATIONSUBMITINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetBwmMigrationSubmitInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBwmMigrationSubmitInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(empty, empty_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(notEmpty, notEmpty_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, GetBwmMigrationSubmitInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(empty, empty_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(notEmpty, notEmpty_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
    };
    GetBwmMigrationSubmitInstanceListResponseBody() = default ;
    GetBwmMigrationSubmitInstanceListResponseBody(const GetBwmMigrationSubmitInstanceListResponseBody &) = default ;
    GetBwmMigrationSubmitInstanceListResponseBody(GetBwmMigrationSubmitInstanceListResponseBody &&) = default ;
    GetBwmMigrationSubmitInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBwmMigrationSubmitInstanceListResponseBody() = default ;
    GetBwmMigrationSubmitInstanceListResponseBody& operator=(const GetBwmMigrationSubmitInstanceListResponseBody &) = default ;
    GetBwmMigrationSubmitInstanceListResponseBody& operator=(GetBwmMigrationSubmitInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(detail, detail_);
        DARABONBA_PTR_TO_JSON(gmtConvert, gmtConvert_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(srcMetaGmtUpdate, srcMetaGmtUpdate_);
        DARABONBA_PTR_TO_JSON(srcMetaInfo, srcMetaInfo_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(detail, detail_);
        DARABONBA_PTR_FROM_JSON(gmtConvert, gmtConvert_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(srcMetaGmtUpdate, srcMetaGmtUpdate_);
        DARABONBA_PTR_FROM_JSON(srcMetaInfo, srcMetaInfo_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->detail_ == nullptr
        && this->gmtConvert_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->srcMetaGmtUpdate_ == nullptr && this->srcMetaInfo_ == nullptr
        && this->status_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Data& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // gmtConvert Field Functions 
      bool hasGmtConvert() const { return this->gmtConvert_ != nullptr;};
      void deleteGmtConvert() { this->gmtConvert_ = nullptr;};
      inline string getGmtConvert() const { DARABONBA_PTR_GET_DEFAULT(gmtConvert_, "") };
      inline Data& setGmtConvert(string gmtConvert) { DARABONBA_PTR_SET_VALUE(gmtConvert_, gmtConvert) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // srcMetaGmtUpdate Field Functions 
      bool hasSrcMetaGmtUpdate() const { return this->srcMetaGmtUpdate_ != nullptr;};
      void deleteSrcMetaGmtUpdate() { this->srcMetaGmtUpdate_ = nullptr;};
      inline string getSrcMetaGmtUpdate() const { DARABONBA_PTR_GET_DEFAULT(srcMetaGmtUpdate_, "") };
      inline Data& setSrcMetaGmtUpdate(string srcMetaGmtUpdate) { DARABONBA_PTR_SET_VALUE(srcMetaGmtUpdate_, srcMetaGmtUpdate) };


      // srcMetaInfo Field Functions 
      bool hasSrcMetaInfo() const { return this->srcMetaInfo_ != nullptr;};
      void deleteSrcMetaInfo() { this->srcMetaInfo_ = nullptr;};
      inline string getSrcMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(srcMetaInfo_, "") };
      inline Data& setSrcMetaInfo(string srcMetaInfo) { DARABONBA_PTR_SET_VALUE(srcMetaInfo_, srcMetaInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The reason for the conversion failure.
      shared_ptr<string> detail_ {};
      // The conversion execution time.
      shared_ptr<string> gmtConvert_ {};
      // The UUID of the instance.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The time when the source metadata was last updated.
      shared_ptr<string> srcMetaGmtUpdate_ {};
      // The scheduling information of the source.
      shared_ptr<string> srcMetaInfo_ {};
      // The execution status of the instance. Valid values:
      // - NOT_START: Not started.
      // - READY: Pending execution.
      // - RUNNING: Running.
      // - ALL_SUCCESS: All succeeded.
      // - PARTIAL_SUCCESS: Partially succeeded.
      // - FAILURE: Failed.
      // - MANUAL: Manually uploaded.
      // 
      // If the status code cannot be recognized, the value defaults to NOT_START.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->empty_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->notEmpty_ == nullptr && this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPages_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetBwmMigrationSubmitInstanceListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetBwmMigrationSubmitInstanceListResponseBody::Data>) };
    inline vector<GetBwmMigrationSubmitInstanceListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetBwmMigrationSubmitInstanceListResponseBody::Data>) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setData(const vector<GetBwmMigrationSubmitInstanceListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setData(vector<GetBwmMigrationSubmitInstanceListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // empty Field Functions 
    bool hasEmpty() const { return this->empty_ != nullptr;};
    void deleteEmpty() { this->empty_ = nullptr;};
    inline bool getEmpty() const { DARABONBA_PTR_GET_DEFAULT(empty_, false) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setEmpty(bool empty) { DARABONBA_PTR_SET_VALUE(empty_, empty) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // notEmpty Field Functions 
    bool hasNotEmpty() const { return this->notEmpty_ != nullptr;};
    void deleteNotEmpty() { this->notEmpty_ = nullptr;};
    inline bool getNotEmpty() const { DARABONBA_PTR_GET_DEFAULT(notEmpty_, false) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setNotEmpty(bool notEmpty) { DARABONBA_PTR_SET_VALUE(notEmpty_, notEmpty) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline GetBwmMigrationSubmitInstanceListResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The response data.
    shared_ptr<vector<GetBwmMigrationSubmitInstanceListResponseBody::Data>> data_ {};
    // Indicates whether the result is empty.
    shared_ptr<bool> empty_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // Indicates whether the result is not empty.
    shared_ptr<bool> notEmpty_ {};
    // The page number.
    shared_ptr<int32_t> pageIndex_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success. A value of false indicates failure. If the call fails, use errCode and errMessage to troubleshoot the issue.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
