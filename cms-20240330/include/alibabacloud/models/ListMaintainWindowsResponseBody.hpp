// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAINTAINWINDOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMAINTAINWINDOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MaintainWindowForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListMaintainWindowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaintainWindowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maintainWindowList, maintainWindowList_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaintainWindowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maintainWindowList, maintainWindowList_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMaintainWindowsResponseBody() = default ;
    ListMaintainWindowsResponseBody(const ListMaintainWindowsResponseBody &) = default ;
    ListMaintainWindowsResponseBody(ListMaintainWindowsResponseBody &&) = default ;
    ListMaintainWindowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaintainWindowsResponseBody() = default ;
    ListMaintainWindowsResponseBody& operator=(const ListMaintainWindowsResponseBody &) = default ;
    ListMaintainWindowsResponseBody& operator=(ListMaintainWindowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maintainWindowList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // maintainWindowList Field Functions 
    bool hasMaintainWindowList() const { return this->maintainWindowList_ != nullptr;};
    void deleteMaintainWindowList() { this->maintainWindowList_ = nullptr;};
    inline const vector<MaintainWindowForView> & getMaintainWindowList() const { DARABONBA_PTR_GET_CONST(maintainWindowList_, vector<MaintainWindowForView>) };
    inline vector<MaintainWindowForView> getMaintainWindowList() { DARABONBA_PTR_GET(maintainWindowList_, vector<MaintainWindowForView>) };
    inline ListMaintainWindowsResponseBody& setMaintainWindowList(const vector<MaintainWindowForView> & maintainWindowList) { DARABONBA_PTR_SET_VALUE(maintainWindowList_, maintainWindowList) };
    inline ListMaintainWindowsResponseBody& setMaintainWindowList(vector<MaintainWindowForView> && maintainWindowList) { DARABONBA_PTR_SET_RVALUE(maintainWindowList_, maintainWindowList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMaintainWindowsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMaintainWindowsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMaintainWindowsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<MaintainWindowForView>> maintainWindowList_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
