// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillInfo, skillInfo_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillInfo, skillInfo_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSkillsResponseBody() = default ;
    DescribeSkillsResponseBody(const DescribeSkillsResponseBody &) = default ;
    DescribeSkillsResponseBody(DescribeSkillsResponseBody &&) = default ;
    DescribeSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSkillsResponseBody() = default ;
    DescribeSkillsResponseBody& operator=(const DescribeSkillsResponseBody &) = default ;
    DescribeSkillsResponseBody& operator=(DescribeSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SkillInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SkillInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IconOssUrl, iconOssUrl_);
        DARABONBA_PTR_TO_JSON(InstalledCount, installedCount_);
        DARABONBA_PTR_TO_JSON(InstalledInstances, installedInstances_);
        DARABONBA_PTR_TO_JSON(Instruction, instruction_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillName, skillName_);
        DARABONBA_PTR_TO_JSON(SkillSource, skillSource_);
        DARABONBA_PTR_TO_JSON(SkillStatus, skillStatus_);
        DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, SkillInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IconOssUrl, iconOssUrl_);
        DARABONBA_PTR_FROM_JSON(InstalledCount, installedCount_);
        DARABONBA_PTR_FROM_JSON(InstalledInstances, installedInstances_);
        DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
        DARABONBA_PTR_FROM_JSON(SkillSource, skillSource_);
        DARABONBA_PTR_FROM_JSON(SkillStatus, skillStatus_);
        DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      SkillInfo() = default ;
      SkillInfo(const SkillInfo &) = default ;
      SkillInfo(SkillInfo &&) = default ;
      SkillInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SkillInfo() = default ;
      SkillInfo& operator=(const SkillInfo &) = default ;
      SkillInfo& operator=(SkillInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstalledInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstalledInstances& obj) { 
          DARABONBA_PTR_TO_JSON(InstallStatus, installStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, InstalledInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstallStatus, installStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        InstalledInstances() = default ;
        InstalledInstances(const InstalledInstances &) = default ;
        InstalledInstances(InstalledInstances &&) = default ;
        InstalledInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstalledInstances() = default ;
        InstalledInstances& operator=(const InstalledInstances &) = default ;
        InstalledInstances& operator=(InstalledInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->installStatus_ == nullptr
        && this->instanceId_ == nullptr; };
        // installStatus Field Functions 
        bool hasInstallStatus() const { return this->installStatus_ != nullptr;};
        void deleteInstallStatus() { this->installStatus_ = nullptr;};
        inline string getInstallStatus() const { DARABONBA_PTR_GET_DEFAULT(installStatus_, "") };
        inline InstalledInstances& setInstallStatus(string installStatus) { DARABONBA_PTR_SET_VALUE(installStatus_, installStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstalledInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The installation status.
        shared_ptr<string> installStatus_ {};
        // The cloud phone instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->iconOssUrl_ == nullptr && this->installedCount_ == nullptr && this->installedInstances_ == nullptr
        && this->instruction_ == nullptr && this->skillId_ == nullptr && this->skillName_ == nullptr && this->skillSource_ == nullptr && this->skillStatus_ == nullptr
        && this->sourceInstanceId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SkillInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SkillInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SkillInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // iconOssUrl Field Functions 
      bool hasIconOssUrl() const { return this->iconOssUrl_ != nullptr;};
      void deleteIconOssUrl() { this->iconOssUrl_ = nullptr;};
      inline string getIconOssUrl() const { DARABONBA_PTR_GET_DEFAULT(iconOssUrl_, "") };
      inline SkillInfo& setIconOssUrl(string iconOssUrl) { DARABONBA_PTR_SET_VALUE(iconOssUrl_, iconOssUrl) };


      // installedCount Field Functions 
      bool hasInstalledCount() const { return this->installedCount_ != nullptr;};
      void deleteInstalledCount() { this->installedCount_ = nullptr;};
      inline int32_t getInstalledCount() const { DARABONBA_PTR_GET_DEFAULT(installedCount_, 0) };
      inline SkillInfo& setInstalledCount(int32_t installedCount) { DARABONBA_PTR_SET_VALUE(installedCount_, installedCount) };


      // installedInstances Field Functions 
      bool hasInstalledInstances() const { return this->installedInstances_ != nullptr;};
      void deleteInstalledInstances() { this->installedInstances_ = nullptr;};
      inline const vector<SkillInfo::InstalledInstances> & getInstalledInstances() const { DARABONBA_PTR_GET_CONST(installedInstances_, vector<SkillInfo::InstalledInstances>) };
      inline vector<SkillInfo::InstalledInstances> getInstalledInstances() { DARABONBA_PTR_GET(installedInstances_, vector<SkillInfo::InstalledInstances>) };
      inline SkillInfo& setInstalledInstances(const vector<SkillInfo::InstalledInstances> & installedInstances) { DARABONBA_PTR_SET_VALUE(installedInstances_, installedInstances) };
      inline SkillInfo& setInstalledInstances(vector<SkillInfo::InstalledInstances> && installedInstances) { DARABONBA_PTR_SET_RVALUE(installedInstances_, installedInstances) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline SkillInfo& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
      inline SkillInfo& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline SkillInfo& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // skillSource Field Functions 
      bool hasSkillSource() const { return this->skillSource_ != nullptr;};
      void deleteSkillSource() { this->skillSource_ = nullptr;};
      inline string getSkillSource() const { DARABONBA_PTR_GET_DEFAULT(skillSource_, "") };
      inline SkillInfo& setSkillSource(string skillSource) { DARABONBA_PTR_SET_VALUE(skillSource_, skillSource) };


      // skillStatus Field Functions 
      bool hasSkillStatus() const { return this->skillStatus_ != nullptr;};
      void deleteSkillStatus() { this->skillStatus_ = nullptr;};
      inline string getSkillStatus() const { DARABONBA_PTR_GET_DEFAULT(skillStatus_, "") };
      inline SkillInfo& setSkillStatus(string skillStatus) { DARABONBA_PTR_SET_VALUE(skillStatus_, skillStatus) };


      // sourceInstanceId Field Functions 
      bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
      void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
      inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
      inline SkillInfo& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SkillInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SkillInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline SkillInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The skill category.
      shared_ptr<string> category_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The skill description.
      shared_ptr<string> description_ {};
      // The OSS download URL of the skill icon.
      shared_ptr<string> iconOssUrl_ {};
      // The number of instances that have the skill installed.
      shared_ptr<int32_t> installedCount_ {};
      // The information about the installed instances.
      shared_ptr<vector<SkillInfo::InstalledInstances>> installedInstances_ {};
      // The skill summary.
      shared_ptr<string> instruction_ {};
      // The skill ID.
      shared_ptr<string> skillId_ {};
      // The skill name.
      shared_ptr<string> skillName_ {};
      // The skill source.
      shared_ptr<string> skillSource_ {};
      // The skill lifecycle status.
      shared_ptr<string> skillStatus_ {};
      // The source node ID of the skill created from a conversation. This value is empty for user-uploaded skills.
      shared_ptr<string> sourceInstanceId_ {};
      // The skill status.
      shared_ptr<string> status_ {};
      // The skill type.
      shared_ptr<string> type_ {};
      // The skill version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->skillInfo_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSkillsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSkillsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillInfo Field Functions 
    bool hasSkillInfo() const { return this->skillInfo_ != nullptr;};
    void deleteSkillInfo() { this->skillInfo_ = nullptr;};
    inline const vector<DescribeSkillsResponseBody::SkillInfo> & getSkillInfo() const { DARABONBA_PTR_GET_CONST(skillInfo_, vector<DescribeSkillsResponseBody::SkillInfo>) };
    inline vector<DescribeSkillsResponseBody::SkillInfo> getSkillInfo() { DARABONBA_PTR_GET(skillInfo_, vector<DescribeSkillsResponseBody::SkillInfo>) };
    inline DescribeSkillsResponseBody& setSkillInfo(const vector<DescribeSkillsResponseBody::SkillInfo> & skillInfo) { DARABONBA_PTR_SET_VALUE(skillInfo_, skillInfo) };
    inline DescribeSkillsResponseBody& setSkillInfo(vector<DescribeSkillsResponseBody::SkillInfo> && skillInfo) { DARABONBA_PTR_SET_RVALUE(skillInfo_, skillInfo) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSkillsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill information.
    shared_ptr<vector<DescribeSkillsResponseBody::SkillInfo>> skillInfo_ {};
    // The total number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
