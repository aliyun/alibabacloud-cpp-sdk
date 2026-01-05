// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ListPluginStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePluginStatusSet, instancePluginStatusSet_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePluginStatusSet, instancePluginStatusSet_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPluginStatusResponseBody() = default ;
    ListPluginStatusResponseBody(const ListPluginStatusResponseBody &) = default ;
    ListPluginStatusResponseBody(ListPluginStatusResponseBody &&) = default ;
    ListPluginStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginStatusResponseBody() = default ;
    ListPluginStatusResponseBody& operator=(const ListPluginStatusResponseBody &) = default ;
    ListPluginStatusResponseBody& operator=(ListPluginStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstancePluginStatusSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstancePluginStatusSet& obj) { 
        DARABONBA_PTR_TO_JSON(InstancePluginStatus, instancePluginStatus_);
      };
      friend void from_json(const Darabonba::Json& j, InstancePluginStatusSet& obj) { 
        DARABONBA_PTR_FROM_JSON(InstancePluginStatus, instancePluginStatus_);
      };
      InstancePluginStatusSet() = default ;
      InstancePluginStatusSet(const InstancePluginStatusSet &) = default ;
      InstancePluginStatusSet(InstancePluginStatusSet &&) = default ;
      InstancePluginStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstancePluginStatusSet() = default ;
      InstancePluginStatusSet& operator=(const InstancePluginStatusSet &) = default ;
      InstancePluginStatusSet& operator=(InstancePluginStatusSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstancePluginStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstancePluginStatus& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PluginStatusSet, pluginStatusSet_);
        };
        friend void from_json(const Darabonba::Json& j, InstancePluginStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PluginStatusSet, pluginStatusSet_);
        };
        InstancePluginStatus() = default ;
        InstancePluginStatus(const InstancePluginStatus &) = default ;
        InstancePluginStatus(InstancePluginStatus &&) = default ;
        InstancePluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstancePluginStatus() = default ;
        InstancePluginStatus& operator=(const InstancePluginStatus &) = default ;
        InstancePluginStatus& operator=(InstancePluginStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PluginStatusSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PluginStatusSet& obj) { 
            DARABONBA_PTR_TO_JSON(PluginStatus, pluginStatus_);
          };
          friend void from_json(const Darabonba::Json& j, PluginStatusSet& obj) { 
            DARABONBA_PTR_FROM_JSON(PluginStatus, pluginStatus_);
          };
          PluginStatusSet() = default ;
          PluginStatusSet(const PluginStatusSet &) = default ;
          PluginStatusSet(PluginStatusSet &&) = default ;
          PluginStatusSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PluginStatusSet() = default ;
          PluginStatusSet& operator=(const PluginStatusSet &) = default ;
          PluginStatusSet& operator=(PluginStatusSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PluginStatus : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PluginStatus& obj) { 
              DARABONBA_PTR_TO_JSON(FirstHeartbeatTime, firstHeartbeatTime_);
              DARABONBA_PTR_TO_JSON(LastHeartbeatTime, lastHeartbeatTime_);
              DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
              DARABONBA_PTR_TO_JSON(PluginStatus, pluginStatus_);
              DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
            };
            friend void from_json(const Darabonba::Json& j, PluginStatus& obj) { 
              DARABONBA_PTR_FROM_JSON(FirstHeartbeatTime, firstHeartbeatTime_);
              DARABONBA_PTR_FROM_JSON(LastHeartbeatTime, lastHeartbeatTime_);
              DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
              DARABONBA_PTR_FROM_JSON(PluginStatus, pluginStatus_);
              DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
            };
            PluginStatus() = default ;
            PluginStatus(const PluginStatus &) = default ;
            PluginStatus(PluginStatus &&) = default ;
            PluginStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PluginStatus() = default ;
            PluginStatus& operator=(const PluginStatus &) = default ;
            PluginStatus& operator=(PluginStatus &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->firstHeartbeatTime_ == nullptr
        && this->lastHeartbeatTime_ == nullptr && this->pluginName_ == nullptr && this->pluginStatus_ == nullptr && this->pluginVersion_ == nullptr; };
            // firstHeartbeatTime Field Functions 
            bool hasFirstHeartbeatTime() const { return this->firstHeartbeatTime_ != nullptr;};
            void deleteFirstHeartbeatTime() { this->firstHeartbeatTime_ = nullptr;};
            inline string getFirstHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(firstHeartbeatTime_, "") };
            inline PluginStatus& setFirstHeartbeatTime(string firstHeartbeatTime) { DARABONBA_PTR_SET_VALUE(firstHeartbeatTime_, firstHeartbeatTime) };


            // lastHeartbeatTime Field Functions 
            bool hasLastHeartbeatTime() const { return this->lastHeartbeatTime_ != nullptr;};
            void deleteLastHeartbeatTime() { this->lastHeartbeatTime_ = nullptr;};
            inline string getLastHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(lastHeartbeatTime_, "") };
            inline PluginStatus& setLastHeartbeatTime(string lastHeartbeatTime) { DARABONBA_PTR_SET_VALUE(lastHeartbeatTime_, lastHeartbeatTime) };


            // pluginName Field Functions 
            bool hasPluginName() const { return this->pluginName_ != nullptr;};
            void deletePluginName() { this->pluginName_ = nullptr;};
            inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
            inline PluginStatus& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


            // pluginStatus Field Functions 
            bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
            void deletePluginStatus() { this->pluginStatus_ = nullptr;};
            inline string getPluginStatus() const { DARABONBA_PTR_GET_DEFAULT(pluginStatus_, "") };
            inline PluginStatus& setPluginStatus(string pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };


            // pluginVersion Field Functions 
            bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
            void deletePluginVersion() { this->pluginVersion_ = nullptr;};
            inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
            inline PluginStatus& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


          protected:
            // The first time when Cloud Assistant reported the state of the plug-in.
            shared_ptr<string> firstHeartbeatTime_ {};
            // The last time when Cloud Assistant reported the state of the plug-in.
            shared_ptr<string> lastHeartbeatTime_ {};
            // The name of the plug-in.
            shared_ptr<string> pluginName_ {};
            // The state of the Cloud Assistant plug-in. Valid values:
            // 
            // *   NotInstalled: The plug-in is not installed.
            // *   Installed: The one-time plug-in is installed.
            // *   Running: The long-running plug-in is running.
            // *   Stopped: The long-running plug-in is not running.
            // *   Crashed: The plug-in is abnormal.
            // *   Removed: The plug-in is uninstalled.
            // *   Unknown: The state of the plug-in is unknown.
            shared_ptr<string> pluginStatus_ {};
            // The version of the plug-in.
            shared_ptr<string> pluginVersion_ {};
          };

          virtual bool empty() const override { return this->pluginStatus_ == nullptr; };
          // pluginStatus Field Functions 
          bool hasPluginStatus() const { return this->pluginStatus_ != nullptr;};
          void deletePluginStatus() { this->pluginStatus_ = nullptr;};
          inline const vector<PluginStatusSet::PluginStatus> & getPluginStatus() const { DARABONBA_PTR_GET_CONST(pluginStatus_, vector<PluginStatusSet::PluginStatus>) };
          inline vector<PluginStatusSet::PluginStatus> getPluginStatus() { DARABONBA_PTR_GET(pluginStatus_, vector<PluginStatusSet::PluginStatus>) };
          inline PluginStatusSet& setPluginStatus(const vector<PluginStatusSet::PluginStatus> & pluginStatus) { DARABONBA_PTR_SET_VALUE(pluginStatus_, pluginStatus) };
          inline PluginStatusSet& setPluginStatus(vector<PluginStatusSet::PluginStatus> && pluginStatus) { DARABONBA_PTR_SET_RVALUE(pluginStatus_, pluginStatus) };


        protected:
          shared_ptr<vector<PluginStatusSet::PluginStatus>> pluginStatus_ {};
        };

        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pluginStatusSet_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstancePluginStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // pluginStatusSet Field Functions 
        bool hasPluginStatusSet() const { return this->pluginStatusSet_ != nullptr;};
        void deletePluginStatusSet() { this->pluginStatusSet_ = nullptr;};
        inline const InstancePluginStatus::PluginStatusSet & getPluginStatusSet() const { DARABONBA_PTR_GET_CONST(pluginStatusSet_, InstancePluginStatus::PluginStatusSet) };
        inline InstancePluginStatus::PluginStatusSet getPluginStatusSet() { DARABONBA_PTR_GET(pluginStatusSet_, InstancePluginStatus::PluginStatusSet) };
        inline InstancePluginStatus& setPluginStatusSet(const InstancePluginStatus::PluginStatusSet & pluginStatusSet) { DARABONBA_PTR_SET_VALUE(pluginStatusSet_, pluginStatusSet) };
        inline InstancePluginStatus& setPluginStatusSet(InstancePluginStatus::PluginStatusSet && pluginStatusSet) { DARABONBA_PTR_SET_RVALUE(pluginStatusSet_, pluginStatusSet) };


      protected:
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The queried Cloud Assistant plug-ins.
        shared_ptr<InstancePluginStatus::PluginStatusSet> pluginStatusSet_ {};
      };

      virtual bool empty() const override { return this->instancePluginStatus_ == nullptr; };
      // instancePluginStatus Field Functions 
      bool hasInstancePluginStatus() const { return this->instancePluginStatus_ != nullptr;};
      void deleteInstancePluginStatus() { this->instancePluginStatus_ = nullptr;};
      inline const vector<InstancePluginStatusSet::InstancePluginStatus> & getInstancePluginStatus() const { DARABONBA_PTR_GET_CONST(instancePluginStatus_, vector<InstancePluginStatusSet::InstancePluginStatus>) };
      inline vector<InstancePluginStatusSet::InstancePluginStatus> getInstancePluginStatus() { DARABONBA_PTR_GET(instancePluginStatus_, vector<InstancePluginStatusSet::InstancePluginStatus>) };
      inline InstancePluginStatusSet& setInstancePluginStatus(const vector<InstancePluginStatusSet::InstancePluginStatus> & instancePluginStatus) { DARABONBA_PTR_SET_VALUE(instancePluginStatus_, instancePluginStatus) };
      inline InstancePluginStatusSet& setInstancePluginStatus(vector<InstancePluginStatusSet::InstancePluginStatus> && instancePluginStatus) { DARABONBA_PTR_SET_RVALUE(instancePluginStatus_, instancePluginStatus) };


    protected:
      shared_ptr<vector<InstancePluginStatusSet::InstancePluginStatus>> instancePluginStatus_ {};
    };

    virtual bool empty() const override { return this->instancePluginStatusSet_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instancePluginStatusSet Field Functions 
    bool hasInstancePluginStatusSet() const { return this->instancePluginStatusSet_ != nullptr;};
    void deleteInstancePluginStatusSet() { this->instancePluginStatusSet_ = nullptr;};
    inline const ListPluginStatusResponseBody::InstancePluginStatusSet & getInstancePluginStatusSet() const { DARABONBA_PTR_GET_CONST(instancePluginStatusSet_, ListPluginStatusResponseBody::InstancePluginStatusSet) };
    inline ListPluginStatusResponseBody::InstancePluginStatusSet getInstancePluginStatusSet() { DARABONBA_PTR_GET(instancePluginStatusSet_, ListPluginStatusResponseBody::InstancePluginStatusSet) };
    inline ListPluginStatusResponseBody& setInstancePluginStatusSet(const ListPluginStatusResponseBody::InstancePluginStatusSet & instancePluginStatusSet) { DARABONBA_PTR_SET_VALUE(instancePluginStatusSet_, instancePluginStatusSet) };
    inline ListPluginStatusResponseBody& setInstancePluginStatusSet(ListPluginStatusResponseBody::InstancePluginStatusSet && instancePluginStatusSet) { DARABONBA_PTR_SET_RVALUE(instancePluginStatusSet_, instancePluginStatusSet) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPluginStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListPluginStatusResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListPluginStatusResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPluginStatusResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The states of Cloud Assistant plug-ins on the instances.
    shared_ptr<ListPluginStatusResponseBody::InstancePluginStatusSet> instancePluginStatusSet_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
