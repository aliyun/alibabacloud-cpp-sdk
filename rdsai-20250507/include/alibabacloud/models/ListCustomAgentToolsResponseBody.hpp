// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListCustomAgentToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCustomAgentToolsResponseBody() = default ;
    ListCustomAgentToolsResponseBody(const ListCustomAgentToolsResponseBody &) = default ;
    ListCustomAgentToolsResponseBody(ListCustomAgentToolsResponseBody &&) = default ;
    ListCustomAgentToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentToolsResponseBody() = default ;
    ListCustomAgentToolsResponseBody& operator=(const ListCustomAgentToolsResponseBody &) = default ;
    ListCustomAgentToolsResponseBody& operator=(ListCustomAgentToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(En, en_);
        DARABONBA_PTR_TO_JSON(Ja, ja_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Tc, tc_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Zh, zh_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(En, en_);
        DARABONBA_PTR_FROM_JSON(Ja, ja_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Tc, tc_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Zh, zh_);
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
      virtual bool empty() const override { return this->en_ == nullptr
        && this->ja_ == nullptr && this->name_ == nullptr && this->tc_ == nullptr && this->type_ == nullptr && this->zh_ == nullptr; };
      // en Field Functions 
      bool hasEn() const { return this->en_ != nullptr;};
      void deleteEn() { this->en_ = nullptr;};
      inline string getEn() const { DARABONBA_PTR_GET_DEFAULT(en_, "") };
      inline Data& setEn(string en) { DARABONBA_PTR_SET_VALUE(en_, en) };


      // ja Field Functions 
      bool hasJa() const { return this->ja_ != nullptr;};
      void deleteJa() { this->ja_ = nullptr;};
      inline string getJa() const { DARABONBA_PTR_GET_DEFAULT(ja_, "") };
      inline Data& setJa(string ja) { DARABONBA_PTR_SET_VALUE(ja_, ja) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tc Field Functions 
      bool hasTc() const { return this->tc_ != nullptr;};
      void deleteTc() { this->tc_ = nullptr;};
      inline string getTc() const { DARABONBA_PTR_GET_DEFAULT(tc_, "") };
      inline Data& setTc(string tc) { DARABONBA_PTR_SET_VALUE(tc_, tc) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // zh Field Functions 
      bool hasZh() const { return this->zh_ != nullptr;};
      void deleteZh() { this->zh_ = nullptr;};
      inline string getZh() const { DARABONBA_PTR_GET_DEFAULT(zh_, "") };
      inline Data& setZh(string zh) { DARABONBA_PTR_SET_VALUE(zh_, zh) };


    protected:
      // The description in English.
      shared_ptr<string> en_ {};
      // The description in Japanese.
      shared_ptr<string> ja_ {};
      // The tool name.
      shared_ptr<string> name_ {};
      // The description in Traditional Chinese.
      shared_ptr<string> tc_ {};
      // The read/write type of the tool.
      shared_ptr<string> type_ {};
      // The description in Simplified Chinese.
      shared_ptr<string> zh_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCustomAgentToolsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCustomAgentToolsResponseBody::Data>) };
    inline vector<ListCustomAgentToolsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCustomAgentToolsResponseBody::Data>) };
    inline ListCustomAgentToolsResponseBody& setData(const vector<ListCustomAgentToolsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomAgentToolsResponseBody& setData(vector<ListCustomAgentToolsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<ListCustomAgentToolsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
