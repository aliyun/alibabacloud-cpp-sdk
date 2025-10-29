// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGEFILESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackageFilesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackageFilesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentPackageFiles, deploymentPackageFiles_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackageFilesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentPackageFiles, deploymentPackageFiles_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDeploymentPackageFilesResponseBodyPagingInfo() = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfo(const ListDeploymentPackageFilesResponseBodyPagingInfo &) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfo(ListDeploymentPackageFilesResponseBodyPagingInfo &&) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackageFilesResponseBodyPagingInfo() = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfo& operator=(const ListDeploymentPackageFilesResponseBodyPagingInfo &) = default ;
    ListDeploymentPackageFilesResponseBodyPagingInfo& operator=(ListDeploymentPackageFilesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentPackageFiles_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // deploymentPackageFiles Field Functions 
    bool hasDeploymentPackageFiles() const { return this->deploymentPackageFiles_ != nullptr;};
    void deleteDeploymentPackageFiles() { this->deploymentPackageFiles_ = nullptr;};
    inline const vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles> & deploymentPackageFiles() const { DARABONBA_PTR_GET_CONST(deploymentPackageFiles_, vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles>) };
    inline vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles> deploymentPackageFiles() { DARABONBA_PTR_GET(deploymentPackageFiles_, vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles>) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfo& setDeploymentPackageFiles(const vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles> & deploymentPackageFiles) { DARABONBA_PTR_SET_VALUE(deploymentPackageFiles_, deploymentPackageFiles) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfo& setDeploymentPackageFiles(vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles> && deploymentPackageFiles) { DARABONBA_PTR_SET_RVALUE(deploymentPackageFiles_, deploymentPackageFiles) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDeploymentPackageFilesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of files pending deployment.
    std::shared_ptr<vector<Models::ListDeploymentPackageFilesResponseBodyPagingInfoDeploymentPackageFiles>> deploymentPackageFiles_ = nullptr;
    // The page number. Pages start from page 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
