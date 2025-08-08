// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeSQLLineageResponseBodyLineageResultLineages.hpp>
#include <alibabacloud/models/AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnalyzeSQLLineageResponseBodyLineageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageResponseBodyLineageResult& obj) { 
      DARABONBA_PTR_TO_JSON(Lineages, lineages_);
      DARABONBA_PTR_TO_JSON(ObjectMetadata, objectMetadata_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageResponseBodyLineageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Lineages, lineages_);
      DARABONBA_PTR_FROM_JSON(ObjectMetadata, objectMetadata_);
    };
    AnalyzeSQLLineageResponseBodyLineageResult() = default ;
    AnalyzeSQLLineageResponseBodyLineageResult(const AnalyzeSQLLineageResponseBodyLineageResult &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResult(AnalyzeSQLLineageResponseBodyLineageResult &&) = default ;
    AnalyzeSQLLineageResponseBodyLineageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageResponseBodyLineageResult() = default ;
    AnalyzeSQLLineageResponseBodyLineageResult& operator=(const AnalyzeSQLLineageResponseBodyLineageResult &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResult& operator=(AnalyzeSQLLineageResponseBodyLineageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lineages_ != nullptr
        && this->objectMetadata_ != nullptr; };
    // lineages Field Functions 
    bool hasLineages() const { return this->lineages_ != nullptr;};
    void deleteLineages() { this->lineages_ = nullptr;};
    inline const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages> & lineages() const { DARABONBA_PTR_GET_CONST(lineages_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages>) };
    inline vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages> lineages() { DARABONBA_PTR_GET(lineages_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages>) };
    inline AnalyzeSQLLineageResponseBodyLineageResult& setLineages(const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages> & lineages) { DARABONBA_PTR_SET_VALUE(lineages_, lineages) };
    inline AnalyzeSQLLineageResponseBodyLineageResult& setLineages(vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages> && lineages) { DARABONBA_PTR_SET_RVALUE(lineages_, lineages) };


    // objectMetadata Field Functions 
    bool hasObjectMetadata() const { return this->objectMetadata_ != nullptr;};
    void deleteObjectMetadata() { this->objectMetadata_ = nullptr;};
    inline const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata> & objectMetadata() const { DARABONBA_PTR_GET_CONST(objectMetadata_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata>) };
    inline vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata> objectMetadata() { DARABONBA_PTR_GET(objectMetadata_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata>) };
    inline AnalyzeSQLLineageResponseBodyLineageResult& setObjectMetadata(const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata> & objectMetadata) { DARABONBA_PTR_SET_VALUE(objectMetadata_, objectMetadata) };
    inline AnalyzeSQLLineageResponseBodyLineageResult& setObjectMetadata(vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata> && objectMetadata) { DARABONBA_PTR_SET_RVALUE(objectMetadata_, objectMetadata) };


  protected:
    // The details about the lineage.
    std::shared_ptr<vector<Models::AnalyzeSQLLineageResponseBodyLineageResultLineages>> lineages_ = nullptr;
    // The table and field metadata information.
    std::shared_ptr<vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata>> objectMetadata_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
