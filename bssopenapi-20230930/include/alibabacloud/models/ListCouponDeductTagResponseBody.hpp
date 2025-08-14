// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOUPONDEDUCTTAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCouponDeductTagResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListCouponDeductTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCouponDeductTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCouponDeductTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCouponDeductTagResponseBody() = default ;
    ListCouponDeductTagResponseBody(const ListCouponDeductTagResponseBody &) = default ;
    ListCouponDeductTagResponseBody(ListCouponDeductTagResponseBody &&) = default ;
    ListCouponDeductTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCouponDeductTagResponseBody() = default ;
    ListCouponDeductTagResponseBody& operator=(const ListCouponDeductTagResponseBody &) = default ;
    ListCouponDeductTagResponseBody& operator=(ListCouponDeductTagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCouponDeductTagResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCouponDeductTagResponseBodyData>) };
    inline vector<ListCouponDeductTagResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListCouponDeductTagResponseBodyData>) };
    inline ListCouponDeductTagResponseBody& setData(const vector<ListCouponDeductTagResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCouponDeductTagResponseBody& setData(vector<ListCouponDeductTagResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCouponDeductTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListCouponDeductTagResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
