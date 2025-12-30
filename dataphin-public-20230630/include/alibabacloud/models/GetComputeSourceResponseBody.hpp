// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetComputeSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ComputeSourceInfo, computeSourceInfo_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ComputeSourceInfo, computeSourceInfo_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetComputeSourceResponseBody() = default ;
    GetComputeSourceResponseBody(const GetComputeSourceResponseBody &) = default ;
    GetComputeSourceResponseBody(GetComputeSourceResponseBody &&) = default ;
    GetComputeSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeSourceResponseBody() = default ;
    GetComputeSourceResponseBody& operator=(const GetComputeSourceResponseBody &) = default ;
    GetComputeSourceResponseBody& operator=(GetComputeSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ComputeSourceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ComputeSourceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BindProject, bindProject_);
        DARABONBA_PTR_TO_JSON(BindProjectId, bindProjectId_);
        DARABONBA_PTR_TO_JSON(BindProjectName, bindProjectName_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ComputeSourceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BindProject, bindProject_);
        DARABONBA_PTR_FROM_JSON(BindProjectId, bindProjectId_);
        DARABONBA_PTR_FROM_JSON(BindProjectName, bindProjectName_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ComputeSourceInfo() = default ;
      ComputeSourceInfo(const ComputeSourceInfo &) = default ;
      ComputeSourceInfo(ComputeSourceInfo &&) = default ;
      ComputeSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ComputeSourceInfo() = default ;
      ComputeSourceInfo& operator=(const ComputeSourceInfo &) = default ;
      ComputeSourceInfo& operator=(ComputeSourceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindProject_ == nullptr
        && this->bindProjectId_ == nullptr && this->bindProjectName_ == nullptr && this->creator_ == nullptr && this->creatorName_ == nullptr && this->description_ == nullptr
        && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->ownerName_ == nullptr && this->type_ == nullptr; };
      // bindProject Field Functions 
      bool hasBindProject() const { return this->bindProject_ != nullptr;};
      void deleteBindProject() { this->bindProject_ = nullptr;};
      inline bool getBindProject() const { DARABONBA_PTR_GET_DEFAULT(bindProject_, false) };
      inline ComputeSourceInfo& setBindProject(bool bindProject) { DARABONBA_PTR_SET_VALUE(bindProject_, bindProject) };


      // bindProjectId Field Functions 
      bool hasBindProjectId() const { return this->bindProjectId_ != nullptr;};
      void deleteBindProjectId() { this->bindProjectId_ = nullptr;};
      inline int64_t getBindProjectId() const { DARABONBA_PTR_GET_DEFAULT(bindProjectId_, 0L) };
      inline ComputeSourceInfo& setBindProjectId(int64_t bindProjectId) { DARABONBA_PTR_SET_VALUE(bindProjectId_, bindProjectId) };


      // bindProjectName Field Functions 
      bool hasBindProjectName() const { return this->bindProjectName_ != nullptr;};
      void deleteBindProjectName() { this->bindProjectName_ = nullptr;};
      inline string getBindProjectName() const { DARABONBA_PTR_GET_DEFAULT(bindProjectName_, "") };
      inline ComputeSourceInfo& setBindProjectName(string bindProjectName) { DARABONBA_PTR_SET_VALUE(bindProjectName_, bindProjectName) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline ComputeSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline ComputeSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ComputeSourceInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ComputeSourceInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ComputeSourceInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ComputeSourceInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ComputeSourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ComputeSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ComputeSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline ComputeSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ComputeSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> bindProject_ {};
      shared_ptr<int64_t> bindProjectId_ {};
      shared_ptr<string> bindProjectName_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> creatorName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> ownerName_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->computeSourceInfo_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetComputeSourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // computeSourceInfo Field Functions 
    bool hasComputeSourceInfo() const { return this->computeSourceInfo_ != nullptr;};
    void deleteComputeSourceInfo() { this->computeSourceInfo_ = nullptr;};
    inline const GetComputeSourceResponseBody::ComputeSourceInfo & getComputeSourceInfo() const { DARABONBA_PTR_GET_CONST(computeSourceInfo_, GetComputeSourceResponseBody::ComputeSourceInfo) };
    inline GetComputeSourceResponseBody::ComputeSourceInfo getComputeSourceInfo() { DARABONBA_PTR_GET(computeSourceInfo_, GetComputeSourceResponseBody::ComputeSourceInfo) };
    inline GetComputeSourceResponseBody& setComputeSourceInfo(const GetComputeSourceResponseBody::ComputeSourceInfo & computeSourceInfo) { DARABONBA_PTR_SET_VALUE(computeSourceInfo_, computeSourceInfo) };
    inline GetComputeSourceResponseBody& setComputeSourceInfo(GetComputeSourceResponseBody::ComputeSourceInfo && computeSourceInfo) { DARABONBA_PTR_SET_RVALUE(computeSourceInfo_, computeSourceInfo) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetComputeSourceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetComputeSourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetComputeSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetComputeSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetComputeSourceResponseBody::ComputeSourceInfo> computeSourceInfo_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
