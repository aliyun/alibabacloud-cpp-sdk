// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNNINGAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNNINGAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRunningAppsResponseBodyRunningCloudApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class ListRunningAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRunningAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningCloudApps, runningCloudApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListRunningAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningCloudApps, runningCloudApps_);
    };
    ListRunningAppsResponseBody() = default ;
    ListRunningAppsResponseBody(const ListRunningAppsResponseBody &) = default ;
    ListRunningAppsResponseBody(ListRunningAppsResponseBody &&) = default ;
    ListRunningAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRunningAppsResponseBody() = default ;
    ListRunningAppsResponseBody& operator=(const ListRunningAppsResponseBody &) = default ;
    ListRunningAppsResponseBody& operator=(ListRunningAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->runningCloudApps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRunningAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningCloudApps Field Functions 
    bool hasRunningCloudApps() const { return this->runningCloudApps_ != nullptr;};
    void deleteRunningCloudApps() { this->runningCloudApps_ = nullptr;};
    inline const vector<ListRunningAppsResponseBodyRunningCloudApps> & runningCloudApps() const { DARABONBA_PTR_GET_CONST(runningCloudApps_, vector<ListRunningAppsResponseBodyRunningCloudApps>) };
    inline vector<ListRunningAppsResponseBodyRunningCloudApps> runningCloudApps() { DARABONBA_PTR_GET(runningCloudApps_, vector<ListRunningAppsResponseBodyRunningCloudApps>) };
    inline ListRunningAppsResponseBody& setRunningCloudApps(const vector<ListRunningAppsResponseBodyRunningCloudApps> & runningCloudApps) { DARABONBA_PTR_SET_VALUE(runningCloudApps_, runningCloudApps) };
    inline ListRunningAppsResponseBody& setRunningCloudApps(vector<ListRunningAppsResponseBodyRunningCloudApps> && runningCloudApps) { DARABONBA_PTR_SET_RVALUE(runningCloudApps_, runningCloudApps) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListRunningAppsResponseBodyRunningCloudApps>> runningCloudApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
