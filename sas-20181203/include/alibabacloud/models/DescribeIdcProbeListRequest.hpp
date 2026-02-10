// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIDCPROBELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeIdcProbeListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIdcProbeListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IdcName, idcName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIdcProbeListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IdcName, idcName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIdcProbeListRequest() = default ;
    DescribeIdcProbeListRequest(const DescribeIdcProbeListRequest &) = default ;
    DescribeIdcProbeListRequest(DescribeIdcProbeListRequest &&) = default ;
    DescribeIdcProbeListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIdcProbeListRequest() = default ;
    DescribeIdcProbeListRequest& operator=(const DescribeIdcProbeListRequest &) = default ;
    DescribeIdcProbeListRequest& operator=(DescribeIdcProbeListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->idcName_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeIdcProbeListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // idcName Field Functions 
    bool hasIdcName() const { return this->idcName_ != nullptr;};
    void deleteIdcName() { this->idcName_ = nullptr;};
    inline string getIdcName() const { DARABONBA_PTR_GET_DEFAULT(idcName_, "") };
    inline DescribeIdcProbeListRequest& setIdcName(string idcName) { DARABONBA_PTR_SET_VALUE(idcName_, idcName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIdcProbeListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIdcProbeListRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Sets the page number from which to start displaying the query results. The default value is 1, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the IDC.
    shared_ptr<string> idcName_ {};
    // Specifies the maximum number of data entries to display per page in a paginated query. The default number of data entries per page is 20, and if the PageSize parameter is empty, it will default to returning 20 data entries.
    // > It is recommended that the PageSize value is not empty.
    shared_ptr<int32_t> pageSize_ {};
    // Probe status. Values:
    // 
    // - **0**: Enabled
    // - **1**: Disabled
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
