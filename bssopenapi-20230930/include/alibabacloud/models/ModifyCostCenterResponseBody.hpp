// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CostCenterOperateDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterOperateDto& obj) { 
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterOperateDto& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      };
      CostCenterOperateDto() = default ;
      CostCenterOperateDto(const CostCenterOperateDto &) = default ;
      CostCenterOperateDto(CostCenterOperateDto &&) = default ;
      CostCenterOperateDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCenterOperateDto() = default ;
      CostCenterOperateDto& operator=(const CostCenterOperateDto &) = default ;
      CostCenterOperateDto& operator=(CostCenterOperateDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->isSuccess_ == nullptr && this->ownerAccountId_ == nullptr; };
      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline CostCenterOperateDto& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // isSuccess Field Functions 
      bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
      void deleteIsSuccess() { this->isSuccess_ = nullptr;};
      inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
      inline CostCenterOperateDto& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline CostCenterOperateDto& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    protected:
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<bool> isSuccess_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
    };

    virtual bool empty() const override { return this->costCenterOperateDto_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // costCenterOperateDto Field Functions 
    bool hasCostCenterOperateDto() const { return this->costCenterOperateDto_ != nullptr;};
    void deleteCostCenterOperateDto() { this->costCenterOperateDto_ = nullptr;};
    inline const vector<ModifyCostCenterResponseBody::CostCenterOperateDto> & getCostCenterOperateDto() const { DARABONBA_PTR_GET_CONST(costCenterOperateDto_, vector<ModifyCostCenterResponseBody::CostCenterOperateDto>) };
    inline vector<ModifyCostCenterResponseBody::CostCenterOperateDto> getCostCenterOperateDto() { DARABONBA_PTR_GET(costCenterOperateDto_, vector<ModifyCostCenterResponseBody::CostCenterOperateDto>) };
    inline ModifyCostCenterResponseBody& setCostCenterOperateDto(const vector<ModifyCostCenterResponseBody::CostCenterOperateDto> & costCenterOperateDto) { DARABONBA_PTR_SET_VALUE(costCenterOperateDto_, costCenterOperateDto) };
    inline ModifyCostCenterResponseBody& setCostCenterOperateDto(vector<ModifyCostCenterResponseBody::CostCenterOperateDto> && costCenterOperateDto) { DARABONBA_PTR_SET_RVALUE(costCenterOperateDto_, costCenterOperateDto) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline ModifyCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline ModifyCostCenterResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ModifyCostCenterResponseBody::CostCenterOperateDto>> costCenterOperateDto_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
