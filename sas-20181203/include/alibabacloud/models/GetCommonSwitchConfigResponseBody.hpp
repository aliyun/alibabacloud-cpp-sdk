// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONSWITCHCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCommonSwitchConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCommonSwitchConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonSwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonSwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCommonSwitchConfigResponseBody() = default ;
    GetCommonSwitchConfigResponseBody(const GetCommonSwitchConfigResponseBody &) = default ;
    GetCommonSwitchConfigResponseBody(GetCommonSwitchConfigResponseBody &&) = default ;
    GetCommonSwitchConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonSwitchConfigResponseBody() = default ;
    GetCommonSwitchConfigResponseBody& operator=(const GetCommonSwitchConfigResponseBody &) = default ;
    GetCommonSwitchConfigResponseBody& operator=(GetCommonSwitchConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCommonSwitchConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetCommonSwitchConfigResponseBodyData) };
    inline GetCommonSwitchConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, GetCommonSwitchConfigResponseBodyData) };
    inline GetCommonSwitchConfigResponseBody& setData(const GetCommonSwitchConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCommonSwitchConfigResponseBody& setData(GetCommonSwitchConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommonSwitchConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<GetCommonSwitchConfigResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
