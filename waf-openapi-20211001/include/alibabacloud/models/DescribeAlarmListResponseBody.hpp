// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlarmListResponseBodyAlarms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmListResponseBody() = default ;
    DescribeAlarmListResponseBody(const DescribeAlarmListResponseBody &) = default ;
    DescribeAlarmListResponseBody(DescribeAlarmListResponseBody &&) = default ;
    DescribeAlarmListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmListResponseBody() = default ;
    DescribeAlarmListResponseBody& operator=(const DescribeAlarmListResponseBody &) = default ;
    DescribeAlarmListResponseBody& operator=(DescribeAlarmListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarms_ == nullptr
        && return this->requestId_ == nullptr; };
    // alarms Field Functions 
    bool hasAlarms() const { return this->alarms_ != nullptr;};
    void deleteAlarms() { this->alarms_ = nullptr;};
    inline const vector<DescribeAlarmListResponseBodyAlarms> & alarms() const { DARABONBA_PTR_GET_CONST(alarms_, vector<DescribeAlarmListResponseBodyAlarms>) };
    inline vector<DescribeAlarmListResponseBodyAlarms> alarms() { DARABONBA_PTR_GET(alarms_, vector<DescribeAlarmListResponseBodyAlarms>) };
    inline DescribeAlarmListResponseBody& setAlarms(const vector<DescribeAlarmListResponseBodyAlarms> & alarms) { DARABONBA_PTR_SET_VALUE(alarms_, alarms) };
    inline DescribeAlarmListResponseBody& setAlarms(vector<DescribeAlarmListResponseBodyAlarms> && alarms) { DARABONBA_PTR_SET_RVALUE(alarms_, alarms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeAlarmListResponseBodyAlarms>> alarms_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
