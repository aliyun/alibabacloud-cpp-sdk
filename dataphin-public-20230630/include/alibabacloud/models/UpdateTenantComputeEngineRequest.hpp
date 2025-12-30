// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTCOMPUTEENGINEREQUEST_HPP_
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
  class UpdateTenantComputeEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantComputeEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantComputeEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateTenantComputeEngineRequest() = default ;
    UpdateTenantComputeEngineRequest(const UpdateTenantComputeEngineRequest &) = default ;
    UpdateTenantComputeEngineRequest(UpdateTenantComputeEngineRequest &&) = default ;
    UpdateTenantComputeEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantComputeEngineRequest() = default ;
    UpdateTenantComputeEngineRequest& operator=(const UpdateTenantComputeEngineRequest &) = default ;
    UpdateTenantComputeEngineRequest& operator=(UpdateTenantComputeEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterUrlList, clusterUrlList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterUrlList, clusterUrlList_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->clusterUrlList_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
      // clusterUrlList Field Functions 
      bool hasClusterUrlList() const { return this->clusterUrlList_ != nullptr;};
      void deleteClusterUrlList() { this->clusterUrlList_ = nullptr;};
      inline const vector<string> & getClusterUrlList() const { DARABONBA_PTR_GET_CONST(clusterUrlList_, vector<string>) };
      inline vector<string> getClusterUrlList() { DARABONBA_PTR_GET(clusterUrlList_, vector<string>) };
      inline UpdateCommand& setClusterUrlList(const vector<string> & clusterUrlList) { DARABONBA_PTR_SET_VALUE(clusterUrlList_, clusterUrlList) };
      inline UpdateCommand& setClusterUrlList(vector<string> && clusterUrlList) { DARABONBA_PTR_SET_RVALUE(clusterUrlList_, clusterUrlList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpdateCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline UpdateCommand& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> clusterUrlList_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateTenantComputeEngineRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateTenantComputeEngineRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateTenantComputeEngineRequest::UpdateCommand) };
    inline UpdateTenantComputeEngineRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateTenantComputeEngineRequest::UpdateCommand) };
    inline UpdateTenantComputeEngineRequest& setUpdateCommand(const UpdateTenantComputeEngineRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateTenantComputeEngineRequest& setUpdateCommand(UpdateTenantComputeEngineRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateTenantComputeEngineRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
