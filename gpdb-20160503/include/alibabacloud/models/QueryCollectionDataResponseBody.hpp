// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryCollectionDataResponseBody() = default ;
    QueryCollectionDataResponseBody(const QueryCollectionDataResponseBody &) = default ;
    QueryCollectionDataResponseBody(QueryCollectionDataResponseBody &&) = default ;
    QueryCollectionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBody() = default ;
    QueryCollectionDataResponseBody& operator=(const QueryCollectionDataResponseBody &) = default ;
    QueryCollectionDataResponseBody& operator=(QueryCollectionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Matches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Matches& obj) { 
        DARABONBA_PTR_TO_JSON(match, match_);
      };
      friend void from_json(const Darabonba::Json& j, Matches& obj) { 
        DARABONBA_PTR_FROM_JSON(match, match_);
      };
      Matches() = default ;
      Matches(const Matches &) = default ;
      Matches(Matches &&) = default ;
      Matches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Matches() = default ;
      Matches& operator=(const Matches &) = default ;
      Matches& operator=(Matches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Match : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Match& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Metadata, metadata_);
          DARABONBA_ANY_TO_JSON(MetadataV2, metadataV2_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(SparseValues, sparseValues_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Match& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
          DARABONBA_ANY_FROM_JSON(MetadataV2, metadataV2_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SparseValues, sparseValues_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Match() = default ;
        Match(const Match &) = default ;
        Match(Match &&) = default ;
        Match(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Match() = default ;
        Match& operator=(const Match &) = default ;
        Match& operator=(Match &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          Values() = default ;
          Values(const Values &) = default ;
          Values(Values &&) = default ;
          Values(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Values() = default ;
          Values& operator=(const Values &) = default ;
          Values& operator=(Values &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->value_ == nullptr; };
          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline const vector<double> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<double>) };
          inline vector<double> getValue() { DARABONBA_PTR_GET(value_, vector<double>) };
          inline Values& setValue(const vector<double> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
          inline Values& setValue(vector<double> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<vector<double>> value_ {};
        };

        class SparseValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SparseValues& obj) { 
            DARABONBA_PTR_TO_JSON(Indices, indices_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, SparseValues& obj) { 
            DARABONBA_PTR_FROM_JSON(Indices, indices_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          SparseValues() = default ;
          SparseValues(const SparseValues &) = default ;
          SparseValues(SparseValues &&) = default ;
          SparseValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SparseValues() = default ;
          SparseValues& operator=(const SparseValues &) = default ;
          SparseValues& operator=(SparseValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Values : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Values& obj) { 
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Values& obj) { 
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Values() = default ;
            Values(const Values &) = default ;
            Values(Values &&) = default ;
            Values(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Values() = default ;
            Values& operator=(const Values &) = default ;
            Values& operator=(Values &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->value_ == nullptr; };
            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline const vector<float> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<float>) };
            inline vector<float> getValue() { DARABONBA_PTR_GET(value_, vector<float>) };
            inline Values& setValue(const vector<float> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
            inline Values& setValue(vector<float> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


          protected:
            shared_ptr<vector<float>> value_ {};
          };

          class Indices : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Indices& obj) { 
              DARABONBA_PTR_TO_JSON(Indice, indice_);
            };
            friend void from_json(const Darabonba::Json& j, Indices& obj) { 
              DARABONBA_PTR_FROM_JSON(Indice, indice_);
            };
            Indices() = default ;
            Indices(const Indices &) = default ;
            Indices(Indices &&) = default ;
            Indices(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Indices() = default ;
            Indices& operator=(const Indices &) = default ;
            Indices& operator=(Indices &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->indice_ == nullptr; };
            // indice Field Functions 
            bool hasIndice() const { return this->indice_ != nullptr;};
            void deleteIndice() { this->indice_ = nullptr;};
            inline const vector<int32_t> & getIndice() const { DARABONBA_PTR_GET_CONST(indice_, vector<int32_t>) };
            inline vector<int32_t> getIndice() { DARABONBA_PTR_GET(indice_, vector<int32_t>) };
            inline Indices& setIndice(const vector<int32_t> & indice) { DARABONBA_PTR_SET_VALUE(indice_, indice) };
            inline Indices& setIndice(vector<int32_t> && indice) { DARABONBA_PTR_SET_RVALUE(indice_, indice) };


          protected:
            shared_ptr<vector<int32_t>> indice_ {};
          };

          virtual bool empty() const override { return this->indices_ == nullptr
        && this->values_ == nullptr; };
          // indices Field Functions 
          bool hasIndices() const { return this->indices_ != nullptr;};
          void deleteIndices() { this->indices_ = nullptr;};
          inline const SparseValues::Indices & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, SparseValues::Indices) };
          inline SparseValues::Indices getIndices() { DARABONBA_PTR_GET(indices_, SparseValues::Indices) };
          inline SparseValues& setIndices(const SparseValues::Indices & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
          inline SparseValues& setIndices(SparseValues::Indices && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const SparseValues::Values & getValues() const { DARABONBA_PTR_GET_CONST(values_, SparseValues::Values) };
          inline SparseValues::Values getValues() { DARABONBA_PTR_GET(values_, SparseValues::Values) };
          inline SparseValues& setValues(const SparseValues::Values & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline SparseValues& setValues(SparseValues::Values && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          shared_ptr<SparseValues::Indices> indices_ {};
          shared_ptr<SparseValues::Values> values_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->metadata_ == nullptr && this->metadataV2_ == nullptr && this->score_ == nullptr && this->sparseValues_ == nullptr && this->values_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Match& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
        inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
        inline Match& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
        inline Match& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


        // metadataV2 Field Functions 
        bool hasMetadataV2() const { return this->metadataV2_ != nullptr;};
        void deleteMetadataV2() { this->metadataV2_ = nullptr;};
        inline         const Darabonba::Json & getMetadataV2() const { DARABONBA_GET(metadataV2_) };
        Darabonba::Json & getMetadataV2() { DARABONBA_GET(metadataV2_) };
        inline Match& setMetadataV2(const Darabonba::Json & metadataV2) { DARABONBA_SET_VALUE(metadataV2_, metadataV2) };
        inline Match& setMetadataV2(Darabonba::Json && metadataV2) { DARABONBA_SET_RVALUE(metadataV2_, metadataV2) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline Match& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // sparseValues Field Functions 
        bool hasSparseValues() const { return this->sparseValues_ != nullptr;};
        void deleteSparseValues() { this->sparseValues_ = nullptr;};
        inline const Match::SparseValues & getSparseValues() const { DARABONBA_PTR_GET_CONST(sparseValues_, Match::SparseValues) };
        inline Match::SparseValues getSparseValues() { DARABONBA_PTR_GET(sparseValues_, Match::SparseValues) };
        inline Match& setSparseValues(const Match::SparseValues & sparseValues) { DARABONBA_PTR_SET_VALUE(sparseValues_, sparseValues) };
        inline Match& setSparseValues(Match::SparseValues && sparseValues) { DARABONBA_PTR_SET_RVALUE(sparseValues_, sparseValues) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const Match::Values & getValues() const { DARABONBA_PTR_GET_CONST(values_, Match::Values) };
        inline Match::Values getValues() { DARABONBA_PTR_GET(values_, Match::Values) };
        inline Match& setValues(const Match::Values & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Match& setValues(Match::Values && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The unique ID of the vector data.
        shared_ptr<string> id_ {};
        // Metadata.
        shared_ptr<map<string, string>> metadata_ {};
        Darabonba::Json metadataV2_ {};
        // The similarity score of this data, which is related to the algorithm `(l2/ip/cosine)` specified when creating the index.
        shared_ptr<double> score_ {};
        shared_ptr<Match::SparseValues> sparseValues_ {};
        // List of vector data.
        shared_ptr<Match::Values> values_ {};
      };

      virtual bool empty() const override { return this->match_ == nullptr; };
      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const vector<Matches::Match> & getMatch() const { DARABONBA_PTR_GET_CONST(match_, vector<Matches::Match>) };
      inline vector<Matches::Match> getMatch() { DARABONBA_PTR_GET(match_, vector<Matches::Match>) };
      inline Matches& setMatch(const vector<Matches::Match> & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline Matches& setMatch(vector<Matches::Match> && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    protected:
      shared_ptr<vector<Matches::Match>> match_ {};
    };

    virtual bool empty() const override { return this->matches_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->total_ == nullptr; };
    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const QueryCollectionDataResponseBody::Matches & getMatches() const { DARABONBA_PTR_GET_CONST(matches_, QueryCollectionDataResponseBody::Matches) };
    inline QueryCollectionDataResponseBody::Matches getMatches() { DARABONBA_PTR_GET(matches_, QueryCollectionDataResponseBody::Matches) };
    inline QueryCollectionDataResponseBody& setMatches(const QueryCollectionDataResponseBody::Matches & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline QueryCollectionDataResponseBody& setMatches(QueryCollectionDataResponseBody::Matches && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCollectionDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCollectionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryCollectionDataResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryCollectionDataResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Data list.
    shared_ptr<QueryCollectionDataResponseBody::Matches> matches_ {};
    // Detailed information when the request fails.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Status, with the following values:
    // - **success**: Success.
    // - **fail**: Failure.
    shared_ptr<string> status_ {};
    // Only returned when the Offset is not 0, this value represents the total number of hits for the search criteria.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
