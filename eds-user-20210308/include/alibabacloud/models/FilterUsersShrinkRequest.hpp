// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FilterMap, filterMapShrink_);
      DARABONBA_PTR_TO_JSON(IncludeDesktopCount, includeDesktopCount_);
      DARABONBA_PTR_TO_JSON(IncludeDesktopGroupCount, includeDesktopGroupCount_);
      DARABONBA_PTR_TO_JSON(IncludeEndUserIds, includeEndUserIds_);
      DARABONBA_PTR_TO_JSON(IncludeOrgInfo, includeOrgInfo_);
      DARABONBA_PTR_TO_JSON(IncludeSupportIdps, includeSupportIdps_);
      DARABONBA_PTR_TO_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderParam, orderParamShrink_);
      DARABONBA_PTR_TO_JSON(OrgId, orgId_);
      DARABONBA_PTR_TO_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_TO_JSON(PropertyFilterParam, propertyFilterParam_);
      DARABONBA_PTR_TO_JSON(PropertyKeyValueFilterParam, propertyKeyValueFilterParam_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(ExcludeEndUserIds, excludeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FilterMap, filterMapShrink_);
      DARABONBA_PTR_FROM_JSON(IncludeDesktopCount, includeDesktopCount_);
      DARABONBA_PTR_FROM_JSON(IncludeDesktopGroupCount, includeDesktopGroupCount_);
      DARABONBA_PTR_FROM_JSON(IncludeEndUserIds, includeEndUserIds_);
      DARABONBA_PTR_FROM_JSON(IncludeOrgInfo, includeOrgInfo_);
      DARABONBA_PTR_FROM_JSON(IncludeSupportIdps, includeSupportIdps_);
      DARABONBA_PTR_FROM_JSON(IsQueryAllSubOrgs, isQueryAllSubOrgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderParam, orderParamShrink_);
      DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
      DARABONBA_PTR_FROM_JSON(OwnerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(PropertyFilterParam, propertyFilterParam_);
      DARABONBA_PTR_FROM_JSON(PropertyKeyValueFilterParam, propertyKeyValueFilterParam_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    FilterUsersShrinkRequest() = default ;
    FilterUsersShrinkRequest(const FilterUsersShrinkRequest &) = default ;
    FilterUsersShrinkRequest(FilterUsersShrinkRequest &&) = default ;
    FilterUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersShrinkRequest() = default ;
    FilterUsersShrinkRequest& operator=(const FilterUsersShrinkRequest &) = default ;
    FilterUsersShrinkRequest& operator=(FilterUsersShrinkRequest &&) = default ;
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
      // The property name.
      shared_ptr<string> propertyKey_ {};
      // The property values.
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
      // The ID of the property.
      shared_ptr<int64_t> propertyId_ {};
      // The IDs of the property values.
      shared_ptr<string> propertyValueIds_ {};
    };

    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->excludeEndUserIds_ == nullptr && this->filter_ == nullptr && this->filterMapShrink_ == nullptr && this->includeDesktopCount_ == nullptr && this->includeDesktopGroupCount_ == nullptr
        && this->includeEndUserIds_ == nullptr && this->includeOrgInfo_ == nullptr && this->includeSupportIdps_ == nullptr && this->isQueryAllSubOrgs_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->orderParamShrink_ == nullptr && this->orgId_ == nullptr && this->ownerType_ == nullptr && this->propertyFilterParam_ == nullptr
        && this->propertyKeyValueFilterParam_ == nullptr && this->status_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline FilterUsersShrinkRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // excludeEndUserIds Field Functions 
    bool hasExcludeEndUserIds() const { return this->excludeEndUserIds_ != nullptr;};
    void deleteExcludeEndUserIds() { this->excludeEndUserIds_ = nullptr;};
    inline const vector<string> & getExcludeEndUserIds() const { DARABONBA_PTR_GET_CONST(excludeEndUserIds_, vector<string>) };
    inline vector<string> getExcludeEndUserIds() { DARABONBA_PTR_GET(excludeEndUserIds_, vector<string>) };
    inline FilterUsersShrinkRequest& setExcludeEndUserIds(const vector<string> & excludeEndUserIds) { DARABONBA_PTR_SET_VALUE(excludeEndUserIds_, excludeEndUserIds) };
    inline FilterUsersShrinkRequest& setExcludeEndUserIds(vector<string> && excludeEndUserIds) { DARABONBA_PTR_SET_RVALUE(excludeEndUserIds_, excludeEndUserIds) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline FilterUsersShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // filterMapShrink Field Functions 
    bool hasFilterMapShrink() const { return this->filterMapShrink_ != nullptr;};
    void deleteFilterMapShrink() { this->filterMapShrink_ = nullptr;};
    inline string getFilterMapShrink() const { DARABONBA_PTR_GET_DEFAULT(filterMapShrink_, "") };
    inline FilterUsersShrinkRequest& setFilterMapShrink(string filterMapShrink) { DARABONBA_PTR_SET_VALUE(filterMapShrink_, filterMapShrink) };


    // includeDesktopCount Field Functions 
    bool hasIncludeDesktopCount() const { return this->includeDesktopCount_ != nullptr;};
    void deleteIncludeDesktopCount() { this->includeDesktopCount_ = nullptr;};
    inline bool getIncludeDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(includeDesktopCount_, false) };
    inline FilterUsersShrinkRequest& setIncludeDesktopCount(bool includeDesktopCount) { DARABONBA_PTR_SET_VALUE(includeDesktopCount_, includeDesktopCount) };


    // includeDesktopGroupCount Field Functions 
    bool hasIncludeDesktopGroupCount() const { return this->includeDesktopGroupCount_ != nullptr;};
    void deleteIncludeDesktopGroupCount() { this->includeDesktopGroupCount_ = nullptr;};
    inline bool getIncludeDesktopGroupCount() const { DARABONBA_PTR_GET_DEFAULT(includeDesktopGroupCount_, false) };
    inline FilterUsersShrinkRequest& setIncludeDesktopGroupCount(bool includeDesktopGroupCount) { DARABONBA_PTR_SET_VALUE(includeDesktopGroupCount_, includeDesktopGroupCount) };


    // includeEndUserIds Field Functions 
    bool hasIncludeEndUserIds() const { return this->includeEndUserIds_ != nullptr;};
    void deleteIncludeEndUserIds() { this->includeEndUserIds_ = nullptr;};
    inline const vector<string> & getIncludeEndUserIds() const { DARABONBA_PTR_GET_CONST(includeEndUserIds_, vector<string>) };
    inline vector<string> getIncludeEndUserIds() { DARABONBA_PTR_GET(includeEndUserIds_, vector<string>) };
    inline FilterUsersShrinkRequest& setIncludeEndUserIds(const vector<string> & includeEndUserIds) { DARABONBA_PTR_SET_VALUE(includeEndUserIds_, includeEndUserIds) };
    inline FilterUsersShrinkRequest& setIncludeEndUserIds(vector<string> && includeEndUserIds) { DARABONBA_PTR_SET_RVALUE(includeEndUserIds_, includeEndUserIds) };


    // includeOrgInfo Field Functions 
    bool hasIncludeOrgInfo() const { return this->includeOrgInfo_ != nullptr;};
    void deleteIncludeOrgInfo() { this->includeOrgInfo_ = nullptr;};
    inline bool getIncludeOrgInfo() const { DARABONBA_PTR_GET_DEFAULT(includeOrgInfo_, false) };
    inline FilterUsersShrinkRequest& setIncludeOrgInfo(bool includeOrgInfo) { DARABONBA_PTR_SET_VALUE(includeOrgInfo_, includeOrgInfo) };


    // includeSupportIdps Field Functions 
    bool hasIncludeSupportIdps() const { return this->includeSupportIdps_ != nullptr;};
    void deleteIncludeSupportIdps() { this->includeSupportIdps_ = nullptr;};
    inline bool getIncludeSupportIdps() const { DARABONBA_PTR_GET_DEFAULT(includeSupportIdps_, false) };
    inline FilterUsersShrinkRequest& setIncludeSupportIdps(bool includeSupportIdps) { DARABONBA_PTR_SET_VALUE(includeSupportIdps_, includeSupportIdps) };


    // isQueryAllSubOrgs Field Functions 
    bool hasIsQueryAllSubOrgs() const { return this->isQueryAllSubOrgs_ != nullptr;};
    void deleteIsQueryAllSubOrgs() { this->isQueryAllSubOrgs_ = nullptr;};
    inline bool getIsQueryAllSubOrgs() const { DARABONBA_PTR_GET_DEFAULT(isQueryAllSubOrgs_, false) };
    inline FilterUsersShrinkRequest& setIsQueryAllSubOrgs(bool isQueryAllSubOrgs) { DARABONBA_PTR_SET_VALUE(isQueryAllSubOrgs_, isQueryAllSubOrgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline FilterUsersShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline FilterUsersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderParamShrink Field Functions 
    bool hasOrderParamShrink() const { return this->orderParamShrink_ != nullptr;};
    void deleteOrderParamShrink() { this->orderParamShrink_ = nullptr;};
    inline string getOrderParamShrink() const { DARABONBA_PTR_GET_DEFAULT(orderParamShrink_, "") };
    inline FilterUsersShrinkRequest& setOrderParamShrink(string orderParamShrink) { DARABONBA_PTR_SET_VALUE(orderParamShrink_, orderParamShrink) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline FilterUsersShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline FilterUsersShrinkRequest& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // propertyFilterParam Field Functions 
    bool hasPropertyFilterParam() const { return this->propertyFilterParam_ != nullptr;};
    void deletePropertyFilterParam() { this->propertyFilterParam_ = nullptr;};
    inline const vector<FilterUsersShrinkRequest::PropertyFilterParam> & getPropertyFilterParam() const { DARABONBA_PTR_GET_CONST(propertyFilterParam_, vector<FilterUsersShrinkRequest::PropertyFilterParam>) };
    inline vector<FilterUsersShrinkRequest::PropertyFilterParam> getPropertyFilterParam() { DARABONBA_PTR_GET(propertyFilterParam_, vector<FilterUsersShrinkRequest::PropertyFilterParam>) };
    inline FilterUsersShrinkRequest& setPropertyFilterParam(const vector<FilterUsersShrinkRequest::PropertyFilterParam> & propertyFilterParam) { DARABONBA_PTR_SET_VALUE(propertyFilterParam_, propertyFilterParam) };
    inline FilterUsersShrinkRequest& setPropertyFilterParam(vector<FilterUsersShrinkRequest::PropertyFilterParam> && propertyFilterParam) { DARABONBA_PTR_SET_RVALUE(propertyFilterParam_, propertyFilterParam) };


    // propertyKeyValueFilterParam Field Functions 
    bool hasPropertyKeyValueFilterParam() const { return this->propertyKeyValueFilterParam_ != nullptr;};
    void deletePropertyKeyValueFilterParam() { this->propertyKeyValueFilterParam_ = nullptr;};
    inline const vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam> & getPropertyKeyValueFilterParam() const { DARABONBA_PTR_GET_CONST(propertyKeyValueFilterParam_, vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam>) };
    inline vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam> getPropertyKeyValueFilterParam() { DARABONBA_PTR_GET(propertyKeyValueFilterParam_, vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam>) };
    inline FilterUsersShrinkRequest& setPropertyKeyValueFilterParam(const vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam> & propertyKeyValueFilterParam) { DARABONBA_PTR_SET_VALUE(propertyKeyValueFilterParam_, propertyKeyValueFilterParam) };
    inline FilterUsersShrinkRequest& setPropertyKeyValueFilterParam(vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam> && propertyKeyValueFilterParam) { DARABONBA_PTR_SET_RVALUE(propertyKeyValueFilterParam_, propertyKeyValueFilterParam) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline FilterUsersShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The list of usernames to be precisely excluded.
    shared_ptr<vector<string>> excludeEndUserIds_ {};
    // The string that is used for fuzzy search. You can use usernames and email addresses to perform fuzzy search. Wildcard characters (\\*) are supported for this parameter. For example, if you set this parameter to a\\*m, the usernames or an email addresses that start with a or end with m are returned.
    shared_ptr<string> filter_ {};
    shared_ptr<string> filterMapShrink_ {};
    // Specifies whether to return the number of cloud desktops that are assigned to the convenience user.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> includeDesktopCount_ {};
    // Specifies whether to return the number of cloud desktop pools that are assigned to the convenience user.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> includeDesktopGroupCount_ {};
    shared_ptr<vector<string>> includeEndUserIds_ {};
    // Specifies whether to return the organization information.
    shared_ptr<bool> includeOrgInfo_ {};
    // Specifies whether to return the supported logon types.
    shared_ptr<bool> includeSupportIdps_ {};
    // Specifies whether to query all sub-organizations.
    shared_ptr<bool> isQueryAllSubOrgs_ {};
    // The number of entries per page. If you set this parameter to a value greater than 100, the system resets the value to 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. If not all results are returned in a query, a value is returned for the NextToken parameter. In this case, you can use the returned NextToken value to start the next query.
    shared_ptr<string> nextToken_ {};
    // The parameter that might affect the sorting logic.
    shared_ptr<string> orderParamShrink_ {};
    // The ID of the organization.
    shared_ptr<string> orgId_ {};
    // The activation type of the convenience account.
    // 
    // Valid values:
    // 
    // *   CreateFromManager: administrator-activated.
    // *   Normal: user-activated.
    shared_ptr<string> ownerType_ {};
    // The list of properties for fuzzy search.
    shared_ptr<vector<FilterUsersShrinkRequest::PropertyFilterParam>> propertyFilterParam_ {};
    // The list of property names and property values.
    shared_ptr<vector<FilterUsersShrinkRequest::PropertyKeyValueFilterParam>> propertyKeyValueFilterParam_ {};
    // The status.
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
