// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGECAMPAIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGECAMPAIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListMessageCampaignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageCampaignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageCampaignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListMessageCampaignResponseBody() = default ;
    ListMessageCampaignResponseBody(const ListMessageCampaignResponseBody &) = default ;
    ListMessageCampaignResponseBody(ListMessageCampaignResponseBody &&) = default ;
    ListMessageCampaignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageCampaignResponseBody() = default ;
    ListMessageCampaignResponseBody& operator=(const ListMessageCampaignResponseBody &) = default ;
    ListMessageCampaignResponseBody& operator=(ListMessageCampaignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdAccountId, adAccountId_);
        DARABONBA_PTR_TO_JSON(Budget, budget_);
        DARABONBA_PTR_TO_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
        DARABONBA_PTR_TO_JSON(CampaignName, campaignName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(PageId, pageId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdAccountId, adAccountId_);
        DARABONBA_PTR_FROM_JSON(Budget, budget_);
        DARABONBA_PTR_FROM_JSON(BudgetType, budgetType_);
        DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
        DARABONBA_PTR_FROM_JSON(CampaignName, campaignName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(PageId, pageId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->adAccountId_ == nullptr
        && this->budget_ == nullptr && this->budgetType_ == nullptr && this->campaignId_ == nullptr && this->campaignName_ == nullptr && this->createTime_ == nullptr
        && this->pageId_ == nullptr && this->status_ == nullptr; };
      // adAccountId Field Functions 
      bool hasAdAccountId() const { return this->adAccountId_ != nullptr;};
      void deleteAdAccountId() { this->adAccountId_ = nullptr;};
      inline string getAdAccountId() const { DARABONBA_PTR_GET_DEFAULT(adAccountId_, "") };
      inline Data& setAdAccountId(string adAccountId) { DARABONBA_PTR_SET_VALUE(adAccountId_, adAccountId) };


      // budget Field Functions 
      bool hasBudget() const { return this->budget_ != nullptr;};
      void deleteBudget() { this->budget_ = nullptr;};
      inline int64_t getBudget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
      inline Data& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


      // budgetType Field Functions 
      bool hasBudgetType() const { return this->budgetType_ != nullptr;};
      void deleteBudgetType() { this->budgetType_ = nullptr;};
      inline string getBudgetType() const { DARABONBA_PTR_GET_DEFAULT(budgetType_, "") };
      inline Data& setBudgetType(string budgetType) { DARABONBA_PTR_SET_VALUE(budgetType_, budgetType) };


      // campaignId Field Functions 
      bool hasCampaignId() const { return this->campaignId_ != nullptr;};
      void deleteCampaignId() { this->campaignId_ = nullptr;};
      inline string getCampaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
      inline Data& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


      // campaignName Field Functions 
      bool hasCampaignName() const { return this->campaignName_ != nullptr;};
      void deleteCampaignName() { this->campaignName_ = nullptr;};
      inline string getCampaignName() const { DARABONBA_PTR_GET_DEFAULT(campaignName_, "") };
      inline Data& setCampaignName(string campaignName) { DARABONBA_PTR_SET_VALUE(campaignName_, campaignName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // pageId Field Functions 
      bool hasPageId() const { return this->pageId_ != nullptr;};
      void deletePageId() { this->pageId_ = nullptr;};
      inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
      inline Data& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the Meta ad account.
      shared_ptr<string> adAccountId_ {};
      // The budget.
      shared_ptr<int64_t> budget_ {};
      // The budget type.
      shared_ptr<string> budgetType_ {};
      // The campaign ID.
      shared_ptr<string> campaignId_ {};
      // The name of the campaign.
      shared_ptr<string> campaignName_ {};
      // The time when the campaign was created.
      shared_ptr<int64_t> createTime_ {};
      // The Page ID for Messenger.
      shared_ptr<string> pageId_ {};
      // The status of the campaign.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListMessageCampaignResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMessageCampaignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMessageCampaignResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMessageCampaignResponseBody::Data>) };
    inline vector<ListMessageCampaignResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMessageCampaignResponseBody::Data>) };
    inline ListMessageCampaignResponseBody& setData(const vector<ListMessageCampaignResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMessageCampaignResponseBody& setData(vector<ListMessageCampaignResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMessageCampaignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessageCampaignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMessageCampaignResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListMessageCampaignResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The request status code.
    // 
    // - A value of OK indicates that the request was successful.
    // 
    // - For other error codes, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data object.
    shared_ptr<vector<ListMessageCampaignResponseBody::Data>> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // 
    // - true: successful.
    // 
    // - false: failed.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
