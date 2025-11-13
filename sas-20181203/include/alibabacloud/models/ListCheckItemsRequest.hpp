// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMSREQUEST_HPP_
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
  class ListCheckItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListCheckItemsRequest() = default ;
    ListCheckItemsRequest(const ListCheckItemsRequest &) = default ;
    ListCheckItemsRequest(ListCheckItemsRequest &&) = default ;
    ListCheckItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemsRequest() = default ;
    ListCheckItemsRequest& operator=(const ListCheckItemsRequest &) = default ;
    ListCheckItemsRequest& operator=(ListCheckItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkShowName_ == nullptr && return this->checkTypes_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr
        && return this->statuses_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckItemsRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string checkShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline ListCheckItemsRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // checkTypes Field Functions 
    bool hasCheckTypes() const { return this->checkTypes_ != nullptr;};
    void deleteCheckTypes() { this->checkTypes_ = nullptr;};
    inline const vector<string> & checkTypes() const { DARABONBA_PTR_GET_CONST(checkTypes_, vector<string>) };
    inline vector<string> checkTypes() { DARABONBA_PTR_GET(checkTypes_, vector<string>) };
    inline ListCheckItemsRequest& setCheckTypes(const vector<string> & checkTypes) { DARABONBA_PTR_SET_VALUE(checkTypes_, checkTypes) };
    inline ListCheckItemsRequest& setCheckTypes(vector<string> && checkTypes) { DARABONBA_PTR_SET_RVALUE(checkTypes_, checkTypes) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckItemsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListCheckItemsRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListCheckItemsRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The name of the custom check item.
    std::shared_ptr<string> checkShowName_ = nullptr;
    // The source type of the situational awareness check item.
    std::shared_ptr<vector<string>> checkTypes_ = nullptr;
    // Specifies the page number to display when performing a paginated query. The starting value is **1**, and the default value is **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language type for requests and responses. The default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies the maximum number of data entries to display per page when performing a paginated query. The default number of data entries displayed per page is 20, and if the PageSize parameter is empty, it will default to returning 20 data entries.
    // > It is recommended that the PageSize value is not left empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the check item.
    std::shared_ptr<vector<string>> statuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
