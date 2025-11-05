// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERBILLTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnUserBillTypeResponseBodyBillTypeData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserBillTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserBillTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillTypeData, billTypeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnUserBillTypeResponseBody() = default ;
    DescribeCdnUserBillTypeResponseBody(const DescribeCdnUserBillTypeResponseBody &) = default ;
    DescribeCdnUserBillTypeResponseBody(DescribeCdnUserBillTypeResponseBody &&) = default ;
    DescribeCdnUserBillTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserBillTypeResponseBody() = default ;
    DescribeCdnUserBillTypeResponseBody& operator=(const DescribeCdnUserBillTypeResponseBody &) = default ;
    DescribeCdnUserBillTypeResponseBody& operator=(DescribeCdnUserBillTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billTypeData_ == nullptr
        && return this->requestId_ == nullptr; };
    // billTypeData Field Functions 
    bool hasBillTypeData() const { return this->billTypeData_ != nullptr;};
    void deleteBillTypeData() { this->billTypeData_ = nullptr;};
    inline const DescribeCdnUserBillTypeResponseBodyBillTypeData & billTypeData() const { DARABONBA_PTR_GET_CONST(billTypeData_, DescribeCdnUserBillTypeResponseBodyBillTypeData) };
    inline DescribeCdnUserBillTypeResponseBodyBillTypeData billTypeData() { DARABONBA_PTR_GET(billTypeData_, DescribeCdnUserBillTypeResponseBodyBillTypeData) };
    inline DescribeCdnUserBillTypeResponseBody& setBillTypeData(const DescribeCdnUserBillTypeResponseBodyBillTypeData & billTypeData) { DARABONBA_PTR_SET_VALUE(billTypeData_, billTypeData) };
    inline DescribeCdnUserBillTypeResponseBody& setBillTypeData(DescribeCdnUserBillTypeResponseBodyBillTypeData && billTypeData) { DARABONBA_PTR_SET_RVALUE(billTypeData_, billTypeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnUserBillTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the metering methods returned.
    std::shared_ptr<DescribeCdnUserBillTypeResponseBodyBillTypeData> billTypeData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
