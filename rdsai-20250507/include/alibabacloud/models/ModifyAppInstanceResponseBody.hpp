// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCERESPONSEBODY_HPP_
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
  class ModifyAppInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAppInstanceResponseBody() = default ;
    ModifyAppInstanceResponseBody(const ModifyAppInstanceResponseBody &) = default ;
    ModifyAppInstanceResponseBody(ModifyAppInstanceResponseBody &&) = default ;
    ModifyAppInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceResponseBody() = default ;
    ModifyAppInstanceResponseBody& operator=(const ModifyAppInstanceResponseBody &) = default ;
    ModifyAppInstanceResponseBody& operator=(ModifyAppInstanceResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->components_ == nullptr
        && this->instanceName_ == nullptr && this->requestId_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ModifyAppInstanceResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ModifyAppInstanceResponseBody::Components>) };
    inline vector<ModifyAppInstanceResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ModifyAppInstanceResponseBody::Components>) };
    inline ModifyAppInstanceResponseBody& setComponents(const vector<ModifyAppInstanceResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ModifyAppInstanceResponseBody& setComponents(vector<ModifyAppInstanceResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyAppInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAppInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ModifyAppInstanceResponseBody::Components>> components_ {};
    shared_ptr<string> instanceName_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
