// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChatListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetChatListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetChatListResponseBody() = default ;
    GetChatListResponseBody(const GetChatListResponseBody &) = default ;
    GetChatListResponseBody(GetChatListResponseBody &&) = default ;
    GetChatListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatListResponseBody() = default ;
    GetChatListResponseBody& operator=(const GetChatListResponseBody &) = default ;
    GetChatListResponseBody& operator=(GetChatListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetChatListResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetChatListResponseBodyData) };
    inline GetChatListResponseBodyData data() { DARABONBA_PTR_GET(data_, GetChatListResponseBodyData) };
    inline GetChatListResponseBody& setData(const GetChatListResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetChatListResponseBody& setData(GetChatListResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned data structure.
    std::shared_ptr<GetChatListResponseBodyData> data_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
