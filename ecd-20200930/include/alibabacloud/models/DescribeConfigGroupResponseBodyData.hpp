// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeConfigGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(BindCountMap, bindCountMap_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InnerTimerDesc, innerTimerDesc_);
      DARABONBA_PTR_TO_JSON(InnerTimerName, innerTimerName_);
      DARABONBA_PTR_TO_JSON(IsBind, isBind_);
      DARABONBA_PTR_TO_JSON(IsUpdate, isUpdate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(BindCountMap, bindCountMap_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InnerTimerDesc, innerTimerDesc_);
      DARABONBA_PTR_FROM_JSON(InnerTimerName, innerTimerName_);
      DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
      DARABONBA_PTR_FROM_JSON(IsUpdate, isUpdate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeConfigGroupResponseBodyData() = default ;
    DescribeConfigGroupResponseBodyData(const DescribeConfigGroupResponseBodyData &) = default ;
    DescribeConfigGroupResponseBodyData(DescribeConfigGroupResponseBodyData &&) = default ;
    DescribeConfigGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigGroupResponseBodyData() = default ;
    DescribeConfigGroupResponseBodyData& operator=(const DescribeConfigGroupResponseBodyData &) = default ;
    DescribeConfigGroupResponseBodyData& operator=(DescribeConfigGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindCount_ == nullptr
        && return this->bindCountMap_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->innerTimerDesc_ == nullptr && return this->innerTimerName_ == nullptr
        && return this->isBind_ == nullptr && return this->isUpdate_ == nullptr && return this->name_ == nullptr && return this->productType_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int32_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
    inline DescribeConfigGroupResponseBodyData& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // bindCountMap Field Functions 
    bool hasBindCountMap() const { return this->bindCountMap_ != nullptr;};
    void deleteBindCountMap() { this->bindCountMap_ = nullptr;};
    inline const map<string, int32_t> & bindCountMap() const { DARABONBA_PTR_GET_CONST(bindCountMap_, map<string, int32_t>) };
    inline map<string, int32_t> bindCountMap() { DARABONBA_PTR_GET(bindCountMap_, map<string, int32_t>) };
    inline DescribeConfigGroupResponseBodyData& setBindCountMap(const map<string, int32_t> & bindCountMap) { DARABONBA_PTR_SET_VALUE(bindCountMap_, bindCountMap) };
    inline DescribeConfigGroupResponseBodyData& setBindCountMap(map<string, int32_t> && bindCountMap) { DARABONBA_PTR_SET_RVALUE(bindCountMap_, bindCountMap) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeConfigGroupResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeConfigGroupResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // innerTimerDesc Field Functions 
    bool hasInnerTimerDesc() const { return this->innerTimerDesc_ != nullptr;};
    void deleteInnerTimerDesc() { this->innerTimerDesc_ = nullptr;};
    inline string innerTimerDesc() const { DARABONBA_PTR_GET_DEFAULT(innerTimerDesc_, "") };
    inline DescribeConfigGroupResponseBodyData& setInnerTimerDesc(string innerTimerDesc) { DARABONBA_PTR_SET_VALUE(innerTimerDesc_, innerTimerDesc) };


    // innerTimerName Field Functions 
    bool hasInnerTimerName() const { return this->innerTimerName_ != nullptr;};
    void deleteInnerTimerName() { this->innerTimerName_ = nullptr;};
    inline string innerTimerName() const { DARABONBA_PTR_GET_DEFAULT(innerTimerName_, "") };
    inline DescribeConfigGroupResponseBodyData& setInnerTimerName(string innerTimerName) { DARABONBA_PTR_SET_VALUE(innerTimerName_, innerTimerName) };


    // isBind Field Functions 
    bool hasIsBind() const { return this->isBind_ != nullptr;};
    void deleteIsBind() { this->isBind_ = nullptr;};
    inline bool isBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
    inline DescribeConfigGroupResponseBodyData& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


    // isUpdate Field Functions 
    bool hasIsUpdate() const { return this->isUpdate_ != nullptr;};
    void deleteIsUpdate() { this->isUpdate_ = nullptr;};
    inline bool isUpdate() const { DARABONBA_PTR_GET_DEFAULT(isUpdate_, false) };
    inline DescribeConfigGroupResponseBodyData& setIsUpdate(bool isUpdate) { DARABONBA_PTR_SET_VALUE(isUpdate_, isUpdate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeConfigGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeConfigGroupResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeConfigGroupResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeConfigGroupResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of resources that are bound to the configuration group.
    std::shared_ptr<int32_t> bindCount_ = nullptr;
    // The number of bound cloud computers.
    std::shared_ptr<map<string, int32_t>> bindCountMap_ = nullptr;
    // The description of the configuration group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the configuration group.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> innerTimerDesc_ = nullptr;
    std::shared_ptr<string> innerTimerName_ = nullptr;
    std::shared_ptr<bool> isBind_ = nullptr;
    std::shared_ptr<bool> isUpdate_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> name_ = nullptr;
    // The service type of the configuration group.
    // 
    // Valid values:
    // 
    // *   CLOUD_DESKTOP: the cloud computer service.
    std::shared_ptr<string> productType_ = nullptr;
    // The state of the configuration group.
    // 
    // Valid values:
    // 
    // *   AVAILABLE: The configuration group is available.
    // *   UNAVAILABLE: The configuration group is deleted.
    // *   DELETING: The configuration group is being deleted.
    // *   UPDATING: The configuration group is being modified.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the configuration group.
    // 
    // Valid values:
    // 
    // *   Timer: the scheduled task type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
