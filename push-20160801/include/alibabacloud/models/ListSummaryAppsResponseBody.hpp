// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListSummaryAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummaryAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SummaryAppInfos, summaryAppInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummaryAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SummaryAppInfos, summaryAppInfos_);
    };
    ListSummaryAppsResponseBody() = default ;
    ListSummaryAppsResponseBody(const ListSummaryAppsResponseBody &) = default ;
    ListSummaryAppsResponseBody(ListSummaryAppsResponseBody &&) = default ;
    ListSummaryAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummaryAppsResponseBody() = default ;
    ListSummaryAppsResponseBody& operator=(const ListSummaryAppsResponseBody &) = default ;
    ListSummaryAppsResponseBody& operator=(ListSummaryAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SummaryAppInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SummaryAppInfos& obj) { 
        DARABONBA_PTR_TO_JSON(SummaryAppInfo, summaryAppInfo_);
      };
      friend void from_json(const Darabonba::Json& j, SummaryAppInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(SummaryAppInfo, summaryAppInfo_);
      };
      SummaryAppInfos() = default ;
      SummaryAppInfos(const SummaryAppInfos &) = default ;
      SummaryAppInfos(SummaryAppInfos &&) = default ;
      SummaryAppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SummaryAppInfos() = default ;
      SummaryAppInfos& operator=(const SummaryAppInfos &) = default ;
      SummaryAppInfos& operator=(SummaryAppInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SummaryAppInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SummaryAppInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
        };
        friend void from_json(const Darabonba::Json& j, SummaryAppInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
        };
        SummaryAppInfo() = default ;
        SummaryAppInfo(const SummaryAppInfo &) = default ;
        SummaryAppInfo(SummaryAppInfo &&) = default ;
        SummaryAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SummaryAppInfo() = default ;
        SummaryAppInfo& operator=(const SummaryAppInfo &) = default ;
        SummaryAppInfo& operator=(SummaryAppInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appName_ == nullptr; };
        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
        inline SummaryAppInfo& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline SummaryAppInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      protected:
        shared_ptr<int64_t> appKey_ {};
        shared_ptr<string> appName_ {};
      };

      virtual bool empty() const override { return this->summaryAppInfo_ == nullptr; };
      // summaryAppInfo Field Functions 
      bool hasSummaryAppInfo() const { return this->summaryAppInfo_ != nullptr;};
      void deleteSummaryAppInfo() { this->summaryAppInfo_ = nullptr;};
      inline const vector<SummaryAppInfos::SummaryAppInfo> & getSummaryAppInfo() const { DARABONBA_PTR_GET_CONST(summaryAppInfo_, vector<SummaryAppInfos::SummaryAppInfo>) };
      inline vector<SummaryAppInfos::SummaryAppInfo> getSummaryAppInfo() { DARABONBA_PTR_GET(summaryAppInfo_, vector<SummaryAppInfos::SummaryAppInfo>) };
      inline SummaryAppInfos& setSummaryAppInfo(const vector<SummaryAppInfos::SummaryAppInfo> & summaryAppInfo) { DARABONBA_PTR_SET_VALUE(summaryAppInfo_, summaryAppInfo) };
      inline SummaryAppInfos& setSummaryAppInfo(vector<SummaryAppInfos::SummaryAppInfo> && summaryAppInfo) { DARABONBA_PTR_SET_RVALUE(summaryAppInfo_, summaryAppInfo) };


    protected:
      shared_ptr<vector<SummaryAppInfos::SummaryAppInfo>> summaryAppInfo_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->summaryAppInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSummaryAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summaryAppInfos Field Functions 
    bool hasSummaryAppInfos() const { return this->summaryAppInfos_ != nullptr;};
    void deleteSummaryAppInfos() { this->summaryAppInfos_ = nullptr;};
    inline const ListSummaryAppsResponseBody::SummaryAppInfos & getSummaryAppInfos() const { DARABONBA_PTR_GET_CONST(summaryAppInfos_, ListSummaryAppsResponseBody::SummaryAppInfos) };
    inline ListSummaryAppsResponseBody::SummaryAppInfos getSummaryAppInfos() { DARABONBA_PTR_GET(summaryAppInfos_, ListSummaryAppsResponseBody::SummaryAppInfos) };
    inline ListSummaryAppsResponseBody& setSummaryAppInfos(const ListSummaryAppsResponseBody::SummaryAppInfos & summaryAppInfos) { DARABONBA_PTR_SET_VALUE(summaryAppInfos_, summaryAppInfos) };
    inline ListSummaryAppsResponseBody& setSummaryAppInfos(ListSummaryAppsResponseBody::SummaryAppInfos && summaryAppInfos) { DARABONBA_PTR_SET_RVALUE(summaryAppInfos_, summaryAppInfos) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListSummaryAppsResponseBody::SummaryAppInfos> summaryAppInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
