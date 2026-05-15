// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPARAMETERSETATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPARAMETERSETATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateParameterSetAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateParameterSetAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateParameterSetAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
    };
    UpdateParameterSetAttributeRequest() = default ;
    UpdateParameterSetAttributeRequest(const UpdateParameterSetAttributeRequest &) = default ;
    UpdateParameterSetAttributeRequest(UpdateParameterSetAttributeRequest &&) = default ;
    UpdateParameterSetAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateParameterSetAttributeRequest() = default ;
    UpdateParameterSetAttributeRequest& operator=(const UpdateParameterSetAttributeRequest &) = default ;
    UpdateParameterSetAttributeRequest& operator=(UpdateParameterSetAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(secret, secret_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(secret, secret_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->secret_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // secret Field Functions 
      bool hasSecret() const { return this->secret_ != nullptr;};
      void deleteSecret() { this->secret_ = nullptr;};
      inline bool getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, false) };
      inline Parameters& setSecret(bool secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Parameters& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<bool> secret_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->parameters_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateParameterSetAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateParameterSetAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateParameterSetAttributeRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateParameterSetAttributeRequest::Parameters>) };
    inline vector<UpdateParameterSetAttributeRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateParameterSetAttributeRequest::Parameters>) };
    inline UpdateParameterSetAttributeRequest& setParameters(const vector<UpdateParameterSetAttributeRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateParameterSetAttributeRequest& setParameters(vector<UpdateParameterSetAttributeRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<vector<UpdateParameterSetAttributeRequest::Parameters>> parameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
