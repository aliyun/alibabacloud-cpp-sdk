// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTALLEDAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstalledAppsResponseBodyApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListInstalledAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstalledAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Apps, apps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstalledAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Apps, apps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstalledAppsResponseBody() = default ;
    ListInstalledAppsResponseBody(const ListInstalledAppsResponseBody &) = default ;
    ListInstalledAppsResponseBody(ListInstalledAppsResponseBody &&) = default ;
    ListInstalledAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstalledAppsResponseBody() = default ;
    ListInstalledAppsResponseBody& operator=(const ListInstalledAppsResponseBody &) = default ;
    ListInstalledAppsResponseBody& operator=(ListInstalledAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apps_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apps Field Functions 
    bool hasApps() const { return this->apps_ != nullptr;};
    void deleteApps() { this->apps_ = nullptr;};
    inline const vector<ListInstalledAppsResponseBodyApps> & apps() const { DARABONBA_PTR_GET_CONST(apps_, vector<ListInstalledAppsResponseBodyApps>) };
    inline vector<ListInstalledAppsResponseBodyApps> apps() { DARABONBA_PTR_GET(apps_, vector<ListInstalledAppsResponseBodyApps>) };
    inline ListInstalledAppsResponseBody& setApps(const vector<ListInstalledAppsResponseBodyApps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
    inline ListInstalledAppsResponseBody& setApps(vector<ListInstalledAppsResponseBodyApps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstalledAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstalledAppsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the application.
    std::shared_ptr<vector<ListInstalledAppsResponseBodyApps>> apps_ = nullptr;
    // The unique ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
