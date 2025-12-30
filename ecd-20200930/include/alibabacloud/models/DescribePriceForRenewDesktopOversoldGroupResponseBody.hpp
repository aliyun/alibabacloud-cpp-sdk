// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEFORRENEWDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEFORRENEWDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceForRenewDesktopOversoldGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceForRenewDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceForRenewDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePriceForRenewDesktopOversoldGroupResponseBody() = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBody(const DescribePriceForRenewDesktopOversoldGroupResponseBody &) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBody(DescribePriceForRenewDesktopOversoldGroupResponseBody &&) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceForRenewDesktopOversoldGroupResponseBody() = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBody& operator=(const DescribePriceForRenewDesktopOversoldGroupResponseBody &) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBody& operator=(DescribePriceForRenewDesktopOversoldGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
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
      virtual bool empty() const override { return this->price_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline Data& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    protected:
      shared_ptr<string> price_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePriceForRenewDesktopOversoldGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePriceForRenewDesktopOversoldGroupResponseBody::Data) };
    inline DescribePriceForRenewDesktopOversoldGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePriceForRenewDesktopOversoldGroupResponseBody::Data) };
    inline DescribePriceForRenewDesktopOversoldGroupResponseBody& setData(const DescribePriceForRenewDesktopOversoldGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePriceForRenewDesktopOversoldGroupResponseBody& setData(DescribePriceForRenewDesktopOversoldGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceForRenewDesktopOversoldGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePriceForRenewDesktopOversoldGroupResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
