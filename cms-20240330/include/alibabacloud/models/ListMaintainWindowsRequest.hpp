// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAINTAINWINDOWSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMAINTAINWINDOWSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListMaintainWindowsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaintainWindowsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_TO_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaintainWindowsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(maintainWindowId, maintainWindowId_);
      DARABONBA_PTR_FROM_JSON(maintainWindowName, maintainWindowName_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListMaintainWindowsRequest() = default ;
    ListMaintainWindowsRequest(const ListMaintainWindowsRequest &) = default ;
    ListMaintainWindowsRequest(ListMaintainWindowsRequest &&) = default ;
    ListMaintainWindowsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaintainWindowsRequest() = default ;
    ListMaintainWindowsRequest& operator=(const ListMaintainWindowsRequest &) = default ;
    ListMaintainWindowsRequest& operator=(ListMaintainWindowsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->enable_ == nullptr && this->maintainWindowId_ == nullptr && this->maintainWindowName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->orderBy_ == nullptr && this->workspace_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListMaintainWindowsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListMaintainWindowsRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // maintainWindowId Field Functions 
    bool hasMaintainWindowId() const { return this->maintainWindowId_ != nullptr;};
    void deleteMaintainWindowId() { this->maintainWindowId_ = nullptr;};
    inline string getMaintainWindowId() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowId_, "") };
    inline ListMaintainWindowsRequest& setMaintainWindowId(string maintainWindowId) { DARABONBA_PTR_SET_VALUE(maintainWindowId_, maintainWindowId) };


    // maintainWindowName Field Functions 
    bool hasMaintainWindowName() const { return this->maintainWindowName_ != nullptr;};
    void deleteMaintainWindowName() { this->maintainWindowName_ = nullptr;};
    inline string getMaintainWindowName() const { DARABONBA_PTR_GET_DEFAULT(maintainWindowName_, "") };
    inline ListMaintainWindowsRequest& setMaintainWindowName(string maintainWindowName) { DARABONBA_PTR_SET_VALUE(maintainWindowName_, maintainWindowName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMaintainWindowsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMaintainWindowsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMaintainWindowsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListMaintainWindowsRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> direction_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<string> maintainWindowId_ {};
    shared_ptr<string> maintainWindowName_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
