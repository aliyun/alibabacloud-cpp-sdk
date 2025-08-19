// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSFORREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsForRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsForRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsForRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
    };
    DescribeEventsForRegionRequest() = default ;
    DescribeEventsForRegionRequest(const DescribeEventsForRegionRequest &) = default ;
    DescribeEventsForRegionRequest(DescribeEventsForRegionRequest &&) = default ;
    DescribeEventsForRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsForRegionRequest() = default ;
    DescribeEventsForRegionRequest& operator=(const DescribeEventsForRegionRequest &) = default ;
    DescribeEventsForRegionRequest& operator=(DescribeEventsForRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventsForRegionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEventsForRegionRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEventsForRegionRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The number of pages.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of records on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
