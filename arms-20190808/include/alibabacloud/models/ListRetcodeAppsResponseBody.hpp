// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRetcodeAppsResponseBodyRetcodeApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListRetcodeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRetcodeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeApps, retcodeApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListRetcodeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeApps, retcodeApps_);
    };
    ListRetcodeAppsResponseBody() = default ;
    ListRetcodeAppsResponseBody(const ListRetcodeAppsResponseBody &) = default ;
    ListRetcodeAppsResponseBody(ListRetcodeAppsResponseBody &&) = default ;
    ListRetcodeAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRetcodeAppsResponseBody() = default ;
    ListRetcodeAppsResponseBody& operator=(const ListRetcodeAppsResponseBody &) = default ;
    ListRetcodeAppsResponseBody& operator=(ListRetcodeAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->retcodeApps_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRetcodeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeApps Field Functions 
    bool hasRetcodeApps() const { return this->retcodeApps_ != nullptr;};
    void deleteRetcodeApps() { this->retcodeApps_ = nullptr;};
    inline const vector<ListRetcodeAppsResponseBodyRetcodeApps> & retcodeApps() const { DARABONBA_PTR_GET_CONST(retcodeApps_, vector<ListRetcodeAppsResponseBodyRetcodeApps>) };
    inline vector<ListRetcodeAppsResponseBodyRetcodeApps> retcodeApps() { DARABONBA_PTR_GET(retcodeApps_, vector<ListRetcodeAppsResponseBodyRetcodeApps>) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(const vector<ListRetcodeAppsResponseBodyRetcodeApps> & retcodeApps) { DARABONBA_PTR_SET_VALUE(retcodeApps_, retcodeApps) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(vector<ListRetcodeAppsResponseBodyRetcodeApps> && retcodeApps) { DARABONBA_PTR_SET_RVALUE(retcodeApps_, retcodeApps) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of applications monitored by Browser Monitoring.
    std::shared_ptr<vector<ListRetcodeAppsResponseBodyRetcodeApps>> retcodeApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
