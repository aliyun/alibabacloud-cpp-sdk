// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPINSTALLATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAppInstallationsResponseBodyInstallationInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppInstallationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppInstallationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallationInfos, installationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppInstallationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallationInfos, installationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAppInstallationsResponseBody() = default ;
    ListCloudAppInstallationsResponseBody(const ListCloudAppInstallationsResponseBody &) = default ;
    ListCloudAppInstallationsResponseBody(ListCloudAppInstallationsResponseBody &&) = default ;
    ListCloudAppInstallationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppInstallationsResponseBody() = default ;
    ListCloudAppInstallationsResponseBody& operator=(const ListCloudAppInstallationsResponseBody &) = default ;
    ListCloudAppInstallationsResponseBody& operator=(ListCloudAppInstallationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->installationInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // installationInfos Field Functions 
    bool hasInstallationInfos() const { return this->installationInfos_ != nullptr;};
    void deleteInstallationInfos() { this->installationInfos_ = nullptr;};
    inline const vector<ListCloudAppInstallationsResponseBodyInstallationInfos> & installationInfos() const { DARABONBA_PTR_GET_CONST(installationInfos_, vector<ListCloudAppInstallationsResponseBodyInstallationInfos>) };
    inline vector<ListCloudAppInstallationsResponseBodyInstallationInfos> installationInfos() { DARABONBA_PTR_GET(installationInfos_, vector<ListCloudAppInstallationsResponseBodyInstallationInfos>) };
    inline ListCloudAppInstallationsResponseBody& setInstallationInfos(const vector<ListCloudAppInstallationsResponseBodyInstallationInfos> & installationInfos) { DARABONBA_PTR_SET_VALUE(installationInfos_, installationInfos) };
    inline ListCloudAppInstallationsResponseBody& setInstallationInfos(vector<ListCloudAppInstallationsResponseBodyInstallationInfos> && installationInfos) { DARABONBA_PTR_SET_RVALUE(installationInfos_, installationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAppInstallationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAppInstallationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCloudAppInstallationsResponseBodyInstallationInfos>> installationInfos_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
