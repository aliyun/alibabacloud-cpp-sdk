// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceSharedAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSharedAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    ListServiceSharedAccountsRequest() = default ;
    ListServiceSharedAccountsRequest(const ListServiceSharedAccountsRequest &) = default ;
    ListServiceSharedAccountsRequest(ListServiceSharedAccountsRequest &&) = default ;
    ListServiceSharedAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSharedAccountsRequest() = default ;
    ListServiceSharedAccountsRequest& operator=(const ListServiceSharedAccountsRequest &) = default ;
    ListServiceSharedAccountsRequest& operator=(ListServiceSharedAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The parameter name of the filter. You can specify one or more parameter names to query services. Valid values:
      // 
      // *   Name: the name of the service.
      shared_ptr<string> name_ {};
      // The parameter value N of the filter. Valid values of N: 1 to 10.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->permission_ == nullptr && this->regionId_ == nullptr && this->serviceId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceSharedAccountsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceSharedAccountsRequest::Filter>) };
    inline vector<ListServiceSharedAccountsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListServiceSharedAccountsRequest::Filter>) };
    inline ListServiceSharedAccountsRequest& setFilter(const vector<ListServiceSharedAccountsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceSharedAccountsRequest& setFilter(vector<ListServiceSharedAccountsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceSharedAccountsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceSharedAccountsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline ListServiceSharedAccountsRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceSharedAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServiceSharedAccountsRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // The filters.
    shared_ptr<vector<ListServiceSharedAccountsRequest::Filter>> filter_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The permissions on the service. Valid values:
    // 
    // *   Deployable: Permissions to deploy the service.
    // *   Accessible: Permissions to access the service.
    shared_ptr<string> permission_ {};
    // The region ID where the service instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
