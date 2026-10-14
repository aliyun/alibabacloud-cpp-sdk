// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIFGJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIFGJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAifgJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAifgJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAifgJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    ListAifgJobsRequest() = default ;
    ListAifgJobsRequest(const ListAifgJobsRequest &) = default ;
    ListAifgJobsRequest(ListAifgJobsRequest &&) = default ;
    ListAifgJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAifgJobsRequest() = default ;
    ListAifgJobsRequest& operator=(const ListAifgJobsRequest &) = default ;
    ListAifgJobsRequest& operator=(ListAifgJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListAifgJobsRequest& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAifgJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAifgJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAifgJobsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListAifgJobsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListAifgJobsRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The current page number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> current_ {};
    // The maximum number of records to retrieve in a single request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    // 
    // > A non-empty value indicates that more data is available.
    shared_ptr<string> nextToken_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> region_ {};
    // The service name of the diagnostic service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
