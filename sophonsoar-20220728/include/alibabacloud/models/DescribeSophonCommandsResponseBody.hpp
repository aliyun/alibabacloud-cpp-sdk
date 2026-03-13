// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSophonCommandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSophonCommandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSophonCommandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSophonCommandsResponseBody() = default ;
    DescribeSophonCommandsResponseBody(const DescribeSophonCommandsResponseBody &) = default ;
    DescribeSophonCommandsResponseBody(DescribeSophonCommandsResponseBody &&) = default ;
    DescribeSophonCommandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSophonCommandsResponseBody() = default ;
    DescribeSophonCommandsResponseBody& operator=(const DescribeSophonCommandsResponseBody &) = default ;
    DescribeSophonCommandsResponseBody& operator=(DescribeSophonCommandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CheckField, checkField_);
          DARABONBA_PTR_TO_JSON(Field, field_);
          DARABONBA_PTR_TO_JSON(Necessary, necessary_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ParamConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckField, checkField_);
          DARABONBA_PTR_FROM_JSON(Field, field_);
          DARABONBA_PTR_FROM_JSON(Necessary, necessary_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ParamConfig() = default ;
        ParamConfig(const ParamConfig &) = default ;
        ParamConfig(ParamConfig &&) = default ;
        ParamConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamConfig() = default ;
        ParamConfig& operator=(const ParamConfig &) = default ;
        ParamConfig& operator=(ParamConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkField_ == nullptr
        && this->field_ == nullptr && this->necessary_ == nullptr && this->value_ == nullptr; };
        // checkField Field Functions 
        bool hasCheckField() const { return this->checkField_ != nullptr;};
        void deleteCheckField() { this->checkField_ = nullptr;};
        inline string getCheckField() const { DARABONBA_PTR_GET_DEFAULT(checkField_, "") };
        inline ParamConfig& setCheckField(string checkField) { DARABONBA_PTR_SET_VALUE(checkField_, checkField) };


        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline ParamConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // necessary Field Functions 
        bool hasNecessary() const { return this->necessary_ != nullptr;};
        void deleteNecessary() { this->necessary_ = nullptr;};
        inline bool getNecessary() const { DARABONBA_PTR_GET_DEFAULT(necessary_, false) };
        inline ParamConfig& setNecessary(bool necessary) { DARABONBA_PTR_SET_VALUE(necessary_, necessary) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ParamConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The regular expression that is used to check the format of the parameter value. If the parameter is left empty, the check is not performed.
        shared_ptr<string> checkField_ {};
        // The name of the parameter.
        shared_ptr<string> field_ {};
        // Indicates whether the parameter is required. Valid values:
        // 
        // *   **true** (default)
        // *   **false**
        shared_ptr<bool> necessary_ {};
        // The value of the parameter.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->name_ == nullptr && this->paramConfig_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // paramConfig Field Functions 
      bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
      void deleteParamConfig() { this->paramConfig_ = nullptr;};
      inline const vector<Data::ParamConfig> & getParamConfig() const { DARABONBA_PTR_GET_CONST(paramConfig_, vector<Data::ParamConfig>) };
      inline vector<Data::ParamConfig> getParamConfig() { DARABONBA_PTR_GET(paramConfig_, vector<Data::ParamConfig>) };
      inline Data& setParamConfig(const vector<Data::ParamConfig> & paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };
      inline Data& setParamConfig(vector<Data::ParamConfig> && paramConfig) { DARABONBA_PTR_SET_RVALUE(paramConfig_, paramConfig) };


    protected:
      // The description of the command.
      shared_ptr<string> description_ {};
      // The display name of the command.
      shared_ptr<string> displayName_ {};
      // The name of the command.
      shared_ptr<string> name_ {};
      // The parameter configurations.
      shared_ptr<vector<Data::ParamConfig>> paramConfig_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSophonCommandsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSophonCommandsResponseBody::Data>) };
    inline vector<DescribeSophonCommandsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSophonCommandsResponseBody::Data>) };
    inline DescribeSophonCommandsResponseBody& setData(const vector<DescribeSophonCommandsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSophonCommandsResponseBody& setData(vector<DescribeSophonCommandsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSophonCommandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The commands.
    shared_ptr<vector<DescribeSophonCommandsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
