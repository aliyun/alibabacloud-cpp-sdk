// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(OutputGroups, outputGroups_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(OutputGroups, outputGroups_);
    };
    MediaConvertJobConfig() = default ;
    MediaConvertJobConfig(const MediaConvertJobConfig &) = default ;
    MediaConvertJobConfig(MediaConvertJobConfig &&) = default ;
    MediaConvertJobConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobConfig() = default ;
    MediaConvertJobConfig& operator=(const MediaConvertJobConfig &) = default ;
    MediaConvertJobConfig& operator=(MediaConvertJobConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutputGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutputGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupConfig, groupConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      };
      friend void from_json(const Darabonba::Json& j, OutputGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupConfig, groupConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      };
      OutputGroups() = default ;
      OutputGroups(const OutputGroups &) = default ;
      OutputGroups(OutputGroups &&) = default ;
      OutputGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutputGroups() = default ;
      OutputGroups& operator=(const OutputGroups &) = default ;
      OutputGroups& operator=(OutputGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Outputs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Outputs& obj) { 
          DARABONBA_PTR_TO_JSON(Features, features_);
          DARABONBA_PTR_TO_JSON(HlsGroupConfig, hlsGroupConfig_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OutputFileName, outputFileName_);
          DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, Outputs& obj) { 
          DARABONBA_PTR_FROM_JSON(Features, features_);
          DARABONBA_PTR_FROM_JSON(HlsGroupConfig, hlsGroupConfig_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OutputFileName, outputFileName_);
          DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        Outputs() = default ;
        Outputs(const Outputs &) = default ;
        Outputs(Outputs &&) = default ;
        Outputs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Outputs() = default ;
        Outputs& operator=(const Outputs &) = default ;
        Outputs& operator=(Outputs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HlsGroupConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HlsGroupConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AudioGroup, audioGroup_);
            DARABONBA_PTR_TO_JSON(AutoSelect, autoSelect_);
            DARABONBA_PTR_TO_JSON(Forced, forced_);
            DARABONBA_PTR_TO_JSON(Group, group_);
            DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_TO_JSON(Language, language_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(SubtitleGroup, subtitleGroup_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, HlsGroupConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioGroup, audioGroup_);
            DARABONBA_PTR_FROM_JSON(AutoSelect, autoSelect_);
            DARABONBA_PTR_FROM_JSON(Forced, forced_);
            DARABONBA_PTR_FROM_JSON(Group, group_);
            DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(SubtitleGroup, subtitleGroup_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          HlsGroupConfig() = default ;
          HlsGroupConfig(const HlsGroupConfig &) = default ;
          HlsGroupConfig(HlsGroupConfig &&) = default ;
          HlsGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HlsGroupConfig() = default ;
          HlsGroupConfig& operator=(const HlsGroupConfig &) = default ;
          HlsGroupConfig& operator=(HlsGroupConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audioGroup_ == nullptr
        && this->autoSelect_ == nullptr && this->forced_ == nullptr && this->group_ == nullptr && this->isDefault_ == nullptr && this->language_ == nullptr
        && this->name_ == nullptr && this->subtitleGroup_ == nullptr && this->type_ == nullptr; };
          // audioGroup Field Functions 
          bool hasAudioGroup() const { return this->audioGroup_ != nullptr;};
          void deleteAudioGroup() { this->audioGroup_ = nullptr;};
          inline string getAudioGroup() const { DARABONBA_PTR_GET_DEFAULT(audioGroup_, "") };
          inline HlsGroupConfig& setAudioGroup(string audioGroup) { DARABONBA_PTR_SET_VALUE(audioGroup_, audioGroup) };


          // autoSelect Field Functions 
          bool hasAutoSelect() const { return this->autoSelect_ != nullptr;};
          void deleteAutoSelect() { this->autoSelect_ = nullptr;};
          inline string getAutoSelect() const { DARABONBA_PTR_GET_DEFAULT(autoSelect_, "") };
          inline HlsGroupConfig& setAutoSelect(string autoSelect) { DARABONBA_PTR_SET_VALUE(autoSelect_, autoSelect) };


          // forced Field Functions 
          bool hasForced() const { return this->forced_ != nullptr;};
          void deleteForced() { this->forced_ = nullptr;};
          inline string getForced() const { DARABONBA_PTR_GET_DEFAULT(forced_, "") };
          inline HlsGroupConfig& setForced(string forced) { DARABONBA_PTR_SET_VALUE(forced_, forced) };


          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
          inline HlsGroupConfig& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


          // isDefault Field Functions 
          bool hasIsDefault() const { return this->isDefault_ != nullptr;};
          void deleteIsDefault() { this->isDefault_ = nullptr;};
          inline string getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
          inline HlsGroupConfig& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline HlsGroupConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline HlsGroupConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // subtitleGroup Field Functions 
          bool hasSubtitleGroup() const { return this->subtitleGroup_ != nullptr;};
          void deleteSubtitleGroup() { this->subtitleGroup_ = nullptr;};
          inline string getSubtitleGroup() const { DARABONBA_PTR_GET_DEFAULT(subtitleGroup_, "") };
          inline HlsGroupConfig& setSubtitleGroup(string subtitleGroup) { DARABONBA_PTR_SET_VALUE(subtitleGroup_, subtitleGroup) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline HlsGroupConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> audioGroup_ {};
          shared_ptr<string> autoSelect_ {};
          shared_ptr<string> forced_ {};
          shared_ptr<string> group_ {};
          shared_ptr<string> isDefault_ {};
          shared_ptr<string> language_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> subtitleGroup_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->features_ == nullptr
        && this->hlsGroupConfig_ == nullptr && this->name_ == nullptr && this->outputFileName_ == nullptr && this->overrideParams_ == nullptr && this->priority_ == nullptr
        && this->templateId_ == nullptr; };
        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline string getFeatures() const { DARABONBA_PTR_GET_DEFAULT(features_, "") };
        inline Outputs& setFeatures(string features) { DARABONBA_PTR_SET_VALUE(features_, features) };


        // hlsGroupConfig Field Functions 
        bool hasHlsGroupConfig() const { return this->hlsGroupConfig_ != nullptr;};
        void deleteHlsGroupConfig() { this->hlsGroupConfig_ = nullptr;};
        inline const Outputs::HlsGroupConfig & getHlsGroupConfig() const { DARABONBA_PTR_GET_CONST(hlsGroupConfig_, Outputs::HlsGroupConfig) };
        inline Outputs::HlsGroupConfig getHlsGroupConfig() { DARABONBA_PTR_GET(hlsGroupConfig_, Outputs::HlsGroupConfig) };
        inline Outputs& setHlsGroupConfig(const Outputs::HlsGroupConfig & hlsGroupConfig) { DARABONBA_PTR_SET_VALUE(hlsGroupConfig_, hlsGroupConfig) };
        inline Outputs& setHlsGroupConfig(Outputs::HlsGroupConfig && hlsGroupConfig) { DARABONBA_PTR_SET_RVALUE(hlsGroupConfig_, hlsGroupConfig) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Outputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // outputFileName Field Functions 
        bool hasOutputFileName() const { return this->outputFileName_ != nullptr;};
        void deleteOutputFileName() { this->outputFileName_ = nullptr;};
        inline string getOutputFileName() const { DARABONBA_PTR_GET_DEFAULT(outputFileName_, "") };
        inline Outputs& setOutputFileName(string outputFileName) { DARABONBA_PTR_SET_VALUE(outputFileName_, outputFileName) };


        // overrideParams Field Functions 
        bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
        void deleteOverrideParams() { this->overrideParams_ = nullptr;};
        inline string getOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
        inline Outputs& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Outputs& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Outputs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        shared_ptr<string> features_ {};
        shared_ptr<Outputs::HlsGroupConfig> hlsGroupConfig_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> outputFileName_ {};
        shared_ptr<string> overrideParams_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> templateId_ {};
      };

      class GroupConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GroupConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ManifestExtend, manifestExtend_);
          DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
          DARABONBA_PTR_TO_JSON(OutputFileBase, outputFileBase_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, GroupConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ManifestExtend, manifestExtend_);
          DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
          DARABONBA_PTR_FROM_JSON(OutputFileBase, outputFileBase_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        GroupConfig() = default ;
        GroupConfig(const GroupConfig &) = default ;
        GroupConfig(GroupConfig &&) = default ;
        GroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GroupConfig() = default ;
        GroupConfig& operator=(const GroupConfig &) = default ;
        GroupConfig& operator=(GroupConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputFileBase : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputFileBase& obj) { 
            DARABONBA_PTR_TO_JSON(Media, media_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, OutputFileBase& obj) { 
            DARABONBA_PTR_FROM_JSON(Media, media_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          OutputFileBase() = default ;
          OutputFileBase(const OutputFileBase &) = default ;
          OutputFileBase(OutputFileBase &&) = default ;
          OutputFileBase(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputFileBase() = default ;
          OutputFileBase& operator=(const OutputFileBase &) = default ;
          OutputFileBase& operator=(OutputFileBase &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
          // media Field Functions 
          bool hasMedia() const { return this->media_ != nullptr;};
          void deleteMedia() { this->media_ = nullptr;};
          inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
          inline OutputFileBase& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline OutputFileBase& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> media_ {};
          shared_ptr<string> type_ {};
        };

        class ManifestExtend : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ManifestExtend& obj) { 
            DARABONBA_PTR_TO_JSON(Excludes, excludes_);
            DARABONBA_PTR_TO_JSON(InputRef, inputRef_);
          };
          friend void from_json(const Darabonba::Json& j, ManifestExtend& obj) { 
            DARABONBA_PTR_FROM_JSON(Excludes, excludes_);
            DARABONBA_PTR_FROM_JSON(InputRef, inputRef_);
          };
          ManifestExtend() = default ;
          ManifestExtend(const ManifestExtend &) = default ;
          ManifestExtend(ManifestExtend &&) = default ;
          ManifestExtend(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ManifestExtend() = default ;
          ManifestExtend& operator=(const ManifestExtend &) = default ;
          ManifestExtend& operator=(ManifestExtend &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Excludes : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Excludes& obj) { 
              DARABONBA_PTR_TO_JSON(Language, language_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Excludes& obj) { 
              DARABONBA_PTR_FROM_JSON(Language, language_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Excludes() = default ;
            Excludes(const Excludes &) = default ;
            Excludes(Excludes &&) = default ;
            Excludes(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Excludes() = default ;
            Excludes& operator=(const Excludes &) = default ;
            Excludes& operator=(Excludes &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->language_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr; };
            // language Field Functions 
            bool hasLanguage() const { return this->language_ != nullptr;};
            void deleteLanguage() { this->language_ = nullptr;};
            inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
            inline Excludes& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Excludes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Excludes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> language_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->excludes_ == nullptr
        && this->inputRef_ == nullptr; };
          // excludes Field Functions 
          bool hasExcludes() const { return this->excludes_ != nullptr;};
          void deleteExcludes() { this->excludes_ = nullptr;};
          inline const vector<ManifestExtend::Excludes> & getExcludes() const { DARABONBA_PTR_GET_CONST(excludes_, vector<ManifestExtend::Excludes>) };
          inline vector<ManifestExtend::Excludes> getExcludes() { DARABONBA_PTR_GET(excludes_, vector<ManifestExtend::Excludes>) };
          inline ManifestExtend& setExcludes(const vector<ManifestExtend::Excludes> & excludes) { DARABONBA_PTR_SET_VALUE(excludes_, excludes) };
          inline ManifestExtend& setExcludes(vector<ManifestExtend::Excludes> && excludes) { DARABONBA_PTR_SET_RVALUE(excludes_, excludes) };


          // inputRef Field Functions 
          bool hasInputRef() const { return this->inputRef_ != nullptr;};
          void deleteInputRef() { this->inputRef_ = nullptr;};
          inline string getInputRef() const { DARABONBA_PTR_GET_DEFAULT(inputRef_, "") };
          inline ManifestExtend& setInputRef(string inputRef) { DARABONBA_PTR_SET_VALUE(inputRef_, inputRef) };


        protected:
          shared_ptr<vector<ManifestExtend::Excludes>> excludes_ {};
          shared_ptr<string> inputRef_ {};
        };

        virtual bool empty() const override { return this->manifestExtend_ == nullptr
        && this->manifestName_ == nullptr && this->outputFileBase_ == nullptr && this->type_ == nullptr; };
        // manifestExtend Field Functions 
        bool hasManifestExtend() const { return this->manifestExtend_ != nullptr;};
        void deleteManifestExtend() { this->manifestExtend_ = nullptr;};
        inline const GroupConfig::ManifestExtend & getManifestExtend() const { DARABONBA_PTR_GET_CONST(manifestExtend_, GroupConfig::ManifestExtend) };
        inline GroupConfig::ManifestExtend getManifestExtend() { DARABONBA_PTR_GET(manifestExtend_, GroupConfig::ManifestExtend) };
        inline GroupConfig& setManifestExtend(const GroupConfig::ManifestExtend & manifestExtend) { DARABONBA_PTR_SET_VALUE(manifestExtend_, manifestExtend) };
        inline GroupConfig& setManifestExtend(GroupConfig::ManifestExtend && manifestExtend) { DARABONBA_PTR_SET_RVALUE(manifestExtend_, manifestExtend) };


        // manifestName Field Functions 
        bool hasManifestName() const { return this->manifestName_ != nullptr;};
        void deleteManifestName() { this->manifestName_ = nullptr;};
        inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
        inline GroupConfig& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


        // outputFileBase Field Functions 
        bool hasOutputFileBase() const { return this->outputFileBase_ != nullptr;};
        void deleteOutputFileBase() { this->outputFileBase_ = nullptr;};
        inline const GroupConfig::OutputFileBase & getOutputFileBase() const { DARABONBA_PTR_GET_CONST(outputFileBase_, GroupConfig::OutputFileBase) };
        inline GroupConfig::OutputFileBase getOutputFileBase() { DARABONBA_PTR_GET(outputFileBase_, GroupConfig::OutputFileBase) };
        inline GroupConfig& setOutputFileBase(const GroupConfig::OutputFileBase & outputFileBase) { DARABONBA_PTR_SET_VALUE(outputFileBase_, outputFileBase) };
        inline GroupConfig& setOutputFileBase(GroupConfig::OutputFileBase && outputFileBase) { DARABONBA_PTR_SET_RVALUE(outputFileBase_, outputFileBase) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline GroupConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<GroupConfig::ManifestExtend> manifestExtend_ {};
        shared_ptr<string> manifestName_ {};
        shared_ptr<GroupConfig::OutputFileBase> outputFileBase_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->groupConfig_ == nullptr
        && this->name_ == nullptr && this->outputs_ == nullptr; };
      // groupConfig Field Functions 
      bool hasGroupConfig() const { return this->groupConfig_ != nullptr;};
      void deleteGroupConfig() { this->groupConfig_ = nullptr;};
      inline const OutputGroups::GroupConfig & getGroupConfig() const { DARABONBA_PTR_GET_CONST(groupConfig_, OutputGroups::GroupConfig) };
      inline OutputGroups::GroupConfig getGroupConfig() { DARABONBA_PTR_GET(groupConfig_, OutputGroups::GroupConfig) };
      inline OutputGroups& setGroupConfig(const OutputGroups::GroupConfig & groupConfig) { DARABONBA_PTR_SET_VALUE(groupConfig_, groupConfig) };
      inline OutputGroups& setGroupConfig(OutputGroups::GroupConfig && groupConfig) { DARABONBA_PTR_SET_RVALUE(groupConfig_, groupConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OutputGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline const vector<OutputGroups::Outputs> & getOutputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<OutputGroups::Outputs>) };
      inline vector<OutputGroups::Outputs> getOutputs() { DARABONBA_PTR_GET(outputs_, vector<OutputGroups::Outputs>) };
      inline OutputGroups& setOutputs(const vector<OutputGroups::Outputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
      inline OutputGroups& setOutputs(vector<OutputGroups::Outputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    protected:
      shared_ptr<OutputGroups::GroupConfig> groupConfig_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<OutputGroups::Outputs>> outputs_ {};
    };

    class Inputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
        DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Inputs() = default ;
      Inputs(const Inputs &) = default ;
      Inputs(Inputs &&) = default ;
      Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Inputs() = default ;
      Inputs& operator=(const Inputs &) = default ;
      Inputs& operator=(Inputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InputFile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
          DARABONBA_PTR_TO_JSON(Media, media_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
          DARABONBA_PTR_FROM_JSON(Media, media_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        InputFile() = default ;
        InputFile(const InputFile &) = default ;
        InputFile(InputFile &&) = default ;
        InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputFile() = default ;
        InputFile& operator=(const InputFile &) = default ;
        InputFile& operator=(InputFile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
        // media Field Functions 
        bool hasMedia() const { return this->media_ != nullptr;};
        void deleteMedia() { this->media_ = nullptr;};
        inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
        inline InputFile& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline InputFile& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> media_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->inputFile_ == nullptr
        && this->name_ == nullptr; };
      // inputFile Field Functions 
      bool hasInputFile() const { return this->inputFile_ != nullptr;};
      void deleteInputFile() { this->inputFile_ = nullptr;};
      inline const Inputs::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, Inputs::InputFile) };
      inline Inputs::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, Inputs::InputFile) };
      inline Inputs& setInputFile(const Inputs::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
      inline Inputs& setInputFile(Inputs::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Inputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<Inputs::InputFile> inputFile_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->inputs_ == nullptr
        && this->jobName_ == nullptr && this->outputGroups_ == nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<MediaConvertJobConfig::Inputs> & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<MediaConvertJobConfig::Inputs>) };
    inline vector<MediaConvertJobConfig::Inputs> getInputs() { DARABONBA_PTR_GET(inputs_, vector<MediaConvertJobConfig::Inputs>) };
    inline MediaConvertJobConfig& setInputs(const vector<MediaConvertJobConfig::Inputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline MediaConvertJobConfig& setInputs(vector<MediaConvertJobConfig::Inputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline MediaConvertJobConfig& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // outputGroups Field Functions 
    bool hasOutputGroups() const { return this->outputGroups_ != nullptr;};
    void deleteOutputGroups() { this->outputGroups_ = nullptr;};
    inline const vector<MediaConvertJobConfig::OutputGroups> & getOutputGroups() const { DARABONBA_PTR_GET_CONST(outputGroups_, vector<MediaConvertJobConfig::OutputGroups>) };
    inline vector<MediaConvertJobConfig::OutputGroups> getOutputGroups() { DARABONBA_PTR_GET(outputGroups_, vector<MediaConvertJobConfig::OutputGroups>) };
    inline MediaConvertJobConfig& setOutputGroups(const vector<MediaConvertJobConfig::OutputGroups> & outputGroups) { DARABONBA_PTR_SET_VALUE(outputGroups_, outputGroups) };
    inline MediaConvertJobConfig& setOutputGroups(vector<MediaConvertJobConfig::OutputGroups> && outputGroups) { DARABONBA_PTR_SET_RVALUE(outputGroups_, outputGroups) };


  protected:
    shared_ptr<vector<MediaConvertJobConfig::Inputs>> inputs_ {};
    shared_ptr<string> jobName_ {};
    shared_ptr<vector<MediaConvertJobConfig::OutputGroups>> outputGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
