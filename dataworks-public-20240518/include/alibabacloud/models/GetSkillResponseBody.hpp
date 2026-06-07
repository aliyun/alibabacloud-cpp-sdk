// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skill, skill_);
    };
    friend void from_json(const Darabonba::Json& j, GetSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skill, skill_);
    };
    GetSkillResponseBody() = default ;
    GetSkillResponseBody(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody(GetSkillResponseBody &&) = default ;
    GetSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSkillResponseBody() = default ;
    GetSkillResponseBody& operator=(const GetSkillResponseBody &) = default ;
    GetSkillResponseBody& operator=(GetSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Skill : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Skill& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
        DARABONBA_PTR_TO_JSON(BundleUrl, bundleUrl_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        DARABONBA_PTR_TO_JSON(VisibilityScope, visibilityScope_);
      };
      friend void from_json(const Darabonba::Json& j, Skill& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
        DARABONBA_PTR_FROM_JSON(BundleUrl, bundleUrl_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        DARABONBA_PTR_FROM_JSON(VisibilityScope, visibilityScope_);
      };
      Skill() = default ;
      Skill(const Skill &) = default ;
      Skill(Skill &&) = default ;
      Skill(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Skill() = default ;
      Skill& operator=(const Skill &) = default ;
      Skill& operator=(Skill &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VisibilityScope : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VisibilityScope& obj) { 
          DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_TO_JSON(UserIds, userIds_);
        };
        friend void from_json(const Darabonba::Json& j, VisibilityScope& obj) { 
          DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
        };
        VisibilityScope() = default ;
        VisibilityScope(const VisibilityScope &) = default ;
        VisibilityScope(VisibilityScope &&) = default ;
        VisibilityScope(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VisibilityScope() = default ;
        VisibilityScope& operator=(const VisibilityScope &) = default ;
        VisibilityScope& operator=(VisibilityScope &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->projectIds_ == nullptr
        && this->userIds_ == nullptr; };
        // projectIds Field Functions 
        bool hasProjectIds() const { return this->projectIds_ != nullptr;};
        void deleteProjectIds() { this->projectIds_ = nullptr;};
        inline const vector<string> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<string>) };
        inline vector<string> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<string>) };
        inline VisibilityScope& setProjectIds(const vector<string> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
        inline VisibilityScope& setProjectIds(vector<string> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


        // userIds Field Functions 
        bool hasUserIds() const { return this->userIds_ != nullptr;};
        void deleteUserIds() { this->userIds_ = nullptr;};
        inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
        inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
        inline VisibilityScope& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
        inline VisibilityScope& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


      protected:
        shared_ptr<vector<string>> projectIds_ {};
        shared_ptr<vector<string>> userIds_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr
        && this->bundleUrl_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->modifierId_ == nullptr && this->name_ == nullptr && this->visibility_ == nullptr && this->visibilityScope_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
      inline Skill& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


      // bundleUrl Field Functions 
      bool hasBundleUrl() const { return this->bundleUrl_ != nullptr;};
      void deleteBundleUrl() { this->bundleUrl_ = nullptr;};
      inline string getBundleUrl() const { DARABONBA_PTR_GET_DEFAULT(bundleUrl_, "") };
      inline Skill& setBundleUrl(string bundleUrl) { DARABONBA_PTR_SET_VALUE(bundleUrl_, bundleUrl) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Skill& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Skill& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Skill& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Skill& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Skill& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Skill& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // visibility Field Functions 
      bool hasVisibility() const { return this->visibility_ != nullptr;};
      void deleteVisibility() { this->visibility_ = nullptr;};
      inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
      inline Skill& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      // visibilityScope Field Functions 
      bool hasVisibilityScope() const { return this->visibilityScope_ != nullptr;};
      void deleteVisibilityScope() { this->visibilityScope_ = nullptr;};
      inline const Skill::VisibilityScope & getVisibilityScope() const { DARABONBA_PTR_GET_CONST(visibilityScope_, Skill::VisibilityScope) };
      inline Skill::VisibilityScope getVisibilityScope() { DARABONBA_PTR_GET(visibilityScope_, Skill::VisibilityScope) };
      inline Skill& setVisibilityScope(const Skill::VisibilityScope & visibilityScope) { DARABONBA_PTR_SET_VALUE(visibilityScope_, visibilityScope) };
      inline Skill& setVisibilityScope(Skill::VisibilityScope && visibilityScope) { DARABONBA_PTR_SET_RVALUE(visibilityScope_, visibilityScope) };


    protected:
      shared_ptr<string> body_ {};
      shared_ptr<string> bundleUrl_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> description_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> visibility_ {};
      shared_ptr<Skill::VisibilityScope> visibilityScope_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skill_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline const GetSkillResponseBody::Skill & getSkill() const { DARABONBA_PTR_GET_CONST(skill_, GetSkillResponseBody::Skill) };
    inline GetSkillResponseBody::Skill getSkill() { DARABONBA_PTR_GET(skill_, GetSkillResponseBody::Skill) };
    inline GetSkillResponseBody& setSkill(const GetSkillResponseBody::Skill & skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };
    inline GetSkillResponseBody& setSkill(GetSkillResponseBody::Skill && skill) { DARABONBA_PTR_SET_RVALUE(skill_, skill) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSkillResponseBody::Skill> skill_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
