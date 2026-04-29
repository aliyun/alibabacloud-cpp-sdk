// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARCLAWAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARCLAWAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarClawAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(DeleteFiles, deleteFiles_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarClawAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(DeleteFiles, deleteFiles_);
    };
    DeletePolarClawAgentRequest() = default ;
    DeletePolarClawAgentRequest(const DeletePolarClawAgentRequest &) = default ;
    DeletePolarClawAgentRequest(DeletePolarClawAgentRequest &&) = default ;
    DeletePolarClawAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarClawAgentRequest() = default ;
    DeletePolarClawAgentRequest& operator=(const DeletePolarClawAgentRequest &) = default ;
    DeletePolarClawAgentRequest& operator=(DeletePolarClawAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->deleteFiles_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DeletePolarClawAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeletePolarClawAgentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // deleteFiles Field Functions 
    bool hasDeleteFiles() const { return this->deleteFiles_ != nullptr;};
    void deleteDeleteFiles() { this->deleteFiles_ = nullptr;};
    inline bool getDeleteFiles() const { DARABONBA_PTR_GET_DEFAULT(deleteFiles_, false) };
    inline DeletePolarClawAgentRequest& setDeleteFiles(bool deleteFiles) { DARABONBA_PTR_SET_VALUE(deleteFiles_, deleteFiles) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<bool> deleteFiles_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
