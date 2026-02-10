// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    DescribeImageBaselineStrategyResponseBody() = default ;
    DescribeImageBaselineStrategyResponseBody(const DescribeImageBaselineStrategyResponseBody &) = default ;
    DescribeImageBaselineStrategyResponseBody(DescribeImageBaselineStrategyResponseBody &&) = default ;
    DescribeImageBaselineStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineStrategyResponseBody() = default ;
    DescribeImageBaselineStrategyResponseBody& operator=(const DescribeImageBaselineStrategyResponseBody &) = default ;
    DescribeImageBaselineStrategyResponseBody& operator=(DescribeImageBaselineStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineItem, baselineItem_);
        DARABONBA_PTR_TO_JSON(BaselineItemList, baselineItemList_);
        DARABONBA_PTR_TO_JSON(SelectedItemCount, selectedItemCount_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(TotalItemCount, totalItemCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineItem, baselineItem_);
        DARABONBA_PTR_FROM_JSON(BaselineItemList, baselineItemList_);
        DARABONBA_PTR_FROM_JSON(SelectedItemCount, selectedItemCount_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(TotalItemCount, totalItemCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Strategy() = default ;
      Strategy(const Strategy &) = default ;
      Strategy(Strategy &&) = default ;
      Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategy() = default ;
      Strategy& operator=(const Strategy &) = default ;
      Strategy& operator=(Strategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BaselineItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaselineItemList& obj) { 
          DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
          DARABONBA_PTR_TO_JSON(ItemKey, itemKey_);
          DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
        };
        friend void from_json(const Darabonba::Json& j, BaselineItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
          DARABONBA_PTR_FROM_JSON(ItemKey, itemKey_);
          DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
        };
        BaselineItemList() = default ;
        BaselineItemList(const BaselineItemList &) = default ;
        BaselineItemList(BaselineItemList &&) = default ;
        BaselineItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaselineItemList() = default ;
        BaselineItemList& operator=(const BaselineItemList &) = default ;
        BaselineItemList& operator=(BaselineItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classKey_ == nullptr
        && this->itemKey_ == nullptr && this->nameKey_ == nullptr; };
        // classKey Field Functions 
        bool hasClassKey() const { return this->classKey_ != nullptr;};
        void deleteClassKey() { this->classKey_ = nullptr;};
        inline string getClassKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
        inline BaselineItemList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


        // itemKey Field Functions 
        bool hasItemKey() const { return this->itemKey_ != nullptr;};
        void deleteItemKey() { this->itemKey_ = nullptr;};
        inline string getItemKey() const { DARABONBA_PTR_GET_DEFAULT(itemKey_, "") };
        inline BaselineItemList& setItemKey(string itemKey) { DARABONBA_PTR_SET_VALUE(itemKey_, itemKey) };


        // nameKey Field Functions 
        bool hasNameKey() const { return this->nameKey_ != nullptr;};
        void deleteNameKey() { this->nameKey_ = nullptr;};
        inline string getNameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
        inline BaselineItemList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


      protected:
        // The key of the baseline type.
        shared_ptr<string> classKey_ {};
        // The key of the baseline check item.
        shared_ptr<string> itemKey_ {};
        // The key of the name for the baseline.
        shared_ptr<string> nameKey_ {};
      };

      virtual bool empty() const override { return this->baselineItem_ == nullptr
        && this->baselineItemList_ == nullptr && this->selectedItemCount_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->totalItemCount_ == nullptr
        && this->type_ == nullptr; };
      // baselineItem Field Functions 
      bool hasBaselineItem() const { return this->baselineItem_ != nullptr;};
      void deleteBaselineItem() { this->baselineItem_ = nullptr;};
      inline string getBaselineItem() const { DARABONBA_PTR_GET_DEFAULT(baselineItem_, "") };
      inline Strategy& setBaselineItem(string baselineItem) { DARABONBA_PTR_SET_VALUE(baselineItem_, baselineItem) };


      // baselineItemList Field Functions 
      bool hasBaselineItemList() const { return this->baselineItemList_ != nullptr;};
      void deleteBaselineItemList() { this->baselineItemList_ = nullptr;};
      inline const vector<Strategy::BaselineItemList> & getBaselineItemList() const { DARABONBA_PTR_GET_CONST(baselineItemList_, vector<Strategy::BaselineItemList>) };
      inline vector<Strategy::BaselineItemList> getBaselineItemList() { DARABONBA_PTR_GET(baselineItemList_, vector<Strategy::BaselineItemList>) };
      inline Strategy& setBaselineItemList(const vector<Strategy::BaselineItemList> & baselineItemList) { DARABONBA_PTR_SET_VALUE(baselineItemList_, baselineItemList) };
      inline Strategy& setBaselineItemList(vector<Strategy::BaselineItemList> && baselineItemList) { DARABONBA_PTR_SET_RVALUE(baselineItemList_, baselineItemList) };


      // selectedItemCount Field Functions 
      bool hasSelectedItemCount() const { return this->selectedItemCount_ != nullptr;};
      void deleteSelectedItemCount() { this->selectedItemCount_ = nullptr;};
      inline int32_t getSelectedItemCount() const { DARABONBA_PTR_GET_DEFAULT(selectedItemCount_, 0) };
      inline Strategy& setSelectedItemCount(int32_t selectedItemCount) { DARABONBA_PTR_SET_VALUE(selectedItemCount_, selectedItemCount) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline Strategy& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Strategy& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // totalItemCount Field Functions 
      bool hasTotalItemCount() const { return this->totalItemCount_ != nullptr;};
      void deleteTotalItemCount() { this->totalItemCount_ = nullptr;};
      inline int32_t getTotalItemCount() const { DARABONBA_PTR_GET_DEFAULT(totalItemCount_, 0) };
      inline Strategy& setTotalItemCount(int32_t totalItemCount) { DARABONBA_PTR_SET_VALUE(totalItemCount_, totalItemCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Strategy& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The baseline check policy for agentless detection.
      shared_ptr<string> baselineItem_ {};
      // An array that contains the baselines.
      shared_ptr<vector<Strategy::BaselineItemList>> baselineItemList_ {};
      // The number of selected baseline check items.
      shared_ptr<int32_t> selectedItemCount_ {};
      // The ID of the baseline check policy.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the baseline check policy.
      shared_ptr<string> strategyName_ {};
      // The total number of baseline check items.
      shared_ptr<int32_t> totalItemCount_ {};
      // The type of the baseline check policy. Valid values:
      // 
      // *   **default**: the default policy
      // *   **full**: a policy that uses all baselines
      // *   **normal**: a policy that uses general baselines
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const DescribeImageBaselineStrategyResponseBody::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, DescribeImageBaselineStrategyResponseBody::Strategy) };
    inline DescribeImageBaselineStrategyResponseBody::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, DescribeImageBaselineStrategyResponseBody::Strategy) };
    inline DescribeImageBaselineStrategyResponseBody& setStrategy(const DescribeImageBaselineStrategyResponseBody::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline DescribeImageBaselineStrategyResponseBody& setStrategy(DescribeImageBaselineStrategyResponseBody::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the baseline check policy.
    shared_ptr<DescribeImageBaselineStrategyResponseBody::Strategy> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
