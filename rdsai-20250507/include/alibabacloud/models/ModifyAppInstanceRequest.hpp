// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAppInstanceRequest() = default ;
    ModifyAppInstanceRequest(const ModifyAppInstanceRequest &) = default ;
    ModifyAppInstanceRequest(ModifyAppInstanceRequest &&) = default ;
    ModifyAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceRequest() = default ;
    ModifyAppInstanceRequest& operator=(const ModifyAppInstanceRequest &) = default ;
    ModifyAppInstanceRequest& operator=(ModifyAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->type_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Components& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Components& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->components_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ModifyAppInstanceRequest::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ModifyAppInstanceRequest::Components>) };
    inline vector<ModifyAppInstanceRequest::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ModifyAppInstanceRequest::Components>) };
    inline ModifyAppInstanceRequest& setComponents(const vector<ModifyAppInstanceRequest::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ModifyAppInstanceRequest& setComponents(vector<ModifyAppInstanceRequest::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyAppInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAppInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<ModifyAppInstanceRequest::Components>> components_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
