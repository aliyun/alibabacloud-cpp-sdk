// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESYSTEMCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESYSTEMCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateSystemConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSystemConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSystemConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
    };
    UpdateSystemConfigsRequest() = default ;
    UpdateSystemConfigsRequest(const UpdateSystemConfigsRequest &) = default ;
    UpdateSystemConfigsRequest(UpdateSystemConfigsRequest &&) = default ;
    UpdateSystemConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSystemConfigsRequest() = default ;
    UpdateSystemConfigsRequest& operator=(const UpdateSystemConfigsRequest &) = default ;
    UpdateSystemConfigsRequest& operator=(UpdateSystemConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Configs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Configs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<UpdateSystemConfigsRequest::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<UpdateSystemConfigsRequest::Configs>) };
    inline vector<UpdateSystemConfigsRequest::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<UpdateSystemConfigsRequest::Configs>) };
    inline UpdateSystemConfigsRequest& setConfigs(const vector<UpdateSystemConfigsRequest::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline UpdateSystemConfigsRequest& setConfigs(vector<UpdateSystemConfigsRequest::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateSystemConfigsRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline UpdateSystemConfigsRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


  protected:
    // 配置列表
    shared_ptr<vector<UpdateSystemConfigsRequest::Configs>> configs_ {};
    // 对象ID
    shared_ptr<string> objectId_ {};
    // 外呼开发时补充参数限制
    shared_ptr<string> objectType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
