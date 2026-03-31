// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatisticsInfos, statisticsInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatisticsInfos, statisticsInfos_);
    };
    DescribeDefenseRuleStatisticsResponseBody() = default ;
    DescribeDefenseRuleStatisticsResponseBody(const DescribeDefenseRuleStatisticsResponseBody &) = default ;
    DescribeDefenseRuleStatisticsResponseBody(DescribeDefenseRuleStatisticsResponseBody &&) = default ;
    DescribeDefenseRuleStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleStatisticsResponseBody() = default ;
    DescribeDefenseRuleStatisticsResponseBody& operator=(const DescribeDefenseRuleStatisticsResponseBody &) = default ;
    DescribeDefenseRuleStatisticsResponseBody& operator=(DescribeDefenseRuleStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatisticsInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatisticsInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(FourthValue, fourthValue_);
        DARABONBA_PTR_TO_JSON(PrimaryValue, primaryValue_);
        DARABONBA_PTR_TO_JSON(SecondaryValue, secondaryValue_);
        DARABONBA_PTR_TO_JSON(ThirdValue, thirdValue_);
      };
      friend void from_json(const Darabonba::Json& j, StatisticsInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(FourthValue, fourthValue_);
        DARABONBA_PTR_FROM_JSON(PrimaryValue, primaryValue_);
        DARABONBA_PTR_FROM_JSON(SecondaryValue, secondaryValue_);
        DARABONBA_PTR_FROM_JSON(ThirdValue, thirdValue_);
      };
      StatisticsInfos() = default ;
      StatisticsInfos(const StatisticsInfos &) = default ;
      StatisticsInfos(StatisticsInfos &&) = default ;
      StatisticsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatisticsInfos() = default ;
      StatisticsInfos& operator=(const StatisticsInfos &) = default ;
      StatisticsInfos& operator=(StatisticsInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->fourthValue_ == nullptr && this->primaryValue_ == nullptr && this->secondaryValue_ == nullptr && this->thirdValue_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline StatisticsInfos& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // fourthValue Field Functions 
      bool hasFourthValue() const { return this->fourthValue_ != nullptr;};
      void deleteFourthValue() { this->fourthValue_ = nullptr;};
      inline string getFourthValue() const { DARABONBA_PTR_GET_DEFAULT(fourthValue_, "") };
      inline StatisticsInfos& setFourthValue(string fourthValue) { DARABONBA_PTR_SET_VALUE(fourthValue_, fourthValue) };


      // primaryValue Field Functions 
      bool hasPrimaryValue() const { return this->primaryValue_ != nullptr;};
      void deletePrimaryValue() { this->primaryValue_ = nullptr;};
      inline string getPrimaryValue() const { DARABONBA_PTR_GET_DEFAULT(primaryValue_, "") };
      inline StatisticsInfos& setPrimaryValue(string primaryValue) { DARABONBA_PTR_SET_VALUE(primaryValue_, primaryValue) };


      // secondaryValue Field Functions 
      bool hasSecondaryValue() const { return this->secondaryValue_ != nullptr;};
      void deleteSecondaryValue() { this->secondaryValue_ = nullptr;};
      inline string getSecondaryValue() const { DARABONBA_PTR_GET_DEFAULT(secondaryValue_, "") };
      inline StatisticsInfos& setSecondaryValue(string secondaryValue) { DARABONBA_PTR_SET_VALUE(secondaryValue_, secondaryValue) };


      // thirdValue Field Functions 
      bool hasThirdValue() const { return this->thirdValue_ != nullptr;};
      void deleteThirdValue() { this->thirdValue_ = nullptr;};
      inline string getThirdValue() const { DARABONBA_PTR_GET_DEFAULT(thirdValue_, "") };
      inline StatisticsInfos& setThirdValue(string thirdValue) { DARABONBA_PTR_SET_VALUE(thirdValue_, thirdValue) };


    protected:
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> fourthValue_ {};
      shared_ptr<string> primaryValue_ {};
      shared_ptr<string> secondaryValue_ {};
      shared_ptr<string> thirdValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statisticsInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRuleStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statisticsInfos Field Functions 
    bool hasStatisticsInfos() const { return this->statisticsInfos_ != nullptr;};
    void deleteStatisticsInfos() { this->statisticsInfos_ = nullptr;};
    inline const vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos> & getStatisticsInfos() const { DARABONBA_PTR_GET_CONST(statisticsInfos_, vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos>) };
    inline vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos> getStatisticsInfos() { DARABONBA_PTR_GET(statisticsInfos_, vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos>) };
    inline DescribeDefenseRuleStatisticsResponseBody& setStatisticsInfos(const vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos> & statisticsInfos) { DARABONBA_PTR_SET_VALUE(statisticsInfos_, statisticsInfos) };
    inline DescribeDefenseRuleStatisticsResponseBody& setStatisticsInfos(vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos> && statisticsInfos) { DARABONBA_PTR_SET_RVALUE(statisticsInfos_, statisticsInfos) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeDefenseRuleStatisticsResponseBody::StatisticsInfos>> statisticsInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
