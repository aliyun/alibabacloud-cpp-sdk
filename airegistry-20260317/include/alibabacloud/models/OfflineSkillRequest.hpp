// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class OfflineSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillVersion, skillVersion_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillVersion, skillVersion_);
    };
    OfflineSkillRequest() = default ;
    OfflineSkillRequest(const OfflineSkillRequest &) = default ;
    OfflineSkillRequest(OfflineSkillRequest &&) = default ;
    OfflineSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineSkillRequest() = default ;
    OfflineSkillRequest& operator=(const OfflineSkillRequest &) = default ;
    OfflineSkillRequest& operator=(OfflineSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->scope_ == nullptr && this->skillName_ == nullptr && this->skillVersion_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline OfflineSkillRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline OfflineSkillRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline OfflineSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillVersion Field Functions 
    bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
    void deleteSkillVersion() { this->skillVersion_ = nullptr;};
    inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
    inline OfflineSkillRequest& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    shared_ptr<string> scope_ {};
    // This parameter is required.
    shared_ptr<string> skillName_ {};
    shared_ptr<string> skillVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
