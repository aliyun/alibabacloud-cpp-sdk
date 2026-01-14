// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryTicketInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTicketInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTicketInfoResponseBody() = default ;
    QueryTicketInfoResponseBody(const QueryTicketInfoResponseBody &) = default ;
    QueryTicketInfoResponseBody(QueryTicketInfoResponseBody &&) = default ;
    QueryTicketInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketInfoResponseBody() = default ;
    QueryTicketInfoResponseBody& operator=(const QueryTicketInfoResponseBody &) = default ;
    QueryTicketInfoResponseBody& operator=(QueryTicketInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTicket, accessTicket_);
        DARABONBA_PTR_TO_JSON(CmptId, cmptId_);
        DARABONBA_PTR_TO_JSON(GlobalParam, globalParam_);
        DARABONBA_PTR_TO_JSON(InvalidTime, invalidTime_);
        DARABONBA_PTR_TO_JSON(MaxTicketNum, maxTicketNum_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(RegisterTime, registerTime_);
        DARABONBA_PTR_TO_JSON(UsedTicketNum, usedTicketNum_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WatermarkParam, watermarkParam_);
        DARABONBA_PTR_TO_JSON(WorksId, worksId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTicket, accessTicket_);
        DARABONBA_PTR_FROM_JSON(CmptId, cmptId_);
        DARABONBA_PTR_FROM_JSON(GlobalParam, globalParam_);
        DARABONBA_PTR_FROM_JSON(InvalidTime, invalidTime_);
        DARABONBA_PTR_FROM_JSON(MaxTicketNum, maxTicketNum_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(RegisterTime, registerTime_);
        DARABONBA_PTR_FROM_JSON(UsedTicketNum, usedTicketNum_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WatermarkParam, watermarkParam_);
        DARABONBA_PTR_FROM_JSON(WorksId, worksId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessTicket_ == nullptr
        && this->cmptId_ == nullptr && this->globalParam_ == nullptr && this->invalidTime_ == nullptr && this->maxTicketNum_ == nullptr && this->organizationId_ == nullptr
        && this->registerTime_ == nullptr && this->usedTicketNum_ == nullptr && this->userId_ == nullptr && this->watermarkParam_ == nullptr && this->worksId_ == nullptr; };
      // accessTicket Field Functions 
      bool hasAccessTicket() const { return this->accessTicket_ != nullptr;};
      void deleteAccessTicket() { this->accessTicket_ = nullptr;};
      inline string getAccessTicket() const { DARABONBA_PTR_GET_DEFAULT(accessTicket_, "") };
      inline Result& setAccessTicket(string accessTicket) { DARABONBA_PTR_SET_VALUE(accessTicket_, accessTicket) };


      // cmptId Field Functions 
      bool hasCmptId() const { return this->cmptId_ != nullptr;};
      void deleteCmptId() { this->cmptId_ = nullptr;};
      inline string getCmptId() const { DARABONBA_PTR_GET_DEFAULT(cmptId_, "") };
      inline Result& setCmptId(string cmptId) { DARABONBA_PTR_SET_VALUE(cmptId_, cmptId) };


      // globalParam Field Functions 
      bool hasGlobalParam() const { return this->globalParam_ != nullptr;};
      void deleteGlobalParam() { this->globalParam_ = nullptr;};
      inline string getGlobalParam() const { DARABONBA_PTR_GET_DEFAULT(globalParam_, "") };
      inline Result& setGlobalParam(string globalParam) { DARABONBA_PTR_SET_VALUE(globalParam_, globalParam) };


      // invalidTime Field Functions 
      bool hasInvalidTime() const { return this->invalidTime_ != nullptr;};
      void deleteInvalidTime() { this->invalidTime_ = nullptr;};
      inline string getInvalidTime() const { DARABONBA_PTR_GET_DEFAULT(invalidTime_, "") };
      inline Result& setInvalidTime(string invalidTime) { DARABONBA_PTR_SET_VALUE(invalidTime_, invalidTime) };


      // maxTicketNum Field Functions 
      bool hasMaxTicketNum() const { return this->maxTicketNum_ != nullptr;};
      void deleteMaxTicketNum() { this->maxTicketNum_ = nullptr;};
      inline int32_t getMaxTicketNum() const { DARABONBA_PTR_GET_DEFAULT(maxTicketNum_, 0) };
      inline Result& setMaxTicketNum(int32_t maxTicketNum) { DARABONBA_PTR_SET_VALUE(maxTicketNum_, maxTicketNum) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline Result& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // registerTime Field Functions 
      bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
      void deleteRegisterTime() { this->registerTime_ = nullptr;};
      inline string getRegisterTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, "") };
      inline Result& setRegisterTime(string registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


      // usedTicketNum Field Functions 
      bool hasUsedTicketNum() const { return this->usedTicketNum_ != nullptr;};
      void deleteUsedTicketNum() { this->usedTicketNum_ = nullptr;};
      inline int32_t getUsedTicketNum() const { DARABONBA_PTR_GET_DEFAULT(usedTicketNum_, 0) };
      inline Result& setUsedTicketNum(int32_t usedTicketNum) { DARABONBA_PTR_SET_VALUE(usedTicketNum_, usedTicketNum) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Result& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // watermarkParam Field Functions 
      bool hasWatermarkParam() const { return this->watermarkParam_ != nullptr;};
      void deleteWatermarkParam() { this->watermarkParam_ = nullptr;};
      inline string getWatermarkParam() const { DARABONBA_PTR_GET_DEFAULT(watermarkParam_, "") };
      inline Result& setWatermarkParam(string watermarkParam) { DARABONBA_PTR_SET_VALUE(watermarkParam_, watermarkParam) };


      // worksId Field Functions 
      bool hasWorksId() const { return this->worksId_ != nullptr;};
      void deleteWorksId() { this->worksId_ = nullptr;};
      inline string getWorksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
      inline Result& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


    protected:
      // Notes.
      shared_ptr<string> accessTicket_ {};
      // The ID of the component in the report.
      shared_ptr<string> cmptId_ {};
      // Global parameters.
      shared_ptr<string> globalParam_ {};
      // Expiration time of the note.
      shared_ptr<string> invalidTime_ {};
      // The maximum number of supported bills.
      shared_ptr<int32_t> maxTicketNum_ {};
      // The ID of the organization.
      shared_ptr<string> organizationId_ {};
      // The registration time of the ticket.
      shared_ptr<string> registerTime_ {};
      // The number of bills that have been consumed.
      shared_ptr<int32_t> usedTicketNum_ {};
      // The user ID of the Quick BI.
      shared_ptr<string> userId_ {};
      // Set the watermarking parameters.
      shared_ptr<string> watermarkParam_ {};
      // The ID of the operations report.
      shared_ptr<string> worksId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTicketInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryTicketInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryTicketInfoResponseBody::Result) };
    inline QueryTicketInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryTicketInfoResponseBody::Result) };
    inline QueryTicketInfoResponseBody& setResult(const QueryTicketInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryTicketInfoResponseBody& setResult(QueryTicketInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTicketInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the generated ticket.
    shared_ptr<QueryTicketInfoResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
