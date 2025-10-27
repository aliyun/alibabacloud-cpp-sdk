// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVULITEM_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWREQUESTALARMDETAILVULITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateOpaStrategyNewRequestAlarmDetailVulItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewRequestAlarmDetailVulItem& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewRequestAlarmDetailVulItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateOpaStrategyNewRequestAlarmDetailVulItem() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulItem(const UpdateOpaStrategyNewRequestAlarmDetailVulItem &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulItem(UpdateOpaStrategyNewRequestAlarmDetailVulItem &&) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewRequestAlarmDetailVulItem() = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulItem& operator=(const UpdateOpaStrategyNewRequestAlarmDetailVulItem &) = default ;
    UpdateOpaStrategyNewRequestAlarmDetailVulItem& operator=(UpdateOpaStrategyNewRequestAlarmDetailVulItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateOpaStrategyNewRequestAlarmDetailVulItem& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateOpaStrategyNewRequestAlarmDetailVulItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the vulnerability.
    // 
    // >  You can call the [DescribeVulListPage](https://help.aliyun.com/document_detail/471928.html) operation to query the ID.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the vulnerability.
    // 
    // >  You can call the [DescribeVulListPage](https://help.aliyun.com/document_detail/471928.html) operation to query the name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
