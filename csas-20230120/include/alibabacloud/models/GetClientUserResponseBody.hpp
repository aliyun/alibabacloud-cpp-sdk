// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClientUserResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetClientUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientUserResponseBody() = default ;
    GetClientUserResponseBody(const GetClientUserResponseBody &) = default ;
    GetClientUserResponseBody(GetClientUserResponseBody &&) = default ;
    GetClientUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserResponseBody() = default ;
    GetClientUserResponseBody& operator=(const GetClientUserResponseBody &) = default ;
    GetClientUserResponseBody& operator=(GetClientUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClientUserResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetClientUserResponseBodyData) };
    inline GetClientUserResponseBodyData data() { DARABONBA_PTR_GET(data_, GetClientUserResponseBodyData) };
    inline GetClientUserResponseBody& setData(const GetClientUserResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClientUserResponseBody& setData(GetClientUserResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetClientUserResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
