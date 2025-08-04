// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETIMERGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DescribeTimerGroupResponseBodyDataConfigTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTimerGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTimerGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(BindCountMap, bindCountMap_);
      DARABONBA_PTR_TO_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTimerGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(BindCountMap, bindCountMap_);
      DARABONBA_PTR_FROM_JSON(ConfigTimers, configTimers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTimerGroupResponseBodyData() = default ;
    DescribeTimerGroupResponseBodyData(const DescribeTimerGroupResponseBodyData &) = default ;
    DescribeTimerGroupResponseBodyData(DescribeTimerGroupResponseBodyData &&) = default ;
    DescribeTimerGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTimerGroupResponseBodyData() = default ;
    DescribeTimerGroupResponseBodyData& operator=(const DescribeTimerGroupResponseBodyData &) = default ;
    DescribeTimerGroupResponseBodyData& operator=(DescribeTimerGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindCount_ != nullptr
        && this->bindCountMap_ != nullptr && this->configTimers_ != nullptr && this->description_ != nullptr && this->groupId_ != nullptr && this->name_ != nullptr
        && this->productType_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int32_t bindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0) };
    inline DescribeTimerGroupResponseBodyData& setBindCount(int32_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // bindCountMap Field Functions 
    bool hasBindCountMap() const { return this->bindCountMap_ != nullptr;};
    void deleteBindCountMap() { this->bindCountMap_ = nullptr;};
    inline const map<string, int32_t> & bindCountMap() const { DARABONBA_PTR_GET_CONST(bindCountMap_, map<string, int32_t>) };
    inline map<string, int32_t> bindCountMap() { DARABONBA_PTR_GET(bindCountMap_, map<string, int32_t>) };
    inline DescribeTimerGroupResponseBodyData& setBindCountMap(const map<string, int32_t> & bindCountMap) { DARABONBA_PTR_SET_VALUE(bindCountMap_, bindCountMap) };
    inline DescribeTimerGroupResponseBodyData& setBindCountMap(map<string, int32_t> && bindCountMap) { DARABONBA_PTR_SET_RVALUE(bindCountMap_, bindCountMap) };


    // configTimers Field Functions 
    bool hasConfigTimers() const { return this->configTimers_ != nullptr;};
    void deleteConfigTimers() { this->configTimers_ = nullptr;};
    inline const vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers> & configTimers() const { DARABONBA_PTR_GET_CONST(configTimers_, vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers>) };
    inline vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers> configTimers() { DARABONBA_PTR_GET(configTimers_, vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers>) };
    inline DescribeTimerGroupResponseBodyData& setConfigTimers(const vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers> & configTimers) { DARABONBA_PTR_SET_VALUE(configTimers_, configTimers) };
    inline DescribeTimerGroupResponseBodyData& setConfigTimers(vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers> && configTimers) { DARABONBA_PTR_SET_RVALUE(configTimers_, configTimers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTimerGroupResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeTimerGroupResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTimerGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeTimerGroupResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTimerGroupResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTimerGroupResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of resources that are bound to the configuration group.
    std::shared_ptr<int32_t> bindCount_ = nullptr;
    // The number of bound resources.
    std::shared_ptr<map<string, int32_t>> bindCountMap_ = nullptr;
    // The scheduled task configurations.
    std::shared_ptr<vector<Models::DescribeTimerGroupResponseBodyDataConfigTimers>> configTimers_ = nullptr;
    // The description of the configuration group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the configuration group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> name_ = nullptr;
    // The service type of the configuration group.
    // 
    // Valid value:
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
    // Valid value:
    // 
    // *   Timer: the scheduled task type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
