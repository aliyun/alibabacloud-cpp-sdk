// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataDomainsResponseBody() = default ;
    ListDataDomainsResponseBody(const ListDataDomainsResponseBody &) = default ;
    ListDataDomainsResponseBody(ListDataDomainsResponseBody &&) = default ;
    ListDataDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDomainsResponseBody() = default ;
    ListDataDomainsResponseBody& operator=(const ListDataDomainsResponseBody &) = default ;
    ListDataDomainsResponseBody& operator=(ListDataDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataDomainList, dataDomainList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataDomainList, dataDomainList_);
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
      class DataDomainList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDomainList& obj) { 
          DARABONBA_PTR_TO_JSON(Abbreviation, abbreviation_);
          DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        };
        friend void from_json(const Darabonba::Json& j, DataDomainList& obj) { 
          DARABONBA_PTR_FROM_JSON(Abbreviation, abbreviation_);
          DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        };
        DataDomainList() = default ;
        DataDomainList(const DataDomainList &) = default ;
        DataDomainList(DataDomainList &&) = default ;
        DataDomainList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDomainList() = default ;
        DataDomainList& operator=(const DataDomainList &) = default ;
        DataDomainList& operator=(DataDomainList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abbreviation_ == nullptr
        && this->bizUnitId_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->name_ == nullptr && this->ownerName_ == nullptr
        && this->ownerUserId_ == nullptr && this->parentId_ == nullptr; };
        // abbreviation Field Functions 
        bool hasAbbreviation() const { return this->abbreviation_ != nullptr;};
        void deleteAbbreviation() { this->abbreviation_ = nullptr;};
        inline string getAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(abbreviation_, "") };
        inline DataDomainList& setAbbreviation(string abbreviation) { DARABONBA_PTR_SET_VALUE(abbreviation_, abbreviation) };


        // bizUnitId Field Functions 
        bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
        void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
        inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
        inline DataDomainList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataDomainList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline DataDomainList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline DataDomainList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline DataDomainList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataDomainList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline DataDomainList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline DataDomainList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataDomainList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline DataDomainList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline DataDomainList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline DataDomainList& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      protected:
        shared_ptr<string> abbreviation_ {};
        shared_ptr<int64_t> bizUnitId_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> lastModifier_ {};
        shared_ptr<string> lastModifierName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> ownerName_ {};
        shared_ptr<string> ownerUserId_ {};
        shared_ptr<int64_t> parentId_ {};
      };

      virtual bool empty() const override { return this->dataDomainList_ == nullptr; };
      // dataDomainList Field Functions 
      bool hasDataDomainList() const { return this->dataDomainList_ != nullptr;};
      void deleteDataDomainList() { this->dataDomainList_ = nullptr;};
      inline const vector<Data::DataDomainList> & getDataDomainList() const { DARABONBA_PTR_GET_CONST(dataDomainList_, vector<Data::DataDomainList>) };
      inline vector<Data::DataDomainList> getDataDomainList() { DARABONBA_PTR_GET(dataDomainList_, vector<Data::DataDomainList>) };
      inline Data& setDataDomainList(const vector<Data::DataDomainList> & dataDomainList) { DARABONBA_PTR_SET_VALUE(dataDomainList_, dataDomainList) };
      inline Data& setDataDomainList(vector<Data::DataDomainList> && dataDomainList) { DARABONBA_PTR_SET_RVALUE(dataDomainList_, dataDomainList) };


    protected:
      shared_ptr<vector<Data::DataDomainList>> dataDomainList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataDomainsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataDomainsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataDomainsResponseBody::Data) };
    inline ListDataDomainsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataDomainsResponseBody::Data) };
    inline ListDataDomainsResponseBody& setData(const ListDataDomainsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataDomainsResponseBody& setData(ListDataDomainsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataDomainsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataDomainsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataDomainsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListDataDomainsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
