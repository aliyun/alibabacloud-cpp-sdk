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
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertySoftwareDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(InstallTimeEnd, installTimeEnd_);
      DARABONBA_PTR_FROM_JSON(InstallTimeStart, installTimeStart_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SoftwareVersion, softwareVersion_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
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
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->extend_ == nullptr && this->installTimeEnd_ == nullptr && this->installTimeStart_ == nullptr && this->name_ == nullptr && this->nextToken_ == nullptr
        && this->pageSize_ == nullptr && this->path_ == nullptr && this->remark_ == nullptr && this->softwareVersion_ == nullptr && this->useNextToken_ == nullptr
        && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertySoftwareDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertySoftwareDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // installTimeEnd Field Functions 
    bool hasInstallTimeEnd() const { return this->installTimeEnd_ != nullptr;};
    void deleteInstallTimeEnd() { this->installTimeEnd_ = nullptr;};
    inline int64_t getInstallTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(installTimeEnd_, 0L) };
    inline DescribePropertySoftwareDetailRequest& setInstallTimeEnd(int64_t installTimeEnd) { DARABONBA_PTR_SET_VALUE(installTimeEnd_, installTimeEnd) };


    // installTimeStart Field Functions 
    bool hasInstallTimeStart() const { return this->installTimeStart_ != nullptr;};
    void deleteInstallTimeStart() { this->installTimeStart_ = nullptr;};
    inline int64_t getInstallTimeStart() const { DARABONBA_PTR_GET_DEFAULT(installTimeStart_, 0L) };
    inline DescribePropertySoftwareDetailRequest& setInstallTimeStart(int64_t installTimeStart) { DARABONBA_PTR_SET_VALUE(installTimeStart_, installTimeStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertySoftwareDetailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePropertySoftwareDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertySoftwareDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribePropertySoftwareDetailRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertySoftwareDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // softwareVersion Field Functions 
    bool hasSoftwareVersion() const { return this->softwareVersion_ != nullptr;};
    void deleteSoftwareVersion() { this->softwareVersion_ = nullptr;};
    inline string getSoftwareVersion() const { DARABONBA_PTR_GET_DEFAULT(softwareVersion_, "") };
    inline DescribePropertySoftwareDetailRequest& setSoftwareVersion(string softwareVersion) { DARABONBA_PTR_SET_VALUE(softwareVersion_, softwareVersion) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool getUseNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribePropertySoftwareDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertySoftwareDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Set which page of the returned results to start displaying the query results. The default value is **1**, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // Whether the software name supports fuzzy search. To enable fuzzy search, set the value of this parameter to 1; other values or an empty value indicate that fuzzy search is not supported.
    shared_ptr<string> extend_ {};
    // The timestamp when the software update ended. Unit: milliseconds.
    shared_ptr<int64_t> installTimeEnd_ {};
    // The timestamp when the software update started. Unit: milliseconds.
    shared_ptr<int64_t> installTimeStart_ {};
    // The name of the software to be queried.
    shared_ptr<string> name_ {};
    // Used to mark the starting position for reading. Leave it blank to start from the beginning.
    // 
    // > For the first call, you do not need to fill this in; the response will include the NextToken for the second call, and each subsequent call\\"s response will contain the NextToken for the next call.
    shared_ptr<string> nextToken_ {};
    // Set the number of software asset fingerprint information items displayed per page during pagination. The default value is **10**, indicating that 10 items of software asset fingerprint information are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // The installation path of the software.
    shared_ptr<string> path_ {};
    // The name or IP address of the server to be queried.
    shared_ptr<string> remark_ {};
    // The version information of the software.
    shared_ptr<string> softwareVersion_ {};
    // Whether to use the NextToken method to pull asset list data. If this parameter is used, TotalCount will no longer be returned. Values:
    // 
    // - **true**: Use the NextToken method.
    // - **false**: Do not use the NextToken method.
    shared_ptr<bool> useNextToken_ {};
    // The UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
