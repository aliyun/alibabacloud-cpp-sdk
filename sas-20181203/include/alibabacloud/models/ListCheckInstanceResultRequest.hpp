// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTREQUEST_HPP_
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
  class ListCheckInstanceResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceIdKey, instanceIdKey_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceNameKey, instanceNameKey_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIdKey, regionIdKey_);
      DARABONBA_PTR_TO_JSON(SortTypes, sortTypes_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceIdKey, instanceIdKey_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceNameKey, instanceNameKey_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIdKey, regionIdKey_);
      DARABONBA_PTR_FROM_JSON(SortTypes, sortTypes_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
    };
    ListCheckInstanceResultRequest() = default ;
    ListCheckInstanceResultRequest(const ListCheckInstanceResultRequest &) = default ;
    ListCheckInstanceResultRequest(ListCheckInstanceResultRequest &&) = default ;
    ListCheckInstanceResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultRequest() = default ;
    ListCheckInstanceResultRequest& operator=(const ListCheckInstanceResultRequest &) = default ;
    ListCheckInstanceResultRequest& operator=(ListCheckInstanceResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkId_ != nullptr
        && this->currentPage_ != nullptr && this->instanceIdKey_ != nullptr && this->instanceIds_ != nullptr && this->instanceNameKey_ != nullptr && this->lang_ != nullptr
        && this->pageSize_ != nullptr && this->regionIdKey_ != nullptr && this->sortTypes_ != nullptr && this->statuses_ != nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline ListCheckInstanceResultRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckInstanceResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceIdKey Field Functions 
    bool hasInstanceIdKey() const { return this->instanceIdKey_ != nullptr;};
    void deleteInstanceIdKey() { this->instanceIdKey_ = nullptr;};
    inline string instanceIdKey() const { DARABONBA_PTR_GET_DEFAULT(instanceIdKey_, "") };
    inline ListCheckInstanceResultRequest& setInstanceIdKey(string instanceIdKey) { DARABONBA_PTR_SET_VALUE(instanceIdKey_, instanceIdKey) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListCheckInstanceResultRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListCheckInstanceResultRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceNameKey Field Functions 
    bool hasInstanceNameKey() const { return this->instanceNameKey_ != nullptr;};
    void deleteInstanceNameKey() { this->instanceNameKey_ = nullptr;};
    inline string instanceNameKey() const { DARABONBA_PTR_GET_DEFAULT(instanceNameKey_, "") };
    inline ListCheckInstanceResultRequest& setInstanceNameKey(string instanceNameKey) { DARABONBA_PTR_SET_VALUE(instanceNameKey_, instanceNameKey) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckInstanceResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckInstanceResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdKey Field Functions 
    bool hasRegionIdKey() const { return this->regionIdKey_ != nullptr;};
    void deleteRegionIdKey() { this->regionIdKey_ = nullptr;};
    inline string regionIdKey() const { DARABONBA_PTR_GET_DEFAULT(regionIdKey_, "") };
    inline ListCheckInstanceResultRequest& setRegionIdKey(string regionIdKey) { DARABONBA_PTR_SET_VALUE(regionIdKey_, regionIdKey) };


    // sortTypes Field Functions 
    bool hasSortTypes() const { return this->sortTypes_ != nullptr;};
    void deleteSortTypes() { this->sortTypes_ = nullptr;};
    inline const vector<string> & sortTypes() const { DARABONBA_PTR_GET_CONST(sortTypes_, vector<string>) };
    inline vector<string> sortTypes() { DARABONBA_PTR_GET(sortTypes_, vector<string>) };
    inline ListCheckInstanceResultRequest& setSortTypes(const vector<string> & sortTypes) { DARABONBA_PTR_SET_VALUE(sortTypes_, sortTypes) };
    inline ListCheckInstanceResultRequest& setSortTypes(vector<string> && sortTypes) { DARABONBA_PTR_SET_RVALUE(sortTypes_, sortTypes) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListCheckInstanceResultRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListCheckInstanceResultRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


  protected:
    // The ID of the check item.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceIdKey_ = nullptr;
    // The instance IDs of cloud services.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceNameKey_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionIdKey_ = nullptr;
    // The types of the conditions based on which the check items are sorted.
    std::shared_ptr<vector<string>> sortTypes_ = nullptr;
    // The statuses of check items.
    std::shared_ptr<vector<string>> statuses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
