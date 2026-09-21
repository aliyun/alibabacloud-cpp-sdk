// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSKILLREQUEST_HPP_
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
  class CreateAgentSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(IconKey, iconKey_);
      DARABONBA_PTR_TO_JSON(PackageOssKey, packageOssKey_);
      DARABONBA_PTR_TO_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillPackageUrl, skillPackageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(IconKey, iconKey_);
      DARABONBA_PTR_FROM_JSON(PackageOssKey, packageOssKey_);
      DARABONBA_PTR_FROM_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillPackageUrl, skillPackageUrl_);
    };
    CreateAgentSkillRequest() = default ;
    CreateAgentSkillRequest(const CreateAgentSkillRequest &) = default ;
    CreateAgentSkillRequest(CreateAgentSkillRequest &&) = default ;
    CreateAgentSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSkillRequest() = default ;
    CreateAgentSkillRequest& operator=(const CreateAgentSkillRequest &) = default ;
    CreateAgentSkillRequest& operator=(CreateAgentSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileList_ == nullptr
        && this->iconKey_ == nullptr && this->packageOssKey_ == nullptr && this->skillDescription_ == nullptr && this->skillName_ == nullptr && this->skillPackageUrl_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<string> & getFileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<string>) };
    inline vector<string> getFileList() { DARABONBA_PTR_GET(fileList_, vector<string>) };
    inline CreateAgentSkillRequest& setFileList(const vector<string> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline CreateAgentSkillRequest& setFileList(vector<string> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // iconKey Field Functions 
    bool hasIconKey() const { return this->iconKey_ != nullptr;};
    void deleteIconKey() { this->iconKey_ = nullptr;};
    inline string getIconKey() const { DARABONBA_PTR_GET_DEFAULT(iconKey_, "") };
    inline CreateAgentSkillRequest& setIconKey(string iconKey) { DARABONBA_PTR_SET_VALUE(iconKey_, iconKey) };


    // packageOssKey Field Functions 
    bool hasPackageOssKey() const { return this->packageOssKey_ != nullptr;};
    void deletePackageOssKey() { this->packageOssKey_ = nullptr;};
    inline string getPackageOssKey() const { DARABONBA_PTR_GET_DEFAULT(packageOssKey_, "") };
    inline CreateAgentSkillRequest& setPackageOssKey(string packageOssKey) { DARABONBA_PTR_SET_VALUE(packageOssKey_, packageOssKey) };


    // skillDescription Field Functions 
    bool hasSkillDescription() const { return this->skillDescription_ != nullptr;};
    void deleteSkillDescription() { this->skillDescription_ = nullptr;};
    inline string getSkillDescription() const { DARABONBA_PTR_GET_DEFAULT(skillDescription_, "") };
    inline CreateAgentSkillRequest& setSkillDescription(string skillDescription) { DARABONBA_PTR_SET_VALUE(skillDescription_, skillDescription) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreateAgentSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillPackageUrl Field Functions 
    bool hasSkillPackageUrl() const { return this->skillPackageUrl_ != nullptr;};
    void deleteSkillPackageUrl() { this->skillPackageUrl_ = nullptr;};
    inline string getSkillPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(skillPackageUrl_, "") };
    inline CreateAgentSkillRequest& setSkillPackageUrl(string skillPackageUrl) { DARABONBA_PTR_SET_VALUE(skillPackageUrl_, skillPackageUrl) };


  protected:
    // The list of files in the skill package.
    shared_ptr<vector<string>> fileList_ {};
    // The icon of the custom skill.
    shared_ptr<string> iconKey_ {};
    // The OSS path of the skill package. This parameter is reserved by the system and does not need to be specified.
    shared_ptr<string> packageOssKey_ {};
    // The skill description.
    shared_ptr<string> skillDescription_ {};
    // The skill name.
    shared_ptr<string> skillName_ {};
    // The OSS download URL of the skill package. This parameter is required for API calls.
    shared_ptr<string> skillPackageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
