// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBCROWDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBCROWDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateSubCrowdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubCrowdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubCrowdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateSubCrowdRequest() = default ;
    CreateSubCrowdRequest(const CreateSubCrowdRequest &) = default ;
    CreateSubCrowdRequest(CreateSubCrowdRequest &&) = default ;
    CreateSubCrowdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubCrowdRequest() = default ;
    CreateSubCrowdRequest& operator=(const CreateSubCrowdRequest &) = default ;
    CreateSubCrowdRequest& operator=(CreateSubCrowdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->source_ == nullptr && this->users_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSubCrowdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateSubCrowdRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline string getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
    inline CreateSubCrowdRequest& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> source_ {};
    // This parameter is required.
    shared_ptr<string> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
