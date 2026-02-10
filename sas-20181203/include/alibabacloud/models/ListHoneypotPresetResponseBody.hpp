// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPRESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPRESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotPresetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotPresetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListHoneypotPresetResponseBody() = default ;
    ListHoneypotPresetResponseBody(const ListHoneypotPresetResponseBody &) = default ;
    ListHoneypotPresetResponseBody(ListHoneypotPresetResponseBody &&) = default ;
    ListHoneypotPresetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotPresetResponseBody() = default ;
    ListHoneypotPresetResponseBody& operator=(const ListHoneypotPresetResponseBody &) = default ;
    ListHoneypotPresetResponseBody& operator=(ListHoneypotPresetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_TO_JSON(HoneypotPresetId, honeypotPresetId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PresetName, presetName_);
        DARABONBA_PTR_TO_JSON(PresetType, presetType_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_FROM_JSON(HoneypotPresetId, honeypotPresetId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PresetName, presetName_);
        DARABONBA_PTR_FROM_JSON(PresetType, presetType_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->controlNodeName_ == nullptr
        && this->honeypotImageDisplayName_ == nullptr && this->honeypotImageName_ == nullptr && this->honeypotPresetId_ == nullptr && this->nodeId_ == nullptr && this->presetName_ == nullptr
        && this->presetType_ == nullptr; };
      // controlNodeName Field Functions 
      bool hasControlNodeName() const { return this->controlNodeName_ != nullptr;};
      void deleteControlNodeName() { this->controlNodeName_ = nullptr;};
      inline string getControlNodeName() const { DARABONBA_PTR_GET_DEFAULT(controlNodeName_, "") };
      inline List& setControlNodeName(string controlNodeName) { DARABONBA_PTR_SET_VALUE(controlNodeName_, controlNodeName) };


      // honeypotImageDisplayName Field Functions 
      bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
      void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
      inline string getHoneypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
      inline List& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


      // honeypotImageName Field Functions 
      bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
      void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
      inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
      inline List& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


      // honeypotPresetId Field Functions 
      bool hasHoneypotPresetId() const { return this->honeypotPresetId_ != nullptr;};
      void deleteHoneypotPresetId() { this->honeypotPresetId_ = nullptr;};
      inline string getHoneypotPresetId() const { DARABONBA_PTR_GET_DEFAULT(honeypotPresetId_, "") };
      inline List& setHoneypotPresetId(string honeypotPresetId) { DARABONBA_PTR_SET_VALUE(honeypotPresetId_, honeypotPresetId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline List& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // presetName Field Functions 
      bool hasPresetName() const { return this->presetName_ != nullptr;};
      void deletePresetName() { this->presetName_ = nullptr;};
      inline string getPresetName() const { DARABONBA_PTR_GET_DEFAULT(presetName_, "") };
      inline List& setPresetName(string presetName) { DARABONBA_PTR_SET_VALUE(presetName_, presetName) };


      // presetType Field Functions 
      bool hasPresetType() const { return this->presetType_ != nullptr;};
      void deletePresetType() { this->presetType_ = nullptr;};
      inline string getPresetType() const { DARABONBA_PTR_GET_DEFAULT(presetType_, "") };
      inline List& setPresetType(string presetType) { DARABONBA_PTR_SET_VALUE(presetType_, presetType) };


    protected:
      // The name of the management node.
      shared_ptr<string> controlNodeName_ {};
      // The display name of the honeypot image.
      shared_ptr<string> honeypotImageDisplayName_ {};
      // The name of the honeypot image.
      shared_ptr<string> honeypotImageName_ {};
      // The ID of the honeypot template.
      shared_ptr<string> honeypotPresetId_ {};
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
      // The custom name of the honeypot template.
      shared_ptr<string> presetName_ {};
      // The type of the honeypot template. Valid values:
      // 
      // *   **TEMP**: automatically generated template
      // *   **CUSTOM**: custom template
      // *   **DEFAULT**: default template
      shared_ptr<string> presetType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListHoneypotPresetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListHoneypotPresetResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListHoneypotPresetResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListHoneypotPresetResponseBody::List>) };
    inline vector<ListHoneypotPresetResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListHoneypotPresetResponseBody::List>) };
    inline ListHoneypotPresetResponseBody& setList(const vector<ListHoneypotPresetResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListHoneypotPresetResponseBody& setList(vector<ListHoneypotPresetResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHoneypotPresetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListHoneypotPresetResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListHoneypotPresetResponseBody::PageInfo) };
    inline ListHoneypotPresetResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListHoneypotPresetResponseBody::PageInfo) };
    inline ListHoneypotPresetResponseBody& setPageInfo(const ListHoneypotPresetResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListHoneypotPresetResponseBody& setPageInfo(ListHoneypotPresetResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotPresetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListHoneypotPresetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // An array that consists of the honeypot templates.
    shared_ptr<vector<ListHoneypotPresetResponseBody::List>> list_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListHoneypotPresetResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
