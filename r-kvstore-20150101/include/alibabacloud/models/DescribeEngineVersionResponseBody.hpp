// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENGINEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENGINEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeEngineVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBLatestMinorVersion, DBLatestMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBVersionRelease, DBVersionRelease_);
      DARABONBA_PTR_TO_JSON(EnableUpgradeMajorVersion, enableUpgradeMajorVersion_);
      DARABONBA_PTR_TO_JSON(EnableUpgradeMinorVersion, enableUpgradeMinorVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(IsAutoUpgradeOpen, isAutoUpgradeOpen_);
      DARABONBA_PTR_TO_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_TO_JSON(IsNewSSLMode, isNewSSLMode_);
      DARABONBA_PTR_TO_JSON(IsOpenNGLB, isOpenNGLB_);
      DARABONBA_PTR_TO_JSON(IsRedisCompatibleVersion, isRedisCompatibleVersion_);
      DARABONBA_PTR_TO_JSON(IsSSLEnable, isSSLEnable_);
      DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_TO_JSON(ProxyLatestMinorVersion, proxyLatestMinorVersion_);
      DARABONBA_PTR_TO_JSON(ProxyMinorVersion, proxyMinorVersion_);
      DARABONBA_PTR_TO_JSON(ProxyVersionRelease, proxyVersionRelease_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEngineVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBLatestMinorVersion, DBLatestMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBVersionRelease, DBVersionRelease_);
      DARABONBA_PTR_FROM_JSON(EnableUpgradeMajorVersion, enableUpgradeMajorVersion_);
      DARABONBA_PTR_FROM_JSON(EnableUpgradeMinorVersion, enableUpgradeMinorVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(IsAutoUpgradeOpen, isAutoUpgradeOpen_);
      DARABONBA_PTR_FROM_JSON(IsLatestVersion, isLatestVersion_);
      DARABONBA_PTR_FROM_JSON(IsNewSSLMode, isNewSSLMode_);
      DARABONBA_PTR_FROM_JSON(IsOpenNGLB, isOpenNGLB_);
      DARABONBA_PTR_FROM_JSON(IsRedisCompatibleVersion, isRedisCompatibleVersion_);
      DARABONBA_PTR_FROM_JSON(IsSSLEnable, isSSLEnable_);
      DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
      DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyLatestMinorVersion, proxyLatestMinorVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyMinorVersion, proxyMinorVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyVersionRelease, proxyVersionRelease_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEngineVersionResponseBody() = default ;
    DescribeEngineVersionResponseBody(const DescribeEngineVersionResponseBody &) = default ;
    DescribeEngineVersionResponseBody(DescribeEngineVersionResponseBody &&) = default ;
    DescribeEngineVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEngineVersionResponseBody() = default ;
    DescribeEngineVersionResponseBody& operator=(const DescribeEngineVersionResponseBody &) = default ;
    DescribeEngineVersionResponseBody& operator=(DescribeEngineVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyLatestMinorVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyLatestMinorVersion& obj) { 
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(VersionRelease, versionRelease_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyLatestMinorVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(VersionRelease, versionRelease_);
      };
      ProxyLatestMinorVersion() = default ;
      ProxyLatestMinorVersion(const ProxyLatestMinorVersion &) = default ;
      ProxyLatestMinorVersion(ProxyLatestMinorVersion &&) = default ;
      ProxyLatestMinorVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyLatestMinorVersion() = default ;
      ProxyLatestMinorVersion& operator=(const ProxyLatestMinorVersion &) = default ;
      ProxyLatestMinorVersion& operator=(ProxyLatestMinorVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionRelease : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionRelease& obj) { 
          DARABONBA_PTR_TO_JSON(ReleaseInfo, releaseInfo_);
          DARABONBA_PTR_TO_JSON(VersionChangesLevel, versionChangesLevel_);
        };
        friend void from_json(const Darabonba::Json& j, VersionRelease& obj) { 
          DARABONBA_PTR_FROM_JSON(ReleaseInfo, releaseInfo_);
          DARABONBA_PTR_FROM_JSON(VersionChangesLevel, versionChangesLevel_);
        };
        VersionRelease() = default ;
        VersionRelease(const VersionRelease &) = default ;
        VersionRelease(VersionRelease &&) = default ;
        VersionRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionRelease() = default ;
        VersionRelease& operator=(const VersionRelease &) = default ;
        VersionRelease& operator=(VersionRelease &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReleaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReleaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ReleaseInfoList, releaseInfoList_);
          };
          friend void from_json(const Darabonba::Json& j, ReleaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ReleaseInfoList, releaseInfoList_);
          };
          ReleaseInfo() = default ;
          ReleaseInfo(const ReleaseInfo &) = default ;
          ReleaseInfo(ReleaseInfo &&) = default ;
          ReleaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReleaseInfo() = default ;
          ReleaseInfo& operator=(const ReleaseInfo &) = default ;
          ReleaseInfo& operator=(ReleaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReleaseInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReleaseInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
              DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
              DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
            };
            friend void from_json(const Darabonba::Json& j, ReleaseInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
              DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
              DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
            };
            ReleaseInfoList() = default ;
            ReleaseInfoList(const ReleaseInfoList &) = default ;
            ReleaseInfoList(ReleaseInfoList &&) = default ;
            ReleaseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReleaseInfoList() = default ;
            ReleaseInfoList& operator=(const ReleaseInfoList &) = default ;
            ReleaseInfoList& operator=(ReleaseInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->createTime_ == nullptr
        && this->level_ == nullptr && this->releaseNote_ == nullptr && this->releaseNoteEn_ == nullptr && this->releaseVersion_ == nullptr; };
            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline ReleaseInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline ReleaseInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // releaseNote Field Functions 
            bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
            void deleteReleaseNote() { this->releaseNote_ = nullptr;};
            inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
            inline ReleaseInfoList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


            // releaseNoteEn Field Functions 
            bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
            void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
            inline string getReleaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
            inline ReleaseInfoList& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


            // releaseVersion Field Functions 
            bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
            void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
            inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
            inline ReleaseInfoList& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


          protected:
            // The time when the version was released.
            shared_ptr<string> createTime_ {};
            // The version update level. Valid values:
            // 
            // *   **0**: regular
            // *   **1**: recommended
            // *   **2**: critical
            shared_ptr<string> level_ {};
            // The release notes.
            shared_ptr<string> releaseNote_ {};
            // The description of the minor versions to which the instance can be updated.
            shared_ptr<string> releaseNoteEn_ {};
            // The release version of EMR.
            shared_ptr<string> releaseVersion_ {};
          };

          virtual bool empty() const override { return this->releaseInfoList_ == nullptr; };
          // releaseInfoList Field Functions 
          bool hasReleaseInfoList() const { return this->releaseInfoList_ != nullptr;};
          void deleteReleaseInfoList() { this->releaseInfoList_ = nullptr;};
          inline const vector<ReleaseInfo::ReleaseInfoList> & getReleaseInfoList() const { DARABONBA_PTR_GET_CONST(releaseInfoList_, vector<ReleaseInfo::ReleaseInfoList>) };
          inline vector<ReleaseInfo::ReleaseInfoList> getReleaseInfoList() { DARABONBA_PTR_GET(releaseInfoList_, vector<ReleaseInfo::ReleaseInfoList>) };
          inline ReleaseInfo& setReleaseInfoList(const vector<ReleaseInfo::ReleaseInfoList> & releaseInfoList) { DARABONBA_PTR_SET_VALUE(releaseInfoList_, releaseInfoList) };
          inline ReleaseInfo& setReleaseInfoList(vector<ReleaseInfo::ReleaseInfoList> && releaseInfoList) { DARABONBA_PTR_SET_RVALUE(releaseInfoList_, releaseInfoList) };


        protected:
          shared_ptr<vector<ReleaseInfo::ReleaseInfoList>> releaseInfoList_ {};
        };

        virtual bool empty() const override { return this->releaseInfo_ == nullptr
        && this->versionChangesLevel_ == nullptr; };
        // releaseInfo Field Functions 
        bool hasReleaseInfo() const { return this->releaseInfo_ != nullptr;};
        void deleteReleaseInfo() { this->releaseInfo_ = nullptr;};
        inline const VersionRelease::ReleaseInfo & getReleaseInfo() const { DARABONBA_PTR_GET_CONST(releaseInfo_, VersionRelease::ReleaseInfo) };
        inline VersionRelease::ReleaseInfo getReleaseInfo() { DARABONBA_PTR_GET(releaseInfo_, VersionRelease::ReleaseInfo) };
        inline VersionRelease& setReleaseInfo(const VersionRelease::ReleaseInfo & releaseInfo) { DARABONBA_PTR_SET_VALUE(releaseInfo_, releaseInfo) };
        inline VersionRelease& setReleaseInfo(VersionRelease::ReleaseInfo && releaseInfo) { DARABONBA_PTR_SET_RVALUE(releaseInfo_, releaseInfo) };


        // versionChangesLevel Field Functions 
        bool hasVersionChangesLevel() const { return this->versionChangesLevel_ != nullptr;};
        void deleteVersionChangesLevel() { this->versionChangesLevel_ = nullptr;};
        inline string getVersionChangesLevel() const { DARABONBA_PTR_GET_DEFAULT(versionChangesLevel_, "") };
        inline VersionRelease& setVersionChangesLevel(string versionChangesLevel) { DARABONBA_PTR_SET_VALUE(versionChangesLevel_, versionChangesLevel) };


      protected:
        // The information about the minor versions.
        shared_ptr<VersionRelease::ReleaseInfo> releaseInfo_ {};
        // The version update level, which indicates how strongly the update is recommended. Valid values:
        // 
        // *   0: regular
        // *   1: recommended
        // *   2: critical
        shared_ptr<string> versionChangesLevel_ {};
      };

      virtual bool empty() const override { return this->level_ == nullptr
        && this->minorVersion_ == nullptr && this->versionRelease_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline ProxyLatestMinorVersion& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline ProxyLatestMinorVersion& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // versionRelease Field Functions 
      bool hasVersionRelease() const { return this->versionRelease_ != nullptr;};
      void deleteVersionRelease() { this->versionRelease_ = nullptr;};
      inline const ProxyLatestMinorVersion::VersionRelease & getVersionRelease() const { DARABONBA_PTR_GET_CONST(versionRelease_, ProxyLatestMinorVersion::VersionRelease) };
      inline ProxyLatestMinorVersion::VersionRelease getVersionRelease() { DARABONBA_PTR_GET(versionRelease_, ProxyLatestMinorVersion::VersionRelease) };
      inline ProxyLatestMinorVersion& setVersionRelease(const ProxyLatestMinorVersion::VersionRelease & versionRelease) { DARABONBA_PTR_SET_VALUE(versionRelease_, versionRelease) };
      inline ProxyLatestMinorVersion& setVersionRelease(ProxyLatestMinorVersion::VersionRelease && versionRelease) { DARABONBA_PTR_SET_RVALUE(versionRelease_, versionRelease) };


    protected:
      // The version update level. Valid values:
      // 
      // *   **0**: regular
      // *   **1**: recommended
      // *   **2**: critical
      shared_ptr<string> level_ {};
      // The version number.
      shared_ptr<string> minorVersion_ {};
      // The version update path from the current minor version to the latest minor version of the instance, which is consistent with the version documentation. For more detailed information, you can directly refer to the release notes.
      shared_ptr<ProxyLatestMinorVersion::VersionRelease> versionRelease_ {};
    };

    class DBLatestMinorVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBLatestMinorVersion& obj) { 
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_TO_JSON(VersionRelease, versionRelease_);
      };
      friend void from_json(const Darabonba::Json& j, DBLatestMinorVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MinorVersion, minorVersion_);
        DARABONBA_PTR_FROM_JSON(VersionRelease, versionRelease_);
      };
      DBLatestMinorVersion() = default ;
      DBLatestMinorVersion(const DBLatestMinorVersion &) = default ;
      DBLatestMinorVersion(DBLatestMinorVersion &&) = default ;
      DBLatestMinorVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBLatestMinorVersion() = default ;
      DBLatestMinorVersion& operator=(const DBLatestMinorVersion &) = default ;
      DBLatestMinorVersion& operator=(DBLatestMinorVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionRelease : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionRelease& obj) { 
          DARABONBA_PTR_TO_JSON(ReleaseInfo, releaseInfo_);
          DARABONBA_PTR_TO_JSON(VersionChangesLevel, versionChangesLevel_);
        };
        friend void from_json(const Darabonba::Json& j, VersionRelease& obj) { 
          DARABONBA_PTR_FROM_JSON(ReleaseInfo, releaseInfo_);
          DARABONBA_PTR_FROM_JSON(VersionChangesLevel, versionChangesLevel_);
        };
        VersionRelease() = default ;
        VersionRelease(const VersionRelease &) = default ;
        VersionRelease(VersionRelease &&) = default ;
        VersionRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionRelease() = default ;
        VersionRelease& operator=(const VersionRelease &) = default ;
        VersionRelease& operator=(VersionRelease &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReleaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReleaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ReleaseInfoList, releaseInfoList_);
          };
          friend void from_json(const Darabonba::Json& j, ReleaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ReleaseInfoList, releaseInfoList_);
          };
          ReleaseInfo() = default ;
          ReleaseInfo(const ReleaseInfo &) = default ;
          ReleaseInfo(ReleaseInfo &&) = default ;
          ReleaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReleaseInfo() = default ;
          ReleaseInfo& operator=(const ReleaseInfo &) = default ;
          ReleaseInfo& operator=(ReleaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReleaseInfoList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReleaseInfoList& obj) { 
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
              DARABONBA_PTR_TO_JSON(ReleaseNoteEn, releaseNoteEn_);
              DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
            };
            friend void from_json(const Darabonba::Json& j, ReleaseInfoList& obj) { 
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
              DARABONBA_PTR_FROM_JSON(ReleaseNoteEn, releaseNoteEn_);
              DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
            };
            ReleaseInfoList() = default ;
            ReleaseInfoList(const ReleaseInfoList &) = default ;
            ReleaseInfoList(ReleaseInfoList &&) = default ;
            ReleaseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReleaseInfoList() = default ;
            ReleaseInfoList& operator=(const ReleaseInfoList &) = default ;
            ReleaseInfoList& operator=(ReleaseInfoList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->createTime_ == nullptr
        && this->level_ == nullptr && this->releaseNote_ == nullptr && this->releaseNoteEn_ == nullptr && this->releaseVersion_ == nullptr; };
            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline ReleaseInfoList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline ReleaseInfoList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // releaseNote Field Functions 
            bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
            void deleteReleaseNote() { this->releaseNote_ = nullptr;};
            inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
            inline ReleaseInfoList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


            // releaseNoteEn Field Functions 
            bool hasReleaseNoteEn() const { return this->releaseNoteEn_ != nullptr;};
            void deleteReleaseNoteEn() { this->releaseNoteEn_ = nullptr;};
            inline string getReleaseNoteEn() const { DARABONBA_PTR_GET_DEFAULT(releaseNoteEn_, "") };
            inline ReleaseInfoList& setReleaseNoteEn(string releaseNoteEn) { DARABONBA_PTR_SET_VALUE(releaseNoteEn_, releaseNoteEn) };


            // releaseVersion Field Functions 
            bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
            void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
            inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
            inline ReleaseInfoList& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


          protected:
            // The creation time of the instance.
            shared_ptr<string> createTime_ {};
            // The importance level.
            shared_ptr<string> level_ {};
            // The release notes.
            shared_ptr<string> releaseNote_ {};
            // The description of the minor versions to which the instance can be updated.
            shared_ptr<string> releaseNoteEn_ {};
            // The release version of EMR.
            shared_ptr<string> releaseVersion_ {};
          };

          virtual bool empty() const override { return this->releaseInfoList_ == nullptr; };
          // releaseInfoList Field Functions 
          bool hasReleaseInfoList() const { return this->releaseInfoList_ != nullptr;};
          void deleteReleaseInfoList() { this->releaseInfoList_ = nullptr;};
          inline const vector<ReleaseInfo::ReleaseInfoList> & getReleaseInfoList() const { DARABONBA_PTR_GET_CONST(releaseInfoList_, vector<ReleaseInfo::ReleaseInfoList>) };
          inline vector<ReleaseInfo::ReleaseInfoList> getReleaseInfoList() { DARABONBA_PTR_GET(releaseInfoList_, vector<ReleaseInfo::ReleaseInfoList>) };
          inline ReleaseInfo& setReleaseInfoList(const vector<ReleaseInfo::ReleaseInfoList> & releaseInfoList) { DARABONBA_PTR_SET_VALUE(releaseInfoList_, releaseInfoList) };
          inline ReleaseInfo& setReleaseInfoList(vector<ReleaseInfo::ReleaseInfoList> && releaseInfoList) { DARABONBA_PTR_SET_RVALUE(releaseInfoList_, releaseInfoList) };


        protected:
          shared_ptr<vector<ReleaseInfo::ReleaseInfoList>> releaseInfoList_ {};
        };

        virtual bool empty() const override { return this->releaseInfo_ == nullptr
        && this->versionChangesLevel_ == nullptr; };
        // releaseInfo Field Functions 
        bool hasReleaseInfo() const { return this->releaseInfo_ != nullptr;};
        void deleteReleaseInfo() { this->releaseInfo_ = nullptr;};
        inline const VersionRelease::ReleaseInfo & getReleaseInfo() const { DARABONBA_PTR_GET_CONST(releaseInfo_, VersionRelease::ReleaseInfo) };
        inline VersionRelease::ReleaseInfo getReleaseInfo() { DARABONBA_PTR_GET(releaseInfo_, VersionRelease::ReleaseInfo) };
        inline VersionRelease& setReleaseInfo(const VersionRelease::ReleaseInfo & releaseInfo) { DARABONBA_PTR_SET_VALUE(releaseInfo_, releaseInfo) };
        inline VersionRelease& setReleaseInfo(VersionRelease::ReleaseInfo && releaseInfo) { DARABONBA_PTR_SET_RVALUE(releaseInfo_, releaseInfo) };


        // versionChangesLevel Field Functions 
        bool hasVersionChangesLevel() const { return this->versionChangesLevel_ != nullptr;};
        void deleteVersionChangesLevel() { this->versionChangesLevel_ = nullptr;};
        inline string getVersionChangesLevel() const { DARABONBA_PTR_GET_DEFAULT(versionChangesLevel_, "") };
        inline VersionRelease& setVersionChangesLevel(string versionChangesLevel) { DARABONBA_PTR_SET_VALUE(versionChangesLevel_, versionChangesLevel) };


      protected:
        // The information about the minor versions.
        shared_ptr<VersionRelease::ReleaseInfo> releaseInfo_ {};
        // The version update level, which indicates how strongly the update is recommended. Valid values:
        // 
        // *   0: regular
        // *   1: recommended
        // *   2: critical
        shared_ptr<string> versionChangesLevel_ {};
      };

      virtual bool empty() const override { return this->level_ == nullptr
        && this->minorVersion_ == nullptr && this->versionRelease_ == nullptr; };
      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline DBLatestMinorVersion& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // minorVersion Field Functions 
      bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
      void deleteMinorVersion() { this->minorVersion_ = nullptr;};
      inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
      inline DBLatestMinorVersion& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


      // versionRelease Field Functions 
      bool hasVersionRelease() const { return this->versionRelease_ != nullptr;};
      void deleteVersionRelease() { this->versionRelease_ = nullptr;};
      inline const DBLatestMinorVersion::VersionRelease & getVersionRelease() const { DARABONBA_PTR_GET_CONST(versionRelease_, DBLatestMinorVersion::VersionRelease) };
      inline DBLatestMinorVersion::VersionRelease getVersionRelease() { DARABONBA_PTR_GET(versionRelease_, DBLatestMinorVersion::VersionRelease) };
      inline DBLatestMinorVersion& setVersionRelease(const DBLatestMinorVersion::VersionRelease & versionRelease) { DARABONBA_PTR_SET_VALUE(versionRelease_, versionRelease) };
      inline DBLatestMinorVersion& setVersionRelease(DBLatestMinorVersion::VersionRelease && versionRelease) { DARABONBA_PTR_SET_RVALUE(versionRelease_, versionRelease) };


    protected:
      // The version update level. Valid values:
      // 
      // *   **0**: regular
      // *   **1**: recommended
      // *   **2**: critical
      shared_ptr<string> level_ {};
      // The version number.
      shared_ptr<string> minorVersion_ {};
      // The version update path from the current minor version to the latest minor version of the instance, which is consistent with the version documentation. For more detailed information, you can directly refer to the release notes.
      shared_ptr<DBLatestMinorVersion::VersionRelease> versionRelease_ {};
    };

    virtual bool empty() const override { return this->DBLatestMinorVersion_ == nullptr
        && this->DBVersionRelease_ == nullptr && this->enableUpgradeMajorVersion_ == nullptr && this->enableUpgradeMinorVersion_ == nullptr && this->engine_ == nullptr && this->isAutoUpgradeOpen_ == nullptr
        && this->isLatestVersion_ == nullptr && this->isNewSSLMode_ == nullptr && this->isOpenNGLB_ == nullptr && this->isRedisCompatibleVersion_ == nullptr && this->isSSLEnable_ == nullptr
        && this->majorVersion_ == nullptr && this->minorVersion_ == nullptr && this->proxyLatestMinorVersion_ == nullptr && this->proxyMinorVersion_ == nullptr && this->proxyVersionRelease_ == nullptr
        && this->requestId_ == nullptr; };
    // DBLatestMinorVersion Field Functions 
    bool hasDBLatestMinorVersion() const { return this->DBLatestMinorVersion_ != nullptr;};
    void deleteDBLatestMinorVersion() { this->DBLatestMinorVersion_ = nullptr;};
    inline const DescribeEngineVersionResponseBody::DBLatestMinorVersion & getDBLatestMinorVersion() const { DARABONBA_PTR_GET_CONST(DBLatestMinorVersion_, DescribeEngineVersionResponseBody::DBLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody::DBLatestMinorVersion getDBLatestMinorVersion() { DARABONBA_PTR_GET(DBLatestMinorVersion_, DescribeEngineVersionResponseBody::DBLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody& setDBLatestMinorVersion(const DescribeEngineVersionResponseBody::DBLatestMinorVersion & dBLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(DBLatestMinorVersion_, dBLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody& setDBLatestMinorVersion(DescribeEngineVersionResponseBody::DBLatestMinorVersion && dBLatestMinorVersion) { DARABONBA_PTR_SET_RVALUE(DBLatestMinorVersion_, dBLatestMinorVersion) };


    // DBVersionRelease Field Functions 
    bool hasDBVersionRelease() const { return this->DBVersionRelease_ != nullptr;};
    void deleteDBVersionRelease() { this->DBVersionRelease_ = nullptr;};
    inline string getDBVersionRelease() const { DARABONBA_PTR_GET_DEFAULT(DBVersionRelease_, "") };
    inline DescribeEngineVersionResponseBody& setDBVersionRelease(string DBVersionRelease) { DARABONBA_PTR_SET_VALUE(DBVersionRelease_, DBVersionRelease) };


    // enableUpgradeMajorVersion Field Functions 
    bool hasEnableUpgradeMajorVersion() const { return this->enableUpgradeMajorVersion_ != nullptr;};
    void deleteEnableUpgradeMajorVersion() { this->enableUpgradeMajorVersion_ = nullptr;};
    inline bool getEnableUpgradeMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(enableUpgradeMajorVersion_, false) };
    inline DescribeEngineVersionResponseBody& setEnableUpgradeMajorVersion(bool enableUpgradeMajorVersion) { DARABONBA_PTR_SET_VALUE(enableUpgradeMajorVersion_, enableUpgradeMajorVersion) };


    // enableUpgradeMinorVersion Field Functions 
    bool hasEnableUpgradeMinorVersion() const { return this->enableUpgradeMinorVersion_ != nullptr;};
    void deleteEnableUpgradeMinorVersion() { this->enableUpgradeMinorVersion_ = nullptr;};
    inline bool getEnableUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(enableUpgradeMinorVersion_, false) };
    inline DescribeEngineVersionResponseBody& setEnableUpgradeMinorVersion(bool enableUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(enableUpgradeMinorVersion_, enableUpgradeMinorVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeEngineVersionResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // isAutoUpgradeOpen Field Functions 
    bool hasIsAutoUpgradeOpen() const { return this->isAutoUpgradeOpen_ != nullptr;};
    void deleteIsAutoUpgradeOpen() { this->isAutoUpgradeOpen_ = nullptr;};
    inline string getIsAutoUpgradeOpen() const { DARABONBA_PTR_GET_DEFAULT(isAutoUpgradeOpen_, "") };
    inline DescribeEngineVersionResponseBody& setIsAutoUpgradeOpen(string isAutoUpgradeOpen) { DARABONBA_PTR_SET_VALUE(isAutoUpgradeOpen_, isAutoUpgradeOpen) };


    // isLatestVersion Field Functions 
    bool hasIsLatestVersion() const { return this->isLatestVersion_ != nullptr;};
    void deleteIsLatestVersion() { this->isLatestVersion_ = nullptr;};
    inline bool getIsLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(isLatestVersion_, false) };
    inline DescribeEngineVersionResponseBody& setIsLatestVersion(bool isLatestVersion) { DARABONBA_PTR_SET_VALUE(isLatestVersion_, isLatestVersion) };


    // isNewSSLMode Field Functions 
    bool hasIsNewSSLMode() const { return this->isNewSSLMode_ != nullptr;};
    void deleteIsNewSSLMode() { this->isNewSSLMode_ = nullptr;};
    inline string getIsNewSSLMode() const { DARABONBA_PTR_GET_DEFAULT(isNewSSLMode_, "") };
    inline DescribeEngineVersionResponseBody& setIsNewSSLMode(string isNewSSLMode) { DARABONBA_PTR_SET_VALUE(isNewSSLMode_, isNewSSLMode) };


    // isOpenNGLB Field Functions 
    bool hasIsOpenNGLB() const { return this->isOpenNGLB_ != nullptr;};
    void deleteIsOpenNGLB() { this->isOpenNGLB_ = nullptr;};
    inline string getIsOpenNGLB() const { DARABONBA_PTR_GET_DEFAULT(isOpenNGLB_, "") };
    inline DescribeEngineVersionResponseBody& setIsOpenNGLB(string isOpenNGLB) { DARABONBA_PTR_SET_VALUE(isOpenNGLB_, isOpenNGLB) };


    // isRedisCompatibleVersion Field Functions 
    bool hasIsRedisCompatibleVersion() const { return this->isRedisCompatibleVersion_ != nullptr;};
    void deleteIsRedisCompatibleVersion() { this->isRedisCompatibleVersion_ = nullptr;};
    inline string getIsRedisCompatibleVersion() const { DARABONBA_PTR_GET_DEFAULT(isRedisCompatibleVersion_, "") };
    inline DescribeEngineVersionResponseBody& setIsRedisCompatibleVersion(string isRedisCompatibleVersion) { DARABONBA_PTR_SET_VALUE(isRedisCompatibleVersion_, isRedisCompatibleVersion) };


    // isSSLEnable Field Functions 
    bool hasIsSSLEnable() const { return this->isSSLEnable_ != nullptr;};
    void deleteIsSSLEnable() { this->isSSLEnable_ = nullptr;};
    inline string getIsSSLEnable() const { DARABONBA_PTR_GET_DEFAULT(isSSLEnable_, "") };
    inline DescribeEngineVersionResponseBody& setIsSSLEnable(string isSSLEnable) { DARABONBA_PTR_SET_VALUE(isSSLEnable_, isSSLEnable) };


    // majorVersion Field Functions 
    bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
    void deleteMajorVersion() { this->majorVersion_ = nullptr;};
    inline string getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
    inline DescribeEngineVersionResponseBody& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


    // minorVersion Field Functions 
    bool hasMinorVersion() const { return this->minorVersion_ != nullptr;};
    void deleteMinorVersion() { this->minorVersion_ = nullptr;};
    inline string getMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(minorVersion_, "") };
    inline DescribeEngineVersionResponseBody& setMinorVersion(string minorVersion) { DARABONBA_PTR_SET_VALUE(minorVersion_, minorVersion) };


    // proxyLatestMinorVersion Field Functions 
    bool hasProxyLatestMinorVersion() const { return this->proxyLatestMinorVersion_ != nullptr;};
    void deleteProxyLatestMinorVersion() { this->proxyLatestMinorVersion_ = nullptr;};
    inline const DescribeEngineVersionResponseBody::ProxyLatestMinorVersion & getProxyLatestMinorVersion() const { DARABONBA_PTR_GET_CONST(proxyLatestMinorVersion_, DescribeEngineVersionResponseBody::ProxyLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody::ProxyLatestMinorVersion getProxyLatestMinorVersion() { DARABONBA_PTR_GET(proxyLatestMinorVersion_, DescribeEngineVersionResponseBody::ProxyLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody& setProxyLatestMinorVersion(const DescribeEngineVersionResponseBody::ProxyLatestMinorVersion & proxyLatestMinorVersion) { DARABONBA_PTR_SET_VALUE(proxyLatestMinorVersion_, proxyLatestMinorVersion) };
    inline DescribeEngineVersionResponseBody& setProxyLatestMinorVersion(DescribeEngineVersionResponseBody::ProxyLatestMinorVersion && proxyLatestMinorVersion) { DARABONBA_PTR_SET_RVALUE(proxyLatestMinorVersion_, proxyLatestMinorVersion) };


    // proxyMinorVersion Field Functions 
    bool hasProxyMinorVersion() const { return this->proxyMinorVersion_ != nullptr;};
    void deleteProxyMinorVersion() { this->proxyMinorVersion_ = nullptr;};
    inline string getProxyMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyMinorVersion_, "") };
    inline DescribeEngineVersionResponseBody& setProxyMinorVersion(string proxyMinorVersion) { DARABONBA_PTR_SET_VALUE(proxyMinorVersion_, proxyMinorVersion) };


    // proxyVersionRelease Field Functions 
    bool hasProxyVersionRelease() const { return this->proxyVersionRelease_ != nullptr;};
    void deleteProxyVersionRelease() { this->proxyVersionRelease_ = nullptr;};
    inline string getProxyVersionRelease() const { DARABONBA_PTR_GET_DEFAULT(proxyVersionRelease_, "") };
    inline DescribeEngineVersionResponseBody& setProxyVersionRelease(string proxyVersionRelease) { DARABONBA_PTR_SET_VALUE(proxyVersionRelease_, proxyVersionRelease) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEngineVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The latest minor version to which the instance can be updated.
    shared_ptr<DescribeEngineVersionResponseBody::DBLatestMinorVersion> DBLatestMinorVersion_ {};
    // The release notes for the minor version of the instance, including the release date, minor version number, release type such as new feature, and description.
    shared_ptr<string> DBVersionRelease_ {};
    // Indicates whether the instance major version can be upgraded. Valid values:
    // 
    // *   **true**: The major version can be upgraded.
    // *   **false**: The major version is the latest version and cannot be upgraded.
    // 
    // >  To upgrade the major version, call the [ModifyInstanceMajorVersion](https://help.aliyun.com/document_detail/473776.html) operation.
    shared_ptr<bool> enableUpgradeMajorVersion_ {};
    // Indicates whether the instance minor version can be updated. Valid values:
    // 
    // *   **true**: The minor version can be updated.
    // *   **false**: The minor version is the latest version and cannot be updated.
    // 
    // >  To update the minor version, call the [ModifyInstanceMinorVersion](https://help.aliyun.com/document_detail/473777.html) operation.
    shared_ptr<bool> enableUpgradeMinorVersion_ {};
    // The database engine. Valid values: **redis** and **memcache**.
    shared_ptr<string> engine_ {};
    // Indicates whether automatic minor version update is enabled. Valid values:
    // 
    // *   **0**: Automatic minor version update is disabled.
    // *   **1**: Automatic minor version update is enabled.
    shared_ptr<string> isAutoUpgradeOpen_ {};
    // Indicates whether the instance uses the latest minor version. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> isLatestVersion_ {};
    // Indicates whether Transport Layer Security (TLS) is enabled. Valid values:
    // 
    // *   **1**: TLS is enabled.
    // *   **0**: TLS is disabled.
    shared_ptr<string> isNewSSLMode_ {};
    // Indicates whether the NGLB mode is enabled. Valid values:
    // 
    // *   **0**: The NGLB mode is disabled.
    // *   **1**: The NGLB mode is enabled.
    shared_ptr<string> isOpenNGLB_ {};
    // Indicates whether the instance runs a Redis version.
    shared_ptr<string> isRedisCompatibleVersion_ {};
    // Indicates whether SSL is enabled. Valid values:
    // 
    // *   **1**: SSL is enabled.
    // *   **0**: TLS is disabled.
    shared_ptr<string> isSSLEnable_ {};
    // The major version of the instance.
    shared_ptr<string> majorVersion_ {};
    // The current minor version of the instance.
    shared_ptr<string> minorVersion_ {};
    // The latest minor version to which the proxy node can be updated.
    shared_ptr<DescribeEngineVersionResponseBody::ProxyLatestMinorVersion> proxyLatestMinorVersion_ {};
    // The current minor version of the proxy node.
    // 
    // >  This parameter is returned only for cluster and read/write splitting instances.
    shared_ptr<string> proxyMinorVersion_ {};
    // The release notes for the minor version of proxy nodes. The release notes include the release date, minor version number, release type such as new feature, and description.
    // 
    // >  This parameter is returned only for cluster and read/write splitting instances.
    shared_ptr<string> proxyVersionRelease_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
