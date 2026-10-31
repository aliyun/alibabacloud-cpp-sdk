// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECTIFYFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECTIFYFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetRectifyFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRectifyFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRectifyFlowResponseBody() = default ;
    GetRectifyFlowResponseBody(const GetRectifyFlowResponseBody &) = default ;
    GetRectifyFlowResponseBody(GetRectifyFlowResponseBody &&) = default ;
    GetRectifyFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRectifyFlowResponseBody() = default ;
    GetRectifyFlowResponseBody& operator=(const GetRectifyFlowResponseBody &) = default ;
    GetRectifyFlowResponseBody& operator=(GetRectifyFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Issues, issues_);
        DARABONBA_PTR_TO_JSON(ProblemCount, problemCount_);
        DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_TO_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_TO_JSON(RectifyPriority, rectifyPriority_);
        DARABONBA_PTR_TO_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_TO_JSON(RectifyUserName, rectifyUserName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubmitUser, submitUser_);
        DARABONBA_PTR_TO_JSON(SubmitUserName, submitUserName_);
        DARABONBA_PTR_TO_JSON(VerifyUser, verifyUser_);
        DARABONBA_PTR_TO_JSON(VerifyUserName, verifyUserName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Issues, issues_);
        DARABONBA_PTR_FROM_JSON(ProblemCount, problemCount_);
        DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_FROM_JSON(RectifyName, rectifyName_);
        DARABONBA_PTR_FROM_JSON(RectifyPriority, rectifyPriority_);
        DARABONBA_PTR_FROM_JSON(RectifyUser, rectifyUser_);
        DARABONBA_PTR_FROM_JSON(RectifyUserName, rectifyUserName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubmitUser, submitUser_);
        DARABONBA_PTR_FROM_JSON(SubmitUserName, submitUserName_);
        DARABONBA_PTR_FROM_JSON(VerifyUser, verifyUser_);
        DARABONBA_PTR_FROM_JSON(VerifyUserName, verifyUserName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Issues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Issues& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Issues& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Issues() = default ;
        Issues(const Issues &) = default ;
        Issues(Issues &&) = default ;
        Issues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Issues() = default ;
        Issues& operator=(const Issues &) = default ;
        Issues& operator=(Issues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(CommitTime, commitTime_);
            DARABONBA_PTR_TO_JSON(GovernItemId, governItemId_);
            DARABONBA_PTR_TO_JSON(GovernObjectId, governObjectId_);
            DARABONBA_PTR_TO_JSON(IsRectify, isRectify_);
            DARABONBA_PTR_TO_JSON(Owners, owners_);
            DARABONBA_PTR_TO_JSON(Problem, problem_);
            DARABONBA_PTR_TO_JSON(Properties, properties_);
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
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(CommitTime, commitTime_);
            DARABONBA_PTR_FROM_JSON(GovernItemId, governItemId_);
            DARABONBA_PTR_FROM_JSON(GovernObjectId, governObjectId_);
            DARABONBA_PTR_FROM_JSON(IsRectify, isRectify_);
            DARABONBA_PTR_FROM_JSON(Owners, owners_);
            DARABONBA_PTR_FROM_JSON(Problem, problem_);
            DARABONBA_PTR_FROM_JSON(Properties, properties_);
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
          Data() = default ;
          Data(const Data &) = default ;
          Data(Data &&) = default ;
          Data(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Data() = default ;
          Data& operator=(const Data &) = default ;
          Data& operator=(Data &&) = default ;
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
            // The ID of the knowledge.
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
            // The ID of the object.
            shared_ptr<string> objectId_ {};
            // The ID of the parent object.
            shared_ptr<string> parentObjectId_ {};
            // The contact email for the governance issue.
            shared_ptr<string> problemContactMail_ {};
            // Other contact information for the governance issue.
            shared_ptr<string> problemContactOther_ {};
            // The contact phone number for the governance issue.
            shared_ptr<string> problemContactPhone_ {};
            // The description of the governance issue.
            shared_ptr<string> problemDesc_ {};
            // The submission method of the issue.
            shared_ptr<string> problemSubmitType_ {};
            // The user who submitted the issue.
            shared_ptr<string> problemSubmitter_ {};
            // The name of the user who submitted the issue.
            shared_ptr<string> problemSubmitterUserName_ {};
            // The type of the governance issue.
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
            // The ID of the user.
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
          inline Data& setCommitTime(string commitTime) { DARABONBA_PTR_SET_VALUE(commitTime_, commitTime) };


          // governItemId Field Functions 
          bool hasGovernItemId() const { return this->governItemId_ != nullptr;};
          void deleteGovernItemId() { this->governItemId_ = nullptr;};
          inline int64_t getGovernItemId() const { DARABONBA_PTR_GET_DEFAULT(governItemId_, 0L) };
          inline Data& setGovernItemId(int64_t governItemId) { DARABONBA_PTR_SET_VALUE(governItemId_, governItemId) };


          // governObjectId Field Functions 
          bool hasGovernObjectId() const { return this->governObjectId_ != nullptr;};
          void deleteGovernObjectId() { this->governObjectId_ = nullptr;};
          inline int64_t getGovernObjectId() const { DARABONBA_PTR_GET_DEFAULT(governObjectId_, 0L) };
          inline Data& setGovernObjectId(int64_t governObjectId) { DARABONBA_PTR_SET_VALUE(governObjectId_, governObjectId) };


          // isRectify Field Functions 
          bool hasIsRectify() const { return this->isRectify_ != nullptr;};
          void deleteIsRectify() { this->isRectify_ = nullptr;};
          inline bool getIsRectify() const { DARABONBA_PTR_GET_DEFAULT(isRectify_, false) };
          inline Data& setIsRectify(bool isRectify) { DARABONBA_PTR_SET_VALUE(isRectify_, isRectify) };


          // owners Field Functions 
          bool hasOwners() const { return this->owners_ != nullptr;};
          void deleteOwners() { this->owners_ = nullptr;};
          inline const vector<Data::Owners> & getOwners() const { DARABONBA_PTR_GET_CONST(owners_, vector<Data::Owners>) };
          inline vector<Data::Owners> getOwners() { DARABONBA_PTR_GET(owners_, vector<Data::Owners>) };
          inline Data& setOwners(const vector<Data::Owners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
          inline Data& setOwners(vector<Data::Owners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


          // problem Field Functions 
          bool hasProblem() const { return this->problem_ != nullptr;};
          void deleteProblem() { this->problem_ = nullptr;};
          inline const Data::Problem & getProblem() const { DARABONBA_PTR_GET_CONST(problem_, Data::Problem) };
          inline Data::Problem getProblem() { DARABONBA_PTR_GET(problem_, Data::Problem) };
          inline Data& setProblem(const Data::Problem & problem) { DARABONBA_PTR_SET_VALUE(problem_, problem) };
          inline Data& setProblem(Data::Problem && problem) { DARABONBA_PTR_SET_RVALUE(problem_, problem) };


          // properties Field Functions 
          bool hasProperties() const { return this->properties_ != nullptr;};
          void deleteProperties() { this->properties_ = nullptr;};
          inline const map<string, string> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, string>) };
          inline map<string, string> getProperties() { DARABONBA_PTR_GET(properties_, map<string, string>) };
          inline Data& setProperties(const map<string, string> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
          inline Data& setProperties(map<string, string> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


          // rectifyId Field Functions 
          bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
          void deleteRectifyId() { this->rectifyId_ = nullptr;};
          inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
          inline Data& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


          // rectifyName Field Functions 
          bool hasRectifyName() const { return this->rectifyName_ != nullptr;};
          void deleteRectifyName() { this->rectifyName_ = nullptr;};
          inline string getRectifyName() const { DARABONBA_PTR_GET_DEFAULT(rectifyName_, "") };
          inline Data& setRectifyName(string rectifyName) { DARABONBA_PTR_SET_VALUE(rectifyName_, rectifyName) };


          // rectifyStatus Field Functions 
          bool hasRectifyStatus() const { return this->rectifyStatus_ != nullptr;};
          void deleteRectifyStatus() { this->rectifyStatus_ = nullptr;};
          inline string getRectifyStatus() const { DARABONBA_PTR_GET_DEFAULT(rectifyStatus_, "") };
          inline Data& setRectifyStatus(string rectifyStatus) { DARABONBA_PTR_SET_VALUE(rectifyStatus_, rectifyStatus) };


          // rectifyUser Field Functions 
          bool hasRectifyUser() const { return this->rectifyUser_ != nullptr;};
          void deleteRectifyUser() { this->rectifyUser_ = nullptr;};
          inline string getRectifyUser() const { DARABONBA_PTR_GET_DEFAULT(rectifyUser_, "") };
          inline Data& setRectifyUser(string rectifyUser) { DARABONBA_PTR_SET_VALUE(rectifyUser_, rectifyUser) };


          // rectifyUserName Field Functions 
          bool hasRectifyUserName() const { return this->rectifyUserName_ != nullptr;};
          void deleteRectifyUserName() { this->rectifyUserName_ = nullptr;};
          inline string getRectifyUserName() const { DARABONBA_PTR_GET_DEFAULT(rectifyUserName_, "") };
          inline Data& setRectifyUserName(string rectifyUserName) { DARABONBA_PTR_SET_VALUE(rectifyUserName_, rectifyUserName) };


          // relatedKnowledge Field Functions 
          bool hasRelatedKnowledge() const { return this->relatedKnowledge_ != nullptr;};
          void deleteRelatedKnowledge() { this->relatedKnowledge_ = nullptr;};
          inline const vector<Data::RelatedKnowledge> & getRelatedKnowledge() const { DARABONBA_PTR_GET_CONST(relatedKnowledge_, vector<Data::RelatedKnowledge>) };
          inline vector<Data::RelatedKnowledge> getRelatedKnowledge() { DARABONBA_PTR_GET(relatedKnowledge_, vector<Data::RelatedKnowledge>) };
          inline Data& setRelatedKnowledge(const vector<Data::RelatedKnowledge> & relatedKnowledge) { DARABONBA_PTR_SET_VALUE(relatedKnowledge_, relatedKnowledge) };
          inline Data& setRelatedKnowledge(vector<Data::RelatedKnowledge> && relatedKnowledge) { DARABONBA_PTR_SET_RVALUE(relatedKnowledge_, relatedKnowledge) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // submitType Field Functions 
          bool hasSubmitType() const { return this->submitType_ != nullptr;};
          void deleteSubmitType() { this->submitType_ = nullptr;};
          inline string getSubmitType() const { DARABONBA_PTR_GET_DEFAULT(submitType_, "") };
          inline Data& setSubmitType(string submitType) { DARABONBA_PTR_SET_VALUE(submitType_, submitType) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
          inline Data& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        protected:
          // The submission time.
          shared_ptr<string> commitTime_ {};
          // The ID of the governance object.
          shared_ptr<int64_t> governItemId_ {};
          // The ID of the governance object.
          shared_ptr<int64_t> governObjectId_ {};
          // Specifies whether the rectification is in progress.
          shared_ptr<bool> isRectify_ {};
          // The list of owners.
          shared_ptr<vector<Data::Owners>> owners_ {};
          // The governance issue object.
          shared_ptr<Data::Problem> problem_ {};
          // The property map of the governance object.
          shared_ptr<map<string, string>> properties_ {};
          // The ID of the rectification.
          shared_ptr<int64_t> rectifyId_ {};
          // The name of the rectification.
          shared_ptr<string> rectifyName_ {};
          // The status of the rectification.
          shared_ptr<string> rectifyStatus_ {};
          // The ID of the user who performs the rectification.
          shared_ptr<string> rectifyUser_ {};
          // The display name of the user who performs the rectification.
          shared_ptr<string> rectifyUserName_ {};
          // The related knowledge base.
          shared_ptr<vector<Data::RelatedKnowledge>> relatedKnowledge_ {};
          // The status of the governance object.
          shared_ptr<string> status_ {};
          // The submission method.
          shared_ptr<string> submitType_ {};
          // The tenant ID.
          shared_ptr<int64_t> tenantId_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<Issues::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Issues::Data>) };
        inline vector<Issues::Data> getData() { DARABONBA_PTR_GET(data_, vector<Issues::Data>) };
        inline Issues& setData(const vector<Issues::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Issues& setData(vector<Issues::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Issues& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The issues on the current page. The fields are consistent with the issue list.
        shared_ptr<vector<Issues::Data>> data_ {};
        // The total number of issues.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->finishTime_ == nullptr
        && this->issues_ == nullptr && this->problemCount_ == nullptr && this->rectifyId_ == nullptr && this->rectifyName_ == nullptr && this->rectifyPriority_ == nullptr
        && this->rectifyUser_ == nullptr && this->rectifyUserName_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->submitUser_ == nullptr
        && this->submitUserName_ == nullptr && this->verifyUser_ == nullptr && this->verifyUserName_ == nullptr; };
      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Data& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // issues Field Functions 
      bool hasIssues() const { return this->issues_ != nullptr;};
      void deleteIssues() { this->issues_ = nullptr;};
      inline const Data::Issues & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, Data::Issues) };
      inline Data::Issues getIssues() { DARABONBA_PTR_GET(issues_, Data::Issues) };
      inline Data& setIssues(const Data::Issues & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
      inline Data& setIssues(Data::Issues && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


      // problemCount Field Functions 
      bool hasProblemCount() const { return this->problemCount_ != nullptr;};
      void deleteProblemCount() { this->problemCount_ = nullptr;};
      inline int64_t getProblemCount() const { DARABONBA_PTR_GET_DEFAULT(problemCount_, 0L) };
      inline Data& setProblemCount(int64_t problemCount) { DARABONBA_PTR_SET_VALUE(problemCount_, problemCount) };


      // rectifyId Field Functions 
      bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
      void deleteRectifyId() { this->rectifyId_ = nullptr;};
      inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
      inline Data& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


      // rectifyName Field Functions 
      bool hasRectifyName() const { return this->rectifyName_ != nullptr;};
      void deleteRectifyName() { this->rectifyName_ = nullptr;};
      inline string getRectifyName() const { DARABONBA_PTR_GET_DEFAULT(rectifyName_, "") };
      inline Data& setRectifyName(string rectifyName) { DARABONBA_PTR_SET_VALUE(rectifyName_, rectifyName) };


      // rectifyPriority Field Functions 
      bool hasRectifyPriority() const { return this->rectifyPriority_ != nullptr;};
      void deleteRectifyPriority() { this->rectifyPriority_ = nullptr;};
      inline string getRectifyPriority() const { DARABONBA_PTR_GET_DEFAULT(rectifyPriority_, "") };
      inline Data& setRectifyPriority(string rectifyPriority) { DARABONBA_PTR_SET_VALUE(rectifyPriority_, rectifyPriority) };


      // rectifyUser Field Functions 
      bool hasRectifyUser() const { return this->rectifyUser_ != nullptr;};
      void deleteRectifyUser() { this->rectifyUser_ = nullptr;};
      inline string getRectifyUser() const { DARABONBA_PTR_GET_DEFAULT(rectifyUser_, "") };
      inline Data& setRectifyUser(string rectifyUser) { DARABONBA_PTR_SET_VALUE(rectifyUser_, rectifyUser) };


      // rectifyUserName Field Functions 
      bool hasRectifyUserName() const { return this->rectifyUserName_ != nullptr;};
      void deleteRectifyUserName() { this->rectifyUserName_ = nullptr;};
      inline string getRectifyUserName() const { DARABONBA_PTR_GET_DEFAULT(rectifyUserName_, "") };
      inline Data& setRectifyUserName(string rectifyUserName) { DARABONBA_PTR_SET_VALUE(rectifyUserName_, rectifyUserName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitUser Field Functions 
      bool hasSubmitUser() const { return this->submitUser_ != nullptr;};
      void deleteSubmitUser() { this->submitUser_ = nullptr;};
      inline string getSubmitUser() const { DARABONBA_PTR_GET_DEFAULT(submitUser_, "") };
      inline Data& setSubmitUser(string submitUser) { DARABONBA_PTR_SET_VALUE(submitUser_, submitUser) };


      // submitUserName Field Functions 
      bool hasSubmitUserName() const { return this->submitUserName_ != nullptr;};
      void deleteSubmitUserName() { this->submitUserName_ = nullptr;};
      inline string getSubmitUserName() const { DARABONBA_PTR_GET_DEFAULT(submitUserName_, "") };
      inline Data& setSubmitUserName(string submitUserName) { DARABONBA_PTR_SET_VALUE(submitUserName_, submitUserName) };


      // verifyUser Field Functions 
      bool hasVerifyUser() const { return this->verifyUser_ != nullptr;};
      void deleteVerifyUser() { this->verifyUser_ = nullptr;};
      inline string getVerifyUser() const { DARABONBA_PTR_GET_DEFAULT(verifyUser_, "") };
      inline Data& setVerifyUser(string verifyUser) { DARABONBA_PTR_SET_VALUE(verifyUser_, verifyUser) };


      // verifyUserName Field Functions 
      bool hasVerifyUserName() const { return this->verifyUserName_ != nullptr;};
      void deleteVerifyUserName() { this->verifyUserName_ = nullptr;};
      inline string getVerifyUserName() const { DARABONBA_PTR_GET_DEFAULT(verifyUserName_, "") };
      inline Data& setVerifyUserName(string verifyUserName) { DARABONBA_PTR_SET_VALUE(verifyUserName_, verifyUserName) };


    protected:
      // The completion time as a UNIX timestamp in milliseconds. This parameter is empty if the rectification is not completed.
      shared_ptr<int64_t> finishTime_ {};
      // The pagination information for rectification issues. If the rectification has been accepted, the acceptance snapshot is used.
      shared_ptr<Data::Issues> issues_ {};
      // The total number of current issues in the process.
      shared_ptr<int64_t> problemCount_ {};
      // The process ID.
      shared_ptr<int64_t> rectifyId_ {};
      // The process name.
      shared_ptr<string> rectifyName_ {};
      // The priority.
      shared_ptr<string> rectifyPriority_ {};
      // The rectifier ID.
      shared_ptr<string> rectifyUser_ {};
      // The rectifier name.
      shared_ptr<string> rectifyUserName_ {};
      // The start time, in UNIX milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The process status.
      shared_ptr<string> status_ {};
      // The initiator ID.
      shared_ptr<string> submitUser_ {};
      // The initiator name.
      shared_ptr<string> submitUserName_ {};
      // The verifier ID.
      shared_ptr<string> verifyUser_ {};
      // The verifier name.
      shared_ptr<string> verifyUserName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRectifyFlowResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRectifyFlowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRectifyFlowResponseBody::Data) };
    inline GetRectifyFlowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRectifyFlowResponseBody::Data) };
    inline GetRectifyFlowResponseBody& setData(const GetRectifyFlowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRectifyFlowResponseBody& setData(GetRectifyFlowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRectifyFlowResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRectifyFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRectifyFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRectifyFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The rectification details.
    shared_ptr<GetRectifyFlowResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
