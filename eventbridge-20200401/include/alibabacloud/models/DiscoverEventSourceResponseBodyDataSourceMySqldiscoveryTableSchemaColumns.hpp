// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERYTABLESCHEMACOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_DISCOVEREVENTSOURCERESPONSEBODYDATASOURCEMYSQLDISCOVERYTABLESCHEMACOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(IsNull, isNull_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(IsNull, isNull_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns(DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns &&) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns() = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& operator=(const DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns &) = default ;
    DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& operator=(DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extra_ != nullptr
        && this->field_ != nullptr && this->isNull_ != nullptr && this->key_ != nullptr && this->type_ != nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // isNull Field Functions 
    bool hasIsNull() const { return this->isNull_ != nullptr;};
    void deleteIsNull() { this->isNull_ = nullptr;};
    inline string isNull() const { DARABONBA_PTR_GET_DEFAULT(isNull_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& setIsNull(string isNull) { DARABONBA_PTR_SET_VALUE(isNull_, isNull) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DiscoverEventSourceResponseBodyDataSourceMySQLDiscoveryTableSchemaColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<string> field_ = nullptr;
    std::shared_ptr<string> isNull_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
