// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIRSTRANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIRSTRANKRESPONSEBODY_HPP_
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
  class CreateFirstRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirstRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirstRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateFirstRankResponseBody() = default ;
    CreateFirstRankResponseBody(const CreateFirstRankResponseBody &) = default ;
    CreateFirstRankResponseBody(CreateFirstRankResponseBody &&) = default ;
    CreateFirstRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirstRankResponseBody() = default ;
    CreateFirstRankResponseBody& operator=(const CreateFirstRankResponseBody &) = default ;
    CreateFirstRankResponseBody& operator=(CreateFirstRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(active, active_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(active, active_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(arg, arg_);
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(arg, arg_);
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arg_ == nullptr
        && this->attribute_ == nullptr && this->weight_ == nullptr; };
        // arg Field Functions 
        bool hasArg() const { return this->arg_ != nullptr;};
        void deleteArg() { this->arg_ = nullptr;};
        inline string getArg() const { DARABONBA_PTR_GET_DEFAULT(arg_, "") };
        inline Meta& setArg(string arg) { DARABONBA_PTR_SET_VALUE(arg_, arg) };


        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline Meta& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline float getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
        inline Meta& setWeight(float weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The parameters that are used by a function in the expression.
        shared_ptr<string> arg_ {};
        // The attribute, feature functions, or field to be searched for.
        shared_ptr<string> attribute_ {};
        // The weight.
        // Valid values: [-100000, 100000]. The value cannot be 0.
        shared_ptr<float> weight_ {};
      };

      virtual bool empty() const override { return this->active_ == nullptr
        && this->meta_ == nullptr && this->name_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const vector<Result::Meta> & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Result::Meta>) };
      inline vector<Result::Meta> getMeta() { DARABONBA_PTR_GET(meta_, vector<Result::Meta>) };
      inline Result& setMeta(const vector<Result::Meta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Result& setMeta(vector<Result::Meta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // Indicates whether the expression is the default one.
      shared_ptr<bool> active_ {};
      // The content of the expression.
      shared_ptr<vector<Result::Meta>> meta_ {};
      // The name of the expression.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFirstRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateFirstRankResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateFirstRankResponseBody::Result) };
    inline CreateFirstRankResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateFirstRankResponseBody::Result) };
    inline CreateFirstRankResponseBody& setResult(const CreateFirstRankResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateFirstRankResponseBody& setResult(CreateFirstRankResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the rough sort expression.
    shared_ptr<CreateFirstRankResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
