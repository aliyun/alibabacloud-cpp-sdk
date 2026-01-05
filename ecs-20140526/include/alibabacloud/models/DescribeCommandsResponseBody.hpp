// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODY_HPP_
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
  class DescribeCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Commands, commands_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Commands, commands_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCommandsResponseBody() = default ;
    DescribeCommandsResponseBody(const DescribeCommandsResponseBody &) = default ;
    DescribeCommandsResponseBody(DescribeCommandsResponseBody &&) = default ;
    DescribeCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBody() = default ;
    DescribeCommandsResponseBody& operator=(const DescribeCommandsResponseBody &) = default ;
    DescribeCommandsResponseBody& operator=(DescribeCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Commands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Commands& obj) { 
        DARABONBA_PTR_TO_JSON(Command, command_);
      };
      friend void from_json(const Darabonba::Json& j, Commands& obj) { 
        DARABONBA_PTR_FROM_JSON(Command, command_);
      };
      Commands() = default ;
      Commands(const Commands &) = default ;
      Commands(Commands &&) = default ;
      Commands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Commands() = default ;
      Commands& operator=(const Commands &) = default ;
      Commands& operator=(Commands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Command : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Command& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_TO_JSON(CommandId, commandId_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
          DARABONBA_PTR_TO_JSON(InvokeTimes, invokeTimes_);
          DARABONBA_PTR_TO_JSON(Latest, latest_);
          DARABONBA_PTR_TO_JSON(Launcher, launcher_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_TO_JSON(ParameterNames, parameterNames_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
        };
        friend void from_json(const Darabonba::Json& j, Command& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
          DARABONBA_PTR_FROM_JSON(InvokeTimes, invokeTimes_);
          DARABONBA_PTR_FROM_JSON(Latest, latest_);
          DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
          DARABONBA_PTR_FROM_JSON(ParameterNames, parameterNames_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
        };
        Command() = default ;
        Command(const Command &) = default ;
        Command(Command &&) = default ;
        Command(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Command() = default ;
        Command& operator=(const Command &) = default ;
        Command& operator=(Command &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key of the command.
            shared_ptr<string> tagKey_ {};
            // The tag value of the command.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class ParameterNames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParameterNames& obj) { 
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
          };
          friend void from_json(const Darabonba::Json& j, ParameterNames& obj) { 
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
          };
          ParameterNames() = default ;
          ParameterNames(const ParameterNames &) = default ;
          ParameterNames(ParameterNames &&) = default ;
          ParameterNames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParameterNames() = default ;
          ParameterNames& operator=(const ParameterNames &) = default ;
          ParameterNames& operator=(ParameterNames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->parameterName_ == nullptr; };
          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline const vector<string> & getParameterName() const { DARABONBA_PTR_GET_CONST(parameterName_, vector<string>) };
          inline vector<string> getParameterName() { DARABONBA_PTR_GET(parameterName_, vector<string>) };
          inline ParameterNames& setParameterName(const vector<string> & parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };
          inline ParameterNames& setParameterName(vector<string> && parameterName) { DARABONBA_PTR_SET_RVALUE(parameterName_, parameterName) };


        protected:
          shared_ptr<vector<string>> parameterName_ {};
        };

        class ParameterDefinitions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParameterDefinitions& obj) { 
            DARABONBA_PTR_TO_JSON(ParameterDefinition, parameterDefinition_);
          };
          friend void from_json(const Darabonba::Json& j, ParameterDefinitions& obj) { 
            DARABONBA_PTR_FROM_JSON(ParameterDefinition, parameterDefinition_);
          };
          ParameterDefinitions() = default ;
          ParameterDefinitions(const ParameterDefinitions &) = default ;
          ParameterDefinitions(ParameterDefinitions &&) = default ;
          ParameterDefinitions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParameterDefinitions() = default ;
          ParameterDefinitions& operator=(const ParameterDefinitions &) = default ;
          ParameterDefinitions& operator=(ParameterDefinitions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ParameterDefinition : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ParameterDefinition& obj) { 
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_TO_JSON(PatternRegex, patternRegex_);
              DARABONBA_PTR_TO_JSON(PossibleValues, possibleValues_);
              DARABONBA_PTR_TO_JSON(Required, required_);
            };
            friend void from_json(const Darabonba::Json& j, ParameterDefinition& obj) { 
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_FROM_JSON(PatternRegex, patternRegex_);
              DARABONBA_PTR_FROM_JSON(PossibleValues, possibleValues_);
              DARABONBA_PTR_FROM_JSON(Required, required_);
            };
            ParameterDefinition() = default ;
            ParameterDefinition(const ParameterDefinition &) = default ;
            ParameterDefinition(ParameterDefinition &&) = default ;
            ParameterDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ParameterDefinition() = default ;
            ParameterDefinition& operator=(const ParameterDefinition &) = default ;
            ParameterDefinition& operator=(ParameterDefinition &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PossibleValues : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PossibleValues& obj) { 
                DARABONBA_PTR_TO_JSON(PossibleValue, possibleValue_);
              };
              friend void from_json(const Darabonba::Json& j, PossibleValues& obj) { 
                DARABONBA_PTR_FROM_JSON(PossibleValue, possibleValue_);
              };
              PossibleValues() = default ;
              PossibleValues(const PossibleValues &) = default ;
              PossibleValues(PossibleValues &&) = default ;
              PossibleValues(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PossibleValues() = default ;
              PossibleValues& operator=(const PossibleValues &) = default ;
              PossibleValues& operator=(PossibleValues &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->possibleValue_ == nullptr; };
              // possibleValue Field Functions 
              bool hasPossibleValue() const { return this->possibleValue_ != nullptr;};
              void deletePossibleValue() { this->possibleValue_ = nullptr;};
              inline const vector<string> & getPossibleValue() const { DARABONBA_PTR_GET_CONST(possibleValue_, vector<string>) };
              inline vector<string> getPossibleValue() { DARABONBA_PTR_GET(possibleValue_, vector<string>) };
              inline PossibleValues& setPossibleValue(const vector<string> & possibleValue) { DARABONBA_PTR_SET_VALUE(possibleValue_, possibleValue) };
              inline PossibleValues& setPossibleValue(vector<string> && possibleValue) { DARABONBA_PTR_SET_RVALUE(possibleValue_, possibleValue) };


            protected:
              shared_ptr<vector<string>> possibleValue_ {};
            };

            virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->parameterName_ == nullptr && this->patternRegex_ == nullptr && this->possibleValues_ == nullptr && this->required_ == nullptr; };
            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline ParameterDefinition& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline ParameterDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline ParameterDefinition& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            // patternRegex Field Functions 
            bool hasPatternRegex() const { return this->patternRegex_ != nullptr;};
            void deletePatternRegex() { this->patternRegex_ = nullptr;};
            inline string getPatternRegex() const { DARABONBA_PTR_GET_DEFAULT(patternRegex_, "") };
            inline ParameterDefinition& setPatternRegex(string patternRegex) { DARABONBA_PTR_SET_VALUE(patternRegex_, patternRegex) };


            // possibleValues Field Functions 
            bool hasPossibleValues() const { return this->possibleValues_ != nullptr;};
            void deletePossibleValues() { this->possibleValues_ = nullptr;};
            inline const ParameterDefinition::PossibleValues & getPossibleValues() const { DARABONBA_PTR_GET_CONST(possibleValues_, ParameterDefinition::PossibleValues) };
            inline ParameterDefinition::PossibleValues getPossibleValues() { DARABONBA_PTR_GET(possibleValues_, ParameterDefinition::PossibleValues) };
            inline ParameterDefinition& setPossibleValues(const ParameterDefinition::PossibleValues & possibleValues) { DARABONBA_PTR_SET_VALUE(possibleValues_, possibleValues) };
            inline ParameterDefinition& setPossibleValues(ParameterDefinition::PossibleValues && possibleValues) { DARABONBA_PTR_SET_RVALUE(possibleValues_, possibleValues) };


            // required Field Functions 
            bool hasRequired() const { return this->required_ != nullptr;};
            void deleteRequired() { this->required_ = nullptr;};
            inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
            inline ParameterDefinition& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          protected:
            // The default value of the custom parameter.
            shared_ptr<string> defaultValue_ {};
            // The description of the custom parameter.
            shared_ptr<string> description_ {};
            // The name of the custom parameter.
            shared_ptr<string> parameterName_ {};
            // The regular expression of the custom parameter.
            shared_ptr<string> patternRegex_ {};
            // The valid values of the custom parameter of the enumeration type.
            shared_ptr<ParameterDefinition::PossibleValues> possibleValues_ {};
            // Indicates whether the custom parameter is required. Valid values:
            // 
            // *   true
            // *   false
            // 
            // Default value: false.
            shared_ptr<bool> required_ {};
          };

          virtual bool empty() const override { return this->parameterDefinition_ == nullptr; };
          // parameterDefinition Field Functions 
          bool hasParameterDefinition() const { return this->parameterDefinition_ != nullptr;};
          void deleteParameterDefinition() { this->parameterDefinition_ = nullptr;};
          inline const vector<ParameterDefinitions::ParameterDefinition> & getParameterDefinition() const { DARABONBA_PTR_GET_CONST(parameterDefinition_, vector<ParameterDefinitions::ParameterDefinition>) };
          inline vector<ParameterDefinitions::ParameterDefinition> getParameterDefinition() { DARABONBA_PTR_GET(parameterDefinition_, vector<ParameterDefinitions::ParameterDefinition>) };
          inline ParameterDefinitions& setParameterDefinition(const vector<ParameterDefinitions::ParameterDefinition> & parameterDefinition) { DARABONBA_PTR_SET_VALUE(parameterDefinition_, parameterDefinition) };
          inline ParameterDefinitions& setParameterDefinition(vector<ParameterDefinitions::ParameterDefinition> && parameterDefinition) { DARABONBA_PTR_SET_RVALUE(parameterDefinition_, parameterDefinition) };


        protected:
          shared_ptr<vector<ParameterDefinitions::ParameterDefinition>> parameterDefinition_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->commandContent_ == nullptr && this->commandId_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->enableParameter_ == nullptr
        && this->invokeTimes_ == nullptr && this->latest_ == nullptr && this->launcher_ == nullptr && this->name_ == nullptr && this->parameterDefinitions_ == nullptr
        && this->parameterNames_ == nullptr && this->provider_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->timeout_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr && this->workingDir_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Command& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // commandContent Field Functions 
        bool hasCommandContent() const { return this->commandContent_ != nullptr;};
        void deleteCommandContent() { this->commandContent_ = nullptr;};
        inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
        inline Command& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


        // commandId Field Functions 
        bool hasCommandId() const { return this->commandId_ != nullptr;};
        void deleteCommandId() { this->commandId_ = nullptr;};
        inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
        inline Command& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Command& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Command& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enableParameter Field Functions 
        bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
        void deleteEnableParameter() { this->enableParameter_ = nullptr;};
        inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
        inline Command& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


        // invokeTimes Field Functions 
        bool hasInvokeTimes() const { return this->invokeTimes_ != nullptr;};
        void deleteInvokeTimes() { this->invokeTimes_ = nullptr;};
        inline int32_t getInvokeTimes() const { DARABONBA_PTR_GET_DEFAULT(invokeTimes_, 0) };
        inline Command& setInvokeTimes(int32_t invokeTimes) { DARABONBA_PTR_SET_VALUE(invokeTimes_, invokeTimes) };


        // latest Field Functions 
        bool hasLatest() const { return this->latest_ != nullptr;};
        void deleteLatest() { this->latest_ = nullptr;};
        inline bool getLatest() const { DARABONBA_PTR_GET_DEFAULT(latest_, false) };
        inline Command& setLatest(bool latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


        // launcher Field Functions 
        bool hasLauncher() const { return this->launcher_ != nullptr;};
        void deleteLauncher() { this->launcher_ = nullptr;};
        inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
        inline Command& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Command& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parameterDefinitions Field Functions 
        bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
        void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
        inline const Command::ParameterDefinitions & getParameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, Command::ParameterDefinitions) };
        inline Command::ParameterDefinitions getParameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, Command::ParameterDefinitions) };
        inline Command& setParameterDefinitions(const Command::ParameterDefinitions & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
        inline Command& setParameterDefinitions(Command::ParameterDefinitions && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


        // parameterNames Field Functions 
        bool hasParameterNames() const { return this->parameterNames_ != nullptr;};
        void deleteParameterNames() { this->parameterNames_ = nullptr;};
        inline const Command::ParameterNames & getParameterNames() const { DARABONBA_PTR_GET_CONST(parameterNames_, Command::ParameterNames) };
        inline Command::ParameterNames getParameterNames() { DARABONBA_PTR_GET(parameterNames_, Command::ParameterNames) };
        inline Command& setParameterNames(const Command::ParameterNames & parameterNames) { DARABONBA_PTR_SET_VALUE(parameterNames_, parameterNames) };
        inline Command& setParameterNames(Command::ParameterNames && parameterNames) { DARABONBA_PTR_SET_RVALUE(parameterNames_, parameterNames) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline Command& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Command& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Command::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Command::Tags) };
        inline Command::Tags getTags() { DARABONBA_PTR_GET(tags_, Command::Tags) };
        inline Command& setTags(const Command::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Command& setTags(Command::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline Command& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Command& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Command& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // workingDir Field Functions 
        bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
        void deleteWorkingDir() { this->workingDir_ = nullptr;};
        inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
        inline Command& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


      protected:
        // The category of the common command.
        shared_ptr<string> category_ {};
        // The content of the command, which is Base64-encoded.
        // 
        // *   If ContentEncoding is set to PlainText in the request, the original command content is returned.
        // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command content is returned.
        shared_ptr<string> commandContent_ {};
        // The command ID.
        shared_ptr<string> commandId_ {};
        // The time when the command was created.
        shared_ptr<string> creationTime_ {};
        // The description of the command.
        shared_ptr<string> description_ {};
        // Indicates whether the custom parameter feature is enabled for the command.
        shared_ptr<bool> enableParameter_ {};
        // The number of tasks created by using the command.
        shared_ptr<int32_t> invokeTimes_ {};
        // Indicates whether the common command is of the latest version. If multiple common commands from the same provider (`Provider`) belong to the same category and have the same name, these commands are different versions of the same command. This parameter is not returned for the Cloud Assistant commands that you created.
        shared_ptr<bool> latest_ {};
        // The launcher for script execution. The value cannot exceed 1 KB in length.
        shared_ptr<string> launcher_ {};
        // The name of the command.
        shared_ptr<string> name_ {};
        // The custom parameters of the command.
        shared_ptr<Command::ParameterDefinitions> parameterDefinitions_ {};
        // The custom parameter names that are parsed from the command content specified when the command was created. If the custom parameter feature is disabled, an empty list is returned.
        shared_ptr<Command::ParameterNames> parameterNames_ {};
        // The provider of the common command.
        shared_ptr<string> provider_ {};
        // The ID of the resource group to which the command belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The tags of the command.
        shared_ptr<Command::Tags> tags_ {};
        // The timeout period. Unit: seconds.
        shared_ptr<int64_t> timeout_ {};
        // The type of the command.
        shared_ptr<string> type_ {};
        // The version of the common command. If multiple common commands from the same provider (`Provider`) belong to the same category and have the same name, these commands are different versions of the same command. This parameter is not returned for the Cloud Assistant commands that you created.
        shared_ptr<int32_t> version_ {};
        // The execution path of the command.
        shared_ptr<string> workingDir_ {};
      };

      virtual bool empty() const override { return this->command_ == nullptr; };
      // command Field Functions 
      bool hasCommand() const { return this->command_ != nullptr;};
      void deleteCommand() { this->command_ = nullptr;};
      inline const vector<Commands::Command> & getCommand() const { DARABONBA_PTR_GET_CONST(command_, vector<Commands::Command>) };
      inline vector<Commands::Command> getCommand() { DARABONBA_PTR_GET(command_, vector<Commands::Command>) };
      inline Commands& setCommand(const vector<Commands::Command> & command) { DARABONBA_PTR_SET_VALUE(command_, command) };
      inline Commands& setCommand(vector<Commands::Command> && command) { DARABONBA_PTR_SET_RVALUE(command_, command) };


    protected:
      shared_ptr<vector<Commands::Command>> command_ {};
    };

    virtual bool empty() const override { return this->commands_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // commands Field Functions 
    bool hasCommands() const { return this->commands_ != nullptr;};
    void deleteCommands() { this->commands_ = nullptr;};
    inline const DescribeCommandsResponseBody::Commands & getCommands() const { DARABONBA_PTR_GET_CONST(commands_, DescribeCommandsResponseBody::Commands) };
    inline DescribeCommandsResponseBody::Commands getCommands() { DARABONBA_PTR_GET(commands_, DescribeCommandsResponseBody::Commands) };
    inline DescribeCommandsResponseBody& setCommands(const DescribeCommandsResponseBody::Commands & commands) { DARABONBA_PTR_SET_VALUE(commands_, commands) };
    inline DescribeCommandsResponseBody& setCommands(DescribeCommandsResponseBody::Commands && commands) { DARABONBA_PTR_SET_RVALUE(commands_, commands) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCommandsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeCommandsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeCommandsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCommandsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried commands.
    shared_ptr<DescribeCommandsResponseBody::Commands> commands_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of commands.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
