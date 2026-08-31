// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAASSETSGOVERNOBJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAASSETSGOVERNOBJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataAssetsGovernObjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataAssetsGovernObjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GovernObjectInfo, governObjectInfo_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataAssetsGovernObjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GovernObjectInfo, governObjectInfo_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataAssetsGovernObjectResponseBody() = default ;
    GetDataAssetsGovernObjectResponseBody(const GetDataAssetsGovernObjectResponseBody &) = default ;
    GetDataAssetsGovernObjectResponseBody(GetDataAssetsGovernObjectResponseBody &&) = default ;
    GetDataAssetsGovernObjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataAssetsGovernObjectResponseBody() = default ;
    GetDataAssetsGovernObjectResponseBody& operator=(const GetDataAssetsGovernObjectResponseBody &) = default ;
    GetDataAssetsGovernObjectResponseBody& operator=(GetDataAssetsGovernObjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GovernObjectInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GovernObjectInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
        DARABONBA_PTR_TO_JSON(GovernItemId, governItemId_);
        DARABONBA_PTR_TO_JSON(GovernObjectId, governObjectId_);
        DARABONBA_PTR_TO_JSON(IsRectify, isRectify_);
        DARABONBA_PTR_TO_JSON(Owners, owners_);
        DARABONBA_PTR_TO_JSON(Problem, problem_);
        DARABONBA_ANY_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_TO_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_TO_JSON(RectifyStatus, rectifyStatus_);
        DARABONBA_PTR_TO_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_TO_JSON(RectifyUserName, rectifyUserName_);
        DARABONBA_PTR_TO_JSON(RelatedKnowledge, relatedKnowledge_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitType, submitType_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, GovernObjectInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
        DARABONBA_PTR_FROM_JSON(GovernItemId, governItemId_);
        DARABONBA_PTR_FROM_JSON(GovernObjectId, governObjectId_);
        DARABONBA_PTR_FROM_JSON(IsRectify, isRectify_);
        DARABONBA_PTR_FROM_JSON(Owners, owners_);
        DARABONBA_PTR_FROM_JSON(Problem, problem_);
        DARABONBA_ANY_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_FROM_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_FROM_JSON(RectifyStatus, rectifyStatus_);
        DARABONBA_PTR_FROM_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_FROM_JSON(RectifyUserName, rectifyUserName_);
        DARABONBA_PTR_FROM_JSON(RelatedKnowledge, relatedKnowledge_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitType, submitType_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      };
      GovernObjectInfo() = default ;
      GovernObjectInfo(const GovernObjectInfo &) = default ;
      GovernObjectInfo(GovernObjectInfo &&) = default ;
      GovernObjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GovernObjectInfo() = default ;
      GovernObjectInfo& operator=(const GovernObjectInfo &) = default ;
      GovernObjectInfo& operator=(GovernObjectInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedKnowledge : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedKnowledge& obj) { 
          DARABONBA_PTR_TO_JSON(Cause, cause_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(Solution, solution_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedKnowledge& obj) { 
          DARABONBA_PTR_FROM_JSON(Cause, cause_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(Solution, solution_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        RelatedKnowledge() = default ;
        RelatedKnowledge(const RelatedKnowledge &) = default ;
        RelatedKnowledge(RelatedKnowledge &&) = default ;
        RelatedKnowledge(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedKnowledge() = default ;
        RelatedKnowledge& operator=(const RelatedKnowledge &) = default ;
        RelatedKnowledge& operator=(RelatedKnowledge &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cause_ == nullptr
        && this->desc_ == nullptr && this->knowledgeId_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->solution_ == nullptr
        && this->title_ == nullptr; };
        // cause Field Functions 
        bool hasCause() const { return this->cause_ != nullptr;};
        void deleteCause() { this->cause_ = nullptr;};
        inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
        inline RelatedKnowledge& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline RelatedKnowledge& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // knowledgeId Field Functions 
        bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
        void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
        inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
        inline RelatedKnowledge& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline RelatedKnowledge& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline RelatedKnowledge& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // solution Field Functions 
        bool hasSolution() const { return this->solution_ != nullptr;};
        void deleteSolution() { this->solution_ = nullptr;};
        inline string getSolution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
        inline RelatedKnowledge& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline RelatedKnowledge& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The cause of the issue.
        shared_ptr<string> cause_ {};
        // The description.
        shared_ptr<string> desc_ {};
        // The ID of the knowledge entry.
        shared_ptr<int64_t> knowledgeId_ {};
        // The owner.
        shared_ptr<string> owner_ {};
        // The name of the owner.
        shared_ptr<string> ownerName_ {};
        // The Solutions.
        shared_ptr<string> solution_ {};
        // The title.
        shared_ptr<string> title_ {};
      };

      class Problem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Problem& obj) { 
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ParentObjectId, parentObjectId_);
          DARABONBA_PTR_TO_JSON(ProblemContactMail, problemContactMail_);
          DARABONBA_PTR_TO_JSON(ProblemContactOther, problemContactOther_);
          DARABONBA_PTR_TO_JSON(ProblemContactPhone, problemContactPhone_);
          DARABONBA_PTR_TO_JSON(ProblemDesc, problemDesc_);
          DARABONBA_PTR_TO_JSON(ProblemSubmitType, problemSubmitType_);
          DARABONBA_PTR_TO_JSON(ProblemSubmitter, problemSubmitter_);
          DARABONBA_PTR_TO_JSON(ProblemSubmitterUserName, problemSubmitterUserName_);
          DARABONBA_PTR_TO_JSON(ProblemTypes, problemTypes_);
        };
        friend void from_json(const Darabonba::Json& j, Problem& obj) { 
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ParentObjectId, parentObjectId_);
          DARABONBA_PTR_FROM_JSON(ProblemContactMail, problemContactMail_);
          DARABONBA_PTR_FROM_JSON(ProblemContactOther, problemContactOther_);
          DARABONBA_PTR_FROM_JSON(ProblemContactPhone, problemContactPhone_);
          DARABONBA_PTR_FROM_JSON(ProblemDesc, problemDesc_);
          DARABONBA_PTR_FROM_JSON(ProblemSubmitType, problemSubmitType_);
          DARABONBA_PTR_FROM_JSON(ProblemSubmitter, problemSubmitter_);
          DARABONBA_PTR_FROM_JSON(ProblemSubmitterUserName, problemSubmitterUserName_);
          DARABONBA_PTR_FROM_JSON(ProblemTypes, problemTypes_);
        };
        Problem() = default ;
        Problem(const Problem &) = default ;
        Problem(Problem &&) = default ;
        Problem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Problem() = default ;
        Problem& operator=(const Problem &) = default ;
        Problem& operator=(Problem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->objectId_ == nullptr
        && this->parentObjectId_ == nullptr && this->problemContactMail_ == nullptr && this->problemContactOther_ == nullptr && this->problemContactPhone_ == nullptr && this->problemDesc_ == nullptr
        && this->problemSubmitType_ == nullptr && this->problemSubmitter_ == nullptr && this->problemSubmitterUserName_ == nullptr && this->problemTypes_ == nullptr; };
        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline Problem& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // parentObjectId Field Functions 
        bool hasParentObjectId() const { return this->parentObjectId_ != nullptr;};
        void deleteParentObjectId() { this->parentObjectId_ = nullptr;};
        inline string getParentObjectId() const { DARABONBA_PTR_GET_DEFAULT(parentObjectId_, "") };
        inline Problem& setParentObjectId(string parentObjectId) { DARABONBA_PTR_SET_VALUE(parentObjectId_, parentObjectId) };


        // problemContactMail Field Functions 
        bool hasProblemContactMail() const { return this->problemContactMail_ != nullptr;};
        void deleteProblemContactMail() { this->problemContactMail_ = nullptr;};
        inline string getProblemContactMail() const { DARABONBA_PTR_GET_DEFAULT(problemContactMail_, "") };
        inline Problem& setProblemContactMail(string problemContactMail) { DARABONBA_PTR_SET_VALUE(problemContactMail_, problemContactMail) };


        // problemContactOther Field Functions 
        bool hasProblemContactOther() const { return this->problemContactOther_ != nullptr;};
        void deleteProblemContactOther() { this->problemContactOther_ = nullptr;};
        inline string getProblemContactOther() const { DARABONBA_PTR_GET_DEFAULT(problemContactOther_, "") };
        inline Problem& setProblemContactOther(string problemContactOther) { DARABONBA_PTR_SET_VALUE(problemContactOther_, problemContactOther) };


        // problemContactPhone Field Functions 
        bool hasProblemContactPhone() const { return this->problemContactPhone_ != nullptr;};
        void deleteProblemContactPhone() { this->problemContactPhone_ = nullptr;};
        inline string getProblemContactPhone() const { DARABONBA_PTR_GET_DEFAULT(problemContactPhone_, "") };
        inline Problem& setProblemContactPhone(string problemContactPhone) { DARABONBA_PTR_SET_VALUE(problemContactPhone_, problemContactPhone) };


        // problemDesc Field Functions 
        bool hasProblemDesc() const { return this->problemDesc_ != nullptr;};
        void deleteProblemDesc() { this->problemDesc_ = nullptr;};
        inline string getProblemDesc() const { DARABONBA_PTR_GET_DEFAULT(problemDesc_, "") };
        inline Problem& setProblemDesc(string problemDesc) { DARABONBA_PTR_SET_VALUE(problemDesc_, problemDesc) };


        // problemSubmitType Field Functions 
        bool hasProblemSubmitType() const { return this->problemSubmitType_ != nullptr;};
        void deleteProblemSubmitType() { this->problemSubmitType_ = nullptr;};
        inline string getProblemSubmitType() const { DARABONBA_PTR_GET_DEFAULT(problemSubmitType_, "") };
        inline Problem& setProblemSubmitType(string problemSubmitType) { DARABONBA_PTR_SET_VALUE(problemSubmitType_, problemSubmitType) };


        // problemSubmitter Field Functions 
        bool hasProblemSubmitter() const { return this->problemSubmitter_ != nullptr;};
        void deleteProblemSubmitter() { this->problemSubmitter_ = nullptr;};
        inline string getProblemSubmitter() const { DARABONBA_PTR_GET_DEFAULT(problemSubmitter_, "") };
        inline Problem& setProblemSubmitter(string problemSubmitter) { DARABONBA_PTR_SET_VALUE(problemSubmitter_, problemSubmitter) };


        // problemSubmitterUserName Field Functions 
        bool hasProblemSubmitterUserName() const { return this->problemSubmitterUserName_ != nullptr;};
        void deleteProblemSubmitterUserName() { this->problemSubmitterUserName_ = nullptr;};
        inline string getProblemSubmitterUserName() const { DARABONBA_PTR_GET_DEFAULT(problemSubmitterUserName_, "") };
        inline Problem& setProblemSubmitterUserName(string problemSubmitterUserName) { DARABONBA_PTR_SET_VALUE(problemSubmitterUserName_, problemSubmitterUserName) };


        // problemTypes Field Functions 
        bool hasProblemTypes() const { return this->problemTypes_ != nullptr;};
        void deleteProblemTypes() { this->problemTypes_ = nullptr;};
        inline const vector<string> & getProblemTypes() const { DARABONBA_PTR_GET_CONST(problemTypes_, vector<string>) };
        inline vector<string> getProblemTypes() { DARABONBA_PTR_GET(problemTypes_, vector<string>) };
        inline Problem& setProblemTypes(const vector<string> & problemTypes) { DARABONBA_PTR_SET_VALUE(problemTypes_, problemTypes) };
        inline Problem& setProblemTypes(vector<string> && problemTypes) { DARABONBA_PTR_SET_RVALUE(problemTypes_, problemTypes) };


      protected:
        // The object ID.
        shared_ptr<string> objectId_ {};
        // The ID of the parent object.
        shared_ptr<string> parentObjectId_ {};
        // The contact email for the governance issue.
        shared_ptr<string> problemContactMail_ {};
        // The other contact information for the governance issue.
        shared_ptr<string> problemContactOther_ {};
        // The contact phone number for the governance issue.
        shared_ptr<string> problemContactPhone_ {};
        // The description of the governance issue.
        shared_ptr<string> problemDesc_ {};
        // The submission method of the issue.
        shared_ptr<string> problemSubmitType_ {};
        // The user who submitted the issue.
        shared_ptr<string> problemSubmitter_ {};
        // The username of the user who submitted the issue.
        shared_ptr<string> problemSubmitterUserName_ {};
        // The types of the governance issue.
        shared_ptr<vector<string>> problemTypes_ {};
      };

      class Owners : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Owners& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Owners& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Owners() = default ;
        Owners(const Owners &) = default ;
        Owners(Owners &&) = default ;
        Owners(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Owners() = default ;
        Owners& operator=(const Owners &) = default ;
        Owners& operator=(Owners &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Owners& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Owners& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The display name of the user.
        shared_ptr<string> displayName_ {};
        // The user ID.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->commitTime_ == nullptr
        && this->governItemId_ == nullptr && this->governObjectId_ == nullptr && this->isRectify_ == nullptr && this->owners_ == nullptr && this->problem_ == nullptr
        && this->properties_ == nullptr && this->rectifyId_ == nullptr && this->rectifyName_ == nullptr && this->rectifyStatus_ == nullptr && this->rectifyUser_ == nullptr
        && this->rectifyUserName_ == nullptr && this->relatedKnowledge_ == nullptr && this->status_ == nullptr && this->submitType_ == nullptr && this->tenantId_ == nullptr; };
      // commitTime Field Functions 
      bool hasCommitTime() const { return this->commitTime_ != nullptr;};
      void deleteCommitTime() { this->commitTime_ = nullptr;};
      inline string getCommitTime() const { DARABONBA_PTR_GET_DEFAULT(commitTime_, "") };
      inline GovernObjectInfo& setCommitTime(string commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


      // governItemId Field Functions 
      bool hasGovernItemId() const { return this->governItemId_ != nullptr;};
      void deleteGovernItemId() { this->governItemId_ = nullptr;};
      inline int64_t getGovernItemId() const { DARABONBA_PTR_GET_DEFAULT(governItemId_, 0L) };
      inline GovernObjectInfo& setGovernItemId(int64_t governItemId) { DARABONBA_PTR_SET_VALUE(governItemId_, governItemId) };


      // governObjectId Field Functions 
      bool hasGovernObjectId() const { return this->governObjectId_ != nullptr;};
      void deleteGovernObjectId() { this->governObjectId_ = nullptr;};
      inline int64_t getGovernObjectId() const { DARABONBA_PTR_GET_DEFAULT(governObjectId_, 0L) };
      inline GovernObjectInfo& setGovernObjectId(int64_t governObjectId) { DARABONBA_PTR_SET_VALUE(governObjectId_, governObjectId) };


      // isRectify Field Functions 
      bool hasIsRectify() const { return this->isRectify_ != nullptr;};
      void deleteIsRectify() { this->isRectify_ = nullptr;};
      inline bool getIsRectify() const { DARABONBA_PTR_GET_DEFAULT(isRectify_, false) };
      inline GovernObjectInfo& setIsRectify(bool isRectify) { DARABONBA_PTR_SET_VALUE(isRectify_, isRectify) };


      // owners Field Functions 
      bool hasOwners() const { return this->owners_ != nullptr;};
      void deleteOwners() { this->owners_ = nullptr;};
      inline const vector<GovernObjectInfo::Owners> & getOwners() const { DARABONBA_PTR_GET_CONST(owners_, vector<GovernObjectInfo::Owners>) };
      inline vector<GovernObjectInfo::Owners> getOwners() { DARABONBA_PTR_GET(owners_, vector<GovernObjectInfo::Owners>) };
      inline GovernObjectInfo& setOwners(const vector<GovernObjectInfo::Owners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
      inline GovernObjectInfo& setOwners(vector<GovernObjectInfo::Owners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


      // problem Field Functions 
      bool hasProblem() const { return this->problem_ != nullptr;};
      void deleteProblem() { this->problem_ = nullptr;};
      inline const GovernObjectInfo::Problem & getProblem() const { DARABONBA_PTR_GET_CONST(problem_, GovernObjectInfo::Problem) };
      inline GovernObjectInfo::Problem getProblem() { DARABONBA_PTR_GET(problem_, GovernObjectInfo::Problem) };
      inline GovernObjectInfo& setProblem(const GovernObjectInfo::Problem & problem) { DARABONBA_PTR_SET_VALUE(problem_, problem) };
      inline GovernObjectInfo& setProblem(GovernObjectInfo::Problem && problem) { DARABONBA_PTR_SET_RVALUE(problem_, problem) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline GovernObjectInfo& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline GovernObjectInfo& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // rectifyId Field Functions 
      bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
      void deleteRectifyId() { this->rectifyId_ = nullptr;};
      inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
      inline GovernObjectInfo& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


      // rectifyName Field Functions 
      bool hasRectifyName() const { return this->rectifyName_ != nullptr;};
      void deleteRectifyName() { this->rectifyName_ = nullptr;};
      inline string getRectifyName() const { DARABONBA_PTR_GET_DEFAULT(rectifyName_, "") };
      inline GovernObjectInfo& setRectifyName(string rectifyName) { DARABONBA_PTR_SET_VALUE(rectifyName_, rectifyName) };


      // rectifyStatus Field Functions 
      bool hasRectifyStatus() const { return this->rectifyStatus_ != nullptr;};
      void deleteRectifyStatus() { this->rectifyStatus_ = nullptr;};
      inline string getRectifyStatus() const { DARABONBA_PTR_GET_DEFAULT(rectifyStatus_, "") };
      inline GovernObjectInfo& setRectifyStatus(string rectifyStatus) { DARABONBA_PTR_SET_VALUE(rectifyStatus_, rectifyStatus) };


      // rectifyUser Field Functions 
      bool hasRectifyUser() const { return this->rectifyUser_ != nullptr;};
      void deleteRectifyUser() { this->rectifyUser_ = nullptr;};
      inline string getRectifyUser() const { DARABONBA_PTR_GET_DEFAULT(rectifyUser_, "") };
      inline GovernObjectInfo& setRectifyUser(string rectifyUser) { DARABONBA_PTR_SET_VALUE(rectifyUser_, rectifyUser) };


      // rectifyUserName Field Functions 
      bool hasRectifyUserName() const { return this->rectifyUserName_ != nullptr;};
      void deleteRectifyUserName() { this->rectifyUserName_ = nullptr;};
      inline string getRectifyUserName() const { DARABONBA_PTR_GET_DEFAULT(rectifyUserName_, "") };
      inline GovernObjectInfo& setRectifyUserName(string rectifyUserName) { DARABONBA_PTR_SET_VALUE(rectifyUserName_, rectifyUserName) };


      // relatedKnowledge Field Functions 
      bool hasRelatedKnowledge() const { return this->relatedKnowledge_ != nullptr;};
      void deleteRelatedKnowledge() { this->relatedKnowledge_ = nullptr;};
      inline const vector<GovernObjectInfo::RelatedKnowledge> & getRelatedKnowledge() const { DARABONBA_PTR_GET_CONST(relatedKnowledge_, vector<GovernObjectInfo::RelatedKnowledge>) };
      inline vector<GovernObjectInfo::RelatedKnowledge> getRelatedKnowledge() { DARABONBA_PTR_GET(relatedKnowledge_, vector<GovernObjectInfo::RelatedKnowledge>) };
      inline GovernObjectInfo& setRelatedKnowledge(const vector<GovernObjectInfo::RelatedKnowledge> & relatedKnowledge) { DARABONBA_PTR_SET_VALUE(relatedKnowledge_, relatedKnowledge) };
      inline GovernObjectInfo& setRelatedKnowledge(vector<GovernObjectInfo::RelatedKnowledge> && relatedKnowledge) { DARABONBA_PTR_SET_RVALUE(relatedKnowledge_, relatedKnowledge) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline GovernObjectInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitType Field Functions 
      bool hasSubmitType() const { return this->submitType_ != nullptr;};
      void deleteSubmitType() { this->submitType_ = nullptr;};
      inline string getSubmitType() const { DARABONBA_PTR_GET_DEFAULT(submitType_, "") };
      inline GovernObjectInfo& setSubmitType(string submitType) { DARABONBA_PTR_SET_VALUE(submitType_, submitType) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline GovernObjectInfo& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      // The time when the governance object was reported.
      shared_ptr<string> commitTime_ {};
      // The governance object ID.
      shared_ptr<int64_t> governItemId_ {};
      // The governance object ID.
      shared_ptr<int64_t> governObjectId_ {};
      // Indicates whether rectification is in progress.
      shared_ptr<bool> isRectify_ {};
      // The list of owners.
      shared_ptr<vector<GovernObjectInfo::Owners>> owners_ {};
      // The governance issue object.
      shared_ptr<GovernObjectInfo::Problem> problem_ {};
      // The properties.
      Darabonba::Json properties_ {};
      // The ID of the rectification.
      shared_ptr<int64_t> rectifyId_ {};
      // The name of the rectification.
      shared_ptr<string> rectifyName_ {};
      // The rectification status.
      shared_ptr<string> rectifyStatus_ {};
      // The ID of the user who performs the rectification.
      shared_ptr<string> rectifyUser_ {};
      // The display name of the rectification user.
      shared_ptr<string> rectifyUserName_ {};
      // The related knowledge base.
      shared_ptr<vector<GovernObjectInfo::RelatedKnowledge>> relatedKnowledge_ {};
      // The status of the governance object.
      shared_ptr<string> status_ {};
      // The submission method.
      shared_ptr<string> submitType_ {};
      // The tenant ID.
      shared_ptr<int64_t> tenantId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->governObjectInfo_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataAssetsGovernObjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // governObjectInfo Field Functions 
    bool hasGovernObjectInfo() const { return this->governObjectInfo_ != nullptr;};
    void deleteGovernObjectInfo() { this->governObjectInfo_ = nullptr;};
    inline const GetDataAssetsGovernObjectResponseBody::GovernObjectInfo & getGovernObjectInfo() const { DARABONBA_PTR_GET_CONST(governObjectInfo_, GetDataAssetsGovernObjectResponseBody::GovernObjectInfo) };
    inline GetDataAssetsGovernObjectResponseBody::GovernObjectInfo getGovernObjectInfo() { DARABONBA_PTR_GET(governObjectInfo_, GetDataAssetsGovernObjectResponseBody::GovernObjectInfo) };
    inline GetDataAssetsGovernObjectResponseBody& setGovernObjectInfo(const GetDataAssetsGovernObjectResponseBody::GovernObjectInfo & governObjectInfo) { DARABONBA_PTR_SET_VALUE(governObjectInfo_, governObjectInfo) };
    inline GetDataAssetsGovernObjectResponseBody& setGovernObjectInfo(GetDataAssetsGovernObjectResponseBody::GovernObjectInfo && governObjectInfo) { DARABONBA_PTR_SET_RVALUE(governObjectInfo_, governObjectInfo) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataAssetsGovernObjectResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataAssetsGovernObjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataAssetsGovernObjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataAssetsGovernObjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The governance object details.
    shared_ptr<GetDataAssetsGovernObjectResponseBody::GovernObjectInfo> governObjectInfo_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend response exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
