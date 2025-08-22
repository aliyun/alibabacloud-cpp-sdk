// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERBILLTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnUserBillTypeResponseBodyBillTypeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserBillTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnUserBillTypeResponseBody() = default ;
    DescribeDcdnUserBillTypeResponseBody(const DescribeDcdnUserBillTypeResponseBody &) = default ;
    DescribeDcdnUserBillTypeResponseBody(DescribeDcdnUserBillTypeResponseBody &&) = default ;
    DescribeDcdnUserBillTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserBillTypeResponseBody() = default ;
    DescribeDcdnUserBillTypeResponseBody& operator=(const DescribeDcdnUserBillTypeResponseBody &) = default ;
    DescribeDcdnUserBillTypeResponseBody& operator=(DescribeDcdnUserBillTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billTypeData_ != nullptr
        && this->requestId_ != nullptr; };
    // billTypeData Field Functions 
    bool hasBillTypeData() const { return this->billTypeData_ != nullptr;};
    void deleteBillTypeData() { this->billTypeData_ = nullptr;};
    inline const DescribeDcdnUserBillTypeResponseBodyBillTypeData & billTypeData() const { DARABONBA_PTR_GET_CONST(billTypeData_, DescribeDcdnUserBillTypeResponseBodyBillTypeData) };
    inline DescribeDcdnUserBillTypeResponseBodyBillTypeData billTypeData() { DARABONBA_PTR_GET(billTypeData_, DescribeDcdnUserBillTypeResponseBodyBillTypeData) };
    inline DescribeDcdnUserBillTypeResponseBody& setBillTypeData(const DescribeDcdnUserBillTypeResponseBodyBillTypeData & billTypeData) { DARABONBA_PTR_SET_VALUE(billTypeData_, billTypeData) };
    inline DescribeDcdnUserBillTypeResponseBody& setBillTypeData(DescribeDcdnUserBillTypeResponseBodyBillTypeData && billTypeData) { DARABONBA_PTR_SET_RVALUE(billTypeData_, billTypeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserBillTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the metering method.
    std::shared_ptr<DescribeDcdnUserBillTypeResponseBodyBillTypeData> billTypeData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
