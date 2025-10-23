// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFOOTPRINTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFootprintListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetFootprintListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFootprintListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFootprintListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetFootprintListResponseBody() = default ;
    GetFootprintListResponseBody(const GetFootprintListResponseBody &) = default ;
    GetFootprintListResponseBody(GetFootprintListResponseBody &&) = default ;
    GetFootprintListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFootprintListResponseBody() = default ;
    GetFootprintListResponseBody& operator=(const GetFootprintListResponseBody &) = default ;
    GetFootprintListResponseBody& operator=(GetFootprintListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFootprintListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetFootprintListResponseBodyData) };
    inline GetFootprintListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetFootprintListResponseBodyData) };
    inline GetFootprintListResponseBody& setData(const GetFootprintListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFootprintListResponseBody& setData(GetFootprintListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFootprintListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetFootprintListResponseBodyData> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
