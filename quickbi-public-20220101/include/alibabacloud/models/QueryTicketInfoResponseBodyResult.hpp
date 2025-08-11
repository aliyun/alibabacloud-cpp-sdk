// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYTICKETINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryTicketInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTicketInfoResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryTicketInfoResponseBodyResult& obj) { 
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
    QueryTicketInfoResponseBodyResult() = default ;
    QueryTicketInfoResponseBodyResult(const QueryTicketInfoResponseBodyResult &) = default ;
    QueryTicketInfoResponseBodyResult(QueryTicketInfoResponseBodyResult &&) = default ;
    QueryTicketInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTicketInfoResponseBodyResult() = default ;
    QueryTicketInfoResponseBodyResult& operator=(const QueryTicketInfoResponseBodyResult &) = default ;
    QueryTicketInfoResponseBodyResult& operator=(QueryTicketInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTicket_ != nullptr
        && this->cmptId_ != nullptr && this->globalParam_ != nullptr && this->invalidTime_ != nullptr && this->maxTicketNum_ != nullptr && this->organizationId_ != nullptr
        && this->registerTime_ != nullptr && this->usedTicketNum_ != nullptr && this->userId_ != nullptr && this->watermarkParam_ != nullptr && this->worksId_ != nullptr; };
    // accessTicket Field Functions 
    bool hasAccessTicket() const { return this->accessTicket_ != nullptr;};
    void deleteAccessTicket() { this->accessTicket_ = nullptr;};
    inline string accessTicket() const { DARABONBA_PTR_GET_DEFAULT(accessTicket_, "") };
    inline QueryTicketInfoResponseBodyResult& setAccessTicket(string accessTicket) { DARABONBA_PTR_SET_VALUE(accessTicket_, accessTicket) };


    // cmptId Field Functions 
    bool hasCmptId() const { return this->cmptId_ != nullptr;};
    void deleteCmptId() { this->cmptId_ = nullptr;};
    inline string cmptId() const { DARABONBA_PTR_GET_DEFAULT(cmptId_, "") };
    inline QueryTicketInfoResponseBodyResult& setCmptId(string cmptId) { DARABONBA_PTR_SET_VALUE(cmptId_, cmptId) };


    // globalParam Field Functions 
    bool hasGlobalParam() const { return this->globalParam_ != nullptr;};
    void deleteGlobalParam() { this->globalParam_ = nullptr;};
    inline string globalParam() const { DARABONBA_PTR_GET_DEFAULT(globalParam_, "") };
    inline QueryTicketInfoResponseBodyResult& setGlobalParam(string globalParam) { DARABONBA_PTR_SET_VALUE(globalParam_, globalParam) };


    // invalidTime Field Functions 
    bool hasInvalidTime() const { return this->invalidTime_ != nullptr;};
    void deleteInvalidTime() { this->invalidTime_ = nullptr;};
    inline string invalidTime() const { DARABONBA_PTR_GET_DEFAULT(invalidTime_, "") };
    inline QueryTicketInfoResponseBodyResult& setInvalidTime(string invalidTime) { DARABONBA_PTR_SET_VALUE(invalidTime_, invalidTime) };


    // maxTicketNum Field Functions 
    bool hasMaxTicketNum() const { return this->maxTicketNum_ != nullptr;};
    void deleteMaxTicketNum() { this->maxTicketNum_ = nullptr;};
    inline int32_t maxTicketNum() const { DARABONBA_PTR_GET_DEFAULT(maxTicketNum_, 0) };
    inline QueryTicketInfoResponseBodyResult& setMaxTicketNum(int32_t maxTicketNum) { DARABONBA_PTR_SET_VALUE(maxTicketNum_, maxTicketNum) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline QueryTicketInfoResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // registerTime Field Functions 
    bool hasRegisterTime() const { return this->registerTime_ != nullptr;};
    void deleteRegisterTime() { this->registerTime_ = nullptr;};
    inline string registerTime() const { DARABONBA_PTR_GET_DEFAULT(registerTime_, "") };
    inline QueryTicketInfoResponseBodyResult& setRegisterTime(string registerTime) { DARABONBA_PTR_SET_VALUE(registerTime_, registerTime) };


    // usedTicketNum Field Functions 
    bool hasUsedTicketNum() const { return this->usedTicketNum_ != nullptr;};
    void deleteUsedTicketNum() { this->usedTicketNum_ = nullptr;};
    inline int32_t usedTicketNum() const { DARABONBA_PTR_GET_DEFAULT(usedTicketNum_, 0) };
    inline QueryTicketInfoResponseBodyResult& setUsedTicketNum(int32_t usedTicketNum) { DARABONBA_PTR_SET_VALUE(usedTicketNum_, usedTicketNum) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryTicketInfoResponseBodyResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // watermarkParam Field Functions 
    bool hasWatermarkParam() const { return this->watermarkParam_ != nullptr;};
    void deleteWatermarkParam() { this->watermarkParam_ = nullptr;};
    inline string watermarkParam() const { DARABONBA_PTR_GET_DEFAULT(watermarkParam_, "") };
    inline QueryTicketInfoResponseBodyResult& setWatermarkParam(string watermarkParam) { DARABONBA_PTR_SET_VALUE(watermarkParam_, watermarkParam) };


    // worksId Field Functions 
    bool hasWorksId() const { return this->worksId_ != nullptr;};
    void deleteWorksId() { this->worksId_ = nullptr;};
    inline string worksId() const { DARABONBA_PTR_GET_DEFAULT(worksId_, "") };
    inline QueryTicketInfoResponseBodyResult& setWorksId(string worksId) { DARABONBA_PTR_SET_VALUE(worksId_, worksId) };


  protected:
    // Notes.
    std::shared_ptr<string> accessTicket_ = nullptr;
    // The ID of the component in the report.
    std::shared_ptr<string> cmptId_ = nullptr;
    // Global parameters.
    std::shared_ptr<string> globalParam_ = nullptr;
    // Expiration time of the note.
    std::shared_ptr<string> invalidTime_ = nullptr;
    // The maximum number of supported bills.
    std::shared_ptr<int32_t> maxTicketNum_ = nullptr;
    // The ID of the organization.
    std::shared_ptr<string> organizationId_ = nullptr;
    // The registration time of the ticket.
    std::shared_ptr<string> registerTime_ = nullptr;
    // The number of bills that have been consumed.
    std::shared_ptr<int32_t> usedTicketNum_ = nullptr;
    // The user ID of the Quick BI.
    std::shared_ptr<string> userId_ = nullptr;
    // Set the watermarking parameters.
    std::shared_ptr<string> watermarkParam_ = nullptr;
    // The ID of the operations report.
    std::shared_ptr<string> worksId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
