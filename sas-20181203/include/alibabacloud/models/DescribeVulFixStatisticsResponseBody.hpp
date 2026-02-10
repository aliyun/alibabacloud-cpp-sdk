// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeVulFixStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulFixStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FixStat, fixStat_);
      DARABONBA_PTR_TO_JSON(FixTotal, fixTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulFixStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FixStat, fixStat_);
      DARABONBA_PTR_FROM_JSON(FixTotal, fixTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVulFixStatisticsResponseBody() = default ;
    DescribeVulFixStatisticsResponseBody(const DescribeVulFixStatisticsResponseBody &) = default ;
    DescribeVulFixStatisticsResponseBody(DescribeVulFixStatisticsResponseBody &&) = default ;
    DescribeVulFixStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulFixStatisticsResponseBody() = default ;
    DescribeVulFixStatisticsResponseBody& operator=(const DescribeVulFixStatisticsResponseBody &) = default ;
    DescribeVulFixStatisticsResponseBody& operator=(DescribeVulFixStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FixTotal : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FixTotal& obj) { 
        DARABONBA_PTR_TO_JSON(FixedTodayNum, fixedTodayNum_);
        DARABONBA_PTR_TO_JSON(FixedTotalNum, fixedTotalNum_);
        DARABONBA_PTR_TO_JSON(FixingNum, fixingNum_);
        DARABONBA_PTR_TO_JSON(NeedFixNum, needFixNum_);
      };
      friend void from_json(const Darabonba::Json& j, FixTotal& obj) { 
        DARABONBA_PTR_FROM_JSON(FixedTodayNum, fixedTodayNum_);
        DARABONBA_PTR_FROM_JSON(FixedTotalNum, fixedTotalNum_);
        DARABONBA_PTR_FROM_JSON(FixingNum, fixingNum_);
        DARABONBA_PTR_FROM_JSON(NeedFixNum, needFixNum_);
      };
      FixTotal() = default ;
      FixTotal(const FixTotal &) = default ;
      FixTotal(FixTotal &&) = default ;
      FixTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FixTotal() = default ;
      FixTotal& operator=(const FixTotal &) = default ;
      FixTotal& operator=(FixTotal &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fixedTodayNum_ == nullptr
        && this->fixedTotalNum_ == nullptr && this->fixingNum_ == nullptr && this->needFixNum_ == nullptr; };
      // fixedTodayNum Field Functions 
      bool hasFixedTodayNum() const { return this->fixedTodayNum_ != nullptr;};
      void deleteFixedTodayNum() { this->fixedTodayNum_ = nullptr;};
      inline int32_t getFixedTodayNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTodayNum_, 0) };
      inline FixTotal& setFixedTodayNum(int32_t fixedTodayNum) { DARABONBA_PTR_SET_VALUE(fixedTodayNum_, fixedTodayNum) };


      // fixedTotalNum Field Functions 
      bool hasFixedTotalNum() const { return this->fixedTotalNum_ != nullptr;};
      void deleteFixedTotalNum() { this->fixedTotalNum_ = nullptr;};
      inline int32_t getFixedTotalNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTotalNum_, 0) };
      inline FixTotal& setFixedTotalNum(int32_t fixedTotalNum) { DARABONBA_PTR_SET_VALUE(fixedTotalNum_, fixedTotalNum) };


      // fixingNum Field Functions 
      bool hasFixingNum() const { return this->fixingNum_ != nullptr;};
      void deleteFixingNum() { this->fixingNum_ = nullptr;};
      inline int32_t getFixingNum() const { DARABONBA_PTR_GET_DEFAULT(fixingNum_, 0) };
      inline FixTotal& setFixingNum(int32_t fixingNum) { DARABONBA_PTR_SET_VALUE(fixingNum_, fixingNum) };


      // needFixNum Field Functions 
      bool hasNeedFixNum() const { return this->needFixNum_ != nullptr;};
      void deleteNeedFixNum() { this->needFixNum_ = nullptr;};
      inline int32_t getNeedFixNum() const { DARABONBA_PTR_GET_DEFAULT(needFixNum_, 0) };
      inline FixTotal& setNeedFixNum(int32_t needFixNum) { DARABONBA_PTR_SET_VALUE(needFixNum_, needFixNum) };


    protected:
      // The number of vulnerabilities that are fixed on the current day.
      shared_ptr<int32_t> fixedTodayNum_ {};
      // The total number of fixed vulnerabilities.
      shared_ptr<int32_t> fixedTotalNum_ {};
      // The number of vulnerabilities that are being fixed.
      shared_ptr<int32_t> fixingNum_ {};
      // The number of unfixed vulnerabilities.
      shared_ptr<int32_t> needFixNum_ {};
    };

    class FixStat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FixStat& obj) { 
        DARABONBA_PTR_TO_JSON(FixedTodayNum, fixedTodayNum_);
        DARABONBA_PTR_TO_JSON(FixedTotalNum, fixedTotalNum_);
        DARABONBA_PTR_TO_JSON(FixingNum, fixingNum_);
        DARABONBA_PTR_TO_JSON(NeedFixNum, needFixNum_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FixStat& obj) { 
        DARABONBA_PTR_FROM_JSON(FixedTodayNum, fixedTodayNum_);
        DARABONBA_PTR_FROM_JSON(FixedTotalNum, fixedTotalNum_);
        DARABONBA_PTR_FROM_JSON(FixingNum, fixingNum_);
        DARABONBA_PTR_FROM_JSON(NeedFixNum, needFixNum_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      FixStat() = default ;
      FixStat(const FixStat &) = default ;
      FixStat(FixStat &&) = default ;
      FixStat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FixStat() = default ;
      FixStat& operator=(const FixStat &) = default ;
      FixStat& operator=(FixStat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fixedTodayNum_ == nullptr
        && this->fixedTotalNum_ == nullptr && this->fixingNum_ == nullptr && this->needFixNum_ == nullptr && this->type_ == nullptr; };
      // fixedTodayNum Field Functions 
      bool hasFixedTodayNum() const { return this->fixedTodayNum_ != nullptr;};
      void deleteFixedTodayNum() { this->fixedTodayNum_ = nullptr;};
      inline int32_t getFixedTodayNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTodayNum_, 0) };
      inline FixStat& setFixedTodayNum(int32_t fixedTodayNum) { DARABONBA_PTR_SET_VALUE(fixedTodayNum_, fixedTodayNum) };


      // fixedTotalNum Field Functions 
      bool hasFixedTotalNum() const { return this->fixedTotalNum_ != nullptr;};
      void deleteFixedTotalNum() { this->fixedTotalNum_ = nullptr;};
      inline int32_t getFixedTotalNum() const { DARABONBA_PTR_GET_DEFAULT(fixedTotalNum_, 0) };
      inline FixStat& setFixedTotalNum(int32_t fixedTotalNum) { DARABONBA_PTR_SET_VALUE(fixedTotalNum_, fixedTotalNum) };


      // fixingNum Field Functions 
      bool hasFixingNum() const { return this->fixingNum_ != nullptr;};
      void deleteFixingNum() { this->fixingNum_ = nullptr;};
      inline int32_t getFixingNum() const { DARABONBA_PTR_GET_DEFAULT(fixingNum_, 0) };
      inline FixStat& setFixingNum(int32_t fixingNum) { DARABONBA_PTR_SET_VALUE(fixingNum_, fixingNum) };


      // needFixNum Field Functions 
      bool hasNeedFixNum() const { return this->needFixNum_ != nullptr;};
      void deleteNeedFixNum() { this->needFixNum_ = nullptr;};
      inline int32_t getNeedFixNum() const { DARABONBA_PTR_GET_DEFAULT(needFixNum_, 0) };
      inline FixStat& setNeedFixNum(int32_t needFixNum) { DARABONBA_PTR_SET_VALUE(needFixNum_, needFixNum) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FixStat& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The number of vulnerabilities that are fixed on the current day.
      shared_ptr<int32_t> fixedTodayNum_ {};
      // The total number of fixed vulnerabilities.
      shared_ptr<int32_t> fixedTotalNum_ {};
      // The number of vulnerabilities that are being fixed.
      shared_ptr<int32_t> fixingNum_ {};
      // The number of unfixed vulnerabilities.
      shared_ptr<int32_t> needFixNum_ {};
      // The type of the vulnerability. Valid values:
      // 
      // *   **cve**: Linux software vulnerability
      // *   **sys**: Windows system vulnerability
      // *   **cms**: Web-CMS vulnerability
      // *   **app**: application vulnerability
      // *   **emg**: urgent vulnerability
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->fixStat_ == nullptr
        && this->fixTotal_ == nullptr && this->requestId_ == nullptr; };
    // fixStat Field Functions 
    bool hasFixStat() const { return this->fixStat_ != nullptr;};
    void deleteFixStat() { this->fixStat_ = nullptr;};
    inline const vector<DescribeVulFixStatisticsResponseBody::FixStat> & getFixStat() const { DARABONBA_PTR_GET_CONST(fixStat_, vector<DescribeVulFixStatisticsResponseBody::FixStat>) };
    inline vector<DescribeVulFixStatisticsResponseBody::FixStat> getFixStat() { DARABONBA_PTR_GET(fixStat_, vector<DescribeVulFixStatisticsResponseBody::FixStat>) };
    inline DescribeVulFixStatisticsResponseBody& setFixStat(const vector<DescribeVulFixStatisticsResponseBody::FixStat> & fixStat) { DARABONBA_PTR_SET_VALUE(fixStat_, fixStat) };
    inline DescribeVulFixStatisticsResponseBody& setFixStat(vector<DescribeVulFixStatisticsResponseBody::FixStat> && fixStat) { DARABONBA_PTR_SET_RVALUE(fixStat_, fixStat) };


    // fixTotal Field Functions 
    bool hasFixTotal() const { return this->fixTotal_ != nullptr;};
    void deleteFixTotal() { this->fixTotal_ = nullptr;};
    inline const DescribeVulFixStatisticsResponseBody::FixTotal & getFixTotal() const { DARABONBA_PTR_GET_CONST(fixTotal_, DescribeVulFixStatisticsResponseBody::FixTotal) };
    inline DescribeVulFixStatisticsResponseBody::FixTotal getFixTotal() { DARABONBA_PTR_GET(fixTotal_, DescribeVulFixStatisticsResponseBody::FixTotal) };
    inline DescribeVulFixStatisticsResponseBody& setFixTotal(const DescribeVulFixStatisticsResponseBody::FixTotal & fixTotal) { DARABONBA_PTR_SET_VALUE(fixTotal_, fixTotal) };
    inline DescribeVulFixStatisticsResponseBody& setFixTotal(DescribeVulFixStatisticsResponseBody::FixTotal && fixTotal) { DARABONBA_PTR_SET_RVALUE(fixTotal_, fixTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulFixStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the statistics of vulnerability fixes by vulnerability type.
    shared_ptr<vector<DescribeVulFixStatisticsResponseBody::FixStat>> fixStat_ {};
    // The total statistics of vulnerability fixes.
    shared_ptr<DescribeVulFixStatisticsResponseBody::FixTotal> fixTotal_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
