// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARAMETERSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARAMETERSETREQUEST_HPP_
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
  class CreateParameterSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateParameterSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateParameterSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
    };
    CreateParameterSetRequest() = default ;
    CreateParameterSetRequest(const CreateParameterSetRequest &) = default ;
    CreateParameterSetRequest(CreateParameterSetRequest &&) = default ;
    CreateParameterSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateParameterSetRequest() = default ;
    CreateParameterSetRequest& operator=(const CreateParameterSetRequest &) = default ;
    CreateParameterSetRequest& operator=(CreateParameterSetRequest &&) = default ;
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

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->parameters_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateParameterSetRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateParameterSetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateParameterSetRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateParameterSetRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateParameterSetRequest::Parameters>) };
    inline vector<CreateParameterSetRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<CreateParameterSetRequest::Parameters>) };
    inline CreateParameterSetRequest& setParameters(const vector<CreateParameterSetRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateParameterSetRequest& setParameters(vector<CreateParameterSetRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<vector<CreateParameterSetRequest::Parameters>> parameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
