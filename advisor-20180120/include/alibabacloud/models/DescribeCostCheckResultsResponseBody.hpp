// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostCheckResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostCheckResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostCheckResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCostCheckResultsResponseBody() = default ;
    DescribeCostCheckResultsResponseBody(const DescribeCostCheckResultsResponseBody &) = default ;
    DescribeCostCheckResultsResponseBody(DescribeCostCheckResultsResponseBody &&) = default ;
    DescribeCostCheckResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostCheckResultsResponseBody() = default ;
    DescribeCostCheckResultsResponseBody& operator=(const DescribeCostCheckResultsResponseBody &) = default ;
    DescribeCostCheckResultsResponseBody& operator=(DescribeCostCheckResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdviceResourceCount, adviceResourceCount_);
        DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
        DARABONBA_PTR_TO_JSON(NormalCount, normalCount_);
        DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(ViewGroup, viewGroup_);
        DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdviceResourceCount, adviceResourceCount_);
        DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
        DARABONBA_PTR_FROM_JSON(NormalCount, normalCount_);
        DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(ViewGroup, viewGroup_);
        DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ViewGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ViewGroup& obj) { 
          DARABONBA_PTR_TO_JSON(CheckItems, checkItems_);
          DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_TO_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_TO_JSON(GroupExpectedSavingCost, groupExpectedSavingCost_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, ViewGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckItems, checkItems_);
          DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
          DARABONBA_PTR_FROM_JSON(GroupCount, groupCount_);
          DARABONBA_PTR_FROM_JSON(GroupExpectedSavingCost, groupExpectedSavingCost_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        ViewGroup() = default ;
        ViewGroup(const ViewGroup &) = default ;
        ViewGroup(ViewGroup &&) = default ;
        ViewGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ViewGroup() = default ;
        ViewGroup& operator=(const ViewGroup &) = default ;
        ViewGroup& operator=(ViewGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CheckItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CheckItems& obj) { 
            DARABONBA_PTR_TO_JSON(AdviceCount, adviceCount_);
            DARABONBA_PTR_TO_JSON(AdviceResourceCount, adviceResourceCount_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(CheckId, checkId_);
            DARABONBA_PTR_TO_JSON(CheckName, checkName_);
            DARABONBA_PTR_TO_JSON(CurrentCost, currentCost_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ExpectedSavingCost, expectedSavingCost_);
            DARABONBA_PTR_TO_JSON(OptimizedCost, optimizedCost_);
            DARABONBA_PTR_TO_JSON(Product, product_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Tips, tips_);
          };
          friend void from_json(const Darabonba::Json& j, CheckItems& obj) { 
            DARABONBA_PTR_FROM_JSON(AdviceCount, adviceCount_);
            DARABONBA_PTR_FROM_JSON(AdviceResourceCount, adviceResourceCount_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
            DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
            DARABONBA_PTR_FROM_JSON(CurrentCost, currentCost_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ExpectedSavingCost, expectedSavingCost_);
            DARABONBA_PTR_FROM_JSON(OptimizedCost, optimizedCost_);
            DARABONBA_PTR_FROM_JSON(Product, product_);
            DARABONBA_PTR_FROM_JSON(Severity, severity_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Tips, tips_);
          };
          CheckItems() = default ;
          CheckItems(const CheckItems &) = default ;
          CheckItems(CheckItems &&) = default ;
          CheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CheckItems() = default ;
          CheckItems& operator=(const CheckItems &) = default ;
          CheckItems& operator=(CheckItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adviceCount_ == nullptr
        && this->adviceResourceCount_ == nullptr && this->category_ == nullptr && this->checkId_ == nullptr && this->checkName_ == nullptr && this->currentCost_ == nullptr
        && this->description_ == nullptr && this->expectedSavingCost_ == nullptr && this->optimizedCost_ == nullptr && this->product_ == nullptr && this->severity_ == nullptr
        && this->summary_ == nullptr && this->tips_ == nullptr; };
          // adviceCount Field Functions 
          bool hasAdviceCount() const { return this->adviceCount_ != nullptr;};
          void deleteAdviceCount() { this->adviceCount_ = nullptr;};
          inline int32_t getAdviceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceCount_, 0) };
          inline CheckItems& setAdviceCount(int32_t adviceCount) { DARABONBA_PTR_SET_VALUE(adviceCount_, adviceCount) };


          // adviceResourceCount Field Functions 
          bool hasAdviceResourceCount() const { return this->adviceResourceCount_ != nullptr;};
          void deleteAdviceResourceCount() { this->adviceResourceCount_ = nullptr;};
          inline int32_t getAdviceResourceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceResourceCount_, 0) };
          inline CheckItems& setAdviceResourceCount(int32_t adviceResourceCount) { DARABONBA_PTR_SET_VALUE(adviceResourceCount_, adviceResourceCount) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline CheckItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // checkId Field Functions 
          bool hasCheckId() const { return this->checkId_ != nullptr;};
          void deleteCheckId() { this->checkId_ = nullptr;};
          inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
          inline CheckItems& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


          // checkName Field Functions 
          bool hasCheckName() const { return this->checkName_ != nullptr;};
          void deleteCheckName() { this->checkName_ = nullptr;};
          inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
          inline CheckItems& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


          // currentCost Field Functions 
          bool hasCurrentCost() const { return this->currentCost_ != nullptr;};
          void deleteCurrentCost() { this->currentCost_ = nullptr;};
          inline float getCurrentCost() const { DARABONBA_PTR_GET_DEFAULT(currentCost_, 0.0) };
          inline CheckItems& setCurrentCost(float currentCost) { DARABONBA_PTR_SET_VALUE(currentCost_, currentCost) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline CheckItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // expectedSavingCost Field Functions 
          bool hasExpectedSavingCost() const { return this->expectedSavingCost_ != nullptr;};
          void deleteExpectedSavingCost() { this->expectedSavingCost_ = nullptr;};
          inline float getExpectedSavingCost() const { DARABONBA_PTR_GET_DEFAULT(expectedSavingCost_, 0.0) };
          inline CheckItems& setExpectedSavingCost(float expectedSavingCost) { DARABONBA_PTR_SET_VALUE(expectedSavingCost_, expectedSavingCost) };


          // optimizedCost Field Functions 
          bool hasOptimizedCost() const { return this->optimizedCost_ != nullptr;};
          void deleteOptimizedCost() { this->optimizedCost_ = nullptr;};
          inline float getOptimizedCost() const { DARABONBA_PTR_GET_DEFAULT(optimizedCost_, 0.0) };
          inline CheckItems& setOptimizedCost(float optimizedCost) { DARABONBA_PTR_SET_VALUE(optimizedCost_, optimizedCost) };


          // product Field Functions 
          bool hasProduct() const { return this->product_ != nullptr;};
          void deleteProduct() { this->product_ = nullptr;};
          inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
          inline CheckItems& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
          inline CheckItems& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline CheckItems& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // tips Field Functions 
          bool hasTips() const { return this->tips_ != nullptr;};
          void deleteTips() { this->tips_ = nullptr;};
          inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
          inline CheckItems& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


        protected:
          shared_ptr<int32_t> adviceCount_ {};
          shared_ptr<int32_t> adviceResourceCount_ {};
          shared_ptr<string> category_ {};
          shared_ptr<string> checkId_ {};
          shared_ptr<string> checkName_ {};
          shared_ptr<float> currentCost_ {};
          shared_ptr<string> description_ {};
          shared_ptr<float> expectedSavingCost_ {};
          shared_ptr<float> optimizedCost_ {};
          shared_ptr<string> product_ {};
          shared_ptr<int32_t> severity_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> tips_ {};
        };

        virtual bool empty() const override { return this->checkItems_ == nullptr
        && this->groupCode_ == nullptr && this->groupCount_ == nullptr && this->groupExpectedSavingCost_ == nullptr && this->groupName_ == nullptr; };
        // checkItems Field Functions 
        bool hasCheckItems() const { return this->checkItems_ != nullptr;};
        void deleteCheckItems() { this->checkItems_ = nullptr;};
        inline const vector<ViewGroup::CheckItems> & getCheckItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<ViewGroup::CheckItems>) };
        inline vector<ViewGroup::CheckItems> getCheckItems() { DARABONBA_PTR_GET(checkItems_, vector<ViewGroup::CheckItems>) };
        inline ViewGroup& setCheckItems(const vector<ViewGroup::CheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
        inline ViewGroup& setCheckItems(vector<ViewGroup::CheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


        // groupCode Field Functions 
        bool hasGroupCode() const { return this->groupCode_ != nullptr;};
        void deleteGroupCode() { this->groupCode_ = nullptr;};
        inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
        inline ViewGroup& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


        // groupCount Field Functions 
        bool hasGroupCount() const { return this->groupCount_ != nullptr;};
        void deleteGroupCount() { this->groupCount_ = nullptr;};
        inline int32_t getGroupCount() const { DARABONBA_PTR_GET_DEFAULT(groupCount_, 0) };
        inline ViewGroup& setGroupCount(int32_t groupCount) { DARABONBA_PTR_SET_VALUE(groupCount_, groupCount) };


        // groupExpectedSavingCost Field Functions 
        bool hasGroupExpectedSavingCost() const { return this->groupExpectedSavingCost_ != nullptr;};
        void deleteGroupExpectedSavingCost() { this->groupExpectedSavingCost_ = nullptr;};
        inline float getGroupExpectedSavingCost() const { DARABONBA_PTR_GET_DEFAULT(groupExpectedSavingCost_, 0.0) };
        inline ViewGroup& setGroupExpectedSavingCost(float groupExpectedSavingCost) { DARABONBA_PTR_SET_VALUE(groupExpectedSavingCost_, groupExpectedSavingCost) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ViewGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        shared_ptr<vector<ViewGroup::CheckItems>> checkItems_ {};
        shared_ptr<string> groupCode_ {};
        shared_ptr<int32_t> groupCount_ {};
        shared_ptr<float> groupExpectedSavingCost_ {};
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->adviceResourceCount_ == nullptr
        && this->groupBy_ == nullptr && this->normalCount_ == nullptr && this->resourceCount_ == nullptr && this->totalCount_ == nullptr && this->viewGroup_ == nullptr
        && this->warningCount_ == nullptr; };
      // adviceResourceCount Field Functions 
      bool hasAdviceResourceCount() const { return this->adviceResourceCount_ != nullptr;};
      void deleteAdviceResourceCount() { this->adviceResourceCount_ = nullptr;};
      inline int32_t getAdviceResourceCount() const { DARABONBA_PTR_GET_DEFAULT(adviceResourceCount_, 0) };
      inline Data& setAdviceResourceCount(int32_t adviceResourceCount) { DARABONBA_PTR_SET_VALUE(adviceResourceCount_, adviceResourceCount) };


      // groupBy Field Functions 
      bool hasGroupBy() const { return this->groupBy_ != nullptr;};
      void deleteGroupBy() { this->groupBy_ = nullptr;};
      inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
      inline Data& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


      // normalCount Field Functions 
      bool hasNormalCount() const { return this->normalCount_ != nullptr;};
      void deleteNormalCount() { this->normalCount_ = nullptr;};
      inline int32_t getNormalCount() const { DARABONBA_PTR_GET_DEFAULT(normalCount_, 0) };
      inline Data& setNormalCount(int32_t normalCount) { DARABONBA_PTR_SET_VALUE(normalCount_, normalCount) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
      inline Data& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // viewGroup Field Functions 
      bool hasViewGroup() const { return this->viewGroup_ != nullptr;};
      void deleteViewGroup() { this->viewGroup_ = nullptr;};
      inline const vector<Data::ViewGroup> & getViewGroup() const { DARABONBA_PTR_GET_CONST(viewGroup_, vector<Data::ViewGroup>) };
      inline vector<Data::ViewGroup> getViewGroup() { DARABONBA_PTR_GET(viewGroup_, vector<Data::ViewGroup>) };
      inline Data& setViewGroup(const vector<Data::ViewGroup> & viewGroup) { DARABONBA_PTR_SET_VALUE(viewGroup_, viewGroup) };
      inline Data& setViewGroup(vector<Data::ViewGroup> && viewGroup) { DARABONBA_PTR_SET_RVALUE(viewGroup_, viewGroup) };


      // warningCount Field Functions 
      bool hasWarningCount() const { return this->warningCount_ != nullptr;};
      void deleteWarningCount() { this->warningCount_ = nullptr;};
      inline int32_t getWarningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0) };
      inline Data& setWarningCount(int32_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


    protected:
      shared_ptr<int32_t> adviceResourceCount_ {};
      shared_ptr<string> groupBy_ {};
      shared_ptr<int32_t> normalCount_ {};
      shared_ptr<int32_t> resourceCount_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<vector<Data::ViewGroup>> viewGroup_ {};
      shared_ptr<int32_t> warningCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCostCheckResultsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCostCheckResultsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCostCheckResultsResponseBody::Data) };
    inline DescribeCostCheckResultsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCostCheckResultsResponseBody::Data) };
    inline DescribeCostCheckResultsResponseBody& setData(const DescribeCostCheckResultsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCostCheckResultsResponseBody& setData(DescribeCostCheckResultsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCostCheckResultsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCostCheckResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCostCheckResultsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeCostCheckResultsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
