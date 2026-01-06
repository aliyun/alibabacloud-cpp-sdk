// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEETINGROOMRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEETINGROOMRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteMeetingRoomResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteMeetingRoomResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMeetingRoomResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMeetingRoomResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteMeetingRoomResponse() = default ;
    DeleteMeetingRoomResponse(const DeleteMeetingRoomResponse &) = default ;
    DeleteMeetingRoomResponse(DeleteMeetingRoomResponse &&) = default ;
    DeleteMeetingRoomResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMeetingRoomResponse() = default ;
    DeleteMeetingRoomResponse& operator=(const DeleteMeetingRoomResponse &) = default ;
    DeleteMeetingRoomResponse& operator=(DeleteMeetingRoomResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DeleteMeetingRoomResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteMeetingRoomResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteMeetingRoomResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteMeetingRoomResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteMeetingRoomResponseBody) };
    inline DeleteMeetingRoomResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteMeetingRoomResponseBody) };
    inline DeleteMeetingRoomResponse& setBody(const DeleteMeetingRoomResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteMeetingRoomResponse& setBody(DeleteMeetingRoomResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteMeetingRoomResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
