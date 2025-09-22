// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATSESSIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChatSessionListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatSessionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatSessionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatSessionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetChatSessionListResponseBody() = default ;
    GetChatSessionListResponseBody(const GetChatSessionListResponseBody &) = default ;
    GetChatSessionListResponseBody(GetChatSessionListResponseBody &&) = default ;
    GetChatSessionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatSessionListResponseBody() = default ;
    GetChatSessionListResponseBody& operator=(const GetChatSessionListResponseBody &) = default ;
    GetChatSessionListResponseBody& operator=(GetChatSessionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatSessionListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetChatSessionListResponseBodyData) };
    inline GetChatSessionListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetChatSessionListResponseBodyData) };
    inline GetChatSessionListResponseBody& setData(const GetChatSessionListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatSessionListResponseBody& setData(GetChatSessionListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatSessionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data
    std::shared_ptr<GetChatSessionListResponseBodyData> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
