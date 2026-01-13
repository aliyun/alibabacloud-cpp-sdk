// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListPoolsRequest() = default ;
    ListPoolsRequest(const ListPoolsRequest &) = default ;
    ListPoolsRequest(ListPoolsRequest &&) = default ;
    ListPoolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsRequest() = default ;
    ListPoolsRequest& operator=(const ListPoolsRequest &) = default ;
    ListPoolsRequest& operator=(ListPoolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(PoolName, poolName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(PoolName, poolName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
        DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->poolName_ == nullptr
        && this->status_ == nullptr && this->timeCreatedAfter_ == nullptr && this->timeCreatedBefore_ == nullptr; };
      // poolName Field Functions 
      bool hasPoolName() const { return this->poolName_ != nullptr;};
      void deletePoolName() { this->poolName_ = nullptr;};
      inline const vector<string> & getPoolName() const { DARABONBA_PTR_GET_CONST(poolName_, vector<string>) };
      inline vector<string> getPoolName() { DARABONBA_PTR_GET(poolName_, vector<string>) };
      inline Filter& setPoolName(const vector<string> & poolName) { DARABONBA_PTR_SET_VALUE(poolName_, poolName) };
      inline Filter& setPoolName(vector<string> && poolName) { DARABONBA_PTR_SET_RVALUE(poolName_, poolName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
      inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
      inline Filter& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Filter& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // timeCreatedAfter Field Functions 
      bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
      void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
      inline int32_t getTimeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
      inline Filter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


      // timeCreatedBefore Field Functions 
      bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
      void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
      inline int32_t getTimeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
      inline Filter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


    protected:
      // Queries the list of resource pool names.
      shared_ptr<vector<string>> poolName_ {};
      // Queries resource pool status list.
      shared_ptr<vector<string>> status_ {};
      // For node pools created after this time, the time in the region is converted into a UNIX timestamp.
      shared_ptr<int32_t> timeCreatedAfter_ {};
      // For node pools created before this time, the time in the region is converted into a UNIX timestamp.
      shared_ptr<int32_t> timeCreatedBefore_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListPoolsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListPoolsRequest::Filter) };
    inline ListPoolsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListPoolsRequest::Filter) };
    inline ListPoolsRequest& setFilter(const ListPoolsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListPoolsRequest& setFilter(ListPoolsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoolsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoolsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Queries the filter conditions of a resource pool.
    shared_ptr<ListPoolsRequest::Filter> filter_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
