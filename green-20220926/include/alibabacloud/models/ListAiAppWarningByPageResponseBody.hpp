// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIAPPWARNINGBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAIAPPWARNINGBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAiAppWarningByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAiAppWarningByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAiAppWarningByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAiAppWarningByPageResponseBody() = default ;
    ListAiAppWarningByPageResponseBody(const ListAiAppWarningByPageResponseBody &) = default ;
    ListAiAppWarningByPageResponseBody(ListAiAppWarningByPageResponseBody &&) = default ;
    ListAiAppWarningByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAiAppWarningByPageResponseBody() = default ;
    ListAiAppWarningByPageResponseBody& operator=(const ListAiAppWarningByPageResponseBody &) = default ;
    ListAiAppWarningByPageResponseBody& operator=(ListAiAppWarningByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
        DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
        DARABONBA_PTR_TO_JSON(WarningTime, warningTime_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
        DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
        DARABONBA_PTR_FROM_JSON(WarningTime, warningTime_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(LabelDesc, labelDesc_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr && this->labelDesc_ == nullptr && this->type_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline Labels& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Labels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // labelDesc Field Functions 
        bool hasLabelDesc() const { return this->labelDesc_ != nullptr;};
        void deleteLabelDesc() { this->labelDesc_ = nullptr;};
        inline string getLabelDesc() const { DARABONBA_PTR_GET_DEFAULT(labelDesc_, "") };
        inline Labels& setLabelDesc(string labelDesc) { DARABONBA_PTR_SET_VALUE(labelDesc_, labelDesc) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Labels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The count.
        shared_ptr<int64_t> count_ {};
        // The label name.
        shared_ptr<string> label_ {};
        // The label description.
        shared_ptr<string> labelDesc_ {};
        // The type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->labels_ == nullptr && this->serviceCode_ == nullptr && this->traceId_ == nullptr && this->warningCount_ == nullptr
        && this->warningTime_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Items& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Items& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Items::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Items::Labels>) };
      inline vector<Items::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Items::Labels>) };
      inline Items& setLabels(const vector<Items::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Items& setLabels(vector<Items::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Items& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // traceId Field Functions 
      bool hasTraceId() const { return this->traceId_ != nullptr;};
      void deleteTraceId() { this->traceId_ = nullptr;};
      inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
      inline Items& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      // warningCount Field Functions 
      bool hasWarningCount() const { return this->warningCount_ != nullptr;};
      void deleteWarningCount() { this->warningCount_ = nullptr;};
      inline int64_t getWarningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0L) };
      inline Items& setWarningCount(int64_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


      // warningTime Field Functions 
      bool hasWarningTime() const { return this->warningTime_ != nullptr;};
      void deleteWarningTime() { this->warningTime_ = nullptr;};
      inline string getWarningTime() const { DARABONBA_PTR_GET_DEFAULT(warningTime_, "") };
      inline Items& setWarningTime(string warningTime) { DARABONBA_PTR_SET_VALUE(warningTime_, warningTime) };


    protected:
      // appId。
      shared_ptr<string> appId_ {};
      // The application name.
      shared_ptr<string> appName_ {};
      // The list of labels.
      shared_ptr<vector<Items::Labels>> labels_ {};
      // The service code.
      shared_ptr<string> serviceCode_ {};
      // The trace ID used to correlate and trace alert events.
      shared_ptr<string> traceId_ {};
      // The number of alerts.
      shared_ptr<int64_t> warningCount_ {};
      // The time when the alert was triggered.
      shared_ptr<string> warningTime_ {};
    };

    class Ext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Ext& obj) { 
        DARABONBA_ANY_TO_JSON(Option, option_);
      };
      friend void from_json(const Darabonba::Json& j, Ext& obj) { 
        DARABONBA_ANY_FROM_JSON(Option, option_);
      };
      Ext() = default ;
      Ext(const Ext &) = default ;
      Ext(Ext &&) = default ;
      Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Ext() = default ;
      Ext& operator=(const Ext &) = default ;
      Ext& operator=(Ext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->option_ == nullptr; };
      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline       const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
      Darabonba::Json & getOption() { DARABONBA_GET(option_) };
      inline Ext& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
      inline Ext& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


    protected:
      // The option.
      Darabonba::Json option_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ext_ == nullptr && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAiAppWarningByPageResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const ListAiAppWarningByPageResponseBody::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, ListAiAppWarningByPageResponseBody::Ext) };
    inline ListAiAppWarningByPageResponseBody::Ext getExt() { DARABONBA_PTR_GET(ext_, ListAiAppWarningByPageResponseBody::Ext) };
    inline ListAiAppWarningByPageResponseBody& setExt(const ListAiAppWarningByPageResponseBody::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline ListAiAppWarningByPageResponseBody& setExt(ListAiAppWarningByPageResponseBody::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAiAppWarningByPageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAiAppWarningByPageResponseBody::Items>) };
    inline vector<ListAiAppWarningByPageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAiAppWarningByPageResponseBody::Items>) };
    inline ListAiAppWarningByPageResponseBody& setItems(const vector<ListAiAppWarningByPageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAiAppWarningByPageResponseBody& setItems(vector<ListAiAppWarningByPageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAiAppWarningByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAiAppWarningByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAiAppWarningByPageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The extension field.
    shared_ptr<ListAiAppWarningByPageResponseBody::Ext> ext_ {};
    // The data on the current page.
    shared_ptr<vector<ListAiAppWarningByPageResponseBody::Items>> items_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
