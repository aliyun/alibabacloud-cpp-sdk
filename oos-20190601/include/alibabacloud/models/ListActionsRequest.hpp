// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListActionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OOSActionName, OOSActionName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OOSActionName, OOSActionName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListActionsRequest() = default ;
    ListActionsRequest(const ListActionsRequest &) = default ;
    ListActionsRequest(ListActionsRequest &&) = default ;
    ListActionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionsRequest() = default ;
    ListActionsRequest& operator=(const ListActionsRequest &) = default ;
    ListActionsRequest& operator=(ListActionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->OOSActionName_ == nullptr && this->regionId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // OOSActionName Field Functions 
    bool hasOOSActionName() const { return this->OOSActionName_ != nullptr;};
    void deleteOOSActionName() { this->OOSActionName_ = nullptr;};
    inline string getOOSActionName() const { DARABONBA_PTR_GET_DEFAULT(OOSActionName_, "") };
    inline ListActionsRequest& setOOSActionName(string OOSActionName) { DARABONBA_PTR_SET_VALUE(OOSActionName_, OOSActionName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListActionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The number of entries to return on each page. Valid values: 20 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The name of the action. All actions whose names contain the specified action name are returned.
    shared_ptr<string> OOSActionName_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
