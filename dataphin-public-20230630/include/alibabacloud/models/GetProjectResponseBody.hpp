// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODY_HPP_
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
  class GetProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProjectResponseBody() = default ;
    GetProjectResponseBody(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody(GetProjectResponseBody &&) = default ;
    GetProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBody() = default ;
    GetProjectResponseBody& operator=(const GetProjectResponseBody &) = default ;
    GetProjectResponseBody& operator=(GetProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProjectInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitDisplayName, bizUnitDisplayName_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_TO_JSON(ComputeSourceName, computeSourceName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_TO_JSON(StreamComputeSourceName, streamComputeSourceName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
      };
      friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitDisplayName, bizUnitDisplayName_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_FROM_JSON(ComputeSourceName, computeSourceName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(StreamComputeSourceName, streamComputeSourceName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
      };
      ProjectInfo() = default ;
      ProjectInfo(const ProjectInfo &) = default ;
      ProjectInfo(ProjectInfo &&) = default ;
      ProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProjectInfo() = default ;
      ProjectInfo& operator=(const ProjectInfo &) = default ;
      ProjectInfo& operator=(ProjectInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteLists : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteLists& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteLists& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        WhiteLists() = default ;
        WhiteLists(const WhiteLists &) = default ;
        WhiteLists(WhiteLists &&) = default ;
        WhiteLists(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteLists() = default ;
        WhiteLists& operator=(const WhiteLists &) = default ;
        WhiteLists& operator=(WhiteLists &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->ip_ == nullptr && this->port_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WhiteLists& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline WhiteLists& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline WhiteLists& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        shared_ptr<string> description_ {};
        // ip
        shared_ptr<string> ip_ {};
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->bizUnitDisplayName_ == nullptr
        && this->bizUnitId_ == nullptr && this->computeSourceId_ == nullptr && this->computeSourceName_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->env_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mode_ == nullptr
        && this->name_ == nullptr && this->nameSpaceTag_ == nullptr && this->owner_ == nullptr && this->ownerName_ == nullptr && this->streamComputeSourceId_ == nullptr
        && this->streamComputeSourceName_ == nullptr && this->type_ == nullptr && this->whiteLists_ == nullptr; };
      // bizUnitDisplayName Field Functions 
      bool hasBizUnitDisplayName() const { return this->bizUnitDisplayName_ != nullptr;};
      void deleteBizUnitDisplayName() { this->bizUnitDisplayName_ = nullptr;};
      inline string getBizUnitDisplayName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitDisplayName_, "") };
      inline ProjectInfo& setBizUnitDisplayName(string bizUnitDisplayName) { DARABONBA_PTR_SET_VALUE(bizUnitDisplayName_, bizUnitDisplayName) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline ProjectInfo& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // computeSourceId Field Functions 
      bool hasComputeSourceId() const { return this->computeSourceId_ != nullptr;};
      void deleteComputeSourceId() { this->computeSourceId_ = nullptr;};
      inline int64_t getComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(computeSourceId_, 0L) };
      inline ProjectInfo& setComputeSourceId(int64_t computeSourceId) { DARABONBA_PTR_SET_VALUE(computeSourceId_, computeSourceId) };


      // computeSourceName Field Functions 
      bool hasComputeSourceName() const { return this->computeSourceName_ != nullptr;};
      void deleteComputeSourceName() { this->computeSourceName_ = nullptr;};
      inline string getComputeSourceName() const { DARABONBA_PTR_GET_DEFAULT(computeSourceName_, "") };
      inline ProjectInfo& setComputeSourceName(string computeSourceName) { DARABONBA_PTR_SET_VALUE(computeSourceName_, computeSourceName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProjectInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline ProjectInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline ProjectInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ProjectInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ProjectInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ProjectInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline ProjectInfo& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameSpaceTag Field Functions 
      bool hasNameSpaceTag() const { return this->nameSpaceTag_ != nullptr;};
      void deleteNameSpaceTag() { this->nameSpaceTag_ = nullptr;};
      inline string getNameSpaceTag() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceTag_, "") };
      inline ProjectInfo& setNameSpaceTag(string nameSpaceTag) { DARABONBA_PTR_SET_VALUE(nameSpaceTag_, nameSpaceTag) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ProjectInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline ProjectInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // streamComputeSourceId Field Functions 
      bool hasStreamComputeSourceId() const { return this->streamComputeSourceId_ != nullptr;};
      void deleteStreamComputeSourceId() { this->streamComputeSourceId_ = nullptr;};
      inline int64_t getStreamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceId_, 0L) };
      inline ProjectInfo& setStreamComputeSourceId(int64_t streamComputeSourceId) { DARABONBA_PTR_SET_VALUE(streamComputeSourceId_, streamComputeSourceId) };


      // streamComputeSourceName Field Functions 
      bool hasStreamComputeSourceName() const { return this->streamComputeSourceName_ != nullptr;};
      void deleteStreamComputeSourceName() { this->streamComputeSourceName_ = nullptr;};
      inline string getStreamComputeSourceName() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceName_, "") };
      inline ProjectInfo& setStreamComputeSourceName(string streamComputeSourceName) { DARABONBA_PTR_SET_VALUE(streamComputeSourceName_, streamComputeSourceName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ProjectInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whiteLists Field Functions 
      bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
      void deleteWhiteLists() { this->whiteLists_ = nullptr;};
      inline const vector<ProjectInfo::WhiteLists> & getWhiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<ProjectInfo::WhiteLists>) };
      inline vector<ProjectInfo::WhiteLists> getWhiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<ProjectInfo::WhiteLists>) };
      inline ProjectInfo& setWhiteLists(const vector<ProjectInfo::WhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
      inline ProjectInfo& setWhiteLists(vector<ProjectInfo::WhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


    protected:
      shared_ptr<string> bizUnitDisplayName_ {};
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<int64_t> computeSourceId_ {};
      shared_ptr<string> computeSourceName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> env_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nameSpaceTag_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> ownerName_ {};
      shared_ptr<int64_t> streamComputeSourceId_ {};
      shared_ptr<string> streamComputeSourceName_ {};
      shared_ptr<string> type_ {};
      shared_ptr<vector<ProjectInfo::WhiteLists>> whiteLists_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->projectInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetProjectResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline const GetProjectResponseBody::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, GetProjectResponseBody::ProjectInfo) };
    inline GetProjectResponseBody::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, GetProjectResponseBody::ProjectInfo) };
    inline GetProjectResponseBody& setProjectInfo(const GetProjectResponseBody::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
    inline GetProjectResponseBody& setProjectInfo(GetProjectResponseBody::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetProjectResponseBody::ProjectInfo> projectInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
