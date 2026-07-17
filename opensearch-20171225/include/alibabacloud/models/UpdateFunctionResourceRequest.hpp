// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateFunctionResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    UpdateFunctionResourceRequest() = default ;
    UpdateFunctionResourceRequest(const UpdateFunctionResourceRequest &) = default ;
    UpdateFunctionResourceRequest(UpdateFunctionResourceRequest &&) = default ;
    UpdateFunctionResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionResourceRequest() = default ;
    UpdateFunctionResourceRequest& operator=(const UpdateFunctionResourceRequest &) = default ;
    UpdateFunctionResourceRequest& operator=(UpdateFunctionResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Generators, generators_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Generators, generators_);
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
      class Generators : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Generators& obj) { 
          DARABONBA_PTR_TO_JSON(Generator, generator_);
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(Output, output_);
        };
        friend void from_json(const Darabonba::Json& j, Generators& obj) { 
          DARABONBA_PTR_FROM_JSON(Generator, generator_);
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
        };
        Generators() = default ;
        Generators(const Generators &) = default ;
        Generators(Generators &&) = default ;
        Generators(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Generators() = default ;
        Generators& operator=(const Generators &) = default ;
        Generators& operator=(Generators &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(Features, features_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(Features, features_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Features : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Features& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Features& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Features() = default ;
            Features(const Features &) = default ;
            Features(Features &&) = default ;
            Features(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Features() = default ;
            Features& operator=(const Features &) = default ;
            Features& operator=(Features &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The name of the feature.
            shared_ptr<string> name_ {};
            // The type of the feature.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->features_ == nullptr; };
          // features Field Functions 
          bool hasFeatures() const { return this->features_ != nullptr;};
          void deleteFeatures() { this->features_ = nullptr;};
          inline const vector<Input::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<Input::Features>) };
          inline vector<Input::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<Input::Features>) };
          inline Input& setFeatures(const vector<Input::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
          inline Input& setFeatures(vector<Input::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


        protected:
          // A list of input features.
          shared_ptr<vector<Input::Features>> features_ {};
        };

        virtual bool empty() const override { return this->generator_ == nullptr
        && this->input_ == nullptr && this->output_ == nullptr; };
        // generator Field Functions 
        bool hasGenerator() const { return this->generator_ != nullptr;};
        void deleteGenerator() { this->generator_ = nullptr;};
        inline string getGenerator() const { DARABONBA_PTR_GET_DEFAULT(generator_, "") };
        inline Generators& setGenerator(string generator) { DARABONBA_PTR_SET_VALUE(generator_, generator) };


        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const Generators::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Generators::Input) };
        inline Generators::Input getInput() { DARABONBA_PTR_GET(input_, Generators::Input) };
        inline Generators& setInput(const Generators::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Generators& setInput(Generators::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
        inline Generators& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      protected:
        // The type of the feature generator.
        shared_ptr<string> generator_ {};
        // The input.
        shared_ptr<Generators::Input> input_ {};
        // The name of the output feature.
        shared_ptr<string> output_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->generators_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // generators Field Functions 
      bool hasGenerators() const { return this->generators_ != nullptr;};
      void deleteGenerators() { this->generators_ = nullptr;};
      inline const vector<Data::Generators> & getGenerators() const { DARABONBA_PTR_GET_CONST(generators_, vector<Data::Generators>) };
      inline vector<Data::Generators> getGenerators() { DARABONBA_PTR_GET(generators_, vector<Data::Generators>) };
      inline Data& setGenerators(const vector<Data::Generators> & generators) { DARABONBA_PTR_SET_VALUE(generators_, generators) };
      inline Data& setGenerators(vector<Data::Generators> && generators) { DARABONBA_PTR_SET_RVALUE(generators_, generators) };


    protected:
      // The content of the file. This parameter is used for resources of the raw_file type.
      shared_ptr<string> content_ {};
      // The list of feature generators. This parameter is used for resources of the feature_generator type.
      shared_ptr<vector<Data::Generators>> generators_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->description_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateFunctionResourceRequest::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateFunctionResourceRequest::Data) };
    inline UpdateFunctionResourceRequest::Data getData() { DARABONBA_PTR_GET(data_, UpdateFunctionResourceRequest::Data) };
    inline UpdateFunctionResourceRequest& setData(const UpdateFunctionResourceRequest::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateFunctionResourceRequest& setData(UpdateFunctionResourceRequest::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFunctionResourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The data of the resource. The structure of this parameter varies based on the value of resourceType.
    shared_ptr<UpdateFunctionResourceRequest::Data> data_ {};
    // The description of the resource.
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
