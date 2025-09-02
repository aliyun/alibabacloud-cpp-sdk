// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPITESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataServiceApiTestResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiTestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiTestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataServiceApiTestResponseBody() = default ;
    GetDataServiceApiTestResponseBody(const GetDataServiceApiTestResponseBody &) = default ;
    GetDataServiceApiTestResponseBody(GetDataServiceApiTestResponseBody &&) = default ;
    GetDataServiceApiTestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiTestResponseBody() = default ;
    GetDataServiceApiTestResponseBody& operator=(const GetDataServiceApiTestResponseBody &) = default ;
    GetDataServiceApiTestResponseBody& operator=(GetDataServiceApiTestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiTestResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiTestResponseBodyData) };
    inline GetDataServiceApiTestResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDataServiceApiTestResponseBodyData) };
    inline GetDataServiceApiTestResponseBody& setData(const GetDataServiceApiTestResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiTestResponseBody& setData(GetDataServiceApiTestResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiTestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return object
    std::shared_ptr<GetDataServiceApiTestResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
