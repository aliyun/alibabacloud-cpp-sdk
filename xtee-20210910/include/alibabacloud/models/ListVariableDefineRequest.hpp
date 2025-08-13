// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVARIABLEDEFINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVARIABLEDEFINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class ListVariableDefineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVariableDefineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(allowBind, allowBind_);
      DARABONBA_PTR_TO_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(paging, paging_);
      DARABONBA_PTR_TO_JSON(queryContent, queryContent_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(roleType, roleType_);
      DARABONBA_PTR_TO_JSON(scenesStr, scenesStr_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(typesStr, typesStr_);
    };
    friend void from_json(const Darabonba::Json& j, ListVariableDefineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(allowBind, allowBind_);
      DARABONBA_PTR_FROM_JSON(chargingMode, chargingMode_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(paging, paging_);
      DARABONBA_PTR_FROM_JSON(queryContent, queryContent_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(roleType, roleType_);
      DARABONBA_PTR_FROM_JSON(scenesStr, scenesStr_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(typesStr, typesStr_);
    };
    ListVariableDefineRequest() = default ;
    ListVariableDefineRequest(const ListVariableDefineRequest &) = default ;
    ListVariableDefineRequest(ListVariableDefineRequest &&) = default ;
    ListVariableDefineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVariableDefineRequest() = default ;
    ListVariableDefineRequest& operator=(const ListVariableDefineRequest &) = default ;
    ListVariableDefineRequest& operator=(ListVariableDefineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->allowBind_ != nullptr && this->chargingMode_ != nullptr && this->currentPage_ != nullptr && this->pageSize_ != nullptr && this->paging_ != nullptr
        && this->queryContent_ != nullptr && this->regId_ != nullptr && this->roleType_ != nullptr && this->scenesStr_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->title_ != nullptr && this->typesStr_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListVariableDefineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // allowBind Field Functions 
    bool hasAllowBind() const { return this->allowBind_ != nullptr;};
    void deleteAllowBind() { this->allowBind_ = nullptr;};
    inline string allowBind() const { DARABONBA_PTR_GET_DEFAULT(allowBind_, "") };
    inline ListVariableDefineRequest& setAllowBind(string allowBind) { DARABONBA_PTR_SET_VALUE(allowBind_, allowBind) };


    // chargingMode Field Functions 
    bool hasChargingMode() const { return this->chargingMode_ != nullptr;};
    void deleteChargingMode() { this->chargingMode_ = nullptr;};
    inline string chargingMode() const { DARABONBA_PTR_GET_DEFAULT(chargingMode_, "") };
    inline ListVariableDefineRequest& setChargingMode(string chargingMode) { DARABONBA_PTR_SET_VALUE(chargingMode_, chargingMode) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListVariableDefineRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVariableDefineRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline string paging() const { DARABONBA_PTR_GET_DEFAULT(paging_, "") };
    inline ListVariableDefineRequest& setPaging(string paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };


    // queryContent Field Functions 
    bool hasQueryContent() const { return this->queryContent_ != nullptr;};
    void deleteQueryContent() { this->queryContent_ = nullptr;};
    inline string queryContent() const { DARABONBA_PTR_GET_DEFAULT(queryContent_, "") };
    inline ListVariableDefineRequest& setQueryContent(string queryContent) { DARABONBA_PTR_SET_VALUE(queryContent_, queryContent) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline ListVariableDefineRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline ListVariableDefineRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // scenesStr Field Functions 
    bool hasScenesStr() const { return this->scenesStr_ != nullptr;};
    void deleteScenesStr() { this->scenesStr_ = nullptr;};
    inline string scenesStr() const { DARABONBA_PTR_GET_DEFAULT(scenesStr_, "") };
    inline ListVariableDefineRequest& setScenesStr(string scenesStr) { DARABONBA_PTR_SET_VALUE(scenesStr_, scenesStr) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListVariableDefineRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVariableDefineRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListVariableDefineRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // typesStr Field Functions 
    bool hasTypesStr() const { return this->typesStr_ != nullptr;};
    void deleteTypesStr() { this->typesStr_ = nullptr;};
    inline string typesStr() const { DARABONBA_PTR_GET_DEFAULT(typesStr_, "") };
    inline ListVariableDefineRequest& setTypesStr(string typesStr) { DARABONBA_PTR_SET_VALUE(typesStr_, typesStr) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Whether binding is allowed, default is ENABLE
    std::shared_ptr<string> allowBind_ = nullptr;
    // Charging mode
    std::shared_ptr<string> chargingMode_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Page size, default value is 10
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Paging identifier
    std::shared_ptr<string> paging_ = nullptr;
    // Query content
    std::shared_ptr<string> queryContent_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Authorization type
    std::shared_ptr<string> roleType_ = nullptr;
    // Scenario
    std::shared_ptr<string> scenesStr_ = nullptr;
    // Source
    std::shared_ptr<string> source_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Type
    std::shared_ptr<string> typesStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
