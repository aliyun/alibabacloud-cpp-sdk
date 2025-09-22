// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCEXTRACTIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDocExtractionResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocExtractionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocExtractionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocExtractionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetDocExtractionResultResponseBody() = default ;
    GetDocExtractionResultResponseBody(const GetDocExtractionResultResponseBody &) = default ;
    GetDocExtractionResultResponseBody(GetDocExtractionResultResponseBody &&) = default ;
    GetDocExtractionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocExtractionResultResponseBody() = default ;
    GetDocExtractionResultResponseBody& operator=(const GetDocExtractionResultResponseBody &) = default ;
    GetDocExtractionResultResponseBody& operator=(GetDocExtractionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDocExtractionResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetDocExtractionResultResponseBodyData) };
    inline GetDocExtractionResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetDocExtractionResultResponseBodyData) };
    inline GetDocExtractionResultResponseBody& setData(const GetDocExtractionResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDocExtractionResultResponseBody& setData(GetDocExtractionResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocExtractionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data structure.
    std::shared_ptr<GetDocExtractionResultResponseBodyData> data_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
