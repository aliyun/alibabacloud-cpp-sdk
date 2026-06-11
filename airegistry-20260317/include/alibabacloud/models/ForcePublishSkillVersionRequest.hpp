// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORCEPUBLISHSKILLVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORCEPUBLISHSKILLVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class ForcePublishSkillVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForcePublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_TO_JSON(UpdateLatestLabel, updateLatestLabel_);
    };
    friend void from_json(const Darabonba::Json& j, ForcePublishSkillVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateLatestLabel, updateLatestLabel_);
    };
    ForcePublishSkillVersionRequest() = default ;
    ForcePublishSkillVersionRequest(const ForcePublishSkillVersionRequest &) = default ;
    ForcePublishSkillVersionRequest(ForcePublishSkillVersionRequest &&) = default ;
    ForcePublishSkillVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForcePublishSkillVersionRequest() = default ;
    ForcePublishSkillVersionRequest& operator=(const ForcePublishSkillVersionRequest &) = default ;
    ForcePublishSkillVersionRequest& operator=(ForcePublishSkillVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->skillName_ == nullptr && this->skillVersion_ == nullptr && this->updateLatestLabel_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ForcePublishSkillVersionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ForcePublishSkillVersionRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline ForcePublishSkillVersionRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    // updateLatestLabel Field Functions 
    bool hasUpdateLatestLabel() const { return this->updateLatestLabel_ != nullptr;};
    void deleteUpdateLatestLabel() { this->updateLatestLabel_ = nullptr;};
    inline bool getUpdateLatestLabel() const { DARABONBA_PTR_GET_DEFAULT(updateLatestLabel_, false) };
    inline ForcePublishSkillVersionRequest& setUpdateLatestLabel(bool updateLatestLabel) { DARABONBA_PTR_SET_VALUE(updateLatestLabel_, updateLatestLabel) };


  protected:
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
    // This parameter is required.
    shared_ptr<string> skillVersion_ {};
    shared_ptr<bool> updateLatestLabel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
