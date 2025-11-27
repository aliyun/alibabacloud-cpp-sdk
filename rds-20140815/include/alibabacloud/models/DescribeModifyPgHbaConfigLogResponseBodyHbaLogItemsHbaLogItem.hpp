// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMSHBALOGITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPGHBACONFIGLOGRESPONSEBODYHBALOGITEMSHBALOGITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems.hpp>
#include <alibabacloud/models/DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& obj) { 
      DARABONBA_PTR_TO_JSON(AfterHbaItems, afterHbaItems_);
      DARABONBA_PTR_TO_JSON(BeforeHbaItems, beforeHbaItems_);
      DARABONBA_PTR_TO_JSON(ModifyStatus, modifyStatus_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterHbaItems, afterHbaItems_);
      DARABONBA_PTR_FROM_JSON(BeforeHbaItems, beforeHbaItems_);
      DARABONBA_PTR_FROM_JSON(ModifyStatus, modifyStatus_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
    };
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem &&) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem() = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& operator=(const DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem &) = default ;
    DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& operator=(DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterHbaItems_ == nullptr
        && return this->beforeHbaItems_ == nullptr && return this->modifyStatus_ == nullptr && return this->modifyTime_ == nullptr && return this->statusReason_ == nullptr; };
    // afterHbaItems Field Functions 
    bool hasAfterHbaItems() const { return this->afterHbaItems_ != nullptr;};
    void deleteAfterHbaItems() { this->afterHbaItems_ = nullptr;};
    inline const Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems & afterHbaItems() const { DARABONBA_PTR_GET_CONST(afterHbaItems_, Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems) };
    inline Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems afterHbaItems() { DARABONBA_PTR_GET(afterHbaItems_, Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setAfterHbaItems(const Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems & afterHbaItems) { DARABONBA_PTR_SET_VALUE(afterHbaItems_, afterHbaItems) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setAfterHbaItems(Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems && afterHbaItems) { DARABONBA_PTR_SET_RVALUE(afterHbaItems_, afterHbaItems) };


    // beforeHbaItems Field Functions 
    bool hasBeforeHbaItems() const { return this->beforeHbaItems_ != nullptr;};
    void deleteBeforeHbaItems() { this->beforeHbaItems_ = nullptr;};
    inline const Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems & beforeHbaItems() const { DARABONBA_PTR_GET_CONST(beforeHbaItems_, Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems) };
    inline Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems beforeHbaItems() { DARABONBA_PTR_GET(beforeHbaItems_, Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setBeforeHbaItems(const Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems & beforeHbaItems) { DARABONBA_PTR_SET_VALUE(beforeHbaItems_, beforeHbaItems) };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setBeforeHbaItems(Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems && beforeHbaItems) { DARABONBA_PTR_SET_RVALUE(beforeHbaItems_, beforeHbaItems) };


    // modifyStatus Field Functions 
    bool hasModifyStatus() const { return this->modifyStatus_ != nullptr;};
    void deleteModifyStatus() { this->modifyStatus_ = nullptr;};
    inline string modifyStatus() const { DARABONBA_PTR_GET_DEFAULT(modifyStatus_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setModifyStatus(string modifyStatus) { DARABONBA_PTR_SET_VALUE(modifyStatus_, modifyStatus) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItem& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    // The configurations of the pg_hba.conf file after modification.
    std::shared_ptr<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemAfterHbaItems> afterHbaItems_ = nullptr;
    // The configurations of the pg_hba.conf file before modification.
    std::shared_ptr<Models::DescribeModifyPGHbaConfigLogResponseBodyHbaLogItemsHbaLogItemBeforeHbaItems> beforeHbaItems_ = nullptr;
    // The status of the modification.
    // 
    // *   **success**: The modification is successful.
    // *   **failed**: The modification failed.
    // *   **setting**: The modification is being applied.
    std::shared_ptr<string> modifyStatus_ = nullptr;
    // The time when the pg_hba.conf file was modified. The time is displayed in UTC.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The reason why the modification failed.
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
