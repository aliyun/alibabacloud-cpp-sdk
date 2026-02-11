// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
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
    class RetcodeApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetcodeApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
      };
      friend void from_json(const Darabonba::Json& j, RetcodeApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
      };
      RetcodeApps() = default ;
      RetcodeApps(const RetcodeApps &) = default ;
      RetcodeApps(RetcodeApps &&) = default ;
      RetcodeApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetcodeApps() = default ;
      RetcodeApps& operator=(const RetcodeApps &) = default ;
      RetcodeApps& operator=(RetcodeApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->pid_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline RetcodeApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RetcodeApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline RetcodeApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    protected:
      shared_ptr<int64_t> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> pid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->retcodeApps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRetcodeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeApps Field Functions 
    bool hasRetcodeApps() const { return this->retcodeApps_ != nullptr;};
    void deleteRetcodeApps() { this->retcodeApps_ = nullptr;};
    inline const vector<ListRetcodeAppsResponseBody::RetcodeApps> & getRetcodeApps() const { DARABONBA_PTR_GET_CONST(retcodeApps_, vector<ListRetcodeAppsResponseBody::RetcodeApps>) };
    inline vector<ListRetcodeAppsResponseBody::RetcodeApps> getRetcodeApps() { DARABONBA_PTR_GET(retcodeApps_, vector<ListRetcodeAppsResponseBody::RetcodeApps>) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(const vector<ListRetcodeAppsResponseBody::RetcodeApps> & retcodeApps) { DARABONBA_PTR_SET_VALUE(retcodeApps_, retcodeApps) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(vector<ListRetcodeAppsResponseBody::RetcodeApps> && retcodeApps) { DARABONBA_PTR_SET_RVALUE(retcodeApps_, retcodeApps) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListRetcodeAppsResponseBody::RetcodeApps>> retcodeApps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
