// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESENTITYMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESENTITYMAPPINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesResponseBodyDetectionRulesEntityMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesResponseBodyDetectionRulesEntityMappings& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationFieldMappings, normalizationFieldMappings_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesResponseBodyDetectionRulesEntityMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationFieldMappings, normalizationFieldMappings_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
    };
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings() = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings(const ListDetectionRulesResponseBodyDetectionRulesEntityMappings &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings(ListDetectionRulesResponseBodyDetectionRulesEntityMappings &&) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesResponseBodyDetectionRulesEntityMappings() = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings& operator=(const ListDetectionRulesResponseBodyDetectionRulesEntityMappings &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappings& operator=(ListDetectionRulesResponseBodyDetectionRulesEntityMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationFieldMappings_ == nullptr
        && return this->normalizationSchemaId_ == nullptr; };
    // normalizationFieldMappings Field Functions 
    bool hasNormalizationFieldMappings() const { return this->normalizationFieldMappings_ != nullptr;};
    void deleteNormalizationFieldMappings() { this->normalizationFieldMappings_ = nullptr;};
    inline const vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings> & normalizationFieldMappings() const { DARABONBA_PTR_GET_CONST(normalizationFieldMappings_, vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings>) };
    inline vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings> normalizationFieldMappings() { DARABONBA_PTR_GET(normalizationFieldMappings_, vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings>) };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappings& setNormalizationFieldMappings(const vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings> & normalizationFieldMappings) { DARABONBA_PTR_SET_VALUE(normalizationFieldMappings_, normalizationFieldMappings) };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappings& setNormalizationFieldMappings(vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings> && normalizationFieldMappings) { DARABONBA_PTR_SET_RVALUE(normalizationFieldMappings_, normalizationFieldMappings) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappings& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


  protected:
    std::shared_ptr<vector<Models::ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings>> normalizationFieldMappings_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
