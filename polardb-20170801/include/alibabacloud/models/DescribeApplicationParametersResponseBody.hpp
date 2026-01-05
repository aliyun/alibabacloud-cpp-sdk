// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSRESPONSEBODY_HPP_
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
  class DescribeApplicationParametersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterTemplates, parameterTemplates_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterTemplates, parameterTemplates_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationParametersResponseBody() = default ;
    DescribeApplicationParametersResponseBody(const DescribeApplicationParametersResponseBody &) = default ;
    DescribeApplicationParametersResponseBody(DescribeApplicationParametersResponseBody &&) = default ;
    DescribeApplicationParametersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersResponseBody() = default ;
    DescribeApplicationParametersResponseBody& operator=(const DescribeApplicationParametersResponseBody &) = default ;
    DescribeApplicationParametersResponseBody& operator=(DescribeApplicationParametersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentParameters, componentParameters_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentParameters, componentParameters_);
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
      class ComponentParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        };
        ComponentParameters() = default ;
        ComponentParameters(const ComponentParameters &) = default ;
        ComponentParameters(ComponentParameters &&) = default ;
        ComponentParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentParameters() = default ;
        ComponentParameters& operator=(const ComponentParameters &) = default ;
        ComponentParameters& operator=(ComponentParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(Default, default_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
            DARABONBA_PTR_TO_JSON(Pattern, pattern_);
            DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Default, default_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
            DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
            DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->default_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->needRestart_ == nullptr && this->pattern_ == nullptr && this->readOnly_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline string getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
          inline Parameters& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Parameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // needRestart Field Functions 
          bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
          void deleteNeedRestart() { this->needRestart_ = nullptr;};
          inline bool getNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
          inline Parameters& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


          // pattern Field Functions 
          bool hasPattern() const { return this->pattern_ != nullptr;};
          void deletePattern() { this->pattern_ = nullptr;};
          inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
          inline Parameters& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


          // readOnly Field Functions 
          bool hasReadOnly() const { return this->readOnly_ != nullptr;};
          void deleteReadOnly() { this->readOnly_ = nullptr;};
          inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
          inline Parameters& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


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
          shared_ptr<string> default_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> needRestart_ {};
          shared_ptr<string> pattern_ {};
          shared_ptr<bool> readOnly_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentType_ == nullptr && this->parameters_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline ComponentParameters& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline ComponentParameters& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<ComponentParameters::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ComponentParameters::Parameters>) };
        inline vector<ComponentParameters::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<ComponentParameters::Parameters>) };
        inline ComponentParameters& setParameters(const vector<ComponentParameters::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline ComponentParameters& setParameters(vector<ComponentParameters::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      protected:
        shared_ptr<string> componentId_ {};
        shared_ptr<string> componentType_ {};
        shared_ptr<vector<ComponentParameters::Parameters>> parameters_ {};
      };

      virtual bool empty() const override { return this->componentParameters_ == nullptr; };
      // componentParameters Field Functions 
      bool hasComponentParameters() const { return this->componentParameters_ != nullptr;};
      void deleteComponentParameters() { this->componentParameters_ = nullptr;};
      inline const vector<Parameters::ComponentParameters> & getComponentParameters() const { DARABONBA_PTR_GET_CONST(componentParameters_, vector<Parameters::ComponentParameters>) };
      inline vector<Parameters::ComponentParameters> getComponentParameters() { DARABONBA_PTR_GET(componentParameters_, vector<Parameters::ComponentParameters>) };
      inline Parameters& setComponentParameters(const vector<Parameters::ComponentParameters> & componentParameters) { DARABONBA_PTR_SET_VALUE(componentParameters_, componentParameters) };
      inline Parameters& setComponentParameters(vector<Parameters::ComponentParameters> && componentParameters) { DARABONBA_PTR_SET_RVALUE(componentParameters_, componentParameters) };


    protected:
      shared_ptr<vector<Parameters::ComponentParameters>> componentParameters_ {};
    };

    class ParameterTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParameterTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentParameterTemplates, componentParameterTemplates_);
      };
      friend void from_json(const Darabonba::Json& j, ParameterTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentParameterTemplates, componentParameterTemplates_);
      };
      ParameterTemplates() = default ;
      ParameterTemplates(const ParameterTemplates &) = default ;
      ParameterTemplates(ParameterTemplates &&) = default ;
      ParameterTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParameterTemplates() = default ;
      ParameterTemplates& operator=(const ParameterTemplates &) = default ;
      ParameterTemplates& operator=(ParameterTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ComponentParameterTemplates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ComponentParameterTemplates& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        };
        friend void from_json(const Darabonba::Json& j, ComponentParameterTemplates& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        };
        ComponentParameterTemplates() = default ;
        ComponentParameterTemplates(const ComponentParameterTemplates &) = default ;
        ComponentParameterTemplates(ComponentParameterTemplates &&) = default ;
        ComponentParameterTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ComponentParameterTemplates() = default ;
        ComponentParameterTemplates& operator=(const ComponentParameterTemplates &) = default ;
        ComponentParameterTemplates& operator=(ComponentParameterTemplates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(Default, default_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
            DARABONBA_PTR_TO_JSON(Pattern, pattern_);
            DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Default, default_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
            DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
            DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
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
          virtual bool empty() const override { return this->default_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->needRestart_ == nullptr && this->pattern_ == nullptr && this->readOnly_ == nullptr
        && this->type_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline string getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, "") };
          inline Parameters& setDefault(string _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Parameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // needRestart Field Functions 
          bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
          void deleteNeedRestart() { this->needRestart_ = nullptr;};
          inline bool getNeedRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
          inline Parameters& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


          // pattern Field Functions 
          bool hasPattern() const { return this->pattern_ != nullptr;};
          void deletePattern() { this->pattern_ = nullptr;};
          inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
          inline Parameters& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


          // readOnly Field Functions 
          bool hasReadOnly() const { return this->readOnly_ != nullptr;};
          void deleteReadOnly() { this->readOnly_ = nullptr;};
          inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
          inline Parameters& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> default_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> needRestart_ {};
          shared_ptr<string> pattern_ {};
          shared_ptr<bool> readOnly_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentType_ == nullptr && this->parameters_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline ComponentParameterTemplates& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline ComponentParameterTemplates& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<ComponentParameterTemplates::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<ComponentParameterTemplates::Parameters>) };
        inline vector<ComponentParameterTemplates::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<ComponentParameterTemplates::Parameters>) };
        inline ComponentParameterTemplates& setParameters(const vector<ComponentParameterTemplates::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline ComponentParameterTemplates& setParameters(vector<ComponentParameterTemplates::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      protected:
        shared_ptr<string> componentId_ {};
        shared_ptr<string> componentType_ {};
        shared_ptr<vector<ComponentParameterTemplates::Parameters>> parameters_ {};
      };

      virtual bool empty() const override { return this->componentParameterTemplates_ == nullptr; };
      // componentParameterTemplates Field Functions 
      bool hasComponentParameterTemplates() const { return this->componentParameterTemplates_ != nullptr;};
      void deleteComponentParameterTemplates() { this->componentParameterTemplates_ = nullptr;};
      inline const vector<ParameterTemplates::ComponentParameterTemplates> & getComponentParameterTemplates() const { DARABONBA_PTR_GET_CONST(componentParameterTemplates_, vector<ParameterTemplates::ComponentParameterTemplates>) };
      inline vector<ParameterTemplates::ComponentParameterTemplates> getComponentParameterTemplates() { DARABONBA_PTR_GET(componentParameterTemplates_, vector<ParameterTemplates::ComponentParameterTemplates>) };
      inline ParameterTemplates& setComponentParameterTemplates(const vector<ParameterTemplates::ComponentParameterTemplates> & componentParameterTemplates) { DARABONBA_PTR_SET_VALUE(componentParameterTemplates_, componentParameterTemplates) };
      inline ParameterTemplates& setComponentParameterTemplates(vector<ParameterTemplates::ComponentParameterTemplates> && componentParameterTemplates) { DARABONBA_PTR_SET_RVALUE(componentParameterTemplates_, componentParameterTemplates) };


    protected:
      shared_ptr<vector<ParameterTemplates::ComponentParameterTemplates>> componentParameterTemplates_ {};
    };

    virtual bool empty() const override { return this->parameterTemplates_ == nullptr
        && this->parameters_ == nullptr && this->requestId_ == nullptr; };
    // parameterTemplates Field Functions 
    bool hasParameterTemplates() const { return this->parameterTemplates_ != nullptr;};
    void deleteParameterTemplates() { this->parameterTemplates_ = nullptr;};
    inline const DescribeApplicationParametersResponseBody::ParameterTemplates & getParameterTemplates() const { DARABONBA_PTR_GET_CONST(parameterTemplates_, DescribeApplicationParametersResponseBody::ParameterTemplates) };
    inline DescribeApplicationParametersResponseBody::ParameterTemplates getParameterTemplates() { DARABONBA_PTR_GET(parameterTemplates_, DescribeApplicationParametersResponseBody::ParameterTemplates) };
    inline DescribeApplicationParametersResponseBody& setParameterTemplates(const DescribeApplicationParametersResponseBody::ParameterTemplates & parameterTemplates) { DARABONBA_PTR_SET_VALUE(parameterTemplates_, parameterTemplates) };
    inline DescribeApplicationParametersResponseBody& setParameterTemplates(DescribeApplicationParametersResponseBody::ParameterTemplates && parameterTemplates) { DARABONBA_PTR_SET_RVALUE(parameterTemplates_, parameterTemplates) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const DescribeApplicationParametersResponseBody::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, DescribeApplicationParametersResponseBody::Parameters) };
    inline DescribeApplicationParametersResponseBody::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, DescribeApplicationParametersResponseBody::Parameters) };
    inline DescribeApplicationParametersResponseBody& setParameters(const DescribeApplicationParametersResponseBody::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline DescribeApplicationParametersResponseBody& setParameters(DescribeApplicationParametersResponseBody::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationParametersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeApplicationParametersResponseBody::ParameterTemplates> parameterTemplates_ {};
    shared_ptr<DescribeApplicationParametersResponseBody::Parameters> parameters_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
