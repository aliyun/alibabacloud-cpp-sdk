// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alerts, alerts_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alerts, alerts_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertsResponseBody() = default ;
    ListAlertsResponseBody(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody(ListAlertsResponseBody &&) = default ;
    ListAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBody() = default ;
    ListAlertsResponseBody& operator=(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody& operator=(ListAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alerts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alerts& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RelatedResourceArns, relatedResourceArns_);
        DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      };
      friend void from_json(const Darabonba::Json& j, Alerts& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceArns, relatedResourceArns_);
        DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      };
      Alerts() = default ;
      Alerts(const Alerts &) = default ;
      Alerts(Alerts &&) = default ;
      Alerts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alerts() = default ;
      Alerts& operator=(const Alerts &) = default ;
      Alerts& operator=(Alerts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->code_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr && this->relatedResourceArns_ == nullptr
        && this->resourceArn_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Alerts& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Alerts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Alerts& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Alerts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Alerts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // relatedResourceArns Field Functions 
      bool hasRelatedResourceArns() const { return this->relatedResourceArns_ != nullptr;};
      void deleteRelatedResourceArns() { this->relatedResourceArns_ = nullptr;};
      inline string getRelatedResourceArns() const { DARABONBA_PTR_GET_DEFAULT(relatedResourceArns_, "") };
      inline Alerts& setRelatedResourceArns(string relatedResourceArns) { DARABONBA_PTR_SET_VALUE(relatedResourceArns_, relatedResourceArns) };


      // resourceArn Field Functions 
      bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
      void deleteResourceArn() { this->resourceArn_ = nullptr;};
      inline string getResourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
      inline Alerts& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    protected:
      // The alert type.
      shared_ptr<string> category_ {};
      // The error code.
      shared_ptr<string> code_ {};
      // The time when the alert was received in UTC.
      shared_ptr<string> gmtCreate_ {};
      // The time when the alert was modified in UTC.
      shared_ptr<string> gmtModified_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The ARN of the related resource.
      shared_ptr<string> relatedResourceArns_ {};
      // The ARN of the resource.
      shared_ptr<string> resourceArn_ {};
    };

    virtual bool empty() const override { return this->alerts_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // alerts Field Functions 
    bool hasAlerts() const { return this->alerts_ != nullptr;};
    void deleteAlerts() { this->alerts_ = nullptr;};
    inline const vector<ListAlertsResponseBody::Alerts> & getAlerts() const { DARABONBA_PTR_GET_CONST(alerts_, vector<ListAlertsResponseBody::Alerts>) };
    inline vector<ListAlertsResponseBody::Alerts> getAlerts() { DARABONBA_PTR_GET(alerts_, vector<ListAlertsResponseBody::Alerts>) };
    inline ListAlertsResponseBody& setAlerts(const vector<ListAlertsResponseBody::Alerts> & alerts) { DARABONBA_PTR_SET_VALUE(alerts_, alerts) };
    inline ListAlertsResponseBody& setAlerts(vector<ListAlertsResponseBody::Alerts> && alerts) { DARABONBA_PTR_SET_RVALUE(alerts_, alerts) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAlertsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The alerts.
    shared_ptr<vector<ListAlertsResponseBody::Alerts>> alerts_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
