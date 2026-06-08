// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFIRSTRANKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFIRSTRANKSRESPONSEBODY_HPP_
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
  class ListFirstRanksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFirstRanksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListFirstRanksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListFirstRanksResponseBody() = default ;
    ListFirstRanksResponseBody(const ListFirstRanksResponseBody &) = default ;
    ListFirstRanksResponseBody(ListFirstRanksResponseBody &&) = default ;
    ListFirstRanksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFirstRanksResponseBody() = default ;
    ListFirstRanksResponseBody& operator=(const ListFirstRanksResponseBody &) = default ;
    ListFirstRanksResponseBody& operator=(ListFirstRanksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(active, active_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(active, active_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
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
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Meta& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The parameters that are used by a function in the expression.
        // 
        // For more information, see [Rough sort functions](https://help.aliyun.com/document_detail/180765.html).
        shared_ptr<string> arg_ {};
        // The attribute, feature function, or field to be searched for.
        // 
        // For more information about supported feature functions, see [Rough sort functions](https://help.aliyun.com/document_detail/180765.html).
        shared_ptr<string> attribute_ {};
        // The weight. Valid values: -100000 to 100000. The value cannot be 0.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->active_ == nullptr
        && this->created_ == nullptr && this->description_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr && this->updated_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline Result& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline int32_t getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
      inline Result& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline int32_t getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
      inline Result& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // Specifies whether to set the fine sort expression as the default sort expression.
      shared_ptr<bool> active_ {};
      // The time when the expression was created.
      shared_ptr<int32_t> created_ {};
      // Description
      shared_ptr<string> description_ {};
      // The information about the expression.
      shared_ptr<vector<Result::Meta>> meta_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The time when the expression was updated.
      shared_ptr<int32_t> updated_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFirstRanksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListFirstRanksResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListFirstRanksResponseBody::Result>) };
    inline vector<ListFirstRanksResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListFirstRanksResponseBody::Result>) };
    inline ListFirstRanksResponseBody& setResult(const vector<ListFirstRanksResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFirstRanksResponseBody& setResult(vector<ListFirstRanksResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the rough sort expression.
    // 
    // For more information, see [FirstRank](https://help.aliyun.com/document_detail/170007.html).
    shared_ptr<vector<ListFirstRanksResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
