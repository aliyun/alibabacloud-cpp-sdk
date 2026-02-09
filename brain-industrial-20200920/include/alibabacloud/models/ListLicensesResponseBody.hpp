// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ListLicensesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicensesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicensesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LicenseList, licenseList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
    };
    ListLicensesResponseBody() = default ;
    ListLicensesResponseBody(const ListLicensesResponseBody &) = default ;
    ListLicensesResponseBody(ListLicensesResponseBody &&) = default ;
    ListLicensesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicensesResponseBody() = default ;
    ListLicensesResponseBody& operator=(const ListLicensesResponseBody &) = default ;
    ListLicensesResponseBody& operator=(ListLicensesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LicenseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LicenseList& obj) { 
        DARABONBA_PTR_TO_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_TO_JSON(AdaptiveMachine, adaptiveMachine_);
        DARABONBA_PTR_TO_JSON(AllDuration, allDuration_);
        DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
        DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LicenseSpecCode, licenseSpecCode_);
        DARABONBA_PTR_TO_JSON(LicenseSpecName, licenseSpecName_);
        DARABONBA_PTR_TO_JSON(LicenseSpecType, licenseSpecType_);
        DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnActivateAllDuration, unActivateAllDuration_);
      };
      friend void from_json(const Darabonba::Json& j, LicenseList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivateTime, activateTime_);
        DARABONBA_PTR_FROM_JSON(AdaptiveMachine, adaptiveMachine_);
        DARABONBA_PTR_FROM_JSON(AllDuration, allDuration_);
        DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
        DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LicenseSpecCode, licenseSpecCode_);
        DARABONBA_PTR_FROM_JSON(LicenseSpecName, licenseSpecName_);
        DARABONBA_PTR_FROM_JSON(LicenseSpecType, licenseSpecType_);
        DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnActivateAllDuration, unActivateAllDuration_);
      };
      LicenseList() = default ;
      LicenseList(const LicenseList &) = default ;
      LicenseList(LicenseList &&) = default ;
      LicenseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LicenseList() = default ;
      LicenseList& operator=(const LicenseList &) = default ;
      LicenseList& operator=(LicenseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activateTime_ == nullptr
        && this->adaptiveMachine_ == nullptr && this->allDuration_ == nullptr && this->buyTime_ == nullptr && this->cpuLimit_ == nullptr && this->description_ == nullptr
        && this->duration_ == nullptr && this->effectTime_ == nullptr && this->expireTime_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr
        && this->licenseSpecCode_ == nullptr && this->licenseSpecName_ == nullptr && this->licenseSpecType_ == nullptr && this->memoryLimit_ == nullptr && this->status_ == nullptr
        && this->unActivateAllDuration_ == nullptr; };
      // activateTime Field Functions 
      bool hasActivateTime() const { return this->activateTime_ != nullptr;};
      void deleteActivateTime() { this->activateTime_ = nullptr;};
      inline string getActivateTime() const { DARABONBA_PTR_GET_DEFAULT(activateTime_, "") };
      inline LicenseList& setActivateTime(string activateTime) { DARABONBA_PTR_SET_VALUE(activateTime_, activateTime) };


      // adaptiveMachine Field Functions 
      bool hasAdaptiveMachine() const { return this->adaptiveMachine_ != nullptr;};
      void deleteAdaptiveMachine() { this->adaptiveMachine_ = nullptr;};
      inline int32_t getAdaptiveMachine() const { DARABONBA_PTR_GET_DEFAULT(adaptiveMachine_, 0) };
      inline LicenseList& setAdaptiveMachine(int32_t adaptiveMachine) { DARABONBA_PTR_SET_VALUE(adaptiveMachine_, adaptiveMachine) };


      // allDuration Field Functions 
      bool hasAllDuration() const { return this->allDuration_ != nullptr;};
      void deleteAllDuration() { this->allDuration_ = nullptr;};
      inline string getAllDuration() const { DARABONBA_PTR_GET_DEFAULT(allDuration_, "") };
      inline LicenseList& setAllDuration(string allDuration) { DARABONBA_PTR_SET_VALUE(allDuration_, allDuration) };


      // buyTime Field Functions 
      bool hasBuyTime() const { return this->buyTime_ != nullptr;};
      void deleteBuyTime() { this->buyTime_ = nullptr;};
      inline string getBuyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
      inline LicenseList& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


      // cpuLimit Field Functions 
      bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
      void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
      inline int32_t getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
      inline LicenseList& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LicenseList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline LicenseList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // effectTime Field Functions 
      bool hasEffectTime() const { return this->effectTime_ != nullptr;};
      void deleteEffectTime() { this->effectTime_ = nullptr;};
      inline string getEffectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
      inline LicenseList& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline LicenseList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline LicenseList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline LicenseList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // licenseSpecCode Field Functions 
      bool hasLicenseSpecCode() const { return this->licenseSpecCode_ != nullptr;};
      void deleteLicenseSpecCode() { this->licenseSpecCode_ = nullptr;};
      inline string getLicenseSpecCode() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecCode_, "") };
      inline LicenseList& setLicenseSpecCode(string licenseSpecCode) { DARABONBA_PTR_SET_VALUE(licenseSpecCode_, licenseSpecCode) };


      // licenseSpecName Field Functions 
      bool hasLicenseSpecName() const { return this->licenseSpecName_ != nullptr;};
      void deleteLicenseSpecName() { this->licenseSpecName_ = nullptr;};
      inline string getLicenseSpecName() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecName_, "") };
      inline LicenseList& setLicenseSpecName(string licenseSpecName) { DARABONBA_PTR_SET_VALUE(licenseSpecName_, licenseSpecName) };


      // licenseSpecType Field Functions 
      bool hasLicenseSpecType() const { return this->licenseSpecType_ != nullptr;};
      void deleteLicenseSpecType() { this->licenseSpecType_ = nullptr;};
      inline string getLicenseSpecType() const { DARABONBA_PTR_GET_DEFAULT(licenseSpecType_, "") };
      inline LicenseList& setLicenseSpecType(string licenseSpecType) { DARABONBA_PTR_SET_VALUE(licenseSpecType_, licenseSpecType) };


      // memoryLimit Field Functions 
      bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
      void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
      inline int32_t getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
      inline LicenseList& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LicenseList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // unActivateAllDuration Field Functions 
      bool hasUnActivateAllDuration() const { return this->unActivateAllDuration_ != nullptr;};
      void deleteUnActivateAllDuration() { this->unActivateAllDuration_ = nullptr;};
      inline string getUnActivateAllDuration() const { DARABONBA_PTR_GET_DEFAULT(unActivateAllDuration_, "") };
      inline LicenseList& setUnActivateAllDuration(string unActivateAllDuration) { DARABONBA_PTR_SET_VALUE(unActivateAllDuration_, unActivateAllDuration) };


    protected:
      shared_ptr<string> activateTime_ {};
      shared_ptr<int32_t> adaptiveMachine_ {};
      shared_ptr<string> allDuration_ {};
      shared_ptr<string> buyTime_ {};
      shared_ptr<int32_t> cpuLimit_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> effectTime_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> licenseSpecCode_ {};
      shared_ptr<string> licenseSpecName_ {};
      shared_ptr<string> licenseSpecType_ {};
      shared_ptr<int32_t> memoryLimit_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> unActivateAllDuration_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->currentPage_ == nullptr && this->httpStatusCode_ == nullptr && this->licenseList_ == nullptr && this->message_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr
        && this->totalPageCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListLicensesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLicensesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListLicensesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLicensesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // licenseList Field Functions 
    bool hasLicenseList() const { return this->licenseList_ != nullptr;};
    void deleteLicenseList() { this->licenseList_ = nullptr;};
    inline const vector<ListLicensesResponseBody::LicenseList> & getLicenseList() const { DARABONBA_PTR_GET_CONST(licenseList_, vector<ListLicensesResponseBody::LicenseList>) };
    inline vector<ListLicensesResponseBody::LicenseList> getLicenseList() { DARABONBA_PTR_GET(licenseList_, vector<ListLicensesResponseBody::LicenseList>) };
    inline ListLicensesResponseBody& setLicenseList(const vector<ListLicensesResponseBody::LicenseList> & licenseList) { DARABONBA_PTR_SET_VALUE(licenseList_, licenseList) };
    inline ListLicensesResponseBody& setLicenseList(vector<ListLicensesResponseBody::LicenseList> && licenseList) { DARABONBA_PTR_SET_RVALUE(licenseList_, licenseList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLicensesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLicensesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLicensesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLicensesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLicensesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline string getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, "") };
    inline ListLicensesResponseBody& setTotalPage(string totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalPageCount Field Functions 
    bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
    void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
    inline string getTotalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, "") };
    inline ListLicensesResponseBody& setTotalPageCount(string totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<vector<ListLicensesResponseBody::LicenseList>> licenseList_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<string> totalPage_ {};
    shared_ptr<string> totalPageCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
