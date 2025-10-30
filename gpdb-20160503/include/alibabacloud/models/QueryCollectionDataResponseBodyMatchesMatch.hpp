// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCH_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODYMATCHESMATCH_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatchesMatchSparseValues.hpp>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatchesMatchValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBodyMatchesMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBodyMatchesMatch& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_ANY_TO_JSON(MetadataV2, metadataV2_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(SparseValues, sparseValues_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBodyMatchesMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_ANY_FROM_JSON(MetadataV2, metadataV2_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(SparseValues, sparseValues_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    QueryCollectionDataResponseBodyMatchesMatch() = default ;
    QueryCollectionDataResponseBodyMatchesMatch(const QueryCollectionDataResponseBodyMatchesMatch &) = default ;
    QueryCollectionDataResponseBodyMatchesMatch(QueryCollectionDataResponseBodyMatchesMatch &&) = default ;
    QueryCollectionDataResponseBodyMatchesMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBodyMatchesMatch() = default ;
    QueryCollectionDataResponseBodyMatchesMatch& operator=(const QueryCollectionDataResponseBodyMatchesMatch &) = default ;
    QueryCollectionDataResponseBodyMatchesMatch& operator=(QueryCollectionDataResponseBodyMatchesMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->metadata_ == nullptr && return this->metadataV2_ == nullptr && return this->score_ == nullptr && return this->sparseValues_ == nullptr && return this->values_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryCollectionDataResponseBodyMatchesMatch& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> metadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // metadataV2 Field Functions 
    bool hasMetadataV2() const { return this->metadataV2_ != nullptr;};
    void deleteMetadataV2() { this->metadataV2_ = nullptr;};
    inline     const Darabonba::Json & metadataV2() const { DARABONBA_GET(metadataV2_) };
    Darabonba::Json & metadataV2() { DARABONBA_GET(metadataV2_) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setMetadataV2(const Darabonba::Json & metadataV2) { DARABONBA_SET_VALUE(metadataV2_, metadataV2) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setMetadataV2(Darabonba::Json & metadataV2) { DARABONBA_SET_RVALUE(metadataV2_, metadataV2) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // sparseValues Field Functions 
    bool hasSparseValues() const { return this->sparseValues_ != nullptr;};
    void deleteSparseValues() { this->sparseValues_ = nullptr;};
    inline const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues & sparseValues() const { DARABONBA_PTR_GET_CONST(sparseValues_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues) };
    inline Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues sparseValues() { DARABONBA_PTR_GET(sparseValues_, Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setSparseValues(const Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues & sparseValues) { DARABONBA_PTR_SET_VALUE(sparseValues_, sparseValues) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setSparseValues(Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues && sparseValues) { DARABONBA_PTR_SET_RVALUE(sparseValues_, sparseValues) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const Models::QueryCollectionDataResponseBodyMatchesMatchValues & values() const { DARABONBA_PTR_GET_CONST(values_, Models::QueryCollectionDataResponseBodyMatchesMatchValues) };
    inline Models::QueryCollectionDataResponseBodyMatchesMatchValues values() { DARABONBA_PTR_GET(values_, Models::QueryCollectionDataResponseBodyMatchesMatchValues) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setValues(const Models::QueryCollectionDataResponseBodyMatchesMatchValues & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline QueryCollectionDataResponseBodyMatchesMatch& setValues(Models::QueryCollectionDataResponseBodyMatchesMatchValues && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The unique ID of the vector data.
    std::shared_ptr<string> id_ = nullptr;
    // Metadata.
    std::shared_ptr<map<string, string>> metadata_ = nullptr;
    Darabonba::Json metadataV2_ = nullptr;
    // The similarity score of this data, which is related to the algorithm `(l2/ip/cosine)` specified when creating the index.
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<Models::QueryCollectionDataResponseBodyMatchesMatchSparseValues> sparseValues_ = nullptr;
    // List of vector data.
    std::shared_ptr<Models::QueryCollectionDataResponseBodyMatchesMatchValues> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
