// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODYDATAPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCMSINSTANCESRESPONSEBODYDATAPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListCmsInstancesResponseBodyDataProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCmsInstancesResponseBodyDataProducts& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCmsInstancesResponseBodyDataProducts& obj) { 
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
    ListCmsInstancesResponseBodyDataProducts() = default ;
    ListCmsInstancesResponseBodyDataProducts(const ListCmsInstancesResponseBodyDataProducts &) = default ;
    ListCmsInstancesResponseBodyDataProducts(ListCmsInstancesResponseBodyDataProducts &&) = default ;
    ListCmsInstancesResponseBodyDataProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCmsInstancesResponseBodyDataProducts() = default ;
    ListCmsInstancesResponseBodyDataProducts& operator=(const ListCmsInstancesResponseBodyDataProducts &) = default ;
    ListCmsInstancesResponseBodyDataProducts& operator=(ListCmsInstancesResponseBodyDataProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->descr_ != nullptr
        && this->id_ != nullptr && this->instance_ != nullptr && this->name_ != nullptr && this->prod_ != nullptr && this->source_ != nullptr
        && this->state_ != nullptr && this->time_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // descr Field Functions 
    bool hasDescr() const { return this->descr_ != nullptr;};
    void deleteDescr() { this->descr_ = nullptr;};
    inline string descr() const { DARABONBA_PTR_GET_DEFAULT(descr_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setDescr(string descr) { DARABONBA_PTR_SET_VALUE(descr_, descr) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // prod Field Functions 
    bool hasProd() const { return this->prod_ != nullptr;};
    void deleteProd() { this->prod_ = nullptr;};
    inline string prod() const { DARABONBA_PTR_GET_DEFAULT(prod_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setProd(string prod) { DARABONBA_PTR_SET_VALUE(prod_, prod) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListCmsInstancesResponseBodyDataProducts& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> descr_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> prod_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
