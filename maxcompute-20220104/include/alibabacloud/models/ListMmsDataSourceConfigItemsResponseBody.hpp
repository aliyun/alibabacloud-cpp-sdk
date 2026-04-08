// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDATASOURCECONFIGITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDATASOURCECONFIGITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDataSourceConfigItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDataSourceConfigItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDataSourceConfigItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsDataSourceConfigItemsResponseBody() = default ;
    ListMmsDataSourceConfigItemsResponseBody(const ListMmsDataSourceConfigItemsResponseBody &) = default ;
    ListMmsDataSourceConfigItemsResponseBody(ListMmsDataSourceConfigItemsResponseBody &&) = default ;
    ListMmsDataSourceConfigItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDataSourceConfigItemsResponseBody() = default ;
    ListMmsDataSourceConfigItemsResponseBody& operator=(const ListMmsDataSourceConfigItemsResponseBody &) = default ;
    ListMmsDataSourceConfigItemsResponseBody& operator=(ListMmsDataSourceConfigItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(enums, enums_);
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(placeHolder, placeHolder_);
        DARABONBA_PTR_TO_JSON(required, required_);
        DARABONBA_ANY_TO_JSON(subItems, subItems_);
        DARABONBA_PTR_TO_JSON(subType, subType_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_ANY_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(enums, enums_);
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(placeHolder, placeHolder_);
        DARABONBA_PTR_FROM_JSON(required, required_);
        DARABONBA_ANY_FROM_JSON(subItems, subItems_);
        DARABONBA_PTR_FROM_JSON(subType, subType_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_ANY_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->enums_ == nullptr && this->group_ == nullptr && this->key_ == nullptr && this->name_ == nullptr && this->placeHolder_ == nullptr
        && this->required_ == nullptr && this->subItems_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Data& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // enums Field Functions 
      bool hasEnums() const { return this->enums_ != nullptr;};
      void deleteEnums() { this->enums_ = nullptr;};
      inline const vector<string> & getEnums() const { DARABONBA_PTR_GET_CONST(enums_, vector<string>) };
      inline vector<string> getEnums() { DARABONBA_PTR_GET(enums_, vector<string>) };
      inline Data& setEnums(const vector<string> & enums) { DARABONBA_PTR_SET_VALUE(enums_, enums) };
      inline Data& setEnums(vector<string> && enums) { DARABONBA_PTR_SET_RVALUE(enums_, enums) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Data& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // placeHolder Field Functions 
      bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
      void deletePlaceHolder() { this->placeHolder_ = nullptr;};
      inline string getPlaceHolder() const { DARABONBA_PTR_GET_DEFAULT(placeHolder_, "") };
      inline Data& setPlaceHolder(string placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Data& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      // subItems Field Functions 
      bool hasSubItems() const { return this->subItems_ != nullptr;};
      void deleteSubItems() { this->subItems_ = nullptr;};
      inline       const Darabonba::Json & getSubItems() const { DARABONBA_GET(subItems_) };
      Darabonba::Json & getSubItems() { DARABONBA_GET(subItems_) };
      inline Data& setSubItems(const Darabonba::Json & subItems) { DARABONBA_SET_VALUE(subItems_, subItems) };
      inline Data& setSubItems(Darabonba::Json && subItems) { DARABONBA_SET_RVALUE(subItems_, subItems) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline Data& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline Data& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline Data& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> desc_ {};
      shared_ptr<vector<string>> enums_ {};
      shared_ptr<string> group_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> placeHolder_ {};
      shared_ptr<bool> required_ {};
      Darabonba::Json subItems_ {};
      shared_ptr<string> subType_ {};
      shared_ptr<string> type_ {};
      Darabonba::Json value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMmsDataSourceConfigItemsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMmsDataSourceConfigItemsResponseBody::Data>) };
    inline vector<ListMmsDataSourceConfigItemsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMmsDataSourceConfigItemsResponseBody::Data>) };
    inline ListMmsDataSourceConfigItemsResponseBody& setData(const vector<ListMmsDataSourceConfigItemsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsDataSourceConfigItemsResponseBody& setData(vector<ListMmsDataSourceConfigItemsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsDataSourceConfigItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListMmsDataSourceConfigItemsResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
