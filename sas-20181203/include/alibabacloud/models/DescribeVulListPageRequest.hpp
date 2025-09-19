// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CveId, cveId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_TO_JSON(VulNameLike, vulNameLike_);
      DARABONBA_PTR_TO_JSON(VulType, vulType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CveId, cveId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RaspDefend, raspDefend_);
      DARABONBA_PTR_FROM_JSON(VulNameLike, vulNameLike_);
      DARABONBA_PTR_FROM_JSON(VulType, vulType_);
    };
    DescribeVulListPageRequest() = default ;
    DescribeVulListPageRequest(const DescribeVulListPageRequest &) = default ;
    DescribeVulListPageRequest(DescribeVulListPageRequest &&) = default ;
    DescribeVulListPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListPageRequest() = default ;
    DescribeVulListPageRequest& operator=(const DescribeVulListPageRequest &) = default ;
    DescribeVulListPageRequest& operator=(DescribeVulListPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->cveId_ != nullptr && this->pageSize_ != nullptr && this->raspDefend_ != nullptr && this->vulNameLike_ != nullptr && this->vulType_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulListPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // cveId Field Functions 
    bool hasCveId() const { return this->cveId_ != nullptr;};
    void deleteCveId() { this->cveId_ = nullptr;};
    inline string cveId() const { DARABONBA_PTR_GET_DEFAULT(cveId_, "") };
    inline DescribeVulListPageRequest& setCveId(string cveId) { DARABONBA_PTR_SET_VALUE(cveId_, cveId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulListPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // raspDefend Field Functions 
    bool hasRaspDefend() const { return this->raspDefend_ != nullptr;};
    void deleteRaspDefend() { this->raspDefend_ = nullptr;};
    inline int32_t raspDefend() const { DARABONBA_PTR_GET_DEFAULT(raspDefend_, 0) };
    inline DescribeVulListPageRequest& setRaspDefend(int32_t raspDefend) { DARABONBA_PTR_SET_VALUE(raspDefend_, raspDefend) };


    // vulNameLike Field Functions 
    bool hasVulNameLike() const { return this->vulNameLike_ != nullptr;};
    void deleteVulNameLike() { this->vulNameLike_ = nullptr;};
    inline string vulNameLike() const { DARABONBA_PTR_GET_DEFAULT(vulNameLike_, "") };
    inline DescribeVulListPageRequest& setVulNameLike(string vulNameLike) { DARABONBA_PTR_SET_VALUE(vulNameLike_, vulNameLike) };


    // vulType Field Functions 
    bool hasVulType() const { return this->vulType_ != nullptr;};
    void deleteVulType() { this->vulType_ = nullptr;};
    inline string vulType() const { DARABONBA_PTR_GET_DEFAULT(vulType_, "") };
    inline DescribeVulListPageRequest& setVulType(string vulType) { DARABONBA_PTR_SET_VALUE(vulType_, vulType) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The Common Vulnerabilities and Exposures (CVE) ID of the vulnerability.
    std::shared_ptr<string> cveId_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Indicates whether the application protection feature is supported. Valid values:
    // 
    // - **0**: no.
    // 
    // - **1**: yes.
    std::shared_ptr<int32_t> raspDefend_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> vulNameLike_ = nullptr;
    // The type of the vulnerabilities. Valid values:
    // 
    // *   **cve**: Linux software vulnerability.
    // *   **sys**: Windows system vulnerability.
    // *   **app**: Application vulnerability that is detected by using web scanner.
    std::shared_ptr<string> vulType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
