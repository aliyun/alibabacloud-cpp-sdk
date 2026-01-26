// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListCmsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCmsInstancesResponseBody() = default ;
    ListCmsInstancesResponseBody(const ListCmsInstancesResponseBody &) = default ;
    ListCmsInstancesResponseBody(ListCmsInstancesResponseBody &&) = default ;
    ListCmsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCmsInstancesResponseBody() = default ;
    ListCmsInstancesResponseBody& operator=(const ListCmsInstancesResponseBody &) = default ;
    ListCmsInstancesResponseBody& operator=(ListCmsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnableTag, enableTag_);
        DARABONBA_PTR_TO_JSON(Products, products_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableTag, enableTag_);
        DARABONBA_PTR_FROM_JSON(Products, products_);
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
      class Products : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Products& obj) { 
          DARABONBA_PTR_TO_JSON(Descr, descr_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Instance, instance_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Prod, prod_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Products& obj) { 
          DARABONBA_PTR_FROM_JSON(Descr, descr_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Prod, prod_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Products() = default ;
        Products(const Products &) = default ;
        Products(Products &&) = default ;
        Products(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Products() = default ;
        Products& operator=(const Products &) = default ;
        Products& operator=(Products &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->descr_ == nullptr
        && this->id_ == nullptr && this->instance_ == nullptr && this->name_ == nullptr && this->prod_ == nullptr && this->source_ == nullptr
        && this->state_ == nullptr && this->time_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // descr Field Functions 
        bool hasDescr() const { return this->descr_ != nullptr;};
        void deleteDescr() { this->descr_ = nullptr;};
        inline string getDescr() const { DARABONBA_PTR_GET_DEFAULT(descr_, "") };
        inline Products& setDescr(string descr) { DARABONBA_PTR_SET_VALUE(descr_, descr) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Products& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
        inline Products& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Products& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // prod Field Functions 
        bool hasProd() const { return this->prod_ != nullptr;};
        void deleteProd() { this->prod_ = nullptr;};
        inline string getProd() const { DARABONBA_PTR_GET_DEFAULT(prod_, "") };
        inline Products& setProd(string prod) { DARABONBA_PTR_SET_VALUE(prod_, prod) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Products& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Products& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Products& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Products& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Products& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> descr_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> instance_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> prod_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> time_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->enableTag_ == nullptr
        && this->products_ == nullptr; };
      // enableTag Field Functions 
      bool hasEnableTag() const { return this->enableTag_ != nullptr;};
      void deleteEnableTag() { this->enableTag_ = nullptr;};
      inline bool getEnableTag() const { DARABONBA_PTR_GET_DEFAULT(enableTag_, false) };
      inline Data& setEnableTag(bool enableTag) { DARABONBA_PTR_SET_VALUE(enableTag_, enableTag) };


      // products Field Functions 
      bool hasProducts() const { return this->products_ != nullptr;};
      void deleteProducts() { this->products_ = nullptr;};
      inline const vector<Data::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<Data::Products>) };
      inline vector<Data::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<Data::Products>) };
      inline Data& setProducts(const vector<Data::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
      inline Data& setProducts(vector<Data::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    protected:
      shared_ptr<bool> enableTag_ {};
      shared_ptr<vector<Data::Products>> products_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCmsInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCmsInstancesResponseBody::Data) };
    inline ListCmsInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCmsInstancesResponseBody::Data) };
    inline ListCmsInstancesResponseBody& setData(const ListCmsInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCmsInstancesResponseBody& setData(ListCmsInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCmsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListCmsInstancesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
