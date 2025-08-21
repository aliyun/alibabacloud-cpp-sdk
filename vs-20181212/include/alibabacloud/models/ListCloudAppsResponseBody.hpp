// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudAppsResponseBodyCloudApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListCloudAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudApps, cloudApps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudApps, cloudApps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCloudAppsResponseBody() = default ;
    ListCloudAppsResponseBody(const ListCloudAppsResponseBody &) = default ;
    ListCloudAppsResponseBody(ListCloudAppsResponseBody &&) = default ;
    ListCloudAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudAppsResponseBody() = default ;
    ListCloudAppsResponseBody& operator=(const ListCloudAppsResponseBody &) = default ;
    ListCloudAppsResponseBody& operator=(ListCloudAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudApps_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // cloudApps Field Functions 
    bool hasCloudApps() const { return this->cloudApps_ != nullptr;};
    void deleteCloudApps() { this->cloudApps_ = nullptr;};
    inline const vector<ListCloudAppsResponseBodyCloudApps> & cloudApps() const { DARABONBA_PTR_GET_CONST(cloudApps_, vector<ListCloudAppsResponseBodyCloudApps>) };
    inline vector<ListCloudAppsResponseBodyCloudApps> cloudApps() { DARABONBA_PTR_GET(cloudApps_, vector<ListCloudAppsResponseBodyCloudApps>) };
    inline ListCloudAppsResponseBody& setCloudApps(const vector<ListCloudAppsResponseBodyCloudApps> & cloudApps) { DARABONBA_PTR_SET_VALUE(cloudApps_, cloudApps) };
    inline ListCloudAppsResponseBody& setCloudApps(vector<ListCloudAppsResponseBodyCloudApps> && cloudApps) { DARABONBA_PTR_SET_RVALUE(cloudApps_, cloudApps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCloudAppsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCloudAppsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCloudAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCloudAppsResponseBodyCloudApps>> cloudApps_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
