// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsEtlJobVersionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsEtlJobVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DtsEtlJobVersionInfos, dtsEtlJobVersionInfos_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsEtlJobVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsEtlJobVersionInfos, dtsEtlJobVersionInfos_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDtsEtlJobVersionInfoResponseBody() = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(const DescribeDtsEtlJobVersionInfoResponseBody &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(DescribeDtsEtlJobVersionInfoResponseBody &&) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsEtlJobVersionInfoResponseBody() = default ;
    DescribeDtsEtlJobVersionInfoResponseBody& operator=(const DescribeDtsEtlJobVersionInfoResponseBody &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody& operator=(DescribeDtsEtlJobVersionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DtsEtlJobVersionInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DtsEtlJobVersionInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
        DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_TO_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(SafeCheckpoint, safeCheckpoint_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, DtsEtlJobVersionInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
        DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
        DARABONBA_PTR_FROM_JSON(DtsJobName, dtsJobName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(SafeCheckpoint, safeCheckpoint_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      DtsEtlJobVersionInfos() = default ;
      DtsEtlJobVersionInfos(const DtsEtlJobVersionInfos &) = default ;
      DtsEtlJobVersionInfos(DtsEtlJobVersionInfos &&) = default ;
      DtsEtlJobVersionInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DtsEtlJobVersionInfos() = default ;
      DtsEtlJobVersionInfos& operator=(const DtsEtlJobVersionInfos &) = default ;
      DtsEtlJobVersionInfos& operator=(DtsEtlJobVersionInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr && this->dtsJobName_ == nullptr
        && this->modifyTime_ == nullptr && this->safeCheckpoint_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DtsEtlJobVersionInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline DtsEtlJobVersionInfos& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline DtsEtlJobVersionInfos& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // dtsInstanceId Field Functions 
      bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
      void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
      inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
      inline DtsEtlJobVersionInfos& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


      // dtsJobId Field Functions 
      bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
      void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
      inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
      inline DtsEtlJobVersionInfos& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


      // dtsJobName Field Functions 
      bool hasDtsJobName() const { return this->dtsJobName_ != nullptr;};
      void deleteDtsJobName() { this->dtsJobName_ = nullptr;};
      inline string getDtsJobName() const { DARABONBA_PTR_GET_DEFAULT(dtsJobName_, "") };
      inline DtsEtlJobVersionInfos& setDtsJobName(string dtsJobName) { DARABONBA_PTR_SET_VALUE(dtsJobName_, dtsJobName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline DtsEtlJobVersionInfos& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // safeCheckpoint Field Functions 
      bool hasSafeCheckpoint() const { return this->safeCheckpoint_ != nullptr;};
      void deleteSafeCheckpoint() { this->safeCheckpoint_ = nullptr;};
      inline string getSafeCheckpoint() const { DARABONBA_PTR_GET_DEFAULT(safeCheckpoint_, "") };
      inline DtsEtlJobVersionInfos& setSafeCheckpoint(string safeCheckpoint) { DARABONBA_PTR_SET_VALUE(safeCheckpoint_, safeCheckpoint) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DtsEtlJobVersionInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline DtsEtlJobVersionInfos& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The time when the ETL task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the creator.
      shared_ptr<string> creator_ {};
      // The username of the creator.
      shared_ptr<string> creatorName_ {};
      // The ID of the DTS instance.
      shared_ptr<string> dtsInstanceId_ {};
      // The ID of the ETL task.
      shared_ptr<string> dtsJobId_ {};
      // The name of the ETL task.
      shared_ptr<string> dtsJobName_ {};
      // The time when the ETL task was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> modifyTime_ {};
      // The safe checkpoint of the ETL task.
      shared_ptr<string> safeCheckpoint_ {};
      // The log level. Valid values: ERROR, WARN, INFO, and DEBUG.
      shared_ptr<string> status_ {};
      // The version number of the ETL task.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->dtsEtlJobVersionInfos_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalRecordCount_ == nullptr; };
    // dtsEtlJobVersionInfos Field Functions 
    bool hasDtsEtlJobVersionInfos() const { return this->dtsEtlJobVersionInfos_ != nullptr;};
    void deleteDtsEtlJobVersionInfos() { this->dtsEtlJobVersionInfos_ = nullptr;};
    inline const vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos> & getDtsEtlJobVersionInfos() const { DARABONBA_PTR_GET_CONST(dtsEtlJobVersionInfos_, vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos>) };
    inline vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos> getDtsEtlJobVersionInfos() { DARABONBA_PTR_GET(dtsEtlJobVersionInfos_, vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos>) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDtsEtlJobVersionInfos(const vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos> & dtsEtlJobVersionInfos) { DARABONBA_PTR_SET_VALUE(dtsEtlJobVersionInfos_, dtsEtlJobVersionInfos) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDtsEtlJobVersionInfos(vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos> && dtsEtlJobVersionInfos) { DARABONBA_PTR_SET_RVALUE(dtsEtlJobVersionInfos_, dtsEtlJobVersionInfos) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of ETL tasks.
    shared_ptr<vector<DescribeDtsEtlJobVersionInfoResponseBody::DtsEtlJobVersionInfos>> dtsEtlJobVersionInfos_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error code. This example indicates that the specified ETL task ID is invalid.
    shared_ptr<string> errCode_ {};
    // The error message. This example indicates that the specified ETL task ID does not exist. In this case, the ETL task may have been deleted.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<string> httpStatusCode_ {};
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. If the call failed, false is returned.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
