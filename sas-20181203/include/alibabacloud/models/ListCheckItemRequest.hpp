// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMREQUEST_HPP_
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
  class ListCheckItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
    };
    ListCheckItemRequest() = default ;
    ListCheckItemRequest(const ListCheckItemRequest &) = default ;
    ListCheckItemRequest(ListCheckItemRequest &&) = default ;
    ListCheckItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemRequest() = default ;
    ListCheckItemRequest& operator=(const ListCheckItemRequest &) = default ;
    ListCheckItemRequest& operator=(ListCheckItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->taskSources_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & getTaskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> getTaskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListCheckItemRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListCheckItemRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid value:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // List of task sources.
    shared_ptr<vector<string>> taskSources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
