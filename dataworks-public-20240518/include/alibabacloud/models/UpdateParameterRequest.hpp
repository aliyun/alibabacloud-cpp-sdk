// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPARAMETERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPARAMETERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateParameterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateParameterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Properties, properties_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateParameterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Properties, properties_);
    };
    UpdateParameterRequest() = default ;
    UpdateParameterRequest(const UpdateParameterRequest &) = default ;
    UpdateParameterRequest(UpdateParameterRequest &&) = default ;
    UpdateParameterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateParameterRequest() = default ;
    UpdateParameterRequest& operator=(const UpdateParameterRequest &) = default ;
    UpdateParameterRequest& operator=(UpdateParameterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Properties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Properties& obj) { 
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Properties& obj) { 
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Properties() = default ;
      Properties(const Properties &) = default ;
      Properties(Properties &&) = default ;
      Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Properties() = default ;
      Properties& operator=(const Properties &) = default ;
      Properties& operator=(Properties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->envType_ == nullptr
        && this->value_ == nullptr; };
      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Properties& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> envType_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->owner_ == nullptr && this->properties_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateParameterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateParameterRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateParameterRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<UpdateParameterRequest::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<UpdateParameterRequest::Properties>) };
    inline vector<UpdateParameterRequest::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<UpdateParameterRequest::Properties>) };
    inline UpdateParameterRequest& setProperties(const vector<UpdateParameterRequest::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline UpdateParameterRequest& setProperties(vector<UpdateParameterRequest::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<vector<UpdateParameterRequest::Properties>> properties_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
