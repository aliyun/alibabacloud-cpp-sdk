// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceInstanceTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(WorkerName, workerName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(WorkerName, workerName_);
    };
    CreateServiceInstanceTokenRequest() = default ;
    CreateServiceInstanceTokenRequest(const CreateServiceInstanceTokenRequest &) = default ;
    CreateServiceInstanceTokenRequest(CreateServiceInstanceTokenRequest &&) = default ;
    CreateServiceInstanceTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceTokenRequest() = default ;
    CreateServiceInstanceTokenRequest& operator=(const CreateServiceInstanceTokenRequest &) = default ;
    CreateServiceInstanceTokenRequest& operator=(CreateServiceInstanceTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->workerName_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline CreateServiceInstanceTokenRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // workerName Field Functions 
    bool hasWorkerName() const { return this->workerName_ != nullptr;};
    void deleteWorkerName() { this->workerName_ = nullptr;};
    inline string getWorkerName() const { DARABONBA_PTR_GET_DEFAULT(workerName_, "") };
    inline CreateServiceInstanceTokenRequest& setWorkerName(string workerName) { DARABONBA_PTR_SET_VALUE(workerName_, workerName) };


  protected:
    shared_ptr<string> actionType_ {};
    shared_ptr<string> workerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
