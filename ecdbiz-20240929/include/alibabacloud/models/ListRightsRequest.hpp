// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRIGHTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRIGHTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcdBiz20240929
{
namespace Models
{
  class ListRightsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRightsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiDesktop, aiDesktop_);
      DARABONBA_PTR_TO_JSON(BusinessSceneCode, businessSceneCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Overseas, overseas_);
      DARABONBA_PTR_TO_JSON(RightsActiveStatus, rightsActiveStatus_);
      DARABONBA_PTR_TO_JSON(RightsAssignedUser, rightsAssignedUser_);
      DARABONBA_PTR_TO_JSON(RightsIds, rightsIds_);
      DARABONBA_PTR_TO_JSON(RightsPeriod, rightsPeriod_);
      DARABONBA_PTR_TO_JSON(RightsResourceId, rightsResourceId_);
      DARABONBA_PTR_TO_JSON(RightsResourceType, rightsResourceType_);
      DARABONBA_PTR_TO_JSON(RightsResourceTypes, rightsResourceTypes_);
      DARABONBA_PTR_TO_JSON(RightsSpec, rightsSpec_);
    };
    friend void from_json(const Darabonba::Json& j, ListRightsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiDesktop, aiDesktop_);
      DARABONBA_PTR_FROM_JSON(BusinessSceneCode, businessSceneCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Overseas, overseas_);
      DARABONBA_PTR_FROM_JSON(RightsActiveStatus, rightsActiveStatus_);
      DARABONBA_PTR_FROM_JSON(RightsAssignedUser, rightsAssignedUser_);
      DARABONBA_PTR_FROM_JSON(RightsIds, rightsIds_);
      DARABONBA_PTR_FROM_JSON(RightsPeriod, rightsPeriod_);
      DARABONBA_PTR_FROM_JSON(RightsResourceId, rightsResourceId_);
      DARABONBA_PTR_FROM_JSON(RightsResourceType, rightsResourceType_);
      DARABONBA_PTR_FROM_JSON(RightsResourceTypes, rightsResourceTypes_);
      DARABONBA_PTR_FROM_JSON(RightsSpec, rightsSpec_);
    };
    ListRightsRequest() = default ;
    ListRightsRequest(const ListRightsRequest &) = default ;
    ListRightsRequest(ListRightsRequest &&) = default ;
    ListRightsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRightsRequest() = default ;
    ListRightsRequest& operator=(const ListRightsRequest &) = default ;
    ListRightsRequest& operator=(ListRightsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiDesktop_ == nullptr
        && this->businessSceneCode_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderField_ == nullptr && this->orderType_ == nullptr
        && this->overseas_ == nullptr && this->rightsActiveStatus_ == nullptr && this->rightsAssignedUser_ == nullptr && this->rightsIds_ == nullptr && this->rightsPeriod_ == nullptr
        && this->rightsResourceId_ == nullptr && this->rightsResourceType_ == nullptr && this->rightsResourceTypes_ == nullptr && this->rightsSpec_ == nullptr; };
    // aiDesktop Field Functions 
    bool hasAiDesktop() const { return this->aiDesktop_ != nullptr;};
    void deleteAiDesktop() { this->aiDesktop_ = nullptr;};
    inline bool getAiDesktop() const { DARABONBA_PTR_GET_DEFAULT(aiDesktop_, false) };
    inline ListRightsRequest& setAiDesktop(bool aiDesktop) { DARABONBA_PTR_SET_VALUE(aiDesktop_, aiDesktop) };


    // businessSceneCode Field Functions 
    bool hasBusinessSceneCode() const { return this->businessSceneCode_ != nullptr;};
    void deleteBusinessSceneCode() { this->businessSceneCode_ = nullptr;};
    inline string getBusinessSceneCode() const { DARABONBA_PTR_GET_DEFAULT(businessSceneCode_, "") };
    inline ListRightsRequest& setBusinessSceneCode(string businessSceneCode) { DARABONBA_PTR_SET_VALUE(businessSceneCode_, businessSceneCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRightsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRightsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListRightsRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListRightsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // overseas Field Functions 
    bool hasOverseas() const { return this->overseas_ != nullptr;};
    void deleteOverseas() { this->overseas_ = nullptr;};
    inline int32_t getOverseas() const { DARABONBA_PTR_GET_DEFAULT(overseas_, 0) };
    inline ListRightsRequest& setOverseas(int32_t overseas) { DARABONBA_PTR_SET_VALUE(overseas_, overseas) };


    // rightsActiveStatus Field Functions 
    bool hasRightsActiveStatus() const { return this->rightsActiveStatus_ != nullptr;};
    void deleteRightsActiveStatus() { this->rightsActiveStatus_ = nullptr;};
    inline string getRightsActiveStatus() const { DARABONBA_PTR_GET_DEFAULT(rightsActiveStatus_, "") };
    inline ListRightsRequest& setRightsActiveStatus(string rightsActiveStatus) { DARABONBA_PTR_SET_VALUE(rightsActiveStatus_, rightsActiveStatus) };


    // rightsAssignedUser Field Functions 
    bool hasRightsAssignedUser() const { return this->rightsAssignedUser_ != nullptr;};
    void deleteRightsAssignedUser() { this->rightsAssignedUser_ = nullptr;};
    inline string getRightsAssignedUser() const { DARABONBA_PTR_GET_DEFAULT(rightsAssignedUser_, "") };
    inline ListRightsRequest& setRightsAssignedUser(string rightsAssignedUser) { DARABONBA_PTR_SET_VALUE(rightsAssignedUser_, rightsAssignedUser) };


    // rightsIds Field Functions 
    bool hasRightsIds() const { return this->rightsIds_ != nullptr;};
    void deleteRightsIds() { this->rightsIds_ = nullptr;};
    inline const vector<string> & getRightsIds() const { DARABONBA_PTR_GET_CONST(rightsIds_, vector<string>) };
    inline vector<string> getRightsIds() { DARABONBA_PTR_GET(rightsIds_, vector<string>) };
    inline ListRightsRequest& setRightsIds(const vector<string> & rightsIds) { DARABONBA_PTR_SET_VALUE(rightsIds_, rightsIds) };
    inline ListRightsRequest& setRightsIds(vector<string> && rightsIds) { DARABONBA_PTR_SET_RVALUE(rightsIds_, rightsIds) };


    // rightsPeriod Field Functions 
    bool hasRightsPeriod() const { return this->rightsPeriod_ != nullptr;};
    void deleteRightsPeriod() { this->rightsPeriod_ = nullptr;};
    inline string getRightsPeriod() const { DARABONBA_PTR_GET_DEFAULT(rightsPeriod_, "") };
    inline ListRightsRequest& setRightsPeriod(string rightsPeriod) { DARABONBA_PTR_SET_VALUE(rightsPeriod_, rightsPeriod) };


    // rightsResourceId Field Functions 
    bool hasRightsResourceId() const { return this->rightsResourceId_ != nullptr;};
    void deleteRightsResourceId() { this->rightsResourceId_ = nullptr;};
    inline string getRightsResourceId() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceId_, "") };
    inline ListRightsRequest& setRightsResourceId(string rightsResourceId) { DARABONBA_PTR_SET_VALUE(rightsResourceId_, rightsResourceId) };


    // rightsResourceType Field Functions 
    bool hasRightsResourceType() const { return this->rightsResourceType_ != nullptr;};
    void deleteRightsResourceType() { this->rightsResourceType_ = nullptr;};
    inline string getRightsResourceType() const { DARABONBA_PTR_GET_DEFAULT(rightsResourceType_, "") };
    inline ListRightsRequest& setRightsResourceType(string rightsResourceType) { DARABONBA_PTR_SET_VALUE(rightsResourceType_, rightsResourceType) };


    // rightsResourceTypes Field Functions 
    bool hasRightsResourceTypes() const { return this->rightsResourceTypes_ != nullptr;};
    void deleteRightsResourceTypes() { this->rightsResourceTypes_ = nullptr;};
    inline const vector<string> & getRightsResourceTypes() const { DARABONBA_PTR_GET_CONST(rightsResourceTypes_, vector<string>) };
    inline vector<string> getRightsResourceTypes() { DARABONBA_PTR_GET(rightsResourceTypes_, vector<string>) };
    inline ListRightsRequest& setRightsResourceTypes(const vector<string> & rightsResourceTypes) { DARABONBA_PTR_SET_VALUE(rightsResourceTypes_, rightsResourceTypes) };
    inline ListRightsRequest& setRightsResourceTypes(vector<string> && rightsResourceTypes) { DARABONBA_PTR_SET_RVALUE(rightsResourceTypes_, rightsResourceTypes) };


    // rightsSpec Field Functions 
    bool hasRightsSpec() const { return this->rightsSpec_ != nullptr;};
    void deleteRightsSpec() { this->rightsSpec_ = nullptr;};
    inline string getRightsSpec() const { DARABONBA_PTR_GET_DEFAULT(rightsSpec_, "") };
    inline ListRightsRequest& setRightsSpec(string rightsSpec) { DARABONBA_PTR_SET_VALUE(rightsSpec_, rightsSpec) };


  protected:
    // Optional AI rights filter. Set to true to query only AI rights, or false to query only regular rights, including historical unmarked rights. If you do not specify this parameter, all rights are queried.
    shared_ptr<bool> aiDesktop_ {};
    // The scenario code for the commercial edition.
    shared_ptr<string> businessSceneCode_ {};
    // The maximum number of results per page. Specify a positive integer from 1 to 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Do not specify this parameter for the first query. For subsequent queries, pass the NextToken value returned from the previous page exactly as it was returned. The example is for illustration purposes only. Do not construct the token manually.
    shared_ptr<string> nextToken_ {};
    // The field by which to sort the results, such as gmtCreate, rightsId, or rightsExpireTime. If you do not specify this parameter, the default sorting order of the server is used.
    shared_ptr<string> orderField_ {};
    // The sorting order. Valid values: asc and desc (lowercase). Use this parameter together with OrderField.
    shared_ptr<string> orderType_ {};
    // Specifies whether the rights apply to regions outside the Chinese mainland, including Hong Kong (China), Macao (China), and Taiwan (China). Valid values:
    // - 0: The Chinese mainland.
    // - 1: Regions outside the Chinese mainland, including Hong Kong (China), Macao (China), and Taiwan (China).
    shared_ptr<int32_t> overseas_ {};
    // The rights activation status. Use the returned value to determine whether the activation is complete.
    shared_ptr<string> rightsActiveStatus_ {};
    // The end user to whom the rights are assigned. For convenience accounts, use EndUserId.
    shared_ptr<string> rightsAssignedUser_ {};
    // The list of rights IDs to query or activate. Specify the RightsId values returned by ListRights.
    shared_ptr<vector<string>> rightsIds_ {};
    // The rights period code.
    shared_ptr<string> rightsPeriod_ {};
    // The ID of the resource associated with the rights. This value is returned after the resource is created.
    shared_ptr<string> rightsResourceId_ {};
    // The rights resource type. Use Desktop for regular cloud computers. For other commodities, specify the actual rights type.
    shared_ptr<string> rightsResourceType_ {};
    // The list of rights resource types to filter.
    shared_ptr<vector<string>> rightsResourceTypes_ {};
    // The rights specification code. Refer to the rights query results for the actual value.
    shared_ptr<string> rightsSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcdBiz20240929
#endif
