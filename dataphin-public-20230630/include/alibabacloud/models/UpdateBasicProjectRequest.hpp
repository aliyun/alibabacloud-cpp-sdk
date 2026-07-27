// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASICPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASICPROJECTREQUEST_HPP_
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
  class UpdateBasicProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBasicProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBasicProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateBasicProjectRequest() = default ;
    UpdateBasicProjectRequest(const UpdateBasicProjectRequest &) = default ;
    UpdateBasicProjectRequest(UpdateBasicProjectRequest &&) = default ;
    UpdateBasicProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBasicProjectRequest() = default ;
    UpdateBasicProjectRequest& operator=(const UpdateBasicProjectRequest &) = default ;
    UpdateBasicProjectRequest& operator=(UpdateBasicProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_TO_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(ComputeSourceId, computeSourceId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_FROM_JSON(StreamComputeSourceId, streamComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(WhiteLists, whiteLists_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
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
        && this->computeSourceId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->nameSpaceTag_ == nullptr && this->streamComputeSourceId_ == nullptr && this->whiteLists_ == nullptr; };
      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline UpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // computeSourceId Field Functions 
      bool hasComputeSourceId() const { return this->computeSourceId_ != nullptr;};
      void deleteComputeSourceId() { this->computeSourceId_ = nullptr;};
      inline int64_t getComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(computeSourceId_, 0L) };
      inline UpdateCommand& setComputeSourceId(int64_t computeSourceId) { DARABONBA_PTR_SET_VALUE(computeSourceId_, computeSourceId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline UpdateCommand& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nameSpaceTag Field Functions 
      bool hasNameSpaceTag() const { return this->nameSpaceTag_ != nullptr;};
      void deleteNameSpaceTag() { this->nameSpaceTag_ = nullptr;};
      inline string getNameSpaceTag() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceTag_, "") };
      inline UpdateCommand& setNameSpaceTag(string nameSpaceTag) { DARABONBA_PTR_SET_VALUE(nameSpaceTag_, nameSpaceTag) };


      // streamComputeSourceId Field Functions 
      bool hasStreamComputeSourceId() const { return this->streamComputeSourceId_ != nullptr;};
      void deleteStreamComputeSourceId() { this->streamComputeSourceId_ = nullptr;};
      inline int64_t getStreamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(streamComputeSourceId_, 0L) };
      inline UpdateCommand& setStreamComputeSourceId(int64_t streamComputeSourceId) { DARABONBA_PTR_SET_VALUE(streamComputeSourceId_, streamComputeSourceId) };


      // whiteLists Field Functions 
      bool hasWhiteLists() const { return this->whiteLists_ != nullptr;};
      void deleteWhiteLists() { this->whiteLists_ = nullptr;};
      inline const vector<UpdateCommand::WhiteLists> & getWhiteLists() const { DARABONBA_PTR_GET_CONST(whiteLists_, vector<UpdateCommand::WhiteLists>) };
      inline vector<UpdateCommand::WhiteLists> getWhiteLists() { DARABONBA_PTR_GET(whiteLists_, vector<UpdateCommand::WhiteLists>) };
      inline UpdateCommand& setWhiteLists(const vector<UpdateCommand::WhiteLists> & whiteLists) { DARABONBA_PTR_SET_VALUE(whiteLists_, whiteLists) };
      inline UpdateCommand& setWhiteLists(vector<UpdateCommand::WhiteLists> && whiteLists) { DARABONBA_PTR_SET_RVALUE(whiteLists_, whiteLists) };


    protected:
      // The business unit ID.
      shared_ptr<int64_t> bizUnitId_ {};
      // The ID of the offline compute source.
      shared_ptr<int64_t> computeSourceId_ {};
      // The project description.
      shared_ptr<string> description_ {};
      // The display name of the project.
      shared_ptr<string> displayName_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // The project name. This value cannot be modified. Pass in the current project name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The namespace identifier.
      shared_ptr<string> nameSpaceTag_ {};
      // The ID of the real-time compute source.
      shared_ptr<int64_t> streamComputeSourceId_ {};
      // The sandbox whitelist.
      shared_ptr<vector<UpdateCommand::WhiteLists>> whiteLists_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBasicProjectRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBasicProjectRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBasicProjectRequest::UpdateCommand) };
    inline UpdateBasicProjectRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBasicProjectRequest::UpdateCommand) };
    inline UpdateBasicProjectRequest& setUpdateCommand(const UpdateBasicProjectRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBasicProjectRequest& setUpdateCommand(UpdateBasicProjectRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The update command.
    // 
    // This parameter is required.
    shared_ptr<UpdateBasicProjectRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
