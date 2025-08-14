// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyCostCenterResponseBodyCostCenterOperateDto.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ModifyCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterOperateDto, costCenterOperateDto_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterOperateDto, costCenterOperateDto_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCostCenterResponseBody() = default ;
    ModifyCostCenterResponseBody(const ModifyCostCenterResponseBody &) = default ;
    ModifyCostCenterResponseBody(ModifyCostCenterResponseBody &&) = default ;
    ModifyCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterResponseBody() = default ;
    ModifyCostCenterResponseBody& operator=(const ModifyCostCenterResponseBody &) = default ;
    ModifyCostCenterResponseBody& operator=(ModifyCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterOperateDto_ != nullptr
        && this->metadata_ != nullptr && this->requestId_ != nullptr; };
    // costCenterOperateDto Field Functions 
    bool hasCostCenterOperateDto() const { return this->costCenterOperateDto_ != nullptr;};
    void deleteCostCenterOperateDto() { this->costCenterOperateDto_ = nullptr;};
    inline const vector<ModifyCostCenterResponseBodyCostCenterOperateDto> & costCenterOperateDto() const { DARABONBA_PTR_GET_CONST(costCenterOperateDto_, vector<ModifyCostCenterResponseBodyCostCenterOperateDto>) };
    inline vector<ModifyCostCenterResponseBodyCostCenterOperateDto> costCenterOperateDto() { DARABONBA_PTR_GET(costCenterOperateDto_, vector<ModifyCostCenterResponseBodyCostCenterOperateDto>) };
    inline ModifyCostCenterResponseBody& setCostCenterOperateDto(const vector<ModifyCostCenterResponseBodyCostCenterOperateDto> & costCenterOperateDto) { DARABONBA_PTR_SET_VALUE(costCenterOperateDto_, costCenterOperateDto) };
    inline ModifyCostCenterResponseBody& setCostCenterOperateDto(vector<ModifyCostCenterResponseBodyCostCenterOperateDto> && costCenterOperateDto) { DARABONBA_PTR_SET_RVALUE(costCenterOperateDto_, costCenterOperateDto) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline ModifyCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ModifyCostCenterResponseBody& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ModifyCostCenterResponseBodyCostCenterOperateDto>> costCenterOperateDto_ = nullptr;
    Darabonba::Json metadata_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
