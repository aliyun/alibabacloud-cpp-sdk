// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPROTECTPLUGINSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListFileProtectPluginStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileProtectPluginStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileProtectPluginStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
    };
    ListFileProtectPluginStatusRequest() = default ;
    ListFileProtectPluginStatusRequest(const ListFileProtectPluginStatusRequest &) = default ;
    ListFileProtectPluginStatusRequest(ListFileProtectPluginStatusRequest &&) = default ;
    ListFileProtectPluginStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileProtectPluginStatusRequest() = default ;
    ListFileProtectPluginStatusRequest& operator=(const ListFileProtectPluginStatusRequest &) = default ;
    ListFileProtectPluginStatusRequest& operator=(ListFileProtectPluginStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->switchId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListFileProtectPluginStatusRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListFileProtectPluginStatusRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline ListFileProtectPluginStatusRequest& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


  protected:
    // The page number.
    shared_ptr<int64_t> currentPage_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the core file monitoring rule.
    shared_ptr<string> switchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
