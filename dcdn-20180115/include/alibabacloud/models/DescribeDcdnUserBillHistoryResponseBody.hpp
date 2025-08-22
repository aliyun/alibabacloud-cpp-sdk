// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserBillHistoryResponseBodyBillHistoryData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillHistoryData, billHistoryData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillHistoryData, billHistoryData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserBillHistoryResponseBody() = default ;
    DescribeDcdnUserBillHistoryResponseBody(const DescribeDcdnUserBillHistoryResponseBody &) = default ;
    DescribeDcdnUserBillHistoryResponseBody(DescribeDcdnUserBillHistoryResponseBody &&) = default ;
    DescribeDcdnUserBillHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillHistoryResponseBody() = default ;
    DescribeDcdnUserBillHistoryResponseBody& operator=(const DescribeDcdnUserBillHistoryResponseBody &) = default ;
    DescribeDcdnUserBillHistoryResponseBody& operator=(DescribeDcdnUserBillHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billHistoryData_ != nullptr
        && this->requestId_ != nullptr; };
    // billHistoryData Field Functions 
    bool hasBillHistoryData() const { return this->billHistoryData_ != nullptr;};
    void deleteBillHistoryData() { this->billHistoryData_ = nullptr;};
    inline const DescribeDcdnUserBillHistoryResponseBodyBillHistoryData & billHistoryData() const { DARABONBA_PTR_GET_CONST(billHistoryData_, DescribeDcdnUserBillHistoryResponseBodyBillHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBodyBillHistoryData billHistoryData() { DARABONBA_PTR_GET(billHistoryData_, DescribeDcdnUserBillHistoryResponseBodyBillHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBody& setBillHistoryData(const DescribeDcdnUserBillHistoryResponseBodyBillHistoryData & billHistoryData) { DARABONBA_PTR_SET_VALUE(billHistoryData_, billHistoryData) };
    inline DescribeDcdnUserBillHistoryResponseBody& setBillHistoryData(DescribeDcdnUserBillHistoryResponseBodyBillHistoryData && billHistoryData) { DARABONBA_PTR_SET_RVALUE(billHistoryData_, billHistoryData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserBillHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The billing history returned.
    std::shared_ptr<DescribeDcdnUserBillHistoryResponseBodyBillHistoryData> billHistoryData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
