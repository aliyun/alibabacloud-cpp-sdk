// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITYCSSMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadataComponentsMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommodityCssMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodityCssMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentsMappings, componentsMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodityCssMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentsMappings, componentsMappings_);
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
    virtual bool empty() const override { this->componentsMappings_ != nullptr; };
    // componentsMappings Field Functions 
    bool hasComponentsMappings() const { return this->componentsMappings_ != nullptr;};
    void deleteComponentsMappings() { this->componentsMappings_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> & componentsMappings() const { DARABONBA_PTR_GET_CONST(componentsMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>) };
    inline vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> componentsMappings() { DARABONBA_PTR_GET(componentsMappings_, vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>) };
    inline GetServiceResponseBodyCommodityCssMetadata& setComponentsMappings(const vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> & componentsMappings) { DARABONBA_PTR_SET_VALUE(componentsMappings_, componentsMappings) };
    inline GetServiceResponseBodyCommodityCssMetadata& setComponentsMappings(vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings> && componentsMappings) { DARABONBA_PTR_SET_RVALUE(componentsMappings_, componentsMappings) };


  protected:
    // The mapping information about the billing items.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityCssMetadataComponentsMappings>> componentsMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
