// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYWHITELISTSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class PageQueryWhiteListSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryWhiteListSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryWhiteListSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    PageQueryWhiteListSettingResponseBody() = default ;
    PageQueryWhiteListSettingResponseBody(const PageQueryWhiteListSettingResponseBody &) = default ;
    PageQueryWhiteListSettingResponseBody(PageQueryWhiteListSettingResponseBody &&) = default ;
    PageQueryWhiteListSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryWhiteListSettingResponseBody() = default ;
    PageQueryWhiteListSettingResponseBody& operator=(const PageQueryWhiteListSettingResponseBody &) = default ;
    PageQueryWhiteListSettingResponseBody& operator=(PageQueryWhiteListSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertNo, certNo_);
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ValidEndDate, validEndDate_);
        DARABONBA_PTR_TO_JSON(ValidStartDate, validStartDate_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertNo, certNo_);
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ValidEndDate, validEndDate_);
        DARABONBA_PTR_FROM_JSON(ValidStartDate, validStartDate_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certNo_ == nullptr
        && this->certifyId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->remark_ == nullptr
        && this->sceneId_ == nullptr && this->serviceCode_ == nullptr && this->status_ == nullptr && this->validEndDate_ == nullptr && this->validStartDate_ == nullptr; };
      // certNo Field Functions 
      bool hasCertNo() const { return this->certNo_ != nullptr;};
      void deleteCertNo() { this->certNo_ = nullptr;};
      inline string getCertNo() const { DARABONBA_PTR_GET_DEFAULT(certNo_, "") };
      inline ResultObject& setCertNo(string certNo) { DARABONBA_PTR_SET_VALUE(certNo_, certNo) };


      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ResultObject& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ResultObject& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline ResultObject& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
      inline ResultObject& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline ResultObject& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // validEndDate Field Functions 
      bool hasValidEndDate() const { return this->validEndDate_ != nullptr;};
      void deleteValidEndDate() { this->validEndDate_ = nullptr;};
      inline string getValidEndDate() const { DARABONBA_PTR_GET_DEFAULT(validEndDate_, "") };
      inline ResultObject& setValidEndDate(string validEndDate) { DARABONBA_PTR_SET_VALUE(validEndDate_, validEndDate) };


      // validStartDate Field Functions 
      bool hasValidStartDate() const { return this->validStartDate_ != nullptr;};
      void deleteValidStartDate() { this->validStartDate_ = nullptr;};
      inline string getValidStartDate() const { DARABONBA_PTR_GET_DEFAULT(validStartDate_, "") };
      inline ResultObject& setValidStartDate(string validStartDate) { DARABONBA_PTR_SET_VALUE(validStartDate_, validStartDate) };


    protected:
      // ID number.
      shared_ptr<string> certNo_ {};
      // Unique identifier for real person authentication.
      shared_ptr<string> certifyId_ {};
      // Creation time.
      shared_ptr<string> gmtCreate_ {};
      // Modification time.
      shared_ptr<string> gmtModified_ {};
      // Whitelist ID.
      shared_ptr<int64_t> id_ {};
      // Remark information.
      shared_ptr<string> remark_ {};
      // Authentication scene ID.
      shared_ptr<int64_t> sceneId_ {};
      // ServiceCode of the real person cloud product
      shared_ptr<string> serviceCode_ {};
      // Status:
      // 
      // - DELETE: Deleted
      // - VALID: Not deleted and within the validity period, valid
      // - INVALID: Not deleted but outside the validity period, invalid
      shared_ptr<string> status_ {};
      // End date of validity
      shared_ptr<string> validEndDate_ {};
      // Start date of validity
      shared_ptr<string> validStartDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr
        && this->success_ == nullptr && this->totalItem_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PageQueryWhiteListSettingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline PageQueryWhiteListSettingResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PageQueryWhiteListSettingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PageQueryWhiteListSettingResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageQueryWhiteListSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<PageQueryWhiteListSettingResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<PageQueryWhiteListSettingResponseBody::ResultObject>) };
    inline vector<PageQueryWhiteListSettingResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<PageQueryWhiteListSettingResponseBody::ResultObject>) };
    inline PageQueryWhiteListSettingResponseBody& setResultObject(const vector<PageQueryWhiteListSettingResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline PageQueryWhiteListSettingResponseBody& setResultObject(vector<PageQueryWhiteListSettingResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PageQueryWhiteListSettingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline PageQueryWhiteListSettingResponseBody& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline PageQueryWhiteListSettingResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Return code, **200** indicates a successful API response.
    shared_ptr<string> code_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // Number of items per page.
    shared_ptr<int32_t> pageSize_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Request result
    shared_ptr<vector<PageQueryWhiteListSettingResponseBody::ResultObject>> resultObject_ {};
    // Whether the response was successful.
    shared_ptr<bool> success_ {};
    // Total number of items.
    shared_ptr<int32_t> totalItem_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
