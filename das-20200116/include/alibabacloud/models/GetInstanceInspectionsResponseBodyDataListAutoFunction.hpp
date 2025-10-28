// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALISTAUTOFUNCTION_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEINSPECTIONSRESPONSEBODYDATALISTAUTOFUNCTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceInspectionsResponseBodyDataListAutoFunction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceInspectionsResponseBodyDataListAutoFunction& obj) { 
      DARABONBA_PTR_TO_JSON(AutoIndex, autoIndex_);
      DARABONBA_PTR_TO_JSON(AutoLimitedSql, autoLimitedSql_);
      DARABONBA_PTR_TO_JSON(AutoResourceOptimize, autoResourceOptimize_);
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(EventSubscription, eventSubscription_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceInspectionsResponseBodyDataListAutoFunction& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoIndex, autoIndex_);
      DARABONBA_PTR_FROM_JSON(AutoLimitedSql, autoLimitedSql_);
      DARABONBA_PTR_FROM_JSON(AutoResourceOptimize, autoResourceOptimize_);
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(EventSubscription, eventSubscription_);
    };
    GetInstanceInspectionsResponseBodyDataListAutoFunction() = default ;
    GetInstanceInspectionsResponseBodyDataListAutoFunction(const GetInstanceInspectionsResponseBodyDataListAutoFunction &) = default ;
    GetInstanceInspectionsResponseBodyDataListAutoFunction(GetInstanceInspectionsResponseBodyDataListAutoFunction &&) = default ;
    GetInstanceInspectionsResponseBodyDataListAutoFunction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceInspectionsResponseBodyDataListAutoFunction() = default ;
    GetInstanceInspectionsResponseBodyDataListAutoFunction& operator=(const GetInstanceInspectionsResponseBodyDataListAutoFunction &) = default ;
    GetInstanceInspectionsResponseBodyDataListAutoFunction& operator=(GetInstanceInspectionsResponseBodyDataListAutoFunction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoIndex_ == nullptr
        && return this->autoLimitedSql_ == nullptr && return this->autoResourceOptimize_ == nullptr && return this->autoScale_ == nullptr && return this->eventSubscription_ == nullptr; };
    // autoIndex Field Functions 
    bool hasAutoIndex() const { return this->autoIndex_ != nullptr;};
    void deleteAutoIndex() { this->autoIndex_ = nullptr;};
    inline int32_t autoIndex() const { DARABONBA_PTR_GET_DEFAULT(autoIndex_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListAutoFunction& setAutoIndex(int32_t autoIndex) { DARABONBA_PTR_SET_VALUE(autoIndex_, autoIndex) };


    // autoLimitedSql Field Functions 
    bool hasAutoLimitedSql() const { return this->autoLimitedSql_ != nullptr;};
    void deleteAutoLimitedSql() { this->autoLimitedSql_ = nullptr;};
    inline int32_t autoLimitedSql() const { DARABONBA_PTR_GET_DEFAULT(autoLimitedSql_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListAutoFunction& setAutoLimitedSql(int32_t autoLimitedSql) { DARABONBA_PTR_SET_VALUE(autoLimitedSql_, autoLimitedSql) };


    // autoResourceOptimize Field Functions 
    bool hasAutoResourceOptimize() const { return this->autoResourceOptimize_ != nullptr;};
    void deleteAutoResourceOptimize() { this->autoResourceOptimize_ = nullptr;};
    inline int32_t autoResourceOptimize() const { DARABONBA_PTR_GET_DEFAULT(autoResourceOptimize_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListAutoFunction& setAutoResourceOptimize(int32_t autoResourceOptimize) { DARABONBA_PTR_SET_VALUE(autoResourceOptimize_, autoResourceOptimize) };


    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline int32_t autoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListAutoFunction& setAutoScale(int32_t autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // eventSubscription Field Functions 
    bool hasEventSubscription() const { return this->eventSubscription_ != nullptr;};
    void deleteEventSubscription() { this->eventSubscription_ = nullptr;};
    inline int32_t eventSubscription() const { DARABONBA_PTR_GET_DEFAULT(eventSubscription_, 0) };
    inline GetInstanceInspectionsResponseBodyDataListAutoFunction& setEventSubscription(int32_t eventSubscription) { DARABONBA_PTR_SET_VALUE(eventSubscription_, eventSubscription) };


  protected:
    // Indicates whether the feature of automatically creating and deleting indexes is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> autoIndex_ = nullptr;
    // Indicates whether the automatic throttling feature is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> autoLimitedSql_ = nullptr;
    // Indicates whether the automatic fragment recycling feature is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> autoResourceOptimize_ = nullptr;
    // Indicates whether the auto scaling feature is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> autoScale_ = nullptr;
    // Indicates whether the event subscription feature is enabled. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: enabled.
    // *   **2**: not supported.
    std::shared_ptr<int32_t> eventSubscription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
