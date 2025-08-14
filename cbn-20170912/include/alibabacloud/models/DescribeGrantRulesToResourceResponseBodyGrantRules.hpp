// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODYGRANTRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTORESOURCERESPONSEBODYGRANTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToResourceResponseBodyGrantRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToResourceResponseBodyGrantRules& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToResourceResponseBodyGrantRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DescribeGrantRulesToResourceResponseBodyGrantRules() = default ;
    DescribeGrantRulesToResourceResponseBodyGrantRules(const DescribeGrantRulesToResourceResponseBodyGrantRules &) = default ;
    DescribeGrantRulesToResourceResponseBodyGrantRules(DescribeGrantRulesToResourceResponseBodyGrantRules &&) = default ;
    DescribeGrantRulesToResourceResponseBodyGrantRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToResourceResponseBodyGrantRules() = default ;
    DescribeGrantRulesToResourceResponseBodyGrantRules& operator=(const DescribeGrantRulesToResourceResponseBodyGrantRules &) = default ;
    DescribeGrantRulesToResourceResponseBodyGrantRules& operator=(DescribeGrantRulesToResourceResponseBodyGrantRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->cenOwnerId_ != nullptr && this->createTime_ != nullptr && this->orderType_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeGrantRulesToResourceResponseBodyGrantRules& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline DescribeGrantRulesToResourceResponseBodyGrantRules& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGrantRulesToResourceResponseBodyGrantRules& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeGrantRulesToResourceResponseBodyGrantRules& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the CEN instance belongs.
    std::shared_ptr<int64_t> cenOwnerId_ = nullptr;
    // The timestamp when the permissions were granted. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values: Valid values:
    // 
    // *   **PayByCenOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the CEN instance belongs.
    // *   **PayByResourceOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
