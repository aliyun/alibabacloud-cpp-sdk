// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESREQUEST_HPP_
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
  class ListClientUserDefineRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUserDefineRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUserDefineRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListClientUserDefineRulesRequest() = default ;
    ListClientUserDefineRulesRequest(const ListClientUserDefineRulesRequest &) = default ;
    ListClientUserDefineRulesRequest(ListClientUserDefineRulesRequest &&) = default ;
    ListClientUserDefineRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUserDefineRulesRequest() = default ;
    ListClientUserDefineRulesRequest& operator=(const ListClientUserDefineRulesRequest &) = default ;
    ListClientUserDefineRulesRequest& operator=(ListClientUserDefineRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->type_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListClientUserDefineRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClientUserDefineRulesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListClientUserDefineRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const vector<int32_t> & getType() const { DARABONBA_PTR_GET_CONST(type_, vector<int32_t>) };
    inline vector<int32_t> getType() { DARABONBA_PTR_GET(type_, vector<int32_t>) };
    inline ListClientUserDefineRulesRequest& setType(const vector<int32_t> & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline ListClientUserDefineRulesRequest& setType(vector<int32_t> && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


  protected:
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the rule.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The types of rules.
    shared_ptr<vector<int32_t>> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
