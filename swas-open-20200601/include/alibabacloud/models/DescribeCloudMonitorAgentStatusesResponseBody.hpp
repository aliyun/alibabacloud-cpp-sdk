// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDMONITORAGENTSTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDMONITORAGENTSTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeCloudMonitorAgentStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudMonitorAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudMonitorAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusList, instanceStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudMonitorAgentStatusesResponseBody() = default ;
    DescribeCloudMonitorAgentStatusesResponseBody(const DescribeCloudMonitorAgentStatusesResponseBody &) = default ;
    DescribeCloudMonitorAgentStatusesResponseBody(DescribeCloudMonitorAgentStatusesResponseBody &&) = default ;
    DescribeCloudMonitorAgentStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudMonitorAgentStatusesResponseBody() = default ;
    DescribeCloudMonitorAgentStatusesResponseBody& operator=(const DescribeCloudMonitorAgentStatusesResponseBody &) = default ;
    DescribeCloudMonitorAgentStatusesResponseBody& operator=(DescribeCloudMonitorAgentStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstanceStatusList() = default ;
      InstanceStatusList(const InstanceStatusList &) = default ;
      InstanceStatusList(InstanceStatusList &&) = default ;
      InstanceStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatusList() = default ;
      InstanceStatusList& operator=(const InstanceStatusList &) = default ;
      InstanceStatusList& operator=(InstanceStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoInstall_ == nullptr
        && this->instanceId_ == nullptr && this->status_ == nullptr; };
      // autoInstall Field Functions 
      bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
      void deleteAutoInstall() { this->autoInstall_ = nullptr;};
      inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
      inline InstanceStatusList& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceStatusList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the Cloud Monitor agent was automatically installed on the simple application server. Valid values:
      // 
      // - true
      // 
      // - false
      shared_ptr<bool> autoInstall_ {};
      // The ID of the simple application server.
      shared_ptr<string> instanceId_ {};
      // The running status of the Cloud Monitoring plug-in. Possible values are:
      // 
      // - running: Cloud Monitoring plug-in running.
      // 
      // - stopped: Cloud Monitoring plug-in stopped.
      // 
      // - installing: Cloud Monitoring plug-in installing.
      // 
      // - install_faild: Cloud Monitoring plug-in installation failed.
      // 
      // - abnormal: Cloud Monitoring plug-in installation abnormal.
      // 
      // - not_installed: Cloud Monitoring plug-in not installed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceStatusList_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceStatusList Field Functions 
    bool hasInstanceStatusList() const { return this->instanceStatusList_ != nullptr;};
    void deleteInstanceStatusList() { this->instanceStatusList_ = nullptr;};
    inline const vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList> & getInstanceStatusList() const { DARABONBA_PTR_GET_CONST(instanceStatusList_, vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList>) };
    inline vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList> getInstanceStatusList() { DARABONBA_PTR_GET(instanceStatusList_, vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList>) };
    inline DescribeCloudMonitorAgentStatusesResponseBody& setInstanceStatusList(const vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList> & instanceStatusList) { DARABONBA_PTR_SET_VALUE(instanceStatusList_, instanceStatusList) };
    inline DescribeCloudMonitorAgentStatusesResponseBody& setInstanceStatusList(vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList> && instanceStatusList) { DARABONBA_PTR_SET_RVALUE(instanceStatusList_, instanceStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudMonitorAgentStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the Cloud Monitor agent was automatically installed on the simple application server.
    shared_ptr<vector<DescribeCloudMonitorAgentStatusesResponseBody::InstanceStatusList>> instanceStatusList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
