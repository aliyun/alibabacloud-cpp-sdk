// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProbeStatus, probeStatus_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProbeStatus, probeStatus_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
    };
    ListHoneypotProbeRequest() = default ;
    ListHoneypotProbeRequest(const ListHoneypotProbeRequest &) = default ;
    ListHoneypotProbeRequest(ListHoneypotProbeRequest &&) = default ;
    ListHoneypotProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotProbeRequest() = default ;
    ListHoneypotProbeRequest& operator=(const ListHoneypotProbeRequest &) = default ;
    ListHoneypotProbeRequest& operator=(ListHoneypotProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->displayName_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->probeStatus_ == nullptr && this->probeType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListHoneypotProbeRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListHoneypotProbeRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListHoneypotProbeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHoneypotProbeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // probeStatus Field Functions 
    bool hasProbeStatus() const { return this->probeStatus_ != nullptr;};
    void deleteProbeStatus() { this->probeStatus_ = nullptr;};
    inline string getProbeStatus() const { DARABONBA_PTR_GET_DEFAULT(probeStatus_, "") };
    inline ListHoneypotProbeRequest& setProbeStatus(string probeStatus) { DARABONBA_PTR_SET_VALUE(probeStatus_, probeStatus) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string getProbeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline ListHoneypotProbeRequest& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


  protected:
    // The number of the page to return. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the probe.
    shared_ptr<string> displayName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // > We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The status of the probe. Valid values:
    // 
    // *   **installed**: installed
    // *   **install_failed**: installation failed
    // *   **online**: online
    // *   **offline**: offline
    // *   **unnormal**: abnormal
    // *   **unprobe**: unauthorized
    // *   **uninstalling**: being uninstalled
    // *   **uninstalled**: uninstalled
    // *   **uninstall_failed**: uninstallation failed
    // *   **not_exist**: not installed
    shared_ptr<string> probeStatus_ {};
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: VPC probe
    shared_ptr<string> probeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
