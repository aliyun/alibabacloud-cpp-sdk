// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListExchangesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExchangesResponseBody() = default ;
    ListExchangesResponseBody(const ListExchangesResponseBody &) = default ;
    ListExchangesResponseBody(ListExchangesResponseBody &&) = default ;
    ListExchangesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangesResponseBody() = default ;
    ListExchangesResponseBody& operator=(const ListExchangesResponseBody &) = default ;
    ListExchangesResponseBody& operator=(ListExchangesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Exchanges, exchanges_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Exchanges, exchanges_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
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
      class Exchanges : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Exchanges& obj) { 
          DARABONBA_ANY_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExchangeType, exchangeType_);
          DARABONBA_PTR_TO_JSON(Internal, internal_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(VHostName, VHostName_);
        };
        friend void from_json(const Darabonba::Json& j, Exchanges& obj) { 
          DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExchangeType, exchangeType_);
          DARABONBA_PTR_FROM_JSON(Internal, internal_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(VHostName, VHostName_);
        };
        Exchanges() = default ;
        Exchanges(const Exchanges &) = default ;
        Exchanges(Exchanges &&) = default ;
        Exchanges(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Exchanges() = default ;
        Exchanges& operator=(const Exchanges &) = default ;
        Exchanges& operator=(Exchanges &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->autoDeleteState_ == nullptr && this->createTime_ == nullptr && this->exchangeType_ == nullptr && this->internal_ == nullptr && this->name_ == nullptr
        && this->VHostName_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline         const Darabonba::Json & getAttributes() const { DARABONBA_GET(attributes_) };
        Darabonba::Json & getAttributes() { DARABONBA_GET(attributes_) };
        inline Exchanges& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
        inline Exchanges& setAttributes(Darabonba::Json && attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


        // autoDeleteState Field Functions 
        bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
        void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
        inline bool getAutoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
        inline Exchanges& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Exchanges& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // exchangeType Field Functions 
        bool hasExchangeType() const { return this->exchangeType_ != nullptr;};
        void deleteExchangeType() { this->exchangeType_ = nullptr;};
        inline string getExchangeType() const { DARABONBA_PTR_GET_DEFAULT(exchangeType_, "") };
        inline Exchanges& setExchangeType(string exchangeType) { DARABONBA_PTR_SET_VALUE(exchangeType_, exchangeType) };


        // internal Field Functions 
        bool hasInternal() const { return this->internal_ != nullptr;};
        void deleteInternal() { this->internal_ = nullptr;};
        inline bool getInternal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
        inline Exchanges& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Exchanges& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // VHostName Field Functions 
        bool hasVHostName() const { return this->VHostName_ != nullptr;};
        void deleteVHostName() { this->VHostName_ = nullptr;};
        inline string getVHostName() const { DARABONBA_PTR_GET_DEFAULT(VHostName_, "") };
        inline Exchanges& setVHostName(string VHostName) { DARABONBA_PTR_SET_VALUE(VHostName_, VHostName) };


      protected:
        // The attributes. This parameter is unavailable in the current version.
        Darabonba::Json attributes_ {};
        // Indicates whether the exchange was automatically deleted.
        shared_ptr<bool> autoDeleteState_ {};
        // The timestamp that indicates when the exchange was created. Unit: milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The exchange type.
        shared_ptr<string> exchangeType_ {};
        shared_ptr<bool> internal_ {};
        // The exchange name.
        shared_ptr<string> name_ {};
        // The vhost name.
        shared_ptr<string> VHostName_ {};
      };

      virtual bool empty() const override { return this->exchanges_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // exchanges Field Functions 
      bool hasExchanges() const { return this->exchanges_ != nullptr;};
      void deleteExchanges() { this->exchanges_ = nullptr;};
      inline const vector<Data::Exchanges> & getExchanges() const { DARABONBA_PTR_GET_CONST(exchanges_, vector<Data::Exchanges>) };
      inline vector<Data::Exchanges> getExchanges() { DARABONBA_PTR_GET(exchanges_, vector<Data::Exchanges>) };
      inline Data& setExchanges(const vector<Data::Exchanges> & exchanges) { DARABONBA_PTR_SET_VALUE(exchanges_, exchanges) };
      inline Data& setExchanges(vector<Data::Exchanges> && exchanges) { DARABONBA_PTR_SET_RVALUE(exchanges_, exchanges) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The exchanges.
      shared_ptr<vector<Data::Exchanges>> exchanges_ {};
      // The maximum number of entries returned.
      shared_ptr<int32_t> maxResults_ {};
      // The token that marks the end of the current returned page.``
      // 
      // *   If the value of this parameter is empty, the next query is not required and the token used to start the next query is unavailable.``
      // *   If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.``
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListExchangesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListExchangesResponseBody::Data) };
    inline ListExchangesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListExchangesResponseBody::Data) };
    inline ListExchangesResponseBody& setData(const ListExchangesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListExchangesResponseBody& setData(ListExchangesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExchangesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListExchangesResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
