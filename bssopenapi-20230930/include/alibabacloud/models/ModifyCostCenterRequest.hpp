// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOSTCENTERREQUEST_HPP_
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
  class ModifyCostCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCostCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCostCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterEntityList, costCenterEntityList_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    ModifyCostCenterRequest() = default ;
    ModifyCostCenterRequest(const ModifyCostCenterRequest &) = default ;
    ModifyCostCenterRequest(ModifyCostCenterRequest &&) = default ;
    ModifyCostCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCostCenterRequest() = default ;
    ModifyCostCenterRequest& operator=(const ModifyCostCenterRequest &) = default ;
    ModifyCostCenterRequest& operator=(ModifyCostCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CostCenterEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CostCenterEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_TO_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      };
      friend void from_json(const Darabonba::Json& j, CostCenterEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
        DARABONBA_PTR_FROM_JSON(CostCenterName, costCenterName_);
        DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
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
      virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->ownerAccountId_ == nullptr; };
      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline CostCenterEntityList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


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


    protected:
      // This parameter is required.
      shared_ptr<int64_t> costCenterId_ {};
      // This parameter is required.
      shared_ptr<string> costCenterName_ {};
      // This parameter is required.
      shared_ptr<int64_t> ownerAccountId_ {};
    };

    virtual bool empty() const override { return this->costCenterEntityList_ == nullptr
        && this->nbid_ == nullptr; };
    // costCenterEntityList Field Functions 
    bool hasCostCenterEntityList() const { return this->costCenterEntityList_ != nullptr;};
    void deleteCostCenterEntityList() { this->costCenterEntityList_ = nullptr;};
    inline const vector<ModifyCostCenterRequest::CostCenterEntityList> & getCostCenterEntityList() const { DARABONBA_PTR_GET_CONST(costCenterEntityList_, vector<ModifyCostCenterRequest::CostCenterEntityList>) };
    inline vector<ModifyCostCenterRequest::CostCenterEntityList> getCostCenterEntityList() { DARABONBA_PTR_GET(costCenterEntityList_, vector<ModifyCostCenterRequest::CostCenterEntityList>) };
    inline ModifyCostCenterRequest& setCostCenterEntityList(const vector<ModifyCostCenterRequest::CostCenterEntityList> & costCenterEntityList) { DARABONBA_PTR_SET_VALUE(costCenterEntityList_, costCenterEntityList) };
    inline ModifyCostCenterRequest& setCostCenterEntityList(vector<ModifyCostCenterRequest::CostCenterEntityList> && costCenterEntityList) { DARABONBA_PTR_SET_RVALUE(costCenterEntityList_, costCenterEntityList) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline ModifyCostCenterRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    shared_ptr<vector<ModifyCostCenterRequest::CostCenterEntityList>> costCenterEntityList_ {};
    shared_ptr<string> nbid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
