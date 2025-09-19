// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(On, on_);
      DARABONBA_PTR_TO_JSON(SubTypes, subTypes_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(On, on_);
      DARABONBA_PTR_FROM_JSON(SubTypes, subTypes_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList &&) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& operator=(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& operator=(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->on_ != nullptr && this->subTypes_ != nullptr && this->typeName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // on Field Functions 
    bool hasOn() const { return this->on_ != nullptr;};
    void deleteOn() { this->on_ = nullptr;};
    inline bool on() const { DARABONBA_PTR_GET_DEFAULT(on_, false) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& setOn(bool on) { DARABONBA_PTR_SET_VALUE(on_, on) };


    // subTypes Field Functions 
    bool hasSubTypes() const { return this->subTypes_ != nullptr;};
    void deleteSubTypes() { this->subTypes_ = nullptr;};
    inline const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes> & subTypes() const { DARABONBA_PTR_GET_CONST(subTypes_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes>) };
    inline vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes> subTypes() { DARABONBA_PTR_GET(subTypes_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes>) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& setSubTypes(const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes> & subTypes) { DARABONBA_PTR_SET_VALUE(subTypes_, subTypes) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& setSubTypes(vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes> && subTypes) { DARABONBA_PTR_SET_RVALUE(subTypes_, subTypes) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    // The alias of the check item.
    std::shared_ptr<string> alias_ = nullptr;
    // Indicates whether the check item is selected. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> on_ = nullptr;
    // The information about sub-check items.
    std::shared_ptr<vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypes>> subTypes_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
