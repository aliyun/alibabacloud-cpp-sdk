// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFILTERTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFILTERTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListWebFilterTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFilterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebFilterTemplates, webFilterTemplates_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFilterTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebFilterTemplates, webFilterTemplates_);
    };
    ListWebFilterTemplatesResponseBody() = default ;
    ListWebFilterTemplatesResponseBody(const ListWebFilterTemplatesResponseBody &) = default ;
    ListWebFilterTemplatesResponseBody(ListWebFilterTemplatesResponseBody &&) = default ;
    ListWebFilterTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFilterTemplatesResponseBody() = default ;
    ListWebFilterTemplatesResponseBody& operator=(const ListWebFilterTemplatesResponseBody &) = default ;
    ListWebFilterTemplatesResponseBody& operator=(ListWebFilterTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebFilterTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebFilterTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RuleActionStatistics, ruleActionStatistics_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, WebFilterTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RuleActionStatistics, ruleActionStatistics_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
      };
      WebFilterTemplates() = default ;
      WebFilterTemplates(const WebFilterTemplates &) = default ;
      WebFilterTemplates(WebFilterTemplates &&) = default ;
      WebFilterTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebFilterTemplates() = default ;
      WebFilterTemplates& operator=(const WebFilterTemplates &) = default ;
      WebFilterTemplates& operator=(WebFilterTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleActionStatistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleActionStatistics& obj) { 
          DARABONBA_PTR_TO_JSON(Alert, alert_);
          DARABONBA_PTR_TO_JSON(Allow, allow_);
          DARABONBA_PTR_TO_JSON(Deny, deny_);
        };
        friend void from_json(const Darabonba::Json& j, RuleActionStatistics& obj) { 
          DARABONBA_PTR_FROM_JSON(Alert, alert_);
          DARABONBA_PTR_FROM_JSON(Allow, allow_);
          DARABONBA_PTR_FROM_JSON(Deny, deny_);
        };
        RuleActionStatistics() = default ;
        RuleActionStatistics(const RuleActionStatistics &) = default ;
        RuleActionStatistics(RuleActionStatistics &&) = default ;
        RuleActionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleActionStatistics() = default ;
        RuleActionStatistics& operator=(const RuleActionStatistics &) = default ;
        RuleActionStatistics& operator=(RuleActionStatistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alert_ == nullptr
        && this->allow_ == nullptr && this->deny_ == nullptr; };
        // alert Field Functions 
        bool hasAlert() const { return this->alert_ != nullptr;};
        void deleteAlert() { this->alert_ = nullptr;};
        inline int64_t getAlert() const { DARABONBA_PTR_GET_DEFAULT(alert_, 0L) };
        inline RuleActionStatistics& setAlert(int64_t alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };


        // allow Field Functions 
        bool hasAllow() const { return this->allow_ != nullptr;};
        void deleteAllow() { this->allow_ = nullptr;};
        inline int64_t getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, 0L) };
        inline RuleActionStatistics& setAllow(int64_t allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


        // deny Field Functions 
        bool hasDeny() const { return this->deny_ != nullptr;};
        void deleteDeny() { this->deny_ = nullptr;};
        inline int64_t getDeny() const { DARABONBA_PTR_GET_DEFAULT(deny_, 0L) };
        inline RuleActionStatistics& setDeny(int64_t deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };


      protected:
        shared_ptr<int64_t> alert_ {};
        shared_ptr<int64_t> allow_ {};
        shared_ptr<int64_t> deny_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->ruleActionStatistics_ == nullptr && this->status_ == nullptr && this->webFilterTemplateId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline WebFilterTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline WebFilterTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WebFilterTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleActionStatistics Field Functions 
      bool hasRuleActionStatistics() const { return this->ruleActionStatistics_ != nullptr;};
      void deleteRuleActionStatistics() { this->ruleActionStatistics_ = nullptr;};
      inline const WebFilterTemplates::RuleActionStatistics & getRuleActionStatistics() const { DARABONBA_PTR_GET_CONST(ruleActionStatistics_, WebFilterTemplates::RuleActionStatistics) };
      inline WebFilterTemplates::RuleActionStatistics getRuleActionStatistics() { DARABONBA_PTR_GET(ruleActionStatistics_, WebFilterTemplates::RuleActionStatistics) };
      inline WebFilterTemplates& setRuleActionStatistics(const WebFilterTemplates::RuleActionStatistics & ruleActionStatistics) { DARABONBA_PTR_SET_VALUE(ruleActionStatistics_, ruleActionStatistics) };
      inline WebFilterTemplates& setRuleActionStatistics(WebFilterTemplates::RuleActionStatistics && ruleActionStatistics) { DARABONBA_PTR_SET_RVALUE(ruleActionStatistics_, ruleActionStatistics) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline WebFilterTemplates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // webFilterTemplateId Field Functions 
      bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
      void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
      inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
      inline WebFilterTemplates& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<WebFilterTemplates::RuleActionStatistics> ruleActionStatistics_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> webFilterTemplateId_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->webFilterTemplates_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListWebFilterTemplatesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWebFilterTemplatesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWebFilterTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWebFilterTemplatesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webFilterTemplates Field Functions 
    bool hasWebFilterTemplates() const { return this->webFilterTemplates_ != nullptr;};
    void deleteWebFilterTemplates() { this->webFilterTemplates_ = nullptr;};
    inline const vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates> & getWebFilterTemplates() const { DARABONBA_PTR_GET_CONST(webFilterTemplates_, vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates>) };
    inline vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates> getWebFilterTemplates() { DARABONBA_PTR_GET(webFilterTemplates_, vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates>) };
    inline ListWebFilterTemplatesResponseBody& setWebFilterTemplates(const vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates> & webFilterTemplates) { DARABONBA_PTR_SET_VALUE(webFilterTemplates_, webFilterTemplates) };
    inline ListWebFilterTemplatesResponseBody& setWebFilterTemplates(vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates> && webFilterTemplates) { DARABONBA_PTR_SET_RVALUE(webFilterTemplates_, webFilterTemplates) };


  protected:
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<ListWebFilterTemplatesResponseBody::WebFilterTemplates>> webFilterTemplates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
