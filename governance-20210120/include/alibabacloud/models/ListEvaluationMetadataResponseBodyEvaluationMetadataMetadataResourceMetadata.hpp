// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATARESOURCEMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATARESOURCEMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ResourcePropertyMetadata, resourcePropertyMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourcePropertyMetadata, resourcePropertyMetadata_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourcePropertyMetadata_ == nullptr; };
    // resourcePropertyMetadata Field Functions 
    bool hasResourcePropertyMetadata() const { return this->resourcePropertyMetadata_ != nullptr;};
    void deleteResourcePropertyMetadata() { this->resourcePropertyMetadata_ = nullptr;};
    inline const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata> & resourcePropertyMetadata() const { DARABONBA_PTR_GET_CONST(resourcePropertyMetadata_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata>) };
    inline vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata> resourcePropertyMetadata() { DARABONBA_PTR_GET(resourcePropertyMetadata_, vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata>) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& setResourcePropertyMetadata(const vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata> & resourcePropertyMetadata) { DARABONBA_PTR_SET_VALUE(resourcePropertyMetadata_, resourcePropertyMetadata) };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadata& setResourcePropertyMetadata(vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata> && resourcePropertyMetadata) { DARABONBA_PTR_SET_RVALUE(resourcePropertyMetadata_, resourcePropertyMetadata) };


  protected:
    // The metadata of the resource properties.
    std::shared_ptr<vector<Models::ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata>> resourcePropertyMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
