// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARBONEMISSIONTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCarbonEmissionTrendResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetCarbonEmissionTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCarbonEmissionTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCarbonEmissionTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCarbonEmissionTrendResponseBody() = default ;
    GetCarbonEmissionTrendResponseBody(const GetCarbonEmissionTrendResponseBody &) = default ;
    GetCarbonEmissionTrendResponseBody(GetCarbonEmissionTrendResponseBody &&) = default ;
    GetCarbonEmissionTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCarbonEmissionTrendResponseBody() = default ;
    GetCarbonEmissionTrendResponseBody& operator=(const GetCarbonEmissionTrendResponseBody &) = default ;
    GetCarbonEmissionTrendResponseBody& operator=(GetCarbonEmissionTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCarbonEmissionTrendResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetCarbonEmissionTrendResponseBodyData) };
    inline GetCarbonEmissionTrendResponseBodyData data() { DARABONBA_PTR_GET(data_, GetCarbonEmissionTrendResponseBodyData) };
    inline GetCarbonEmissionTrendResponseBody& setData(const GetCarbonEmissionTrendResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCarbonEmissionTrendResponseBody& setData(GetCarbonEmissionTrendResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCarbonEmissionTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<GetCarbonEmissionTrendResponseBodyData> data_ = nullptr;
    // Id of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
