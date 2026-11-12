// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKEBASEMOUNTPARAMETERTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeLakebaseMountParameterTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakebaseMountParameterTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakebaseMountParameterTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLakebaseMountParameterTemplateListResponseBody() = default ;
    DescribeLakebaseMountParameterTemplateListResponseBody(const DescribeLakebaseMountParameterTemplateListResponseBody &) = default ;
    DescribeLakebaseMountParameterTemplateListResponseBody(DescribeLakebaseMountParameterTemplateListResponseBody &&) = default ;
    DescribeLakebaseMountParameterTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakebaseMountParameterTemplateListResponseBody() = default ;
    DescribeLakebaseMountParameterTemplateListResponseBody& operator=(const DescribeLakebaseMountParameterTemplateListResponseBody &) = default ;
    DescribeLakebaseMountParameterTemplateListResponseBody& operator=(DescribeLakebaseMountParameterTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(IsDynamic, isDynamic_);
        DARABONBA_PTR_TO_JSON(IsUserChangeable, isUserChangeable_);
        DARABONBA_PTR_TO_JSON(Optional, optional_);
        DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(IsDynamic, isDynamic_);
        DARABONBA_PTR_FROM_JSON(IsUserChangeable, isUserChangeable_);
        DARABONBA_PTR_FROM_JSON(Optional, optional_);
        DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->defaultValue_ == nullptr && this->isDynamic_ == nullptr && this->isUserChangeable_ == nullptr && this->optional_ == nullptr && this->parameterName_ == nullptr
        && this->unit_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Parameters& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline Parameters& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // isDynamic Field Functions 
      bool hasIsDynamic() const { return this->isDynamic_ != nullptr;};
      void deleteIsDynamic() { this->isDynamic_ = nullptr;};
      inline string getIsDynamic() const { DARABONBA_PTR_GET_DEFAULT(isDynamic_, "") };
      inline Parameters& setIsDynamic(string isDynamic) { DARABONBA_PTR_SET_VALUE(isDynamic_, isDynamic) };


      // isUserChangeable Field Functions 
      bool hasIsUserChangeable() const { return this->isUserChangeable_ != nullptr;};
      void deleteIsUserChangeable() { this->isUserChangeable_ = nullptr;};
      inline string getIsUserChangeable() const { DARABONBA_PTR_GET_DEFAULT(isUserChangeable_, "") };
      inline Parameters& setIsUserChangeable(string isUserChangeable) { DARABONBA_PTR_SET_VALUE(isUserChangeable_, isUserChangeable) };


      // optional Field Functions 
      bool hasOptional() const { return this->optional_ != nullptr;};
      void deleteOptional() { this->optional_ = nullptr;};
      inline string getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, "") };
      inline Parameters& setOptional(string optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


      // parameterName Field Functions 
      bool hasParameterName() const { return this->parameterName_ != nullptr;};
      void deleteParameterName() { this->parameterName_ = nullptr;};
      inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
      inline Parameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Parameters& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The parameter description.
      shared_ptr<string> comment_ {};
      // The default value.
      shared_ptr<string> defaultValue_ {};
      // Indicates whether the parameter takes effect dynamically. Valid values: 1 and 0.
      shared_ptr<string> isDynamic_ {};
      // Indicates whether the parameter can be modified by users. Valid values: 1 and 0.
      shared_ptr<string> isUserChangeable_ {};
      // The value range or valid values. Example: [0-3600].
      shared_ptr<string> optional_ {};
      // The parameter name.
      shared_ptr<string> parameterName_ {};
      // The unit.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->parameters_ == nullptr
        && this->requestId_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters>) };
    inline vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters>) };
    inline DescribeLakebaseMountParameterTemplateListResponseBody& setParameters(const vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeLakebaseMountParameterTemplateListResponseBody& setParameters(vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLakebaseMountParameterTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of parameter templates.
    shared_ptr<vector<DescribeLakebaseMountParameterTemplateListResponseBody::Parameters>> parameters_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
