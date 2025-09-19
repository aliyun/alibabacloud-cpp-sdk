// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSOFTWAREDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertySoftwareDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertySoftwareDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(InstallTimeEnd, installTimeEnd_);
      DARABONBA_PTR_TO_JSON(InstallTimeStart, installTimeStart_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(InstallTimeEnd, installTimeEnd_);
      DARABONBA_PTR_FROM_JSON(InstallTimeStart, installTimeStart_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertySoftwareDetailRequest() = default ;
    DescribePropertySoftwareDetailRequest(const DescribePropertySoftwareDetailRequest &) = default ;
    DescribePropertySoftwareDetailRequest(DescribePropertySoftwareDetailRequest &&) = default ;
    DescribePropertySoftwareDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertySoftwareDetailRequest() = default ;
    DescribePropertySoftwareDetailRequest& operator=(const DescribePropertySoftwareDetailRequest &) = default ;
    DescribePropertySoftwareDetailRequest& operator=(DescribePropertySoftwareDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->extend_ != nullptr && this->installTimeEnd_ != nullptr && this->installTimeStart_ != nullptr && this->name_ != nullptr && this->pageSize_ != nullptr
        && this->path_ != nullptr && this->remark_ != nullptr && this->softwareVersion_ != nullptr && this->uuid_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertySoftwareDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertySoftwareDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // installTimeEnd Field Functions 
    bool hasInstallTimeEnd() const { return this->installTimeEnd_ != nullptr;};
    void deleteInstallTimeEnd() { this->installTimeEnd_ = nullptr;};
    inline int64_t installTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(installTimeEnd_, 0L) };
    inline DescribePropertySoftwareDetailRequest& setInstallTimeEnd(int64_t installTimeEnd) { DARABONBA_PTR_SET_VALUE(installTimeEnd_, installTimeEnd) };


    // installTimeStart Field Functions 
    bool hasInstallTimeStart() const { return this->installTimeStart_ != nullptr;};
    void deleteInstallTimeStart() { this->installTimeStart_ = nullptr;};
    inline int64_t installTimeStart() const { DARABONBA_PTR_GET_DEFAULT(installTimeStart_, 0L) };
    inline DescribePropertySoftwareDetailRequest& setInstallTimeStart(int64_t installTimeStart) { DARABONBA_PTR_SET_VALUE(installTimeStart_, installTimeStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertySoftwareDetailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertySoftwareDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribePropertySoftwareDetailRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertySoftwareDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // softwareVersion Field Functions 
    bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
    void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
    inline string softwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
    inline DescribePropertySoftwareDetailRequest& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertySoftwareDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether fuzzy search by software name is supported. If you want to use fuzzy search, set the parameter to 1. If you set the parameter to a different value or leave the parameter empty, fuzzy search is not supported.
    std::shared_ptr<string> extend_ = nullptr;
    // The timestamp generated when the software update ends. Unit: milliseconds.
    std::shared_ptr<int64_t> installTimeEnd_ = nullptr;
    // The timestamp generated when the software update starts. Unit: milliseconds.
    std::shared_ptr<int64_t> installTimeStart_ = nullptr;
    // The name of the software.
    std::shared_ptr<string> name_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The installation path of the software.
    std::shared_ptr<string> path_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The version of the software.
    std::shared_ptr<string> softwareVersion_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
