// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryResourcePackageInstancesResponseBodyDataInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryResourcePackageInstancesResponseBodyData() = default ;
    QueryResourcePackageInstancesResponseBodyData(const QueryResourcePackageInstancesResponseBodyData &) = default ;
    QueryResourcePackageInstancesResponseBodyData(QueryResourcePackageInstancesResponseBodyData &&) = default ;
    QueryResourcePackageInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesResponseBodyData() = default ;
    QueryResourcePackageInstancesResponseBodyData& operator=(const QueryResourcePackageInstancesResponseBodyData &) = default ;
    QueryResourcePackageInstancesResponseBodyData& operator=(QueryResourcePackageInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->instances_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline QueryResourcePackageInstancesResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const Models::QueryResourcePackageInstancesResponseBodyDataInstances & instances() const { DARABONBA_PTR_GET_CONST(instances_, Models::QueryResourcePackageInstancesResponseBodyDataInstances) };
    inline Models::QueryResourcePackageInstancesResponseBodyDataInstances instances() { DARABONBA_PTR_GET(instances_, Models::QueryResourcePackageInstancesResponseBodyDataInstances) };
    inline QueryResourcePackageInstancesResponseBodyData& setInstances(const Models::QueryResourcePackageInstancesResponseBodyDataInstances & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline QueryResourcePackageInstancesResponseBodyData& setInstances(Models::QueryResourcePackageInstancesResponseBodyDataInstances && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline string pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
    inline QueryResourcePackageInstancesResponseBodyData& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline QueryResourcePackageInstancesResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline QueryResourcePackageInstancesResponseBodyData& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The details of the instances.
    std::shared_ptr<Models::QueryResourcePackageInstancesResponseBodyDataInstances> instances_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<string> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
