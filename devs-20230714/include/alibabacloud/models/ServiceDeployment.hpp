// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICEDEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_SERVICEDEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ServiceDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentDeploymentName, environmentDeploymentName_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentDeploymentName, environmentDeploymentName_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    ServiceDeployment() = default ;
    ServiceDeployment(const ServiceDeployment &) = default ;
    ServiceDeployment(ServiceDeployment &&) = default ;
    ServiceDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceDeployment() = default ;
    ServiceDeployment& operator=(const ServiceDeployment &) = default ;
    ServiceDeployment& operator=(ServiceDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->description_ != nullptr && this->environmentDeploymentName_ != nullptr && this->kind_ != nullptr && this->labels_ != nullptr && this->name_ != nullptr
        && this->status_ != nullptr && this->uid_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ServiceDeployment& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ServiceDeployment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentDeploymentName Field Functions 
    bool hasEnvironmentDeploymentName() const { return this->environmentDeploymentName_ != nullptr;};
    void deleteEnvironmentDeploymentName() { this->environmentDeploymentName_ = nullptr;};
    inline string environmentDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(environmentDeploymentName_, "") };
    inline ServiceDeployment& setEnvironmentDeploymentName(string environmentDeploymentName) { DARABONBA_PTR_SET_VALUE(environmentDeploymentName_, environmentDeploymentName) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ServiceDeployment& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const map<string, string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
    inline map<string, string> labels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
    inline ServiceDeployment& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ServiceDeployment& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ServiceDeployment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const ServiceDeploymentStatus & status() const { DARABONBA_PTR_GET_CONST(status_, ServiceDeploymentStatus) };
    inline ServiceDeploymentStatus status() { DARABONBA_PTR_GET(status_, ServiceDeploymentStatus) };
    inline ServiceDeployment& setStatus(const ServiceDeploymentStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ServiceDeployment& setStatus(ServiceDeploymentStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ServiceDeployment& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> environmentDeploymentName_ = nullptr;
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<map<string, string>> labels_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<ServiceDeploymentStatus> status_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
