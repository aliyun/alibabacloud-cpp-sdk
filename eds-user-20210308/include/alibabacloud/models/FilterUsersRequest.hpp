// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FilterMap, filterMap_);
      DARABONBA_PTR_TO_JSON(IncludeDesktopCount, includeDesktopCount_);
      DARABONBA_PTR_TO_JSON(IncludeDesktopGroupCount, includeDesktopGroupCount_);
      DARABONBA_PTR_TO_JSON(IncludeEndUserIds, includeEndUserIds_);
      DARABONBA_PTR_TO_JSON(IncludeOrgInfo, includeOrgInfo_);
      DARABONBA_PTR_TO_JSON(IncludeSupportIdps, includeSupportIdps_);
      DARABONBA_PTR_TO_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderParam, orderParam_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(PropertyFilterParam, propertyFilterParam_);
      DARABONBA_PTR_TO_JSON(PropertyKeyValueFilterParam, propertyKeyValueFilterParam_);
      DARABONBA_PTR_TO_JSON(ShowExtras, showExtras_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FilterMap, filterMap_);
      DARABONBA_PTR_FROM_JSON(IncludeDesktopCount, includeDesktopCount_);
      DARABONBA_PTR_FROM_JSON(IncludeDesktopGroupCount, includeDesktopGroupCount_);
      DARABONBA_PTR_FROM_JSON(IncludeEndUserIds, includeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(IncludeOrgInfo, includeOrgInfo_);
      DARABONBA_PTR_FROM_JSON(IncludeSupportIdps, includeSupportIdps_);
      DARABONBA_PTR_FROM_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderParam, orderParam_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(PropertyFilterParam, propertyFilterParam_);
      DARABONBA_PTR_FROM_JSON(PropertyKeyValueFilterParam, propertyKeyValueFilterParam_);
      DARABONBA_PTR_FROM_JSON(ShowExtras, showExtras_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    FilterUsersRequest() = default ;
    FilterUsersRequest(const FilterUsersRequest &) = default ;
    FilterUsersRequest(FilterUsersRequest &&) = default ;
    FilterUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersRequest() = default ;
    FilterUsersRequest& operator=(const FilterUsersRequest &) = default ;
    FilterUsersRequest& operator=(FilterUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyKeyValueFilterParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyKeyValueFilterParam& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyKeyValueFilterParam& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
        DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
      };
      PropertyKeyValueFilterParam() = default ;
      PropertyKeyValueFilterParam(const PropertyKeyValueFilterParam &) = default ;
      PropertyKeyValueFilterParam(PropertyKeyValueFilterParam &&) = default ;
      PropertyKeyValueFilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyKeyValueFilterParam() = default ;
      PropertyKeyValueFilterParam& operator=(const PropertyKeyValueFilterParam &) = default ;
      PropertyKeyValueFilterParam& operator=(PropertyKeyValueFilterParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->propertyKey_ == nullptr
        && this->propertyValues_ == nullptr; };
      // propertyKey Field Functions 
      bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
      void deletePropertyKey() { this->propertyKey_ = nullptr;};
      inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
      inline PropertyKeyValueFilterParam& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


      // propertyValues Field Functions 
      bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
      void deletePropertyValues() { this->propertyValues_ = nullptr;};
      inline string getPropertyValues() const { DARABONBA_PTR_GET_DEFAULT(propertyValues_, "") };
      inline PropertyKeyValueFilterParam& setPropertyValues(string propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };


    protected:
      // The property key.
      shared_ptr<string> propertyKey_ {};
      // The property value.
      shared_ptr<string> propertyValues_ {};
    };

    class PropertyFilterParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyFilterParam& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_TO_JSON(PropertyValueIds, propertyValueIds_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyFilterParam& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
        DARABONBA_PTR_FROM_JSON(PropertyValueIds, propertyValueIds_);
      };
      PropertyFilterParam() = default ;
      PropertyFilterParam(const PropertyFilterParam &) = default ;
      PropertyFilterParam(PropertyFilterParam &&) = default ;
      PropertyFilterParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyFilterParam() = default ;
      PropertyFilterParam& operator=(const PropertyFilterParam &) = default ;
      PropertyFilterParam& operator=(PropertyFilterParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->propertyId_ == nullptr
        && this->propertyValueIds_ == nullptr; };
      // propertyId Field Functions 
      bool hasPropertyId() const { return this->propertyId_ != nullptr;};
      void deletePropertyId() { this->propertyId_ = nullptr;};
      inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
      inline PropertyFilterParam& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


      // propertyValueIds Field Functions 
      bool hasPropertyValueIds() const { return this->propertyValueIds_ != nullptr;};
      void deletePropertyValueIds() { this->propertyValueIds_ = nullptr;};
      inline string getPropertyValueIds() const { DARABONBA_PTR_GET_DEFAULT(propertyValueIds_, "") };
      inline PropertyFilterParam& setPropertyValueIds(string propertyValueIds) { DARABONBA_PTR_SET_VALUE(propertyValueIds_, propertyValueIds) };


    protected:
      // The property ID.
      shared_ptr<int64_t> propertyId_ {};
      // The property value ID.
      shared_ptr<string> propertyValueIds_ {};
    };

    class OrderParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OrderParam& obj) { 
        DARABONBA_PTR_TO_JSON(OrderField, orderField_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      };
      friend void from_json(const Darabonba::Json& j, OrderParam& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      };
      OrderParam() = default ;
      OrderParam(const OrderParam &) = default ;
      OrderParam(OrderParam &&) = default ;
      OrderParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OrderParam() = default ;
      OrderParam& operator=(const OrderParam &) = default ;
      OrderParam& operator=(OrderParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderField_ == nullptr
        && this->orderType_ == nullptr; };
      // orderField Field Functions 
      bool hasOrderField() const { return this->orderField_ != nullptr;};
      void deleteOrderField() { this->orderField_ = nullptr;};
      inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
      inline OrderParam& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline OrderParam& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    protected:
      // The field by which to sort the results.
      shared_ptr<string> orderField_ {};
      // The sort order.
      shared_ptr<string> orderType_ {};
    };

    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->excludeEndUserIds_ == nullptr && this->filter_ == nullptr && this->filterMap_ == nullptr && this->includeDesktopCount_ == nullptr && this->includeDesktopGroupCount_ == nullptr
        && this->includeEndUserIds_ == nullptr && this->includeOrgInfo_ == nullptr && this->includeSupportIdps_ == nullptr && this->isQueryAllSubOrgs_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->orderParam_ == nullptr && this->orgId_ == nullptr && this->ownerType_ == nullptr && this->propertyFilterParam_ == nullptr
        && this->propertyKeyValueFilterParam_ == nullptr && this->showExtras_ == nullptr && this->status_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline FilterUsersRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // excludeEndUserIds Field Functions 
    bool hasExcludeEndUserIds() const { return this->excludeEndUserIds_ != nullptr;};
    void deleteExcludeEndUserIds() { this->excludeEndUserIds_ = nullptr;};
    inline const vector<string> & getExcludeEndUserIds() const { DARABONBA_PTR_GET_CONST(excludeEndUserIds_, vector<string>) };
    inline vector<string> getExcludeEndUserIds() { DARABONBA_PTR_GET(excludeEndUserIds_, vector<string>) };
    inline FilterUsersRequest& setExcludeEndUserIds(const vector<string> & excludeEndUserIds) { DARABONBA_PTR_SET_VALUE(excludeEndUserIds_, excludeEndUserIds) };
    inline FilterUsersRequest& setExcludeEndUserIds(vector<string> && excludeEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludeEndUserIds_, excludeEndUserIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline FilterUsersRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // filterMap Field Functions 
    bool hasFilterMap() const { return this->filterMap_ != nullptr;};
    void deleteFilterMap() { this->filterMap_ = nullptr;};
    inline const map<string, string> & getFilterMap() const { DARABONBA_PTR_GET_CONST(filterMap_, map<string, string>) };
    inline map<string, string> getFilterMap() { DARABONBA_PTR_GET(filterMap_, map<string, string>) };
    inline FilterUsersRequest& setFilterMap(const map<string, string> & filterMap) { DARABONBA_PTR_SET_VALUE(filterMap_, filterMap) };
    inline FilterUsersRequest& setFilterMap(map<string, string> && filterMap) { DARABONBA_PTR_SET_RVALUE(filterMap_, filterMap) };


    // includeDesktopCount Field Functions 
    bool hasIncludeDesktopCount() const { return this->includeDesktopCount_ != nullptr;};
    void deleteIncludeDesktopCount() { this->includeDesktopCount_ = nullptr;};
    inline bool getIncludeDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(includeDesktopCount_, false) };
    inline FilterUsersRequest& setIncludeDesktopCount(bool includeDesktopCount) { DARABONBA_PTR_SET_VALUE(includeDesktopCount_, includeDesktopCount) };


    // includeDesktopGroupCount Field Functions 
    bool hasIncludeDesktopGroupCount() const { return this->includeDesktopGroupCount_ != nullptr;};
    void deleteIncludeDesktopGroupCount() { this->includeDesktopGroupCount_ = nullptr;};
    inline bool getIncludeDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(includeDesktopGroupCount_, false) };
    inline FilterUsersRequest& setIncludeDesktopGroupCount(bool includeDesktopGroupCount) { DARABONBA_PTR_SET_VALUE(includeDesktopGroupCount_, includeDesktopGroupCount) };


    // includeEndUserIds Field Functions 
    bool hasIncludeEndUserIds() const { return this->includeEndUserIds_ != nullptr;};
    void deleteIncludeEndUserIds() { this->includeEndUserIds_ = nullptr;};
    inline const vector<string> & getIncludeEndUserIds() const { DARABONBA_PTR_GET_CONST(includeEndUserIds_, vector<string>) };
    inline vector<string> getIncludeEndUserIds() { DARABONBA_PTR_GET(includeEndUserIds_, vector<string>) };
    inline FilterUsersRequest& setIncludeEndUserIds(const vector<string> & includeEndUserIds) { DARABONBA_PTR_SET_VALUE(includeEndUserIds_, includeEndUserIds) };
    inline FilterUsersRequest& setIncludeEndUserIds(vector<string> && includeEndUserIds) { DARABONBA_PTR_SET_RVALUE(includeEndUserIds_, includeEndUserIds) };


    // includeOrgInfo Field Functions 
    bool hasIncludeOrgInfo() const { return this->includeOrgInfo_ != nullptr;};
    void deleteIncludeOrgInfo() { this->includeOrgInfo_ = nullptr;};
    inline bool getIncludeOrgInfo() const { DARABONBA_PTR_GET_DEFAULT(includeOrgInfo_, false) };
    inline FilterUsersRequest& setIncludeOrgInfo(bool includeOrgInfo) { DARABONBA_PTR_SET_VALUE(includeOrgInfo_, includeOrgInfo) };


    // includeSupportIdps Field Functions 
    bool hasIncludeSupportIdps() const { return this->includeSupportIdps_ != nullptr;};
    void deleteIncludeSupportIdps() { this->includeSupportIdps_ = nullptr;};
    inline bool getIncludeSupportIdps() const { DARABONBA_PTR_GET_DEFAULT(includeSupportIdps_, false) };
    inline FilterUsersRequest& setIncludeSupportIdps(bool includeSupportIdps) { DARABONBA_PTR_SET_VALUE(includeSupportIdps_, includeSupportIdps) };


    // isQueryAllSubOrgs Field Functions 
    bool hasIsQueryAllSubOrgs() const { return this->isQueryAllSubOrgs_ != nullptr;};
    void deleteIsQueryAllSubOrgs() { this->isQueryAllSubOrgs_ = nullptr;};
    inline bool getIsQueryAllSubOrgs() const { DARABONBA_PTR_GET_DEFAULT(isQueryAllSubOrgs_, false) };
    inline FilterUsersRequest& setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) { DARABONBA_PTR_SET_VALUE(isQueryAllSubOrgs_, isQueryAllSubOrgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline FilterUsersRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline FilterUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderParam Field Functions 
    bool hasOrderParam() const { return this->orderParam_ != nullptr;};
    void deleteOrderParam() { this->orderParam_ = nullptr;};
    inline const FilterUsersRequest::OrderParam & getOrderParam() const { DARABONBA_PTR_GET_CONST(orderParam_, FilterUsersRequest::OrderParam) };
    inline FilterUsersRequest::OrderParam getOrderParam() { DARABONBA_PTR_GET(orderParam_, FilterUsersRequest::OrderParam) };
    inline FilterUsersRequest& setOrderParam(const FilterUsersRequest::OrderParam & orderParam) { DARABONBA_PTR_SET_VALUE(orderParam_, orderParam) };
    inline FilterUsersRequest& setOrderParam(FilterUsersRequest::OrderParam && orderParam) { DARABONBA_PTR_SET_RVALUE(orderParam_, orderParam) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline FilterUsersRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline FilterUsersRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // propertyFilterParam Field Functions 
    bool hasPropertyFilterParam() const { return this->propertyFilterParam_ != nullptr;};
    void deletePropertyFilterParam() { this->propertyFilterParam_ = nullptr;};
    inline const vector<FilterUsersRequest::PropertyFilterParam> & getPropertyFilterParam() const { DARABONBA_PTR_GET_CONST(propertyFilterParam_, vector<FilterUsersRequest::PropertyFilterParam>) };
    inline vector<FilterUsersRequest::PropertyFilterParam> getPropertyFilterParam() { DARABONBA_PTR_GET(propertyFilterParam_, vector<FilterUsersRequest::PropertyFilterParam>) };
    inline FilterUsersRequest& setPropertyFilterParam(const vector<FilterUsersRequest::PropertyFilterParam> & propertyFilterParam) { DARABONBA_PTR_SET_VALUE(propertyFilterParam_, propertyFilterParam) };
    inline FilterUsersRequest& setPropertyFilterParam(vector<FilterUsersRequest::PropertyFilterParam> && propertyFilterParam) { DARABONBA_PTR_SET_RVALUE(propertyFilterParam_, propertyFilterParam) };


    // propertyKeyValueFilterParam Field Functions 
    bool hasPropertyKeyValueFilterParam() const { return this->propertyKeyValueFilterParam_ != nullptr;};
    void deletePropertyKeyValueFilterParam() { this->propertyKeyValueFilterParam_ = nullptr;};
    inline const vector<FilterUsersRequest::PropertyKeyValueFilterParam> & getPropertyKeyValueFilterParam() const { DARABONBA_PTR_GET_CONST(propertyKeyValueFilterParam_, vector<FilterUsersRequest::PropertyKeyValueFilterParam>) };
    inline vector<FilterUsersRequest::PropertyKeyValueFilterParam> getPropertyKeyValueFilterParam() { DARABONBA_PTR_GET(propertyKeyValueFilterParam_, vector<FilterUsersRequest::PropertyKeyValueFilterParam>) };
    inline FilterUsersRequest& setPropertyKeyValueFilterParam(const vector<FilterUsersRequest::PropertyKeyValueFilterParam> & propertyKeyValueFilterParam) { DARABONBA_PTR_SET_VALUE(propertyKeyValueFilterParam_, propertyKeyValueFilterParam) };
    inline FilterUsersRequest& setPropertyKeyValueFilterParam(vector<FilterUsersRequest::PropertyKeyValueFilterParam> && propertyKeyValueFilterParam) { DARABONBA_PTR_SET_RVALUE(propertyKeyValueFilterParam_, propertyKeyValueFilterParam) };


    // showExtras Field Functions 
    bool hasShowExtras() const { return this->showExtras_ != nullptr;};
    void deleteShowExtras() { this->showExtras_ = nullptr;};
    inline const map<string, string> & getShowExtras() const { DARABONBA_PTR_GET_CONST(showExtras_, map<string, string>) };
    inline map<string, string> getShowExtras() { DARABONBA_PTR_GET(showExtras_, map<string, string>) };
    inline FilterUsersRequest& setShowExtras(const map<string, string> & showExtras) { DARABONBA_PTR_SET_VALUE(showExtras_, showExtras) };
    inline FilterUsersRequest& setShowExtras(map<string, string> && showExtras) { DARABONBA_PTR_SET_RVALUE(showExtras_, showExtras) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FilterUsersRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The channel.
    shared_ptr<string> businessChannel_ {};
    // The usernames (`EndUserId`) to exclude by exact match.
    shared_ptr<vector<string>> excludeEndUserIds_ {};
    // The string for a fuzzy search on the username (`EndUserId`) and email address (`Email`). The wildcard character (`*`) is supported. For example, if you set this parameter to `a*m`, the query returns all results where the username or email address starts with `a` and ends with `m`.
    shared_ptr<string> filter_ {};
    shared_ptr<map<string, string>> filterMap_ {};
    // Specifies whether to return the number of cloud desktops that are assigned to the user.
    shared_ptr<bool> includeDesktopCount_ {};
    // Specifies whether to return the number of desktop groups that are assigned to the user.
    shared_ptr<bool> includeDesktopGroupCount_ {};
    shared_ptr<vector<string>> includeEndUserIds_ {};
    // Specifies whether to include organization information in the response.
    shared_ptr<bool> includeOrgInfo_ {};
    // Specifies whether to include the supported logon types in the response.
    shared_ptr<bool> includeSupportIdps_ {};
    // Specifies whether to query all sub-organizations.
    shared_ptr<bool> isQueryAllSubOrgs_ {};
    // The number of entries per page. If you specify a value greater than 100, the system automatically sets this parameter to 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. If the number of results exceeds the value of the `MaxResults` parameter, a `NextToken` is returned. You can use the `NextToken` to query the next page of results.
    shared_ptr<string> nextToken_ {};
    // The sorting parameters.
    shared_ptr<FilterUsersRequest::OrderParam> orderParam_ {};
    // The organization ID.
    shared_ptr<string> orgId_ {};
    // The account activation type.
    shared_ptr<string> ownerType_ {};
    // The user properties for a fuzzy search.
    shared_ptr<vector<FilterUsersRequest::PropertyFilterParam>> propertyFilterParam_ {};
    // The information about property keys and property values.
    shared_ptr<vector<FilterUsersRequest::PropertyKeyValueFilterParam>> propertyKeyValueFilterParam_ {};
    shared_ptr<map<string, string>> showExtras_ {};
    // The user status by which to filter the results.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
