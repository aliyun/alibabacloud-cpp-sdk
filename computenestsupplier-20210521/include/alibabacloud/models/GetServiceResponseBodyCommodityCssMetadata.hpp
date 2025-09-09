// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadataComponentsMappings.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyCommodityCssMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityCssMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
      DARABONBA_PTR_TO_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_TO_JSON(MeteringEntityMappings, meteringEntityMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityCssMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
      DARABONBA_PTR_FROM_JSON(MeteringEntityExtraInfos, meteringEntityExtraInfos_);
      DARABONBA_PTR_FROM_JSON(MeteringEntityMappings, meteringEntityMappings_);
    };
    GetServiceResponseBodyCommodityCssMetadata() = default ;
    GetServiceResponseBodyCommodityCssMetadata(const GetServiceResponseBodyCommodityCssMetadata &) = default ;
    GetServiceResponseBodyCommodityCssMetadata(GetServiceResponseBodyCommodityCssMetadata &&) = default ;
    GetServiceResponseBodyCommodityCssMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodityCssMetadata() = default ;
    GetServiceResponseBodyCommodityCssMetadata& operator=(const GetServiceResponseBodyCommodityCssMetadata &) = default ;
    GetServiceResponseBodyCommodityCssMetadata& operator=(GetServiceResponseBodyCommodityCssMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentsMappings_ != nullptr
        && this->meteringEntityExtraInfos_ != nullptr && this->meteringEntityMappings_ != nullptr; };
    // componentsMappings Field Functions 
    bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
    void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> & componentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> componentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>) };
    inline GetServiceResponseBodyCommodityCssMetadata& setComponentsMappings(const vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
    inline GetServiceResponseBodyCommodityCssMetadata& setComponentsMappings(vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


    // meteringEntityExtraInfos Field Functions 
    bool hasMeteringEntityExtraInfos() const { return this->meteringEntityExtraInfos_ != nullptr;};
    void deleteMeteringEntityExtraInfos() { this->meteringEntityExtraInfos_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos> & meteringEntityExtraInfos() const { DARABONBA_PTR_GET_CONST(meteringEntityExtraInfos_, vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos>) };
    inline vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos> meteringEntityExtraInfos() { DARABONBA_PTR_GET(meteringEntityExtraInfos_, vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos>) };
    inline GetServiceResponseBodyCommodityCssMetadata& setMeteringEntityExtraInfos(const vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos> & meteringEntityExtraInfos) { DARABONBA_PTR_SET_VALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };
    inline GetServiceResponseBodyCommodityCssMetadata& setMeteringEntityExtraInfos(vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos> && meteringEntityExtraInfos) { DARABONBA_PTR_SET_RVALUE(meteringEntityExtraInfos_, meteringEntityExtraInfos) };


    // meteringEntityMappings Field Functions 
    bool hasMeteringEntityMappings() const { return this->meteringEntityMappings_ != nullptr;};
    void deleteMeteringEntityMappings() { this->meteringEntityMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings> & meteringEntityMappings() const { DARABONBA_PTR_GET_CONST(meteringEntityMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings> meteringEntityMappings() { DARABONBA_PTR_GET(meteringEntityMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings>) };
    inline GetServiceResponseBodyCommodityCssMetadata& setMeteringEntityMappings(const vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings> & meteringEntityMappings) { DARABONBA_PTR_SET_VALUE(meteringEntityMappings_, meteringEntityMappings) };
    inline GetServiceResponseBodyCommodityCssMetadata& setMeteringEntityMappings(vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings> && meteringEntityMappings) { DARABONBA_PTR_SET_RVALUE(meteringEntityMappings_, meteringEntityMappings) };


  protected:
    // The mapping information about the billing items.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>> componentsMappings_ = nullptr;
    // Metering item configuration information.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityExtraInfos>> meteringEntityExtraInfos_ = nullptr;
    // The binding relationship between package and measurement dimension.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityCssMetadataMeteringEntityMappings>> meteringEntityMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
