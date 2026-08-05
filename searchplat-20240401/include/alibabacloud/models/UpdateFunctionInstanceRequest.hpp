// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateFunctionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    UpdateFunctionInstanceRequest() = default ;
    UpdateFunctionInstanceRequest(const UpdateFunctionInstanceRequest &) = default ;
    UpdateFunctionInstanceRequest(UpdateFunctionInstanceRequest &&) = default ;
    UpdateFunctionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionInstanceRequest() = default ;
    UpdateFunctionInstanceRequest& operator=(const UpdateFunctionInstanceRequest &) = default ;
    UpdateFunctionInstanceRequest& operator=(UpdateFunctionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateParameters& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CreateParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      CreateParameters() = default ;
      CreateParameters(const CreateParameters &) = default ;
      CreateParameters(CreateParameters &&) = default ;
      CreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateParameters() = default ;
      CreateParameters& operator=(const CreateParameters &) = default ;
      CreateParameters& operator=(CreateParameters &&) = default ;
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
      inline CreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CreateParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The parameter name.
      shared_ptr<string> name_ {};
      // The parameter value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->createParameters_ == nullptr
        && this->description_ == nullptr; };
    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<UpdateFunctionInstanceRequest::CreateParameters> & getCreateParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<UpdateFunctionInstanceRequest::CreateParameters>) };
    inline vector<UpdateFunctionInstanceRequest::CreateParameters> getCreateParameters() { DARABONBA_PTR_GET(createParameters_, vector<UpdateFunctionInstanceRequest::CreateParameters>) };
    inline UpdateFunctionInstanceRequest& setCreateParameters(const vector<UpdateFunctionInstanceRequest::CreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline UpdateFunctionInstanceRequest& setCreateParameters(vector<UpdateFunctionInstanceRequest::CreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunctionInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The creation parameters.
    shared_ptr<vector<UpdateFunctionInstanceRequest::CreateParameters>> createParameters_ {};
    // The description.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
