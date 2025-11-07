// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERNETTUPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInternetTupleResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetInternetTupleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInternetTupleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInternetTupleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInternetTupleResponseBody() = default ;
    GetInternetTupleResponseBody(const GetInternetTupleResponseBody &) = default ;
    GetInternetTupleResponseBody(GetInternetTupleResponseBody &&) = default ;
    GetInternetTupleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInternetTupleResponseBody() = default ;
    GetInternetTupleResponseBody& operator=(const GetInternetTupleResponseBody &) = default ;
    GetInternetTupleResponseBody& operator=(GetInternetTupleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetInternetTupleResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetInternetTupleResponseBodyData>) };
    inline vector<GetInternetTupleResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetInternetTupleResponseBodyData>) };
    inline GetInternetTupleResponseBody& setData(const vector<GetInternetTupleResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInternetTupleResponseBody& setData(vector<GetInternetTupleResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInternetTupleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking result of Internet traffic data.
    std::shared_ptr<vector<GetInternetTupleResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
