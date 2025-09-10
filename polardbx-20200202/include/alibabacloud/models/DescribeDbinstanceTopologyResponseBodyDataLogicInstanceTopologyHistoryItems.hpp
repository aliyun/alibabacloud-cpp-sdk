// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYHISTORYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCETOPOLOGYRESPONSEBODYDATALOGICINSTANCETOPOLOGYHISTORYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& obj) { 
      DARABONBA_PTR_TO_JSON(Activated, activated_);
      DARABONBA_PTR_TO_JSON(Azone, azone_);
      DARABONBA_PTR_TO_JSON(CharacterType, characterType_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(PhyInstanceName, phyInstanceName_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Activated, activated_);
      DARABONBA_PTR_FROM_JSON(Azone, azone_);
      DARABONBA_PTR_FROM_JSON(CharacterType, characterType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(PhyInstanceName, phyInstanceName_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems &&) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems() = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& operator=(const DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems &) = default ;
    DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& operator=(DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activated_ != nullptr
        && this->azone_ != nullptr && this->characterType_ != nullptr && this->DBInstanceId_ != nullptr && this->DBInstanceName_ != nullptr && this->phyInstanceName_ != nullptr
        && this->region_ != nullptr && this->role_ != nullptr; };
    // activated Field Functions 
    bool hasActivated() const { return this->activated_ != nullptr;};
    void deleteActivated() { this->activated_ = nullptr;};
    inline bool activated() const { DARABONBA_PTR_GET_DEFAULT(activated_, false) };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setActivated(bool activated) { DARABONBA_PTR_SET_VALUE(activated_, activated) };


    // azone Field Functions 
    bool hasAzone() const { return this->azone_ != nullptr;};
    void deleteAzone() { this->azone_ = nullptr;};
    inline string azone() const { DARABONBA_PTR_GET_DEFAULT(azone_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setAzone(string azone) { DARABONBA_PTR_SET_VALUE(azone_, azone) };


    // characterType Field Functions 
    bool hasCharacterType() const { return this->characterType_ != nullptr;};
    void deleteCharacterType() { this->characterType_ = nullptr;};
    inline string characterType() const { DARABONBA_PTR_GET_DEFAULT(characterType_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setCharacterType(string characterType) { DARABONBA_PTR_SET_VALUE(characterType_, characterType) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // phyInstanceName Field Functions 
    bool hasPhyInstanceName() const { return this->phyInstanceName_ != nullptr;};
    void deletePhyInstanceName() { this->phyInstanceName_ = nullptr;};
    inline string phyInstanceName() const { DARABONBA_PTR_GET_DEFAULT(phyInstanceName_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setPhyInstanceName(string phyInstanceName) { DARABONBA_PTR_SET_VALUE(phyInstanceName_, phyInstanceName) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeDBInstanceTopologyResponseBodyDataLogicInstanceTopologyHistoryItems& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<bool> activated_ = nullptr;
    std::shared_ptr<string> azone_ = nullptr;
    std::shared_ptr<string> characterType_ = nullptr;
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> phyInstanceName_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
