// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatList, statList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatList, statList_);
    };
    DescribeChannelDistributionStatDataResponseBody() = default ;
    DescribeChannelDistributionStatDataResponseBody(const DescribeChannelDistributionStatDataResponseBody &) = default ;
    DescribeChannelDistributionStatDataResponseBody(DescribeChannelDistributionStatDataResponseBody &&) = default ;
    DescribeChannelDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelDistributionStatDataResponseBody() = default ;
    DescribeChannelDistributionStatDataResponseBody& operator=(const DescribeChannelDistributionStatDataResponseBody &) = default ;
    DescribeChannelDistributionStatDataResponseBody& operator=(DescribeChannelDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatList& obj) { 
        DARABONBA_PTR_TO_JSON(CallUserCount, callUserCount_);
        DARABONBA_PTR_TO_JSON(CallUserRatio, callUserRatio_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, StatList& obj) { 
        DARABONBA_PTR_FROM_JSON(CallUserCount, callUserCount_);
        DARABONBA_PTR_FROM_JSON(CallUserRatio, callUserRatio_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      StatList() = default ;
      StatList(const StatList &) = default ;
      StatList(StatList &&) = default ;
      StatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatList() = default ;
      StatList& operator=(const StatList &) = default ;
      StatList& operator=(StatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callUserCount_ == nullptr
        && this->callUserRatio_ == nullptr && this->name_ == nullptr; };
      // callUserCount Field Functions 
      bool hasCallUserCount() const { return this->callUserCount_ != nullptr;};
      void deleteCallUserCount() { this->callUserCount_ = nullptr;};
      inline int32_t getCallUserCount() const { DARABONBA_PTR_GET_DEFAULT(callUserCount_, 0) };
      inline StatList& setCallUserCount(int32_t callUserCount) { DARABONBA_PTR_SET_VALUE(callUserCount_, callUserCount) };


      // callUserRatio Field Functions 
      bool hasCallUserRatio() const { return this->callUserRatio_ != nullptr;};
      void deleteCallUserRatio() { this->callUserRatio_ = nullptr;};
      inline string getCallUserRatio() const { DARABONBA_PTR_GET_DEFAULT(callUserRatio_, "") };
      inline StatList& setCallUserRatio(string callUserRatio) { DARABONBA_PTR_SET_VALUE(callUserRatio_, callUserRatio) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline StatList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int32_t> callUserCount_ {};
      shared_ptr<string> callUserRatio_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statList Field Functions 
    bool hasStatList() const { return this->statList_ != nullptr;};
    void deleteStatList() { this->statList_ = nullptr;};
    inline const vector<DescribeChannelDistributionStatDataResponseBody::StatList> & getStatList() const { DARABONBA_PTR_GET_CONST(statList_, vector<DescribeChannelDistributionStatDataResponseBody::StatList>) };
    inline vector<DescribeChannelDistributionStatDataResponseBody::StatList> getStatList() { DARABONBA_PTR_GET(statList_, vector<DescribeChannelDistributionStatDataResponseBody::StatList>) };
    inline DescribeChannelDistributionStatDataResponseBody& setStatList(const vector<DescribeChannelDistributionStatDataResponseBody::StatList> & statList) { DARABONBA_PTR_SET_VALUE(statList_, statList) };
    inline DescribeChannelDistributionStatDataResponseBody& setStatList(vector<DescribeChannelDistributionStatDataResponseBody::StatList> && statList) { DARABONBA_PTR_SET_RVALUE(statList_, statList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeChannelDistributionStatDataResponseBody::StatList>> statList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
