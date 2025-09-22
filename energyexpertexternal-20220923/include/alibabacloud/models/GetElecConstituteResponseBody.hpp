// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETELECCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetElecConstituteResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetElecConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetElecConstituteResponseBody() = default ;
    GetElecConstituteResponseBody(const GetElecConstituteResponseBody &) = default ;
    GetElecConstituteResponseBody(GetElecConstituteResponseBody &&) = default ;
    GetElecConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElecConstituteResponseBody() = default ;
    GetElecConstituteResponseBody& operator=(const GetElecConstituteResponseBody &) = default ;
    GetElecConstituteResponseBody& operator=(GetElecConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetElecConstituteResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetElecConstituteResponseBodyData) };
    inline GetElecConstituteResponseBodyData data() { DARABONBA_PTR_GET(data_, GetElecConstituteResponseBodyData) };
    inline GetElecConstituteResponseBody& setData(const GetElecConstituteResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetElecConstituteResponseBody& setData(GetElecConstituteResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetElecConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<GetElecConstituteResponseBodyData> data_ = nullptr;
    // Id of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
