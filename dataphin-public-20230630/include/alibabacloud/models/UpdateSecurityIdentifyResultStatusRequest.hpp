// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYIDENTIFYRESULTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYIDENTIFYRESULTSTATUSREQUEST_HPP_
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
  class UpdateSecurityIdentifyResultStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityIdentifyResultStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityIdentifyResultStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateSecurityIdentifyResultStatusRequest() = default ;
    UpdateSecurityIdentifyResultStatusRequest(const UpdateSecurityIdentifyResultStatusRequest &) = default ;
    UpdateSecurityIdentifyResultStatusRequest(UpdateSecurityIdentifyResultStatusRequest &&) = default ;
    UpdateSecurityIdentifyResultStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityIdentifyResultStatusRequest() = default ;
    UpdateSecurityIdentifyResultStatusRequest& operator=(const UpdateSecurityIdentifyResultStatusRequest &) = default ;
    UpdateSecurityIdentifyResultStatusRequest& operator=(UpdateSecurityIdentifyResultStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(IdentifyResultIdList, identifyResultIdList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(IdentifyResultIdList, identifyResultIdList_);
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
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->identifyResultIdList_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline UpdateCommand& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // identifyResultIdList Field Functions 
      bool hasIdentifyResultIdList() const { return this->identifyResultIdList_ != nullptr;};
      void deleteIdentifyResultIdList() { this->identifyResultIdList_ = nullptr;};
      inline const vector<int64_t> & getIdentifyResultIdList() const { DARABONBA_PTR_GET_CONST(identifyResultIdList_, vector<int64_t>) };
      inline vector<int64_t> getIdentifyResultIdList() { DARABONBA_PTR_GET(identifyResultIdList_, vector<int64_t>) };
      inline UpdateCommand& setIdentifyResultIdList(const vector<int64_t> & identifyResultIdList) { DARABONBA_PTR_SET_VALUE(identifyResultIdList_, identifyResultIdList) };
      inline UpdateCommand& setIdentifyResultIdList(vector<int64_t> && identifyResultIdList) { DARABONBA_PTR_SET_RVALUE(identifyResultIdList_, identifyResultIdList) };


    protected:
      // This parameter is required.
      shared_ptr<bool> enable_ {};
      // This parameter is required.
      shared_ptr<vector<int64_t>> identifyResultIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateSecurityIdentifyResultStatusRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateSecurityIdentifyResultStatusRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateSecurityIdentifyResultStatusRequest::UpdateCommand) };
    inline UpdateSecurityIdentifyResultStatusRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateSecurityIdentifyResultStatusRequest::UpdateCommand) };
    inline UpdateSecurityIdentifyResultStatusRequest& setUpdateCommand(const UpdateSecurityIdentifyResultStatusRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateSecurityIdentifyResultStatusRequest& setUpdateCommand(UpdateSecurityIdentifyResultStatusRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateSecurityIdentifyResultStatusRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
