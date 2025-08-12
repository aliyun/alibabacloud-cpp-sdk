// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEMONITORISPCITYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSiteMonitorISPCityListResponseBodyIspCityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSiteMonitorISPCityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteMonitorISPCityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteMonitorISPCityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IspCityList, ispCityList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSiteMonitorISPCityListResponseBody() = default ;
    DescribeSiteMonitorISPCityListResponseBody(const DescribeSiteMonitorISPCityListResponseBody &) = default ;
    DescribeSiteMonitorISPCityListResponseBody(DescribeSiteMonitorISPCityListResponseBody &&) = default ;
    DescribeSiteMonitorISPCityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteMonitorISPCityListResponseBody() = default ;
    DescribeSiteMonitorISPCityListResponseBody& operator=(const DescribeSiteMonitorISPCityListResponseBody &) = default ;
    DescribeSiteMonitorISPCityListResponseBody& operator=(DescribeSiteMonitorISPCityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->ispCityList_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ispCityList Field Functions 
    bool hasIspCityList() const { return this->ispCityList_ != nullptr;};
    void deleteIspCityList() { this->ispCityList_ = nullptr;};
    inline const DescribeSiteMonitorISPCityListResponseBodyIspCityList & ispCityList() const { DARABONBA_PTR_GET_CONST(ispCityList_, DescribeSiteMonitorISPCityListResponseBodyIspCityList) };
    inline DescribeSiteMonitorISPCityListResponseBodyIspCityList ispCityList() { DARABONBA_PTR_GET(ispCityList_, DescribeSiteMonitorISPCityListResponseBodyIspCityList) };
    inline DescribeSiteMonitorISPCityListResponseBody& setIspCityList(const DescribeSiteMonitorISPCityListResponseBodyIspCityList & ispCityList) { DARABONBA_PTR_SET_VALUE(ispCityList_, ispCityList) };
    inline DescribeSiteMonitorISPCityListResponseBody& setIspCityList(DescribeSiteMonitorISPCityListResponseBodyIspCityList && ispCityList) { DARABONBA_PTR_SET_RVALUE(ispCityList_, ispCityList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSiteMonitorISPCityListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The queried detection points.
    std::shared_ptr<DescribeSiteMonitorISPCityListResponseBodyIspCityList> ispCityList_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
