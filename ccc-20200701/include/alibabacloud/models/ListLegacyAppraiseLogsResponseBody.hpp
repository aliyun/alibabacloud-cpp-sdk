// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYAPPRAISELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYAPPRAISELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyAppraiseLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyAppraiseLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyAppraiseLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLegacyAppraiseLogsResponseBody() = default ;
    ListLegacyAppraiseLogsResponseBody(const ListLegacyAppraiseLogsResponseBody &) = default ;
    ListLegacyAppraiseLogsResponseBody(ListLegacyAppraiseLogsResponseBody &&) = default ;
    ListLegacyAppraiseLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyAppraiseLogsResponseBody() = default ;
    ListLegacyAppraiseLogsResponseBody& operator=(const ListLegacyAppraiseLogsResponseBody &) = default ;
    ListLegacyAppraiseLogsResponseBody& operator=(ListLegacyAppraiseLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Acid, acid_);
          DARABONBA_PTR_TO_JSON(ContactType, contactType_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(KeyMarkRelation, keyMarkRelation_);
          DARABONBA_PTR_TO_JSON(Note, note_);
          DARABONBA_PTR_TO_JSON(ParentNote, parentNote_);
          DARABONBA_PTR_TO_JSON(PressKey, pressKey_);
          DARABONBA_PTR_TO_JSON(RamId, ramId_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Acid, acid_);
          DARABONBA_PTR_FROM_JSON(ContactType, contactType_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(KeyMarkRelation, keyMarkRelation_);
          DARABONBA_PTR_FROM_JSON(Note, note_);
          DARABONBA_PTR_FROM_JSON(ParentNote, parentNote_);
          DARABONBA_PTR_FROM_JSON(PressKey, pressKey_);
          DARABONBA_PTR_FROM_JSON(RamId, ramId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acid_ == nullptr
        && this->contactType_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->keyMarkRelation_ == nullptr && this->note_ == nullptr
        && this->parentNote_ == nullptr && this->pressKey_ == nullptr && this->ramId_ == nullptr && this->skillGroupId_ == nullptr && this->statisticDate_ == nullptr
        && this->type_ == nullptr; };
        // acid Field Functions 
        bool hasAcid() const { return this->acid_ != nullptr;};
        void deleteAcid() { this->acid_ = nullptr;};
        inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
        inline List& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


        // contactType Field Functions 
        bool hasContactType() const { return this->contactType_ != nullptr;};
        void deleteContactType() { this->contactType_ = nullptr;};
        inline string getContactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
        inline List& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // keyMarkRelation Field Functions 
        bool hasKeyMarkRelation() const { return this->keyMarkRelation_ != nullptr;};
        void deleteKeyMarkRelation() { this->keyMarkRelation_ = nullptr;};
        inline string getKeyMarkRelation() const { DARABONBA_PTR_GET_DEFAULT(keyMarkRelation_, "") };
        inline List& setKeyMarkRelation(string keyMarkRelation) { DARABONBA_PTR_SET_VALUE(keyMarkRelation_, keyMarkRelation) };


        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline List& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // parentNote Field Functions 
        bool hasParentNote() const { return this->parentNote_ != nullptr;};
        void deleteParentNote() { this->parentNote_ = nullptr;};
        inline string getParentNote() const { DARABONBA_PTR_GET_DEFAULT(parentNote_, "") };
        inline List& setParentNote(string parentNote) { DARABONBA_PTR_SET_VALUE(parentNote_, parentNote) };


        // pressKey Field Functions 
        bool hasPressKey() const { return this->pressKey_ != nullptr;};
        void deletePressKey() { this->pressKey_ = nullptr;};
        inline string getPressKey() const { DARABONBA_PTR_GET_DEFAULT(pressKey_, "") };
        inline List& setPressKey(string pressKey) { DARABONBA_PTR_SET_VALUE(pressKey_, pressKey) };


        // ramId Field Functions 
        bool hasRamId() const { return this->ramId_ != nullptr;};
        void deleteRamId() { this->ramId_ = nullptr;};
        inline string getRamId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
        inline List& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline List& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        // statisticDate Field Functions 
        bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
        void deleteStatisticDate() { this->statisticDate_ = nullptr;};
        inline string getStatisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
        inline List& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline List& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> acid_ {};
        shared_ptr<string> contactType_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> keyMarkRelation_ {};
        shared_ptr<string> note_ {};
        shared_ptr<string> parentNote_ {};
        shared_ptr<string> pressKey_ {};
        shared_ptr<string> ramId_ {};
        shared_ptr<string> skillGroupId_ {};
        shared_ptr<string> statisticDate_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLegacyAppraiseLogsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLegacyAppraiseLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLegacyAppraiseLogsResponseBody::Data) };
    inline ListLegacyAppraiseLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLegacyAppraiseLogsResponseBody::Data) };
    inline ListLegacyAppraiseLogsResponseBody& setData(const ListLegacyAppraiseLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLegacyAppraiseLogsResponseBody& setData(ListLegacyAppraiseLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLegacyAppraiseLogsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLegacyAppraiseLogsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLegacyAppraiseLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLegacyAppraiseLogsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListLegacyAppraiseLogsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
