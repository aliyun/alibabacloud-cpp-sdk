// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDLPOUTBOUNDLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDLPOUTBOUNDLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDlpOutboundLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDlpOutboundLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListDlpOutboundLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    ListDlpOutboundLogsResponseBody() = default ;
    ListDlpOutboundLogsResponseBody(const ListDlpOutboundLogsResponseBody &) = default ;
    ListDlpOutboundLogsResponseBody(ListDlpOutboundLogsResponseBody &&) = default ;
    ListDlpOutboundLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDlpOutboundLogsResponseBody() = default ;
    ListDlpOutboundLogsResponseBody& operator=(const ListDlpOutboundLogsResponseBody &) = default ;
    ListDlpOutboundLogsResponseBody& operator=(ListDlpOutboundLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DevFilePath, devFilePath_);
        DARABONBA_PTR_TO_JSON(DeviceTag, deviceTag_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(DlpStorageConfigId, dlpStorageConfigId_);
        DARABONBA_PTR_TO_JSON(DlpStorageType, dlpStorageType_);
        DARABONBA_PTR_TO_JSON(DstAddr, dstAddr_);
        DARABONBA_PTR_TO_JSON(FileOrigin, fileOrigin_);
        DARABONBA_PTR_TO_JSON(FileOriginHost, fileOriginHost_);
        DARABONBA_PTR_TO_JSON(FileOriginReferrer, fileOriginReferrer_);
        DARABONBA_PTR_TO_JSON(FilePreview, filePreview_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(LogId, logId_);
        DARABONBA_PTR_TO_JSON(MatchedDicts, matchedDicts_);
        DARABONBA_PTR_TO_JSON(MatchedPolicies, matchedPolicies_);
        DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_TO_JSON(PolicyAction, policyAction_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(ProcessNameDesc, processNameDesc_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(ScreenFilePath, screenFilePath_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SrcFileName, srcFileName_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DevFilePath, devFilePath_);
        DARABONBA_PTR_FROM_JSON(DeviceTag, deviceTag_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(DlpStorageConfigId, dlpStorageConfigId_);
        DARABONBA_PTR_FROM_JSON(DlpStorageType, dlpStorageType_);
        DARABONBA_PTR_FROM_JSON(DstAddr, dstAddr_);
        DARABONBA_PTR_FROM_JSON(FileOrigin, fileOrigin_);
        DARABONBA_PTR_FROM_JSON(FileOriginHost, fileOriginHost_);
        DARABONBA_PTR_FROM_JSON(FileOriginReferrer, fileOriginReferrer_);
        DARABONBA_PTR_FROM_JSON(FilePreview, filePreview_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(LogId, logId_);
        DARABONBA_PTR_FROM_JSON(MatchedDicts, matchedDicts_);
        DARABONBA_PTR_FROM_JSON(MatchedPolicies, matchedPolicies_);
        DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_FROM_JSON(PolicyAction, policyAction_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(ProcessNameDesc, processNameDesc_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(ScreenFilePath, screenFilePath_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SrcFileName, srcFileName_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MatchedPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchedPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(EngineDataLevel, engineDataLevel_);
          DARABONBA_PTR_TO_JSON(EngineDataType, engineDataType_);
          DARABONBA_PTR_TO_JSON(EngineName, engineName_);
          DARABONBA_PTR_TO_JSON(PolicyDesc, policyDesc_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        };
        friend void from_json(const Darabonba::Json& j, MatchedPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(EngineDataLevel, engineDataLevel_);
          DARABONBA_PTR_FROM_JSON(EngineDataType, engineDataType_);
          DARABONBA_PTR_FROM_JSON(EngineName, engineName_);
          DARABONBA_PTR_FROM_JSON(PolicyDesc, policyDesc_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        };
        MatchedPolicies() = default ;
        MatchedPolicies(const MatchedPolicies &) = default ;
        MatchedPolicies(MatchedPolicies &&) = default ;
        MatchedPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchedPolicies() = default ;
        MatchedPolicies& operator=(const MatchedPolicies &) = default ;
        MatchedPolicies& operator=(MatchedPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->engineDataLevel_ == nullptr
        && this->engineDataType_ == nullptr && this->engineName_ == nullptr && this->policyDesc_ == nullptr && this->policyName_ == nullptr; };
        // engineDataLevel Field Functions 
        bool hasEngineDataLevel() const { return this->engineDataLevel_ != nullptr;};
        void deleteEngineDataLevel() { this->engineDataLevel_ = nullptr;};
        inline string getEngineDataLevel() const { DARABONBA_PTR_GET_DEFAULT(engineDataLevel_, "") };
        inline MatchedPolicies& setEngineDataLevel(string engineDataLevel) { DARABONBA_PTR_SET_VALUE(engineDataLevel_, engineDataLevel) };


        // engineDataType Field Functions 
        bool hasEngineDataType() const { return this->engineDataType_ != nullptr;};
        void deleteEngineDataType() { this->engineDataType_ = nullptr;};
        inline string getEngineDataType() const { DARABONBA_PTR_GET_DEFAULT(engineDataType_, "") };
        inline MatchedPolicies& setEngineDataType(string engineDataType) { DARABONBA_PTR_SET_VALUE(engineDataType_, engineDataType) };


        // engineName Field Functions 
        bool hasEngineName() const { return this->engineName_ != nullptr;};
        void deleteEngineName() { this->engineName_ = nullptr;};
        inline string getEngineName() const { DARABONBA_PTR_GET_DEFAULT(engineName_, "") };
        inline MatchedPolicies& setEngineName(string engineName) { DARABONBA_PTR_SET_VALUE(engineName_, engineName) };


        // policyDesc Field Functions 
        bool hasPolicyDesc() const { return this->policyDesc_ != nullptr;};
        void deletePolicyDesc() { this->policyDesc_ = nullptr;};
        inline string getPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(policyDesc_, "") };
        inline MatchedPolicies& setPolicyDesc(string policyDesc) { DARABONBA_PTR_SET_VALUE(policyDesc_, policyDesc) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline MatchedPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      protected:
        // The corresponding data level.
        shared_ptr<string> engineDataLevel_ {};
        // The corresponding data type.
        shared_ptr<string> engineDataType_ {};
        // The matched detection rule name.
        shared_ptr<string> engineName_ {};
        // The policy description.
        shared_ptr<string> policyDesc_ {};
        // The matched policy name.
        shared_ptr<string> policyName_ {};
      };

      class MatchedDicts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MatchedDicts& obj) { 
          DARABONBA_PTR_TO_JSON(InnerDicts, innerDicts_);
          DARABONBA_PTR_TO_JSON(Keywords, keywords_);
          DARABONBA_PTR_TO_JSON(UserDicts, userDicts_);
        };
        friend void from_json(const Darabonba::Json& j, MatchedDicts& obj) { 
          DARABONBA_PTR_FROM_JSON(InnerDicts, innerDicts_);
          DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
          DARABONBA_PTR_FROM_JSON(UserDicts, userDicts_);
        };
        MatchedDicts() = default ;
        MatchedDicts(const MatchedDicts &) = default ;
        MatchedDicts(MatchedDicts &&) = default ;
        MatchedDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MatchedDicts() = default ;
        MatchedDicts& operator=(const MatchedDicts &) = default ;
        MatchedDicts& operator=(MatchedDicts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserDicts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserDicts& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, UserDicts& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          UserDicts() = default ;
          UserDicts(const UserDicts &) = default ;
          UserDicts(UserDicts &&) = default ;
          UserDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserDicts() = default ;
          UserDicts& operator=(const UserDicts &) = default ;
          UserDicts& operator=(UserDicts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline UserDicts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline UserDicts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The number of matches.
          shared_ptr<int64_t> count_ {};
          // The dictionary name.
          shared_ptr<string> name_ {};
        };

        class Keywords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Keywords& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Keywords& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Keywords() = default ;
          Keywords(const Keywords &) = default ;
          Keywords(Keywords &&) = default ;
          Keywords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Keywords() = default ;
          Keywords& operator=(const Keywords &) = default ;
          Keywords& operator=(Keywords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline Keywords& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Keywords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The number of matches.
          shared_ptr<int64_t> count_ {};
          // The keyword name.
          shared_ptr<string> name_ {};
        };

        class InnerDicts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InnerDicts& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, InnerDicts& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          InnerDicts() = default ;
          InnerDicts(const InnerDicts &) = default ;
          InnerDicts(InnerDicts &&) = default ;
          InnerDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InnerDicts() = default ;
          InnerDicts& operator=(const InnerDicts &) = default ;
          InnerDicts& operator=(InnerDicts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline InnerDicts& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline InnerDicts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The number of matches.
          shared_ptr<int64_t> count_ {};
          // The dictionary name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->innerDicts_ == nullptr
        && this->keywords_ == nullptr && this->userDicts_ == nullptr; };
        // innerDicts Field Functions 
        bool hasInnerDicts() const { return this->innerDicts_ != nullptr;};
        void deleteInnerDicts() { this->innerDicts_ = nullptr;};
        inline const vector<MatchedDicts::InnerDicts> & getInnerDicts() const { DARABONBA_PTR_GET_CONST(innerDicts_, vector<MatchedDicts::InnerDicts>) };
        inline vector<MatchedDicts::InnerDicts> getInnerDicts() { DARABONBA_PTR_GET(innerDicts_, vector<MatchedDicts::InnerDicts>) };
        inline MatchedDicts& setInnerDicts(const vector<MatchedDicts::InnerDicts> & innerDicts) { DARABONBA_PTR_SET_VALUE(innerDicts_, innerDicts) };
        inline MatchedDicts& setInnerDicts(vector<MatchedDicts::InnerDicts> && innerDicts) { DARABONBA_PTR_SET_RVALUE(innerDicts_, innerDicts) };


        // keywords Field Functions 
        bool hasKeywords() const { return this->keywords_ != nullptr;};
        void deleteKeywords() { this->keywords_ = nullptr;};
        inline const vector<MatchedDicts::Keywords> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<MatchedDicts::Keywords>) };
        inline vector<MatchedDicts::Keywords> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<MatchedDicts::Keywords>) };
        inline MatchedDicts& setKeywords(const vector<MatchedDicts::Keywords> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
        inline MatchedDicts& setKeywords(vector<MatchedDicts::Keywords> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


        // userDicts Field Functions 
        bool hasUserDicts() const { return this->userDicts_ != nullptr;};
        void deleteUserDicts() { this->userDicts_ = nullptr;};
        inline const vector<MatchedDicts::UserDicts> & getUserDicts() const { DARABONBA_PTR_GET_CONST(userDicts_, vector<MatchedDicts::UserDicts>) };
        inline vector<MatchedDicts::UserDicts> getUserDicts() { DARABONBA_PTR_GET(userDicts_, vector<MatchedDicts::UserDicts>) };
        inline MatchedDicts& setUserDicts(const vector<MatchedDicts::UserDicts> & userDicts) { DARABONBA_PTR_SET_VALUE(userDicts_, userDicts) };
        inline MatchedDicts& setUserDicts(vector<MatchedDicts::UserDicts> && userDicts) { DARABONBA_PTR_SET_RVALUE(userDicts_, userDicts) };


      protected:
        // The matched built-in dictionaries.
        shared_ptr<vector<MatchedDicts::InnerDicts>> innerDicts_ {};
        // The matched keywords.
        shared_ptr<vector<MatchedDicts::Keywords>> keywords_ {};
        // The matched built-in dictionaries.
        shared_ptr<vector<MatchedDicts::UserDicts>> userDicts_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->channelId_ == nullptr && this->channelType_ == nullptr && this->department_ == nullptr && this->devFilePath_ == nullptr && this->deviceTag_ == nullptr
        && this->deviceType_ == nullptr && this->dlpStorageConfigId_ == nullptr && this->dlpStorageType_ == nullptr && this->dstAddr_ == nullptr && this->fileOrigin_ == nullptr
        && this->fileOriginHost_ == nullptr && this->fileOriginReferrer_ == nullptr && this->filePreview_ == nullptr && this->format_ == nullptr && this->groupInfo_ == nullptr
        && this->hostName_ == nullptr && this->logId_ == nullptr && this->matchedDicts_ == nullptr && this->matchedPolicies_ == nullptr && this->ossFileName_ == nullptr
        && this->policyAction_ == nullptr && this->policyName_ == nullptr && this->processName_ == nullptr && this->processNameDesc_ == nullptr && this->riskLevel_ == nullptr
        && this->scene_ == nullptr && this->screenFilePath_ == nullptr && this->size_ == nullptr && this->srcFileName_ == nullptr && this->srcIp_ == nullptr
        && this->startTime_ == nullptr && this->uploadTime_ == nullptr && this->user_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Logs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Logs& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Logs& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline Logs& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // devFilePath Field Functions 
      bool hasDevFilePath() const { return this->devFilePath_ != nullptr;};
      void deleteDevFilePath() { this->devFilePath_ = nullptr;};
      inline string getDevFilePath() const { DARABONBA_PTR_GET_DEFAULT(devFilePath_, "") };
      inline Logs& setDevFilePath(string devFilePath) { DARABONBA_PTR_SET_VALUE(devFilePath_, devFilePath) };


      // deviceTag Field Functions 
      bool hasDeviceTag() const { return this->deviceTag_ != nullptr;};
      void deleteDeviceTag() { this->deviceTag_ = nullptr;};
      inline string getDeviceTag() const { DARABONBA_PTR_GET_DEFAULT(deviceTag_, "") };
      inline Logs& setDeviceTag(string deviceTag) { DARABONBA_PTR_SET_VALUE(deviceTag_, deviceTag) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline Logs& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // dlpStorageConfigId Field Functions 
      bool hasDlpStorageConfigId() const { return this->dlpStorageConfigId_ != nullptr;};
      void deleteDlpStorageConfigId() { this->dlpStorageConfigId_ = nullptr;};
      inline string getDlpStorageConfigId() const { DARABONBA_PTR_GET_DEFAULT(dlpStorageConfigId_, "") };
      inline Logs& setDlpStorageConfigId(string dlpStorageConfigId) { DARABONBA_PTR_SET_VALUE(dlpStorageConfigId_, dlpStorageConfigId) };


      // dlpStorageType Field Functions 
      bool hasDlpStorageType() const { return this->dlpStorageType_ != nullptr;};
      void deleteDlpStorageType() { this->dlpStorageType_ = nullptr;};
      inline string getDlpStorageType() const { DARABONBA_PTR_GET_DEFAULT(dlpStorageType_, "") };
      inline Logs& setDlpStorageType(string dlpStorageType) { DARABONBA_PTR_SET_VALUE(dlpStorageType_, dlpStorageType) };


      // dstAddr Field Functions 
      bool hasDstAddr() const { return this->dstAddr_ != nullptr;};
      void deleteDstAddr() { this->dstAddr_ = nullptr;};
      inline string getDstAddr() const { DARABONBA_PTR_GET_DEFAULT(dstAddr_, "") };
      inline Logs& setDstAddr(string dstAddr) { DARABONBA_PTR_SET_VALUE(dstAddr_, dstAddr) };


      // fileOrigin Field Functions 
      bool hasFileOrigin() const { return this->fileOrigin_ != nullptr;};
      void deleteFileOrigin() { this->fileOrigin_ = nullptr;};
      inline string getFileOrigin() const { DARABONBA_PTR_GET_DEFAULT(fileOrigin_, "") };
      inline Logs& setFileOrigin(string fileOrigin) { DARABONBA_PTR_SET_VALUE(fileOrigin_, fileOrigin) };


      // fileOriginHost Field Functions 
      bool hasFileOriginHost() const { return this->fileOriginHost_ != nullptr;};
      void deleteFileOriginHost() { this->fileOriginHost_ = nullptr;};
      inline string getFileOriginHost() const { DARABONBA_PTR_GET_DEFAULT(fileOriginHost_, "") };
      inline Logs& setFileOriginHost(string fileOriginHost) { DARABONBA_PTR_SET_VALUE(fileOriginHost_, fileOriginHost) };


      // fileOriginReferrer Field Functions 
      bool hasFileOriginReferrer() const { return this->fileOriginReferrer_ != nullptr;};
      void deleteFileOriginReferrer() { this->fileOriginReferrer_ = nullptr;};
      inline string getFileOriginReferrer() const { DARABONBA_PTR_GET_DEFAULT(fileOriginReferrer_, "") };
      inline Logs& setFileOriginReferrer(string fileOriginReferrer) { DARABONBA_PTR_SET_VALUE(fileOriginReferrer_, fileOriginReferrer) };


      // filePreview Field Functions 
      bool hasFilePreview() const { return this->filePreview_ != nullptr;};
      void deleteFilePreview() { this->filePreview_ = nullptr;};
      inline string getFilePreview() const { DARABONBA_PTR_GET_DEFAULT(filePreview_, "") };
      inline Logs& setFilePreview(string filePreview) { DARABONBA_PTR_SET_VALUE(filePreview_, filePreview) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Logs& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // groupInfo Field Functions 
      bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
      void deleteGroupInfo() { this->groupInfo_ = nullptr;};
      inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
      inline Logs& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline Logs& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // logId Field Functions 
      bool hasLogId() const { return this->logId_ != nullptr;};
      void deleteLogId() { this->logId_ = nullptr;};
      inline string getLogId() const { DARABONBA_PTR_GET_DEFAULT(logId_, "") };
      inline Logs& setLogId(string logId) { DARABONBA_PTR_SET_VALUE(logId_, logId) };


      // matchedDicts Field Functions 
      bool hasMatchedDicts() const { return this->matchedDicts_ != nullptr;};
      void deleteMatchedDicts() { this->matchedDicts_ = nullptr;};
      inline const Logs::MatchedDicts & getMatchedDicts() const { DARABONBA_PTR_GET_CONST(matchedDicts_, Logs::MatchedDicts) };
      inline Logs::MatchedDicts getMatchedDicts() { DARABONBA_PTR_GET(matchedDicts_, Logs::MatchedDicts) };
      inline Logs& setMatchedDicts(const Logs::MatchedDicts & matchedDicts) { DARABONBA_PTR_SET_VALUE(matchedDicts_, matchedDicts) };
      inline Logs& setMatchedDicts(Logs::MatchedDicts && matchedDicts) { DARABONBA_PTR_SET_RVALUE(matchedDicts_, matchedDicts) };


      // matchedPolicies Field Functions 
      bool hasMatchedPolicies() const { return this->matchedPolicies_ != nullptr;};
      void deleteMatchedPolicies() { this->matchedPolicies_ = nullptr;};
      inline const vector<Logs::MatchedPolicies> & getMatchedPolicies() const { DARABONBA_PTR_GET_CONST(matchedPolicies_, vector<Logs::MatchedPolicies>) };
      inline vector<Logs::MatchedPolicies> getMatchedPolicies() { DARABONBA_PTR_GET(matchedPolicies_, vector<Logs::MatchedPolicies>) };
      inline Logs& setMatchedPolicies(const vector<Logs::MatchedPolicies> & matchedPolicies) { DARABONBA_PTR_SET_VALUE(matchedPolicies_, matchedPolicies) };
      inline Logs& setMatchedPolicies(vector<Logs::MatchedPolicies> && matchedPolicies) { DARABONBA_PTR_SET_RVALUE(matchedPolicies_, matchedPolicies) };


      // ossFileName Field Functions 
      bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
      void deleteOssFileName() { this->ossFileName_ = nullptr;};
      inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
      inline Logs& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


      // policyAction Field Functions 
      bool hasPolicyAction() const { return this->policyAction_ != nullptr;};
      void deletePolicyAction() { this->policyAction_ = nullptr;};
      inline string getPolicyAction() const { DARABONBA_PTR_GET_DEFAULT(policyAction_, "") };
      inline Logs& setPolicyAction(string policyAction) { DARABONBA_PTR_SET_VALUE(policyAction_, policyAction) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline const vector<string> & getPolicyName() const { DARABONBA_PTR_GET_CONST(policyName_, vector<string>) };
      inline vector<string> getPolicyName() { DARABONBA_PTR_GET(policyName_, vector<string>) };
      inline Logs& setPolicyName(const vector<string> & policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };
      inline Logs& setPolicyName(vector<string> && policyName) { DARABONBA_PTR_SET_RVALUE(policyName_, policyName) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Logs& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // processNameDesc Field Functions 
      bool hasProcessNameDesc() const { return this->processNameDesc_ != nullptr;};
      void deleteProcessNameDesc() { this->processNameDesc_ = nullptr;};
      inline string getProcessNameDesc() const { DARABONBA_PTR_GET_DEFAULT(processNameDesc_, "") };
      inline Logs& setProcessNameDesc(string processNameDesc) { DARABONBA_PTR_SET_VALUE(processNameDesc_, processNameDesc) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Logs& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Logs& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // screenFilePath Field Functions 
      bool hasScreenFilePath() const { return this->screenFilePath_ != nullptr;};
      void deleteScreenFilePath() { this->screenFilePath_ = nullptr;};
      inline string getScreenFilePath() const { DARABONBA_PTR_GET_DEFAULT(screenFilePath_, "") };
      inline Logs& setScreenFilePath(string screenFilePath) { DARABONBA_PTR_SET_VALUE(screenFilePath_, screenFilePath) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Logs& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // srcFileName Field Functions 
      bool hasSrcFileName() const { return this->srcFileName_ != nullptr;};
      void deleteSrcFileName() { this->srcFileName_ = nullptr;};
      inline string getSrcFileName() const { DARABONBA_PTR_GET_DEFAULT(srcFileName_, "") };
      inline Logs& setSrcFileName(string srcFileName) { DARABONBA_PTR_SET_VALUE(srcFileName_, srcFileName) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline Logs& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Logs& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline Logs& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Logs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The file category.
      shared_ptr<string> category_ {};
      // The primary channel ID.
      shared_ptr<string> channelId_ {};
      // The primary channel.
      shared_ptr<string> channelType_ {};
      // The department.
      shared_ptr<string> department_ {};
      // The local path of the file on the device.
      shared_ptr<string> devFilePath_ {};
      // The unique identifier of the device.
      shared_ptr<string> deviceTag_ {};
      // The device type.
      shared_ptr<string> deviceType_ {};
      // The storage policy ID.
      shared_ptr<string> dlpStorageConfigId_ {};
      // The storage type.
      shared_ptr<string> dlpStorageType_ {};
      // The outbound destination address or URL.
      shared_ptr<string> dstAddr_ {};
      // The file source.
      shared_ptr<string> fileOrigin_ {};
      // The host of the file source.
      shared_ptr<string> fileOriginHost_ {};
      // The referrer of the file source.
      shared_ptr<string> fileOriginReferrer_ {};
      // The file content preview snippet.
      shared_ptr<string> filePreview_ {};
      // The file type.
      shared_ptr<string> format_ {};
      // The organizational structure path.
      shared_ptr<string> groupInfo_ {};
      // The hostname of the device.
      shared_ptr<string> hostName_ {};
      // LogId
      shared_ptr<string> logId_ {};
      // The matched dictionary statistics.
      shared_ptr<Logs::MatchedDicts> matchedDicts_ {};
      // The list of matched policy details.
      shared_ptr<vector<Logs::MatchedPolicies>> matchedPolicies_ {};
      // The object path of the sensitive file in the storage bucket.
      shared_ptr<string> ossFileName_ {};
      // The policy action.
      shared_ptr<string> policyAction_ {};
      // The list of matched policy names.
      shared_ptr<vector<string>> policyName_ {};
      // The outbound process name.
      shared_ptr<string> processName_ {};
      // The secondary channel description.
      shared_ptr<string> processNameDesc_ {};
      // The risk level.
      shared_ptr<string> riskLevel_ {};
      // The matched risk scenario.
      shared_ptr<string> scene_ {};
      // The storage path of the screenshot file.
      shared_ptr<string> screenFilePath_ {};
      // The file size.
      shared_ptr<string> size_ {};
      // The original file name.
      shared_ptr<string> srcFileName_ {};
      // The source IP address of the device.
      shared_ptr<string> srcIp_ {};
      // The time when the event occurred.
      shared_ptr<string> startTime_ {};
      // The time when the log was reported.
      shared_ptr<string> uploadTime_ {};
      // The username.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->requestId_ == nullptr && this->totalNumber_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListDlpOutboundLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListDlpOutboundLogsResponseBody::Logs>) };
    inline vector<ListDlpOutboundLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListDlpOutboundLogsResponseBody::Logs>) };
    inline ListDlpOutboundLogsResponseBody& setLogs(const vector<ListDlpOutboundLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListDlpOutboundLogsResponseBody& setLogs(vector<ListDlpOutboundLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDlpOutboundLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline ListDlpOutboundLogsResponseBody& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    // The log objects.
    shared_ptr<vector<ListDlpOutboundLogsResponseBody::Logs>> logs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records that match the query conditions.
    shared_ptr<int32_t> totalNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
