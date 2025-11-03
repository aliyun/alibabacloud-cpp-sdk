// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListInstalledAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListInstalledAppsRequest() = default ;
    ListInstalledAppsRequest(const ListInstalledAppsRequest &) = default ;
    ListInstalledAppsRequest(ListInstalledAppsRequest &&) = default ;
    ListInstalledAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledAppsRequest() = default ;
    ListInstalledAppsRequest& operator=(const ListInstalledAppsRequest &) = default ;
    ListInstalledAppsRequest& operator=(ListInstalledAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ListInstalledAppsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstalledAppsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstalledAppsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> desktopId_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
