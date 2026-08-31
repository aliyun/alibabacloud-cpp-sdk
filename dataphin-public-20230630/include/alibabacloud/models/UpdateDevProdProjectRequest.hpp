// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEVPRODPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEVPRODPROJECTREQUEST_HPP_
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
  class UpdateDevProdProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDevProdProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDevProdProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateDevProdProjectRequest() = default ;
    UpdateDevProdProjectRequest(const UpdateDevProdProjectRequest &) = default ;
    UpdateDevProdProjectRequest(UpdateDevProdProjectRequest &&) = default ;
    UpdateDevProdProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDevProdProjectRequest() = default ;
    UpdateDevProdProjectRequest& operator=(const UpdateDevProdProjectRequest &) = default ;
    UpdateDevProdProjectRequest& operator=(UpdateDevProdProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(DevComputeSourceId, devComputeSourceId_);
        DARABONBA_PTR_TO_JSON(DevDescription, devDescription_);
        DARABONBA_PTR_TO_JSON(DevStreamComputeSourceId, devStreamComputeSourceId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_TO_JSON(ProdComputeSourceId, prodComputeSourceId_);
        DARABONBA_PTR_TO_JSON(ProdDescription, prodDescription_);
        DARABONBA_PTR_TO_JSON(ProdStreamComputeSourceId, prodStreamComputeSourceId_);
        DARABONBA_PTR_TO_JSON(WhiteLists, whiteLists_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(DevComputeSourceId, devComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(DevDescription, devDescription_);
        DARABONBA_PTR_FROM_JSON(DevStreamComputeSourceId, devStreamComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NameSpaceTag, nameSpaceTag_);
        DARABONBA_PTR_FROM_JSON(ProdComputeSourceId, prodComputeSourceId_);
        DARABONBA_PTR_FROM_JSON(ProdDescription, prodDescription_);
        DARABONBA_PTR_FROM_JSON(ProdStreamComputeSourceId, prodStreamComputeSourceId_);
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
        && this->devComputeSourceId_ == nullptr && this->devDescription_ == nullptr && this->devStreamComputeSourceId_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr
        && this->name_ == nullptr && this->nameSpaceTag_ == nullptr && this->prodComputeSourceId_ == nullptr && this->prodDescription_ == nullptr && this->prodStreamComputeSourceId_ == nullptr
        && this->whiteLists_ == nullptr; };
      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline UpdateCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // devComputeSourceId Field Functions 
      bool hasDevComputeSourceId() const { return this->devComputeSourceId_ != nullptr;};
      void deleteDevComputeSourceId() { this->devComputeSourceId_ = nullptr;};
      inline int64_t getDevComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(devComputeSourceId_, 0L) };
      inline UpdateCommand& setDevComputeSourceId(int64_t devComputeSourceId) { DARABONBA_PTR_SET_VALUE(devComputeSourceId_, devComputeSourceId) };


      // devDescription Field Functions 
      bool hasDevDescription() const { return this->devDescription_ != nullptr;};
      void deleteDevDescription() { this->devDescription_ = nullptr;};
      inline string getDevDescription() const { DARABONBA_PTR_GET_DEFAULT(devDescription_, "") };
      inline UpdateCommand& setDevDescription(string devDescription) { DARABONBA_PTR_SET_VALUE(devDescription_, devDescription) };


      // devStreamComputeSourceId Field Functions 
      bool hasDevStreamComputeSourceId() const { return this->devStreamComputeSourceId_ != nullptr;};
      void deleteDevStreamComputeSourceId() { this->devStreamComputeSourceId_ = nullptr;};
      inline int64_t getDevStreamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(devStreamComputeSourceId_, 0L) };
      inline UpdateCommand& setDevStreamComputeSourceId(int64_t devStreamComputeSourceId) { DARABONBA_PTR_SET_VALUE(devStreamComputeSourceId_, devStreamComputeSourceId) };


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


      // prodComputeSourceId Field Functions 
      bool hasProdComputeSourceId() const { return this->prodComputeSourceId_ != nullptr;};
      void deleteProdComputeSourceId() { this->prodComputeSourceId_ = nullptr;};
      inline int64_t getProdComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodComputeSourceId_, 0L) };
      inline UpdateCommand& setProdComputeSourceId(int64_t prodComputeSourceId) { DARABONBA_PTR_SET_VALUE(prodComputeSourceId_, prodComputeSourceId) };


      // prodDescription Field Functions 
      bool hasProdDescription() const { return this->prodDescription_ != nullptr;};
      void deleteProdDescription() { this->prodDescription_ = nullptr;};
      inline string getProdDescription() const { DARABONBA_PTR_GET_DEFAULT(prodDescription_, "") };
      inline UpdateCommand& setProdDescription(string prodDescription) { DARABONBA_PTR_SET_VALUE(prodDescription_, prodDescription) };


      // prodStreamComputeSourceId Field Functions 
      bool hasProdStreamComputeSourceId() const { return this->prodStreamComputeSourceId_ != nullptr;};
      void deleteProdStreamComputeSourceId() { this->prodStreamComputeSourceId_ = nullptr;};
      inline int64_t getProdStreamComputeSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodStreamComputeSourceId_, 0L) };
      inline UpdateCommand& setProdStreamComputeSourceId(int64_t prodStreamComputeSourceId) { DARABONBA_PTR_SET_VALUE(prodStreamComputeSourceId_, prodStreamComputeSourceId) };


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
      // The ID of the offline compute source in the development environment.
      shared_ptr<int64_t> devComputeSourceId_ {};
      // The description of the development environment.
      shared_ptr<string> devDescription_ {};
      // The ID of the real-time compute source in the development environment.
      shared_ptr<int64_t> devStreamComputeSourceId_ {};
      // The display name of the project.
      shared_ptr<string> displayName_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // The project name.
      shared_ptr<string> name_ {};
      // The namespace identifier.
      shared_ptr<string> nameSpaceTag_ {};
      // The ID of the offline compute source in the production environment.
      shared_ptr<int64_t> prodComputeSourceId_ {};
      // The description of the production environment.
      shared_ptr<string> prodDescription_ {};
      // The ID of the real-time compute source in the production environment.
      shared_ptr<int64_t> prodStreamComputeSourceId_ {};
      // The sandbox whitelist.
      shared_ptr<vector<UpdateCommand::WhiteLists>> whiteLists_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateDevProdProjectRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateDevProdProjectRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateDevProdProjectRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateDevProdProjectRequest::UpdateCommand) };
    inline UpdateDevProdProjectRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateDevProdProjectRequest::UpdateCommand) };
    inline UpdateDevProdProjectRequest& setUpdateCommand(const UpdateDevProdProjectRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateDevProdProjectRequest& setUpdateCommand(UpdateDevProdProjectRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The update command.
    // 
    // This parameter is required.
    shared_ptr<UpdateDevProdProjectRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
