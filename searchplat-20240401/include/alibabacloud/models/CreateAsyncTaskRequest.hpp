// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class CreateAsyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAsyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAsyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateAsyncTaskRequest() = default ;
    CreateAsyncTaskRequest(const CreateAsyncTaskRequest &) = default ;
    CreateAsyncTaskRequest(CreateAsyncTaskRequest &&) = default ;
    CreateAsyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAsyncTaskRequest() = default ;
    CreateAsyncTaskRequest& operator=(const CreateAsyncTaskRequest &) = default ;
    CreateAsyncTaskRequest& operator=(CreateAsyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->serviceId_ == nullptr && this->serviceType_ == nullptr && this->dryRun_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline int64_t getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0L) };
    inline CreateAsyncTaskRequest& setDataId(int64_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateAsyncTaskRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAsyncTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateAsyncTaskRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline CreateAsyncTaskRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAsyncTaskRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The playground data ID.
    shared_ptr<int64_t> dataId_ {};
    // The asynchronous task ID.
    shared_ptr<string> id_ {};
    // The task name.
    shared_ptr<string> name_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The service type.
    shared_ptr<string> serviceType_ {};
    // Specifies whether to perform a dry run request.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
