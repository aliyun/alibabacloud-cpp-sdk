// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class AddSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddSceneRequest() = default ;
    AddSceneRequest(const AddSceneRequest &) = default ;
    AddSceneRequest(AddSceneRequest &&) = default ;
    AddSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSceneRequest() = default ;
    AddSceneRequest& operator=(const AddSceneRequest &) = default ;
    AddSceneRequest& operator=(AddSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerUid_ == nullptr
        && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->type_ == nullptr; };
    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline string customerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
    inline AddSceneRequest& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddSceneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline AddSceneRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddSceneRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> customerUid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
