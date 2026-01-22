// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERRESPONSEBODY_HPP_
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
  class CreateCostCenterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterDtoList, costCenterDtoList_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCostCenterResponseBody() = default ;
    CreateCostCenterResponseBody(const CreateCostCenterResponseBody &) = default ;
    CreateCostCenterResponseBody(CreateCostCenterResponseBody &&) = default ;
    CreateCostCenterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterResponseBody() = default ;
    CreateCostCenterResponseBody& operator=(const CreateCostCenterResponseBody &) = default ;
    CreateCostCenterResponseBody& operator=(CreateCostCenterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CostCenterDtoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterDtoList& obj) { 
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterDtoList& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
      };
      CostCenterDtoList() = default ;
      CostCenterDtoList(const CostCenterDtoList &) = default ;
      CostCenterDtoList(CostCenterDtoList &&) = default ;
      CostCenterDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCenterDtoList() = default ;
      CostCenterDtoList& operator=(const CostCenterDtoList &) = default ;
      CostCenterDtoList& operator=(CostCenterDtoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->ownerAccountId_ == nullptr && this->parentCostCenterId_ == nullptr; };
      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline CostCenterDtoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline CostCenterDtoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline CostCenterDtoList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // parentCostCenterId Field Functions 
      bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
      void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
      inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
      inline CostCenterDtoList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


    protected:
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<int64_t> ownerAccountId_ {};
      shared_ptr<int64_t> parentCostCenterId_ {};
    };

    virtual bool empty() const override { return this->costCenterDtoList_ == nullptr
        && this->metadata_ == nullptr && this->requestId_ == nullptr; };
    // costCenterDtoList Field Functions 
    bool hasCostCenterDtoList() const { return this->costCenterDtoList_ != nullptr;};
    void deleteCostCenterDtoList() { this->costCenterDtoList_ = nullptr;};
    inline const vector<CreateCostCenterResponseBody::CostCenterDtoList> & getCostCenterDtoList() const { DARABONBA_PTR_GET_CONST(costCenterDtoList_, vector<CreateCostCenterResponseBody::CostCenterDtoList>) };
    inline vector<CreateCostCenterResponseBody::CostCenterDtoList> getCostCenterDtoList() { DARABONBA_PTR_GET(costCenterDtoList_, vector<CreateCostCenterResponseBody::CostCenterDtoList>) };
    inline CreateCostCenterResponseBody& setCostCenterDtoList(const vector<CreateCostCenterResponseBody::CostCenterDtoList> & costCenterDtoList) { DARABONBA_PTR_SET_VALUE(costCenterDtoList_, costCenterDtoList) };
    inline CreateCostCenterResponseBody& setCostCenterDtoList(vector<CreateCostCenterResponseBody::CostCenterDtoList> && costCenterDtoList) { DARABONBA_PTR_SET_RVALUE(costCenterDtoList_, costCenterDtoList) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline CreateCostCenterResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline CreateCostCenterResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCostCenterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<CreateCostCenterResponseBody::CostCenterDtoList>> costCenterDtoList_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
