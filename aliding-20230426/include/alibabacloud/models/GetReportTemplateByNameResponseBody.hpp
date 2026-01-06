// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(defaultReceivedConvs, defaultReceivedConvs_);
      DARABONBA_PTR_TO_JSON(defaultReceivers, defaultReceivers_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(userid, userid_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultReceivedConvs, defaultReceivedConvs_);
      DARABONBA_PTR_FROM_JSON(defaultReceivers, defaultReceivers_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(userid, userid_);
    };
    GetReportTemplateByNameResponseBody() = default ;
    GetReportTemplateByNameResponseBody(const GetReportTemplateByNameResponseBody &) = default ;
    GetReportTemplateByNameResponseBody(GetReportTemplateByNameResponseBody &&) = default ;
    GetReportTemplateByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameResponseBody() = default ;
    GetReportTemplateByNameResponseBody& operator=(const GetReportTemplateByNameResponseBody &) = default ;
    GetReportTemplateByNameResponseBody& operator=(GetReportTemplateByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(Sort, sort_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(Sort, sort_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fieldName_ == nullptr
        && this->sort_ == nullptr && this->type_ == nullptr; };
      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Fields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // sort Field Functions 
      bool hasSort() const { return this->sort_ != nullptr;};
      void deleteSort() { this->sort_ = nullptr;};
      inline int64_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0L) };
      inline Fields& setSort(int64_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
      inline Fields& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> fieldName_ {};
      shared_ptr<int64_t> sort_ {};
      shared_ptr<int64_t> type_ {};
    };

    class DefaultReceivers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultReceivers& obj) { 
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(Userid, userid_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultReceivers& obj) { 
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(Userid, userid_);
      };
      DefaultReceivers() = default ;
      DefaultReceivers(const DefaultReceivers &) = default ;
      DefaultReceivers(DefaultReceivers &&) = default ;
      DefaultReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultReceivers() = default ;
      DefaultReceivers& operator=(const DefaultReceivers &) = default ;
      DefaultReceivers& operator=(DefaultReceivers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userName_ == nullptr
        && this->userid_ == nullptr; };
      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline DefaultReceivers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userid Field Functions 
      bool hasUserid() const { return this->userid_ != nullptr;};
      void deleteUserid() { this->userid_ = nullptr;};
      inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
      inline DefaultReceivers& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


    protected:
      shared_ptr<string> userName_ {};
      shared_ptr<string> userid_ {};
    };

    class DefaultReceivedConvs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultReceivedConvs& obj) { 
        DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultReceivedConvs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      DefaultReceivedConvs() = default ;
      DefaultReceivedConvs(const DefaultReceivedConvs &) = default ;
      DefaultReceivedConvs(DefaultReceivedConvs &&) = default ;
      DefaultReceivedConvs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultReceivedConvs() = default ;
      DefaultReceivedConvs& operator=(const DefaultReceivedConvs &) = default ;
      DefaultReceivedConvs& operator=(DefaultReceivedConvs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->title_ == nullptr; };
      // conversationId Field Functions 
      bool hasConversationId() const { return this->conversationId_ != nullptr;};
      void deleteConversationId() { this->conversationId_ = nullptr;};
      inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
      inline DefaultReceivedConvs& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline DefaultReceivedConvs& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> conversationId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->defaultReceivedConvs_ == nullptr
        && this->defaultReceivers_ == nullptr && this->fields_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->userName_ == nullptr && this->userid_ == nullptr; };
    // defaultReceivedConvs Field Functions 
    bool hasDefaultReceivedConvs() const { return this->defaultReceivedConvs_ != nullptr;};
    void deleteDefaultReceivedConvs() { this->defaultReceivedConvs_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs> & getDefaultReceivedConvs() const { DARABONBA_PTR_GET_CONST(defaultReceivedConvs_, vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs>) };
    inline vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs> getDefaultReceivedConvs() { DARABONBA_PTR_GET(defaultReceivedConvs_, vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs>) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivedConvs(const vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs> & defaultReceivedConvs) { DARABONBA_PTR_SET_VALUE(defaultReceivedConvs_, defaultReceivedConvs) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivedConvs(vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs> && defaultReceivedConvs) { DARABONBA_PTR_SET_RVALUE(defaultReceivedConvs_, defaultReceivedConvs) };


    // defaultReceivers Field Functions 
    bool hasDefaultReceivers() const { return this->defaultReceivers_ != nullptr;};
    void deleteDefaultReceivers() { this->defaultReceivers_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBody::DefaultReceivers> & getDefaultReceivers() const { DARABONBA_PTR_GET_CONST(defaultReceivers_, vector<GetReportTemplateByNameResponseBody::DefaultReceivers>) };
    inline vector<GetReportTemplateByNameResponseBody::DefaultReceivers> getDefaultReceivers() { DARABONBA_PTR_GET(defaultReceivers_, vector<GetReportTemplateByNameResponseBody::DefaultReceivers>) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivers(const vector<GetReportTemplateByNameResponseBody::DefaultReceivers> & defaultReceivers) { DARABONBA_PTR_SET_VALUE(defaultReceivers_, defaultReceivers) };
    inline GetReportTemplateByNameResponseBody& setDefaultReceivers(vector<GetReportTemplateByNameResponseBody::DefaultReceivers> && defaultReceivers) { DARABONBA_PTR_SET_RVALUE(defaultReceivers_, defaultReceivers) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetReportTemplateByNameResponseBody::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetReportTemplateByNameResponseBody::Fields>) };
    inline vector<GetReportTemplateByNameResponseBody::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<GetReportTemplateByNameResponseBody::Fields>) };
    inline GetReportTemplateByNameResponseBody& setFields(const vector<GetReportTemplateByNameResponseBody::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetReportTemplateByNameResponseBody& setFields(vector<GetReportTemplateByNameResponseBody::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetReportTemplateByNameResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetReportTemplateByNameResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportTemplateByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetReportTemplateByNameResponseBody& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userid Field Functions 
    bool hasUserid() const { return this->userid_ != nullptr;};
    void deleteUserid() { this->userid_ = nullptr;};
    inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
    inline GetReportTemplateByNameResponseBody& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


  protected:
    shared_ptr<vector<GetReportTemplateByNameResponseBody::DefaultReceivedConvs>> defaultReceivedConvs_ {};
    shared_ptr<vector<GetReportTemplateByNameResponseBody::DefaultReceivers>> defaultReceivers_ {};
    shared_ptr<vector<GetReportTemplateByNameResponseBody::Fields>> fields_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<string> userid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
