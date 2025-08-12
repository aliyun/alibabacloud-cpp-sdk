// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTIMESHIFTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTimeShiftDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTimeShiftDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeShiftData, timeShiftData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTimeShiftDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeShiftData, timeShiftData_);
    };
    DescribeLiveDomainTimeShiftDataResponseBody() = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(const DescribeLiveDomainTimeShiftDataResponseBody &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(DescribeLiveDomainTimeShiftDataResponseBody &&) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTimeShiftDataResponseBody() = default ;
    DescribeLiveDomainTimeShiftDataResponseBody& operator=(const DescribeLiveDomainTimeShiftDataResponseBody &) = default ;
    DescribeLiveDomainTimeShiftDataResponseBody& operator=(DescribeLiveDomainTimeShiftDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->timeShiftData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeShiftData Field Functions 
    bool hasTimeShiftData() const { return this->timeShiftData_ != nullptr;};
    void deleteTimeShiftData() { this->timeShiftData_ = nullptr;};
    inline const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData & timeShiftData() const { DARABONBA_PTR_GET_CONST(timeShiftData_, DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData timeShiftData() { DARABONBA_PTR_GET(timeShiftData_, DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setTimeShiftData(const DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData & timeShiftData) { DARABONBA_PTR_SET_VALUE(timeShiftData_, timeShiftData) };
    inline DescribeLiveDomainTimeShiftDataResponseBody& setTimeShiftData(DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData && timeShiftData) { DARABONBA_PTR_SET_RVALUE(timeShiftData_, timeShiftData) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time shifting usage data that was collected for each time interval.
    std::shared_ptr<DescribeLiveDomainTimeShiftDataResponseBodyTimeShiftData> timeShiftData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
