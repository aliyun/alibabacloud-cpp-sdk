// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSPECTIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSPECTIONTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListInspectionTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInspectionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListInspectionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListInspectionTemplatesResponseBody() = default ;
    ListInspectionTemplatesResponseBody(const ListInspectionTemplatesResponseBody &) = default ;
    ListInspectionTemplatesResponseBody(ListInspectionTemplatesResponseBody &&) = default ;
    ListInspectionTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInspectionTemplatesResponseBody() = default ;
    ListInspectionTemplatesResponseBody& operator=(const ListInspectionTemplatesResponseBody &) = default ;
    ListInspectionTemplatesResponseBody& operator=(ListInspectionTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(configuration, configuration_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(params, params_);
        DARABONBA_PTR_TO_JSON(scopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(params, params_);
        DARABONBA_PTR_FROM_JSON(scopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_ANY_TO_JSON(default, default_);
            DARABONBA_PTR_TO_JSON(enum, enum_);
            DARABONBA_PTR_TO_JSON(format, format_);
            DARABONBA_PTR_TO_JSON(key, key_);
            DARABONBA_PTR_TO_JSON(maxLookbackSeconds, maxLookbackSeconds_);
            DARABONBA_PTR_TO_JSON(maximum, maximum_);
            DARABONBA_PTR_TO_JSON(minimum, minimum_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(required, required_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(unit, unit_);
            DARABONBA_PTR_TO_JSON(wholeDays, wholeDays_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_ANY_FROM_JSON(default, default_);
            DARABONBA_PTR_FROM_JSON(enum, enum_);
            DARABONBA_PTR_FROM_JSON(format, format_);
            DARABONBA_PTR_FROM_JSON(key, key_);
            DARABONBA_PTR_FROM_JSON(maxLookbackSeconds, maxLookbackSeconds_);
            DARABONBA_PTR_FROM_JSON(maximum, maximum_);
            DARABONBA_PTR_FROM_JSON(minimum, minimum_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(required, required_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(unit, unit_);
            DARABONBA_PTR_FROM_JSON(wholeDays, wholeDays_);
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
        && this->enum_ == nullptr && this->format_ == nullptr && this->key_ == nullptr && this->maxLookbackSeconds_ == nullptr && this->maximum_ == nullptr
        && this->minimum_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->type_ == nullptr && this->unit_ == nullptr
        && this->wholeDays_ == nullptr; };
          // default Field Functions 
          bool hasDefault() const { return this->default_ != nullptr;};
          void deleteDefault() { this->default_ = nullptr;};
          inline           const Darabonba::Json & getDefault() const { DARABONBA_GET(default_) };
          Darabonba::Json & getDefault() { DARABONBA_GET(default_) };
          inline Parameters& setDefault(const Darabonba::Json & _default) { DARABONBA_SET_VALUE(default_, _default) };
          inline Parameters& setDefault(Darabonba::Json && _default) { DARABONBA_SET_RVALUE(default_, _default) };


          // enum Field Functions 
          bool hasEnum() const { return this->enum_ != nullptr;};
          void deleteEnum() { this->enum_ = nullptr;};
          inline const vector<string> & getEnum() const { DARABONBA_PTR_GET_CONST(enum_, vector<string>) };
          inline vector<string> getEnum() { DARABONBA_PTR_GET(enum_, vector<string>) };
          inline Parameters& setEnum(const vector<string> & _enum) { DARABONBA_PTR_SET_VALUE(enum_, _enum) };
          inline Parameters& setEnum(vector<string> && _enum) { DARABONBA_PTR_SET_RVALUE(enum_, _enum) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Parameters& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Parameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // maxLookbackSeconds Field Functions 
          bool hasMaxLookbackSeconds() const { return this->maxLookbackSeconds_ != nullptr;};
          void deleteMaxLookbackSeconds() { this->maxLookbackSeconds_ = nullptr;};
          inline int64_t getMaxLookbackSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxLookbackSeconds_, 0L) };
          inline Parameters& setMaxLookbackSeconds(int64_t maxLookbackSeconds) { DARABONBA_PTR_SET_VALUE(maxLookbackSeconds_, maxLookbackSeconds) };


          // maximum Field Functions 
          bool hasMaximum() const { return this->maximum_ != nullptr;};
          void deleteMaximum() { this->maximum_ = nullptr;};
          inline double getMaximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
          inline Parameters& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


          // minimum Field Functions 
          bool hasMinimum() const { return this->minimum_ != nullptr;};
          void deleteMinimum() { this->minimum_ = nullptr;};
          inline double getMinimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
          inline Parameters& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline Parameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Parameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline Parameters& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // wholeDays Field Functions 
          bool hasWholeDays() const { return this->wholeDays_ != nullptr;};
          void deleteWholeDays() { this->wholeDays_ = nullptr;};
          inline bool getWholeDays() const { DARABONBA_PTR_GET_DEFAULT(wholeDays_, false) };
          inline Parameters& setWholeDays(bool wholeDays) { DARABONBA_PTR_SET_VALUE(wholeDays_, wholeDays) };


        protected:
          Darabonba::Json default_ {};
          shared_ptr<vector<string>> enum_ {};
          shared_ptr<string> format_ {};
          shared_ptr<string> key_ {};
          shared_ptr<int64_t> maxLookbackSeconds_ {};
          shared_ptr<double> maximum_ {};
          shared_ptr<double> minimum_ {};
          shared_ptr<string> name_ {};
          shared_ptr<bool> required_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> unit_ {};
          shared_ptr<bool> wholeDays_ {};
        };

        virtual bool empty() const override { return this->parameters_ == nullptr; };
        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<Configuration::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Configuration::Parameters>) };
        inline vector<Configuration::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<Configuration::Parameters>) };
        inline Configuration& setParameters(const vector<Configuration::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline Configuration& setParameters(vector<Configuration::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      protected:
        shared_ptr<vector<Configuration::Parameters>> parameters_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->params_ == nullptr && this->scopeType_ == nullptr && this->templateCode_ == nullptr
        && this->version_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const Data::Configuration & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, Data::Configuration) };
      inline Data::Configuration getConfiguration() { DARABONBA_PTR_GET(configuration_, Data::Configuration) };
      inline Data& setConfiguration(const Data::Configuration & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline Data& setConfiguration(Data::Configuration && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline       const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
      Darabonba::Json & getParams() { DARABONBA_GET(params_) };
      inline Data& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
      inline Data& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline Data& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline Data& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<Data::Configuration> configuration_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      Darabonba::Json params_ {};
      shared_ptr<string> scopeType_ {};
      shared_ptr<string> templateCode_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInspectionTemplatesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInspectionTemplatesResponseBody::Data>) };
    inline vector<ListInspectionTemplatesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListInspectionTemplatesResponseBody::Data>) };
    inline ListInspectionTemplatesResponseBody& setData(const vector<ListInspectionTemplatesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInspectionTemplatesResponseBody& setData(vector<ListInspectionTemplatesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInspectionTemplatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInspectionTemplatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListInspectionTemplatesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListInspectionTemplatesResponseBody::Data>> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
