// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLISTPARAMMAPSLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTEREQUESTSERVICESHTTPDUBBOTRANSCODERMOTHEDMAPLISTPARAMMAPSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& obj) { 
      DARABONBA_PTR_TO_JSON(ExtractKey, extractKey_);
      DARABONBA_PTR_TO_JSON(ExtractKeySpec, extractKeySpec_);
      DARABONBA_PTR_TO_JSON(MappingType, mappingType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtractKey, extractKey_);
      DARABONBA_PTR_FROM_JSON(ExtractKeySpec, extractKeySpec_);
      DARABONBA_PTR_FROM_JSON(MappingType, mappingType_);
    };
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList() = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList(const UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList &) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList(UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList &&) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList() = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& operator=(const UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList &) = default ;
    UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& operator=(UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extractKey_ == nullptr
        && return this->extractKeySpec_ == nullptr && return this->mappingType_ == nullptr; };
    // extractKey Field Functions 
    bool hasExtractKey() const { return this->extractKey_ != nullptr;};
    void deleteExtractKey() { this->extractKey_ = nullptr;};
    inline string extractKey() const { DARABONBA_PTR_GET_DEFAULT(extractKey_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& setExtractKey(string extractKey) { DARABONBA_PTR_SET_VALUE(extractKey_, extractKey) };


    // extractKeySpec Field Functions 
    bool hasExtractKeySpec() const { return this->extractKeySpec_ != nullptr;};
    void deleteExtractKeySpec() { this->extractKeySpec_ = nullptr;};
    inline string extractKeySpec() const { DARABONBA_PTR_GET_DEFAULT(extractKeySpec_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& setExtractKeySpec(string extractKeySpec) { DARABONBA_PTR_SET_VALUE(extractKeySpec_, extractKeySpec) };


    // mappingType Field Functions 
    bool hasMappingType() const { return this->mappingType_ != nullptr;};
    void deleteMappingType() { this->mappingType_ = nullptr;};
    inline string mappingType() const { DARABONBA_PTR_GET_DEFAULT(mappingType_, "") };
    inline UpdateGatewayRouteRequestServicesHttpDubboTranscoderMothedMapListParamMapsList& setMappingType(string mappingType) { DARABONBA_PTR_SET_VALUE(mappingType_, mappingType) };


  protected:
    // The key extracted from the input parameter.
    std::shared_ptr<string> extractKey_ = nullptr;
    // The position of the input parameter.
    // 
    // > Valid values:
    // 
    // *   `ALL_QUERY_PARAMETER`: request parameter
    // 
    // *   `ALL_HEADER`: request header
    // 
    // *   `ALL_PATH`: request path
    // 
    // *   `ALL_BODY`: request body
    std::shared_ptr<string> extractKeySpec_ = nullptr;
    // The type of the backend service parameter.
    std::shared_ptr<string> mappingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
