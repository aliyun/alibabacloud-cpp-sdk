// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCanTrySasResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCanTrySasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody(GetCanTrySasResponseBody &&) = default ;
    GetCanTrySasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody& operator=(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody& operator=(GetCanTrySasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCanTrySasResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetCanTrySasResponseBodyData) };
    inline GetCanTrySasResponseBodyData data() { DARABONBA_PTR_GET(data_, GetCanTrySasResponseBodyData) };
    inline GetCanTrySasResponseBody& setData(const GetCanTrySasResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCanTrySasResponseBody& setData(GetCanTrySasResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCanTrySasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GetCanTrySasResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
