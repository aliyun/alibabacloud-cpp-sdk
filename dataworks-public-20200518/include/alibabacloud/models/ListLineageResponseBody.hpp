// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLINEAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Entity.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListLineageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLineageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLineageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLineageResponseBody() = default ;
    ListLineageResponseBody(const ListLineageResponseBody &) = default ;
    ListLineageResponseBody(ListLineageResponseBody &&) = default ;
    ListLineageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLineageResponseBody() = default ;
    ListLineageResponseBody& operator=(const ListLineageResponseBody &) = default ;
    ListLineageResponseBody& operator=(ListLineageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class DataEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Entity, entity_);
          DARABONBA_PTR_TO_JSON(RelationList, relationList_);
        };
        friend void from_json(const Darabonba::Json& j, DataEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Entity, entity_);
          DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
        };
        DataEntityList() = default ;
        DataEntityList(const DataEntityList &) = default ;
        DataEntityList(DataEntityList &&) = default ;
        DataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEntityList() = default ;
        DataEntityList& operator=(const DataEntityList &) = default ;
        DataEntityList& operator=(DataEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RelationList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RelationList& obj) { 
            DARABONBA_PTR_TO_JSON(Channel, channel_);
            DARABONBA_PTR_TO_JSON(Datasource, datasource_);
            DARABONBA_PTR_TO_JSON(Guid, guid_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, RelationList& obj) { 
            DARABONBA_PTR_FROM_JSON(Channel, channel_);
            DARABONBA_PTR_FROM_JSON(Datasource, datasource_);
            DARABONBA_PTR_FROM_JSON(Guid, guid_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          RelationList() = default ;
          RelationList(const RelationList &) = default ;
          RelationList(RelationList &&) = default ;
          RelationList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RelationList() = default ;
          RelationList& operator=(const RelationList &) = default ;
          RelationList& operator=(RelationList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->channel_ == nullptr
        && this->datasource_ == nullptr && this->guid_ == nullptr && this->type_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
          inline RelationList& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


          // datasource Field Functions 
          bool hasDatasource() const { return this->datasource_ != nullptr;};
          void deleteDatasource() { this->datasource_ = nullptr;};
          inline string getDatasource() const { DARABONBA_PTR_GET_DEFAULT(datasource_, "") };
          inline RelationList& setDatasource(string datasource) { DARABONBA_PTR_SET_VALUE(datasource_, datasource) };


          // guid Field Functions 
          bool hasGuid() const { return this->guid_ != nullptr;};
          void deleteGuid() { this->guid_ = nullptr;};
          inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
          inline RelationList& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RelationList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The data channel. Valid values:
          // 
          // *   **FIRST_PARTY: DataWorks platform**
          // *   **THIRD_PARTY: user registration**
          shared_ptr<string> channel_ {};
          // The data source.
          shared_ptr<string> datasource_ {};
          // The unique relationship ID.
          shared_ptr<string> guid_ {};
          // The task type, which is used to describe the relationship between entities, such as SQL-based calculation, mapping based on report fields, or API operation definition.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->entity_ == nullptr && this->relationList_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline DataEntityList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // entity Field Functions 
        bool hasEntity() const { return this->entity_ != nullptr;};
        void deleteEntity() { this->entity_ = nullptr;};
        inline const Entity & getEntity() const { DARABONBA_PTR_GET_CONST(entity_, Entity) };
        inline Entity getEntity() { DARABONBA_PTR_GET(entity_, Entity) };
        inline DataEntityList& setEntity(const Entity & entity) { DARABONBA_PTR_SET_VALUE(entity_, entity) };
        inline DataEntityList& setEntity(Entity && entity) { DARABONBA_PTR_SET_RVALUE(entity_, entity) };


        // relationList Field Functions 
        bool hasRelationList() const { return this->relationList_ != nullptr;};
        void deleteRelationList() { this->relationList_ = nullptr;};
        inline const vector<DataEntityList::RelationList> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<DataEntityList::RelationList>) };
        inline vector<DataEntityList::RelationList> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<DataEntityList::RelationList>) };
        inline DataEntityList& setRelationList(const vector<DataEntityList::RelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
        inline DataEntityList& setRelationList(vector<DataEntityList::RelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


      protected:
        // The time when the lineage was generated.
        shared_ptr<int64_t> createTimestamp_ {};
        // The information about the entity.
        shared_ptr<Entity> entity_ {};
        // The array of the relationship structure.
        shared_ptr<vector<DataEntityList::RelationList>> relationList_ {};
      };

      virtual bool empty() const override { return this->dataEntityList_ == nullptr
        && this->nextToken_ == nullptr; };
      // dataEntityList Field Functions 
      bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
      void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
      inline const vector<Data::DataEntityList> & getDataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Data::DataEntityList>) };
      inline vector<Data::DataEntityList> getDataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Data::DataEntityList>) };
      inline Data& setDataEntityList(const vector<Data::DataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
      inline Data& setDataEntityList(vector<Data::DataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The array of the entity structure.
      shared_ptr<vector<Data::DataEntityList>> dataEntityList_ {};
      // A pagination token. It can be used in the next request to retrieve a new page of results.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLineageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLineageResponseBody::Data) };
    inline ListLineageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLineageResponseBody::Data) };
    inline ListLineageResponseBody& setData(const ListLineageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLineageResponseBody& setData(ListLineageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLineageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLineageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListLineageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLineageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLineageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The structure returned.
    shared_ptr<ListLineageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
