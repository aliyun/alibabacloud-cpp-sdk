// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOSTCENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOSTCENTERREQUEST_HPP_
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
  class CreateCostCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCostCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCostCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    CreateCostCenterRequest() = default ;
    CreateCostCenterRequest(const CreateCostCenterRequest &) = default ;
    CreateCostCenterRequest(CreateCostCenterRequest &&) = default ;
    CreateCostCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCostCenterRequest() = default ;
    CreateCostCenterRequest& operator=(const CreateCostCenterRequest &) = default ;
    CreateCostCenterRequest& operator=(CreateCostCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CostCenterEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_TO_JSON(ParentCostCenterId, parentCostCenterId_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
        DARABONBA_PTR_FROM_JSON(ParentCostCenterId, parentCostCenterId_);
      };
      CostCenterEntityList() = default ;
      CostCenterEntityList(const CostCenterEntityList &) = default ;
      CostCenterEntityList(CostCenterEntityList &&) = default ;
      CostCenterEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CostCenterEntityList() = default ;
      CostCenterEntityList& operator=(const CostCenterEntityList &) = default ;
      CostCenterEntityList& operator=(CostCenterEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->costCenterName_ == nullptr
        && this->ownerAccountId_ == nullptr && this->parentCostCenterId_ == nullptr; };
      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline CostCenterEntityList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // ownerAccountId Field Functions 
      bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
      void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
      inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
      inline CostCenterEntityList& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


      // parentCostCenterId Field Functions 
      bool hasParentCostCenterId() const { return this->parentCostCenterId_ != nullptr;};
      void deleteParentCostCenterId() { this->parentCostCenterId_ = nullptr;};
      inline int64_t getParentCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(parentCostCenterId_, 0L) };
      inline CostCenterEntityList& setParentCostCenterId(int64_t parentCostCenterId) { DARABONBA_PTR_SET_VALUE(parentCostCenterId_, parentCostCenterId) };


    protected:
      // This parameter is required.
      shared_ptr<string> costCenterName_ {};
      // This parameter is required.
      shared_ptr<int64_t> ownerAccountId_ {};
      // This parameter is required.
      shared_ptr<int64_t> parentCostCenterId_ {};
    };

    virtual bool empty() const override { return this->costCenterEntityList_ == nullptr
        && this->nbid_ == nullptr; };
    // costCenterEntityList Field Functions 
    bool hasCostCenterEntityList() const { return this->costCenterEntityList_ != nullptr;};
    void deleteCostCenterEntityList() { this->costCenterEntityList_ = nullptr;};
    inline const vector<CreateCostCenterRequest::CostCenterEntityList> & getCostCenterEntityList() const { DARABONBA_PTR_GET_CONST(costCenterEntityList_, vector<CreateCostCenterRequest::CostCenterEntityList>) };
    inline vector<CreateCostCenterRequest::CostCenterEntityList> getCostCenterEntityList() { DARABONBA_PTR_GET(costCenterEntityList_, vector<CreateCostCenterRequest::CostCenterEntityList>) };
    inline CreateCostCenterRequest& setCostCenterEntityList(const vector<CreateCostCenterRequest::CostCenterEntityList> & costCenterEntityList) { DARABONBA_PTR_SET_VALUE(costCenterEntityList_, costCenterEntityList) };
    inline CreateCostCenterRequest& setCostCenterEntityList(vector<CreateCostCenterRequest::CostCenterEntityList> && costCenterEntityList) { DARABONBA_PTR_SET_RVALUE(costCenterEntityList_, costCenterEntityList) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateCostCenterRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    shared_ptr<vector<CreateCostCenterRequest::CostCenterEntityList>> costCenterEntityList_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
