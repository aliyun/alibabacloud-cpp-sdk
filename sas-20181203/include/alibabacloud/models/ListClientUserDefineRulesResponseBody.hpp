// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODY_HPP_
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
  class ListClientUserDefineRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUserDefineRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleList, userDefineRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUserDefineRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleList, userDefineRuleList_);
    };
    ListClientUserDefineRulesResponseBody() = default ;
    ListClientUserDefineRulesResponseBody(const ListClientUserDefineRulesResponseBody &) = default ;
    ListClientUserDefineRulesResponseBody(ListClientUserDefineRulesResponseBody &&) = default ;
    ListClientUserDefineRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUserDefineRulesResponseBody() = default ;
    ListClientUserDefineRulesResponseBody& operator=(const ListClientUserDefineRulesResponseBody &) = default ;
    ListClientUserDefineRulesResponseBody& operator=(ListClientUserDefineRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDefineRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefineRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UserDefineRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UserDefineRuleList() = default ;
      UserDefineRuleList(const UserDefineRuleList &) = default ;
      UserDefineRuleList(UserDefineRuleList &&) = default ;
      UserDefineRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefineRuleList() = default ;
      UserDefineRuleList& operator=(const UserDefineRuleList &) = default ;
      UserDefineRuleList& operator=(UserDefineRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->platform_ == nullptr && this->switchId_ == nullptr && this->type_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
      inline UserDefineRuleList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UserDefineRuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserDefineRuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline UserDefineRuleList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserDefineRuleList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline UserDefineRuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The action of the rule. Valid values:
      // 
      // *   **0**: allow
      // *   **1**: block
      shared_ptr<int32_t> actionType_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      // *   **all**: all types
      shared_ptr<string> platform_ {};
      // The switch ID of the rule.
      shared_ptr<string> switchId_ {};
      // The type of the rule. Valid values:
      // 
      // *   **1**: Process hash
      // *   **2**: Command line
      // *   **3**: Process Network
      // *   **4**: File Read and Write
      // *   **5**: Operation on Registry
      // *   **6**: Dynamic-link Library Loading
      // *   **7**: File Renaming
      shared_ptr<int32_t> type_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
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
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->userDefineRuleList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListClientUserDefineRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListClientUserDefineRulesResponseBody::PageInfo) };
    inline ListClientUserDefineRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListClientUserDefineRulesResponseBody::PageInfo) };
    inline ListClientUserDefineRulesResponseBody& setPageInfo(const ListClientUserDefineRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListClientUserDefineRulesResponseBody& setPageInfo(ListClientUserDefineRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientUserDefineRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleList Field Functions 
    bool hasUserDefineRuleList() const { return this->userDefineRuleList_ != nullptr;};
    void deleteUserDefineRuleList() { this->userDefineRuleList_ = nullptr;};
    inline const vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList> & getUserDefineRuleList() const { DARABONBA_PTR_GET_CONST(userDefineRuleList_, vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList>) };
    inline vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList> getUserDefineRuleList() { DARABONBA_PTR_GET(userDefineRuleList_, vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList>) };
    inline ListClientUserDefineRulesResponseBody& setUserDefineRuleList(const vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList> & userDefineRuleList) { DARABONBA_PTR_SET_VALUE(userDefineRuleList_, userDefineRuleList) };
    inline ListClientUserDefineRulesResponseBody& setUserDefineRuleList(vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList> && userDefineRuleList) { DARABONBA_PTR_SET_RVALUE(userDefineRuleList_, userDefineRuleList) };


  protected:
    // The pagination information.
    shared_ptr<ListClientUserDefineRulesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the rules.
    shared_ptr<vector<ListClientUserDefineRulesResponseBody::UserDefineRuleList>> userDefineRuleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
