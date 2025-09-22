// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGWPINVENTORYCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGwpInventoryConstituteResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetGwpInventoryConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGwpInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGwpInventoryConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGwpInventoryConstituteResponseBody() = default ;
    GetGwpInventoryConstituteResponseBody(const GetGwpInventoryConstituteResponseBody &) = default ;
    GetGwpInventoryConstituteResponseBody(GetGwpInventoryConstituteResponseBody &&) = default ;
    GetGwpInventoryConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGwpInventoryConstituteResponseBody() = default ;
    GetGwpInventoryConstituteResponseBody& operator=(const GetGwpInventoryConstituteResponseBody &) = default ;
    GetGwpInventoryConstituteResponseBody& operator=(GetGwpInventoryConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGwpInventoryConstituteResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetGwpInventoryConstituteResponseBodyData) };
    inline GetGwpInventoryConstituteResponseBodyData data() { DARABONBA_PTR_GET(data_, GetGwpInventoryConstituteResponseBodyData) };
    inline GetGwpInventoryConstituteResponseBody& setData(const GetGwpInventoryConstituteResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGwpInventoryConstituteResponseBody& setData(GetGwpInventoryConstituteResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGwpInventoryConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetGwpInventoryConstituteResponseBodyData> data_ = nullptr;
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
