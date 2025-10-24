// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPROJECTSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageProjectsInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageProjectsInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectPrefix, projectPrefix_);
      DARABONBA_PTR_TO_JSON(recentDays, recentDays_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageProjectsInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ascOrder, ascOrder_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(orderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectPrefix, projectPrefix_);
      DARABONBA_PTR_FROM_JSON(recentDays, recentDays_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListStorageProjectsInfoRequest() = default ;
    ListStorageProjectsInfoRequest(const ListStorageProjectsInfoRequest &) = default ;
    ListStorageProjectsInfoRequest(ListStorageProjectsInfoRequest &&) = default ;
    ListStorageProjectsInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageProjectsInfoRequest() = default ;
    ListStorageProjectsInfoRequest& operator=(const ListStorageProjectsInfoRequest &) = default ;
    ListStorageProjectsInfoRequest& operator=(ListStorageProjectsInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ascOrder_ == nullptr
        && return this->date_ == nullptr && return this->orderColumn_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectPrefix_ == nullptr
        && return this->recentDays_ == nullptr && return this->region_ == nullptr && return this->tenantId_ == nullptr; };
    // ascOrder Field Functions 
    bool hasAscOrder() const { return this->ascOrder_ != nullptr;};
    void deleteAscOrder() { this->ascOrder_ = nullptr;};
    inline bool ascOrder() const { DARABONBA_PTR_GET_DEFAULT(ascOrder_, false) };
    inline ListStorageProjectsInfoRequest& setAscOrder(bool ascOrder) { DARABONBA_PTR_SET_VALUE(ascOrder_, ascOrder) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageProjectsInfoRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string orderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline ListStorageProjectsInfoRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStorageProjectsInfoRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStorageProjectsInfoRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectPrefix Field Functions 
    bool hasProjectPrefix() const { return this->projectPrefix_ != nullptr;};
    void deleteProjectPrefix() { this->projectPrefix_ = nullptr;};
    inline string projectPrefix() const { DARABONBA_PTR_GET_DEFAULT(projectPrefix_, "") };
    inline ListStorageProjectsInfoRequest& setProjectPrefix(string projectPrefix) { DARABONBA_PTR_SET_VALUE(projectPrefix_, projectPrefix) };


    // recentDays Field Functions 
    bool hasRecentDays() const { return this->recentDays_ != nullptr;};
    void deleteRecentDays() { this->recentDays_ = nullptr;};
    inline int32_t recentDays() const { DARABONBA_PTR_GET_DEFAULT(recentDays_, 0) };
    inline ListStorageProjectsInfoRequest& setRecentDays(int32_t recentDays) { DARABONBA_PTR_SET_VALUE(recentDays_, recentDays) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListStorageProjectsInfoRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListStorageProjectsInfoRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<bool> ascOrder_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> orderColumn_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> projectPrefix_ = nullptr;
    std::shared_ptr<int32_t> recentDays_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
