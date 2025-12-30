// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filters, filters_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(rearrangement, rearrangement_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filters, filters_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(rearrangement, rearrangement_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
    };
    RecallDocumentRequest() = default ;
    RecallDocumentRequest(const RecallDocumentRequest &) = default ;
    RecallDocumentRequest(RecallDocumentRequest &&) = default ;
    RecallDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentRequest() = default ;
    RecallDocumentRequest& operator=(const RecallDocumentRequest &) = default ;
    RecallDocumentRequest& operator=(RecallDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(and, and_);
        DARABONBA_PTR_TO_JSON(chunkType, chunkType_);
        DARABONBA_PTR_TO_JSON(docIdList, docIdList_);
        DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
        DARABONBA_PTR_TO_JSON(or, or_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(and, and_);
        DARABONBA_PTR_FROM_JSON(chunkType, chunkType_);
        DARABONBA_PTR_FROM_JSON(docIdList, docIdList_);
        DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
        DARABONBA_PTR_FROM_JSON(or, or_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Or : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Or& obj) { 
          DARABONBA_PTR_TO_JSON(boost, boost_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Or& obj) { 
          DARABONBA_PTR_FROM_JSON(boost, boost_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Or() = default ;
        Or(const Or &) = default ;
        Or(Or &&) = default ;
        Or(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Or() = default ;
        Or& operator=(const Or &) = default ;
        Or& operator=(Or &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // boost Field Functions 
        bool hasBoost() const { return this->boost_ != nullptr;};
        void deleteBoost() { this->boost_ = nullptr;};
        inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
        inline Or& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Or& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Or& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Or& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<float> boost_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> value_ {};
      };

      class And : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const And& obj) { 
          DARABONBA_PTR_TO_JSON(boost, boost_);
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, And& obj) { 
          DARABONBA_PTR_FROM_JSON(boost, boost_);
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        And() = default ;
        And(const And &) = default ;
        And(And &&) = default ;
        And(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~And() = default ;
        And& operator=(const And &) = default ;
        And& operator=(And &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->boost_ == nullptr
        && this->key_ == nullptr && this->operator_ == nullptr && this->value_ == nullptr; };
        // boost Field Functions 
        bool hasBoost() const { return this->boost_ != nullptr;};
        void deleteBoost() { this->boost_ = nullptr;};
        inline float getBoost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
        inline And& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline And& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline And& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline And& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<float> boost_ {};
        shared_ptr<string> key_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->and_ == nullptr
        && this->chunkType_ == nullptr && this->docIdList_ == nullptr && this->libraryId_ == nullptr && this->or_ == nullptr && this->status_ == nullptr; };
      // and Field Functions 
      bool hasAnd() const { return this->and_ != nullptr;};
      void deleteAnd() { this->and_ = nullptr;};
      inline const vector<Filters::And> & getAnd() const { DARABONBA_PTR_GET_CONST(and_, vector<Filters::And>) };
      inline vector<Filters::And> getAnd() { DARABONBA_PTR_GET(and_, vector<Filters::And>) };
      inline Filters& setAnd(const vector<Filters::And> & _and) { DARABONBA_PTR_SET_VALUE(and_, _and) };
      inline Filters& setAnd(vector<Filters::And> && _and) { DARABONBA_PTR_SET_RVALUE(and_, _and) };


      // chunkType Field Functions 
      bool hasChunkType() const { return this->chunkType_ != nullptr;};
      void deleteChunkType() { this->chunkType_ = nullptr;};
      inline string getChunkType() const { DARABONBA_PTR_GET_DEFAULT(chunkType_, "") };
      inline Filters& setChunkType(string chunkType) { DARABONBA_PTR_SET_VALUE(chunkType_, chunkType) };


      // docIdList Field Functions 
      bool hasDocIdList() const { return this->docIdList_ != nullptr;};
      void deleteDocIdList() { this->docIdList_ = nullptr;};
      inline const vector<string> & getDocIdList() const { DARABONBA_PTR_GET_CONST(docIdList_, vector<string>) };
      inline vector<string> getDocIdList() { DARABONBA_PTR_GET(docIdList_, vector<string>) };
      inline Filters& setDocIdList(const vector<string> & docIdList) { DARABONBA_PTR_SET_VALUE(docIdList_, docIdList) };
      inline Filters& setDocIdList(vector<string> && docIdList) { DARABONBA_PTR_SET_RVALUE(docIdList_, docIdList) };


      // libraryId Field Functions 
      bool hasLibraryId() const { return this->libraryId_ != nullptr;};
      void deleteLibraryId() { this->libraryId_ = nullptr;};
      inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
      inline Filters& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


      // or Field Functions 
      bool hasOr() const { return this->or_ != nullptr;};
      void deleteOr() { this->or_ = nullptr;};
      inline const vector<Filters::Or> & getOr() const { DARABONBA_PTR_GET_CONST(or_, vector<Filters::Or>) };
      inline vector<Filters::Or> getOr() { DARABONBA_PTR_GET(or_, vector<Filters::Or>) };
      inline Filters& setOr(const vector<Filters::Or> & _or) { DARABONBA_PTR_SET_VALUE(or_, _or) };
      inline Filters& setOr(vector<Filters::Or> && _or) { DARABONBA_PTR_SET_RVALUE(or_, _or) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
      inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
      inline Filters& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline Filters& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    protected:
      shared_ptr<vector<Filters::And>> and_ {};
      shared_ptr<string> chunkType_ {};
      shared_ptr<vector<string>> docIdList_ {};
      // This parameter is required.
      shared_ptr<string> libraryId_ {};
      shared_ptr<vector<Filters::Or>> or_ {};
      shared_ptr<vector<string>> status_ {};
    };

    virtual bool empty() const override { return this->filters_ == nullptr
        && this->query_ == nullptr && this->rearrangement_ == nullptr && this->topK_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<RecallDocumentRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<RecallDocumentRequest::Filters>) };
    inline vector<RecallDocumentRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<RecallDocumentRequest::Filters>) };
    inline RecallDocumentRequest& setFilters(const vector<RecallDocumentRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline RecallDocumentRequest& setFilters(vector<RecallDocumentRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RecallDocumentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // rearrangement Field Functions 
    bool hasRearrangement() const { return this->rearrangement_ != nullptr;};
    void deleteRearrangement() { this->rearrangement_ = nullptr;};
    inline bool getRearrangement() const { DARABONBA_PTR_GET_DEFAULT(rearrangement_, false) };
    inline RecallDocumentRequest& setRearrangement(bool rearrangement) { DARABONBA_PTR_SET_VALUE(rearrangement_, rearrangement) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RecallDocumentRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    shared_ptr<vector<RecallDocumentRequest::Filters>> filters_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<bool> rearrangement_ {};
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
