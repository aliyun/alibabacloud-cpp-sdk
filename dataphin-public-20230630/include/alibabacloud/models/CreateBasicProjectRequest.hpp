// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICPROJECTREQUEST_HPP_
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
  class CreateBasicProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateBasicProjectRequest() = default ;
    CreateBasicProjectRequest(const CreateBasicProjectRequest &) = default ;
    CreateBasicProjectRequest(CreateBasicProjectRequest &&) = default ;
    CreateBasicProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicProjectRequest() = default ;
    CreateBasicProjectRequest& operator=(const CreateBasicProjectRequest &) = default ;
    CreateBasicProjectRequest& operator=(CreateBasicProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_TO_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_FROM_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
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
        // The description.
        shared_ptr<string> description_ {};
        // IP
        shared_ptr<string> ip_ {};
        // The port.
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->computeSourceId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->name_ == nullptr && this->nameSpaceTag_ == nullptr
        && this->streamComputeSourceId_ == nullptr && this->type_ == nullptr && this->whiteLists_ == nullptr; };
      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline CreateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // computeSourceId Field Functions 
      bool hasComputeSourceId() const { return this->computeSourceId_ != nullptr;};
      void deleteComputeSourceId() { this->computeSourceId_ = nullptr;};
      inline int64_t getComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(computeSourceId_, 0L) };
      inline CreateCommand& setComputeSourceId(int64_t computeSourceId) { DARABONBA_PTR_SET_VALUE(computeSourceId_, computeSourceId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline CreateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameSpaceTag Field Functions 
      bool hasNameSpaceTag() const { return this->nameSpaceTag_ != nullptr;};
      void deleteNameSpaceTag() { this->nameSpaceTag_ = nullptr;};
      inline string getNameSpaceTag() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceTag_, "") };
      inline CreateCommand& setNameSpaceTag(string nameSpaceTag) { DARABONBA_PTR_SET_VALUE(nameSpaceTag_, nameSpaceTag) };


      // streamComputeSourceId Field Functions 
      bool hasStreamComputeSourceId() const { return this->streamComputeSourceId_ != nullptr;};
      void deleteStreamComputeSourceId() { this->streamComputeSourceId_ = nullptr;};
      inline int64_t getStreamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceId_, 0L) };
      inline CreateCommand& setStreamComputeSourceId(int64_t streamComputeSourceId) { DARABONBA_PTR_SET_VALUE(streamComputeSourceId_, streamComputeSourceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CreateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whiteLists Field Functions 
      bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
      void deleteWhiteLists() { this->whiteLists_ = nullptr;};
      inline const vector<CreateCommand::WhiteLists> & getWhiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<CreateCommand::WhiteLists>) };
      inline vector<CreateCommand::WhiteLists> getWhiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<CreateCommand::WhiteLists>) };
      inline CreateCommand& setWhiteLists(const vector<CreateCommand::WhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
      inline CreateCommand& setWhiteLists(vector<CreateCommand::WhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


    protected:
      // The business unit ID.
      shared_ptr<int64_t> bizUnitId_ {};
      // The offline compute source ID.
      shared_ptr<int64_t> computeSourceId_ {};
      // The project description.
      shared_ptr<string> description_ {};
      // The project display name.
      shared_ptr<string> displayName_ {};
      // The project name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The namespace identifier.
      shared_ptr<string> nameSpaceTag_ {};
      // The real-time compute source ID.
      shared_ptr<int64_t> streamComputeSourceId_ {};
      // The project type. If this parameter is left empty, the default value GENERAL is used.
      shared_ptr<string> type_ {};
      // The sandbox whitelist.
      shared_ptr<vector<CreateCommand::WhiteLists>> whiteLists_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBasicProjectRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBasicProjectRequest::CreateCommand) };
    inline CreateBasicProjectRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBasicProjectRequest::CreateCommand) };
    inline CreateBasicProjectRequest& setCreateCommand(const CreateBasicProjectRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBasicProjectRequest& setCreateCommand(CreateBasicProjectRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBasicProjectRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateBasicProjectRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<CreateBasicProjectRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
