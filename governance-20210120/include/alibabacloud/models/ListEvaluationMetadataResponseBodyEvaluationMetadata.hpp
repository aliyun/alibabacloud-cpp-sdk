// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadata(const ListEvaluationMetadataResponseBodyEvaluationMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadata(ListEvaluationMetadataResponseBodyEvaluationMetadata &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadata& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadata& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && return this->type_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata> & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata>) };
    inline vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata> metadata() { DARABONBA_PTR_GET(metadata_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata>) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadata& setMetadata(const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadata& setMetadata(vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadata& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The metadata objects of a specific metadata type.
    std::shared_ptr<vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadata>> metadata_ = nullptr;
    // The type of the metadata. Valid values:
    // 
    // *   Metric: the check item
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
