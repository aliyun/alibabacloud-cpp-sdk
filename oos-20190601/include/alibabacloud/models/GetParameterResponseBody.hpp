// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARAMETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPARAMETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetParameterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParameterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetParameterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetParameterResponseBody() = default ;
    GetParameterResponseBody(const GetParameterResponseBody &) = default ;
    GetParameterResponseBody(GetParameterResponseBody &&) = default ;
    GetParameterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParameterResponseBody() = default ;
    GetParameterResponseBody& operator=(const GetParameterResponseBody &) = default ;
    GetParameterResponseBody& operator=(GetParameterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameter& obj) { 
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParameterVersion, parameterVersion_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameter& obj) { 
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParameterVersion, parameterVersion_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameter() = default ;
      Parameter(const Parameter &) = default ;
      Parameter(Parameter &&) = default ;
      Parameter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameter() = default ;
      Parameter& operator=(const Parameter &) = default ;
      Parameter& operator=(Parameter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->constraints_ == nullptr
        && this->createdBy_ == nullptr && this->createdDate_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->parameterVersion_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr
        && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr && this->value_ == nullptr; };
      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline string getConstraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
      inline Parameter& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Parameter& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Parameter& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Parameter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Parameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parameterVersion Field Functions 
      bool hasParameterVersion() const { return this->parameterVersion_ != nullptr;};
      void deleteParameterVersion() { this->parameterVersion_ = nullptr;};
      inline int32_t getParameterVersion() const { DARABONBA_PTR_GET_DEFAULT(parameterVersion_, 0) };
      inline Parameter& setParameterVersion(int32_t parameterVersion) { DARABONBA_PTR_SET_VALUE(parameterVersion_, parameterVersion) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Parameter& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Parameter& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Parameter& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Parameter& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Parameter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline Parameter& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline Parameter& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The constraints of the common parameter.
      shared_ptr<string> constraints_ {};
      // The user who created the common parameter.
      shared_ptr<string> createdBy_ {};
      // The time when the common parameter was created.
      shared_ptr<string> createdDate_ {};
      // The description of the common parameter.
      shared_ptr<string> description_ {};
      // The ID of the common parameter.
      shared_ptr<string> id_ {};
      // The name of the common parameter.
      shared_ptr<string> name_ {};
      // The version number of the common parameter.
      shared_ptr<int32_t> parameterVersion_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the common parameter.
      shared_ptr<string> shareType_ {};
      // The tags added to the common parameter.
      Darabonba::Json tags_ {};
      // The data type of the common parameter.
      shared_ptr<string> type_ {};
      // The user who updated the common parameter.
      shared_ptr<string> updatedBy_ {};
      // The time when the common parameter was updated.
      shared_ptr<string> updatedDate_ {};
      // The value of the common parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->parameter_ == nullptr
        && this->requestId_ == nullptr; };
    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline const GetParameterResponseBody::Parameter & getParameter() const { DARABONBA_PTR_GET_CONST(parameter_, GetParameterResponseBody::Parameter) };
    inline GetParameterResponseBody::Parameter getParameter() { DARABONBA_PTR_GET(parameter_, GetParameterResponseBody::Parameter) };
    inline GetParameterResponseBody& setParameter(const GetParameterResponseBody::Parameter & parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };
    inline GetParameterResponseBody& setParameter(GetParameterResponseBody::Parameter && parameter) { DARABONBA_PTR_SET_RVALUE(parameter_, parameter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetParameterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the common parameter.
    shared_ptr<GetParameterResponseBody::Parameter> parameter_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
