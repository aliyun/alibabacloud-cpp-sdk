// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLUGINFORUUIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPluginForUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPluginForUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisUuidTargetPluginConfigList, aegisUuidTargetPluginConfigList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPluginForUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisUuidTargetPluginConfigList, aegisUuidTargetPluginConfigList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPluginForUuidResponseBody() = default ;
    ListPluginForUuidResponseBody(const ListPluginForUuidResponseBody &) = default ;
    ListPluginForUuidResponseBody(ListPluginForUuidResponseBody &&) = default ;
    ListPluginForUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPluginForUuidResponseBody() = default ;
    ListPluginForUuidResponseBody& operator=(const ListPluginForUuidResponseBody &) = default ;
    ListPluginForUuidResponseBody& operator=(ListPluginForUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AegisUuidTargetPluginConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AegisUuidTargetPluginConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AegisSuspiciousConfigList, aegisSuspiciousConfigList_);
        DARABONBA_PTR_TO_JSON(PluginInstallCode, pluginInstallCode_);
        DARABONBA_PTR_TO_JSON(PluginName, pluginName_);
        DARABONBA_PTR_TO_JSON(PluginOnlineInstalled, pluginOnlineInstalled_);
        DARABONBA_PTR_TO_JSON(PluginOnlineStatus, pluginOnlineStatus_);
        DARABONBA_PTR_TO_JSON(PluginVersion, pluginVersion_);
      };
      friend void from_json(const Darabonba::Json& j, AegisUuidTargetPluginConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AegisSuspiciousConfigList, aegisSuspiciousConfigList_);
        DARABONBA_PTR_FROM_JSON(PluginInstallCode, pluginInstallCode_);
        DARABONBA_PTR_FROM_JSON(PluginName, pluginName_);
        DARABONBA_PTR_FROM_JSON(PluginOnlineInstalled, pluginOnlineInstalled_);
        DARABONBA_PTR_FROM_JSON(PluginOnlineStatus, pluginOnlineStatus_);
        DARABONBA_PTR_FROM_JSON(PluginVersion, pluginVersion_);
      };
      AegisUuidTargetPluginConfigList() = default ;
      AegisUuidTargetPluginConfigList(const AegisUuidTargetPluginConfigList &) = default ;
      AegisUuidTargetPluginConfigList(AegisUuidTargetPluginConfigList &&) = default ;
      AegisUuidTargetPluginConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AegisUuidTargetPluginConfigList() = default ;
      AegisUuidTargetPluginConfigList& operator=(const AegisUuidTargetPluginConfigList &) = default ;
      AegisUuidTargetPluginConfigList& operator=(AegisUuidTargetPluginConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AegisSuspiciousConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AegisSuspiciousConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AegisSuspiciousConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AegisSuspiciousConfigList() = default ;
        AegisSuspiciousConfigList(const AegisSuspiciousConfigList &) = default ;
        AegisSuspiciousConfigList(AegisSuspiciousConfigList &&) = default ;
        AegisSuspiciousConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AegisSuspiciousConfigList() = default ;
        AegisSuspiciousConfigList& operator=(const AegisSuspiciousConfigList &) = default ;
        AegisSuspiciousConfigList& operator=(AegisSuspiciousConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->msg_ == nullptr && this->overallConfig_ == nullptr && this->type_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline bool getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, false) };
        inline AegisSuspiciousConfigList& setConfig(bool config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline AegisSuspiciousConfigList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // overallConfig Field Functions 
        bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
        void deleteOverallConfig() { this->overallConfig_ = nullptr;};
        inline bool getOverallConfig() const { DARABONBA_PTR_GET_DEFAULT(overallConfig_, false) };
        inline AegisSuspiciousConfigList& setOverallConfig(bool overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AegisSuspiciousConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // Indicates whether the plug-in is enabled. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> config_ {};
        // The message that indicates whether you are authorized to install the plug-in on your server or whether the plug-in is installed on your server. Valid values:
        // 
        // *   **authorized**: authorized
        // *   **unauthorized**: unauthorized
        // *   **unbind**: not installed
        // *   **nonsupport**: not supported
        shared_ptr<string> msg_ {};
        // Indicates whether the plug-in is globally configured. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> overallConfig_ {};
        // The name of the plug-in. Valid values:
        // 
        // *   **alihips**: trojan-specific prevention
        // *   **alisecguard**: attack-specific prevention
        // *   **alinet**: defense against attacks on servers
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->aegisSuspiciousConfigList_ == nullptr
        && this->pluginInstallCode_ == nullptr && this->pluginName_ == nullptr && this->pluginOnlineInstalled_ == nullptr && this->pluginOnlineStatus_ == nullptr && this->pluginVersion_ == nullptr; };
      // aegisSuspiciousConfigList Field Functions 
      bool hasAegisSuspiciousConfigList() const { return this->aegisSuspiciousConfigList_ != nullptr;};
      void deleteAegisSuspiciousConfigList() { this->aegisSuspiciousConfigList_ = nullptr;};
      inline const vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList> & getAegisSuspiciousConfigList() const { DARABONBA_PTR_GET_CONST(aegisSuspiciousConfigList_, vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList>) };
      inline vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList> getAegisSuspiciousConfigList() { DARABONBA_PTR_GET(aegisSuspiciousConfigList_, vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList>) };
      inline AegisUuidTargetPluginConfigList& setAegisSuspiciousConfigList(const vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList> & aegisSuspiciousConfigList) { DARABONBA_PTR_SET_VALUE(aegisSuspiciousConfigList_, aegisSuspiciousConfigList) };
      inline AegisUuidTargetPluginConfigList& setAegisSuspiciousConfigList(vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList> && aegisSuspiciousConfigList) { DARABONBA_PTR_SET_RVALUE(aegisSuspiciousConfigList_, aegisSuspiciousConfigList) };


      // pluginInstallCode Field Functions 
      bool hasPluginInstallCode() const { return this->pluginInstallCode_ != nullptr;};
      void deletePluginInstallCode() { this->pluginInstallCode_ = nullptr;};
      inline string getPluginInstallCode() const { DARABONBA_PTR_GET_DEFAULT(pluginInstallCode_, "") };
      inline AegisUuidTargetPluginConfigList& setPluginInstallCode(string pluginInstallCode) { DARABONBA_PTR_SET_VALUE(pluginInstallCode_, pluginInstallCode) };


      // pluginName Field Functions 
      bool hasPluginName() const { return this->pluginName_ != nullptr;};
      void deletePluginName() { this->pluginName_ = nullptr;};
      inline string getPluginName() const { DARABONBA_PTR_GET_DEFAULT(pluginName_, "") };
      inline AegisUuidTargetPluginConfigList& setPluginName(string pluginName) { DARABONBA_PTR_SET_VALUE(pluginName_, pluginName) };


      // pluginOnlineInstalled Field Functions 
      bool hasPluginOnlineInstalled() const { return this->pluginOnlineInstalled_ != nullptr;};
      void deletePluginOnlineInstalled() { this->pluginOnlineInstalled_ = nullptr;};
      inline bool getPluginOnlineInstalled() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineInstalled_, false) };
      inline AegisUuidTargetPluginConfigList& setPluginOnlineInstalled(bool pluginOnlineInstalled) { DARABONBA_PTR_SET_VALUE(pluginOnlineInstalled_, pluginOnlineInstalled) };


      // pluginOnlineStatus Field Functions 
      bool hasPluginOnlineStatus() const { return this->pluginOnlineStatus_ != nullptr;};
      void deletePluginOnlineStatus() { this->pluginOnlineStatus_ = nullptr;};
      inline bool getPluginOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(pluginOnlineStatus_, false) };
      inline AegisUuidTargetPluginConfigList& setPluginOnlineStatus(bool pluginOnlineStatus) { DARABONBA_PTR_SET_VALUE(pluginOnlineStatus_, pluginOnlineStatus) };


      // pluginVersion Field Functions 
      bool hasPluginVersion() const { return this->pluginVersion_ != nullptr;};
      void deletePluginVersion() { this->pluginVersion_ = nullptr;};
      inline string getPluginVersion() const { DARABONBA_PTR_GET_DEFAULT(pluginVersion_, "") };
      inline AegisUuidTargetPluginConfigList& setPluginVersion(string pluginVersion) { DARABONBA_PTR_SET_VALUE(pluginVersion_, pluginVersion) };


    protected:
      // An array that consists of the configurations of plug-ins.
      shared_ptr<vector<AegisUuidTargetPluginConfigList::AegisSuspiciousConfigList>> aegisSuspiciousConfigList_ {};
      // The installation code of the plug-in.
      shared_ptr<string> pluginInstallCode_ {};
      // The name of the plug-in. Valid values:
      // 
      // *   **alihips**: trojan-specific prevention
      // *   **alisecguard**: attack-specific prevention
      // *   **alinet**: defense against attacks on servers
      shared_ptr<string> pluginName_ {};
      // Indicates whether the plug-in is installed. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> pluginOnlineInstalled_ {};
      // Indicates whether the plug-in is online. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> pluginOnlineStatus_ {};
      // The version of the plug-in.
      shared_ptr<string> pluginVersion_ {};
    };

    virtual bool empty() const override { return this->aegisUuidTargetPluginConfigList_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // aegisUuidTargetPluginConfigList Field Functions 
    bool hasAegisUuidTargetPluginConfigList() const { return this->aegisUuidTargetPluginConfigList_ != nullptr;};
    void deleteAegisUuidTargetPluginConfigList() { this->aegisUuidTargetPluginConfigList_ = nullptr;};
    inline const vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList> & getAegisUuidTargetPluginConfigList() const { DARABONBA_PTR_GET_CONST(aegisUuidTargetPluginConfigList_, vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList>) };
    inline vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList> getAegisUuidTargetPluginConfigList() { DARABONBA_PTR_GET(aegisUuidTargetPluginConfigList_, vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList>) };
    inline ListPluginForUuidResponseBody& setAegisUuidTargetPluginConfigList(const vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList> & aegisUuidTargetPluginConfigList) { DARABONBA_PTR_SET_VALUE(aegisUuidTargetPluginConfigList_, aegisUuidTargetPluginConfigList) };
    inline ListPluginForUuidResponseBody& setAegisUuidTargetPluginConfigList(vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList> && aegisUuidTargetPluginConfigList) { DARABONBA_PTR_SET_RVALUE(aegisUuidTargetPluginConfigList_, aegisUuidTargetPluginConfigList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListPluginForUuidResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPluginForUuidResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPluginForUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about the plug-ins.
    shared_ptr<vector<ListPluginForUuidResponseBody::AegisUuidTargetPluginConfigList>> aegisUuidTargetPluginConfigList_ {};
    // The status code returned. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<int32_t> code_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
