// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPGRADEITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUPGRADEITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListUpgradeItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpgradeItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpgradeItems, upgradeItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpgradeItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpgradeItems, upgradeItems_);
    };
    ListUpgradeItemsResponseBody() = default ;
    ListUpgradeItemsResponseBody(const ListUpgradeItemsResponseBody &) = default ;
    ListUpgradeItemsResponseBody(ListUpgradeItemsResponseBody &&) = default ;
    ListUpgradeItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpgradeItemsResponseBody() = default ;
    ListUpgradeItemsResponseBody& operator=(const ListUpgradeItemsResponseBody &) = default ;
    ListUpgradeItemsResponseBody& operator=(ListUpgradeItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpgradeItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpgradeItems& obj) { 
        DARABONBA_PTR_TO_JSON(UpgradeItemId, upgradeItemId_);
      };
      friend void from_json(const Darabonba::Json& j, UpgradeItems& obj) { 
        DARABONBA_PTR_FROM_JSON(UpgradeItemId, upgradeItemId_);
      };
      UpgradeItems() = default ;
      UpgradeItems(const UpgradeItems &) = default ;
      UpgradeItems(UpgradeItems &&) = default ;
      UpgradeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpgradeItems() = default ;
      UpgradeItems& operator=(const UpgradeItems &) = default ;
      UpgradeItems& operator=(UpgradeItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->upgradeItemId_ == nullptr; };
      // upgradeItemId Field Functions 
      bool hasUpgradeItemId() const { return this->upgradeItemId_ != nullptr;};
      void deleteUpgradeItemId() { this->upgradeItemId_ = nullptr;};
      inline string getUpgradeItemId() const { DARABONBA_PTR_GET_DEFAULT(upgradeItemId_, "") };
      inline UpgradeItems& setUpgradeItemId(string upgradeItemId) { DARABONBA_PTR_SET_VALUE(upgradeItemId_, upgradeItemId) };


    protected:
      shared_ptr<string> upgradeItemId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->upgradeItems_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUpgradeItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUpgradeItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUpgradeItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUpgradeItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // upgradeItems Field Functions 
    bool hasUpgradeItems() const { return this->upgradeItems_ != nullptr;};
    void deleteUpgradeItems() { this->upgradeItems_ = nullptr;};
    inline const vector<ListUpgradeItemsResponseBody::UpgradeItems> & getUpgradeItems() const { DARABONBA_PTR_GET_CONST(upgradeItems_, vector<ListUpgradeItemsResponseBody::UpgradeItems>) };
    inline vector<ListUpgradeItemsResponseBody::UpgradeItems> getUpgradeItems() { DARABONBA_PTR_GET(upgradeItems_, vector<ListUpgradeItemsResponseBody::UpgradeItems>) };
    inline ListUpgradeItemsResponseBody& setUpgradeItems(const vector<ListUpgradeItemsResponseBody::UpgradeItems> & upgradeItems) { DARABONBA_PTR_SET_VALUE(upgradeItems_, upgradeItems) };
    inline ListUpgradeItemsResponseBody& setUpgradeItems(vector<ListUpgradeItemsResponseBody::UpgradeItems> && upgradeItems) { DARABONBA_PTR_SET_RVALUE(upgradeItems_, upgradeItems) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListUpgradeItemsResponseBody::UpgradeItems>> upgradeItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
