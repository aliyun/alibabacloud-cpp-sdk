// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPACLUSTERSTRATEGYNEWRESPONSEBODY_HPP_
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
  class ListOpaClusterStrategyNewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpaClusterStrategyNewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpaClusterStrategyNewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListOpaClusterStrategyNewResponseBody() = default ;
    ListOpaClusterStrategyNewResponseBody(const ListOpaClusterStrategyNewResponseBody &) = default ;
    ListOpaClusterStrategyNewResponseBody(ListOpaClusterStrategyNewResponseBody &&) = default ;
    ListOpaClusterStrategyNewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpaClusterStrategyNewResponseBody() = default ;
    ListOpaClusterStrategyNewResponseBody& operator=(const ListOpaClusterStrategyNewResponseBody &) = default ;
    ListOpaClusterStrategyNewResponseBody& operator=(ListOpaClusterStrategyNewResponseBody &&) = default ;
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_TO_JSON(ClusterIdList, clusterIdList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_FROM_JSON(ClusterIdList, clusterIdList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
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
      virtual bool empty() const override { return this->action_ == nullptr
        && this->clusterCount_ == nullptr && this->clusterIdList_ == nullptr && this->description_ == nullptr && this->imageName_ == nullptr && this->label_ == nullptr
        && this->maliciousImage_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->unScanedImage_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline int32_t getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, 0) };
      inline List& setAction(int32_t action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline List& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // clusterIdList Field Functions 
      bool hasClusterIdList() const { return this->clusterIdList_ != nullptr;};
      void deleteClusterIdList() { this->clusterIdList_ = nullptr;};
      inline const vector<string> & getClusterIdList() const { DARABONBA_PTR_GET_CONST(clusterIdList_, vector<string>) };
      inline vector<string> getClusterIdList() { DARABONBA_PTR_GET(clusterIdList_, vector<string>) };
      inline List& setClusterIdList(const vector<string> & clusterIdList) { DARABONBA_PTR_SET_VALUE(clusterIdList_, clusterIdList) };
      inline List& setClusterIdList(vector<string> && clusterIdList) { DARABONBA_PTR_SET_RVALUE(clusterIdList_, clusterIdList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
      inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
      inline List& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
      inline List& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
      inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
      inline List& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
      inline List& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


      // maliciousImage Field Functions 
      bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
      void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
      inline bool getMaliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
      inline List& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline List& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline List& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // unScanedImage Field Functions 
      bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
      void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
      inline bool getUnScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
      inline List& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    protected:
      // The action of the rule. Valid values:
      // 
      // *   **1**: trigger alerts
      // *   **2**: block
      // *   **3**: allow
      shared_ptr<int32_t> action_ {};
      // The number of clusters on which the rule takes effect.
      shared_ptr<int32_t> clusterCount_ {};
      // The clusters on which the rule takes effect.
      shared_ptr<vector<string>> clusterIdList_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The image names.
      shared_ptr<vector<string>> imageName_ {};
      // The tags that are added to the container.
      shared_ptr<vector<string>> label_ {};
      // Indicates whether the rule supports malicious Internet images. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> maliciousImage_ {};
      // The rule ID.
      shared_ptr<int64_t> strategyId_ {};
      // The rule name.
      shared_ptr<string> strategyName_ {};
      // Indicates whether the rule supports unscanned images. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> unScanedImage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOpaClusterStrategyNewResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListOpaClusterStrategyNewResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListOpaClusterStrategyNewResponseBody::List>) };
    inline vector<ListOpaClusterStrategyNewResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListOpaClusterStrategyNewResponseBody::List>) };
    inline ListOpaClusterStrategyNewResponseBody& setList(const vector<ListOpaClusterStrategyNewResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListOpaClusterStrategyNewResponseBody& setList(vector<ListOpaClusterStrategyNewResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListOpaClusterStrategyNewResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListOpaClusterStrategyNewResponseBody::PageInfo) };
    inline ListOpaClusterStrategyNewResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListOpaClusterStrategyNewResponseBody::PageInfo) };
    inline ListOpaClusterStrategyNewResponseBody& setPageInfo(const ListOpaClusterStrategyNewResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListOpaClusterStrategyNewResponseBody& setPageInfo(ListOpaClusterStrategyNewResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOpaClusterStrategyNewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOpaClusterStrategyNewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The rules.
    shared_ptr<vector<ListOpaClusterStrategyNewResponseBody::List>> list_ {};
    // The message that shows the export task result. The value is fixed as **success**, which indicates that the export task is successful.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListOpaClusterStrategyNewResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
