// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAREAELECCONSTITUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAreaElecConstituteResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetAreaElecConstituteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAreaElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAreaElecConstituteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAreaElecConstituteResponseBody() = default ;
    GetAreaElecConstituteResponseBody(const GetAreaElecConstituteResponseBody &) = default ;
    GetAreaElecConstituteResponseBody(GetAreaElecConstituteResponseBody &&) = default ;
    GetAreaElecConstituteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAreaElecConstituteResponseBody() = default ;
    GetAreaElecConstituteResponseBody& operator=(const GetAreaElecConstituteResponseBody &) = default ;
    GetAreaElecConstituteResponseBody& operator=(GetAreaElecConstituteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAreaElecConstituteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAreaElecConstituteResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAreaElecConstituteResponseBodyData) };
    inline GetAreaElecConstituteResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAreaElecConstituteResponseBodyData) };
    inline GetAreaElecConstituteResponseBody& setData(const GetAreaElecConstituteResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAreaElecConstituteResponseBody& setData(GetAreaElecConstituteResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAreaElecConstituteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The code returned for the request. A value of Success indicates that the request was successful. Other values indicate that the request failed. You can troubleshoot the error by viewing the error message returned.
    std::shared_ptr<string> code_ = nullptr;
    // The returned data.
    std::shared_ptr<GetAreaElecConstituteResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
