// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTDASHBOARDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetFileProtectDashboardResponseBody() = default ;
    GetFileProtectDashboardResponseBody(const GetFileProtectDashboardResponseBody &) = default ;
    GetFileProtectDashboardResponseBody(GetFileProtectDashboardResponseBody &&) = default ;
    GetFileProtectDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectDashboardResponseBody() = default ;
    GetFileProtectDashboardResponseBody& operator=(const GetFileProtectDashboardResponseBody &) = default ;
    GetFileProtectDashboardResponseBody& operator=(GetFileProtectDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableRuleCount, enableRuleCount_);
        DARABONBA_PTR_TO_JSON(PluginCount, pluginCount_);
        DARABONBA_PTR_TO_JSON(PluginOfflineCount, pluginOfflineCount_);
        DARABONBA_PTR_TO_JSON(PluginOnlineCount, pluginOnlineCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableRuleCount, enableRuleCount_);
        DARABONBA_PTR_FROM_JSON(PluginCount, pluginCount_);
        DARABONBA_PTR_FROM_JSON(PluginOfflineCount, pluginOfflineCount_);
        DARABONBA_PTR_FROM_JSON(PluginOnlineCount, pluginOnlineCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableRuleCount_ == nullptr
        && this->pluginCount_ == nullptr && this->pluginOfflineCount_ == nullptr && this->pluginOnlineCount_ == nullptr; };
      // enableRuleCount Field Functions 
      bool hasEnableRuleCount() const { return this->enableRuleCount_ != nullptr;};
      void deleteEnableRuleCount() { this->enableRuleCount_ = nullptr;};
      inline int32_t getEnableRuleCount() const { DARABONBA_PTR_GET_DEFAULT(enableRuleCount_, 0) };
      inline Data& setEnableRuleCount(int32_t enableRuleCount) { DARABONBA_PTR_SET_VALUE(enableRuleCount_, enableRuleCount) };


      // pluginCount Field Functions 
      bool hasPluginCount() const { return this->pluginCount_ != nullptr;};
      void deletePluginCount() { this->pluginCount_ = nullptr;};
      inline int32_t getPluginCount() const { DARABONBA_PTR_GET_DEFAULT(pluginCount_, 0) };
      inline Data& setPluginCount(int32_t pluginCount) { DARABONBA_PTR_SET_VALUE(pluginCount_, pluginCount) };


      // pluginOfflineCount Field Functions 
      bool hasPluginOfflineCount() const { return this->pluginOfflineCount_ != nullptr;};
      void deletePluginOfflineCount() { this->pluginOfflineCount_ = nullptr;};
      inline int32_t getPluginOfflineCount() const { DARABONBA_PTR_GET_DEFAULT(pluginOfflineCount_, 0) };
      inline Data& setPluginOfflineCount(int32_t pluginOfflineCount) { DARABONBA_PTR_SET_VALUE(pluginOfflineCount_, pluginOfflineCount) };


      // pluginOnlineCount Field Functions 
      bool hasPluginOnlineCount() const { return this->pluginOnlineCount_ != nullptr;};
      void deletePluginOnlineCount() { this->pluginOnlineCount_ = nullptr;};
      inline int32_t getPluginOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineCount_, 0) };
      inline Data& setPluginOnlineCount(int32_t pluginOnlineCount) { DARABONBA_PTR_SET_VALUE(pluginOnlineCount_, pluginOnlineCount) };


    protected:
      // The total number of enabled rules.
      shared_ptr<int32_t> enableRuleCount_ {};
      // The total number of servers on which the Security Center agent is installed.
      shared_ptr<int32_t> pluginCount_ {};
      // The total number of servers on which the Security Center agent is offline.
      shared_ptr<int32_t> pluginOfflineCount_ {};
      // The total number of servers on which the Security Center agent is online.
      shared_ptr<int32_t> pluginOnlineCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileProtectDashboardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileProtectDashboardResponseBody::Data) };
    inline GetFileProtectDashboardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileProtectDashboardResponseBody::Data) };
    inline GetFileProtectDashboardResponseBody& setData(const GetFileProtectDashboardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileProtectDashboardResponseBody& setData(GetFileProtectDashboardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileProtectDashboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<GetFileProtectDashboardResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
