// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListScaleOutEcuResponseBodyEcuInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListScaleOutEcuResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScaleOutEcuResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcuInfoList, ecuInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScaleOutEcuResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcuInfoList, ecuInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListScaleOutEcuResponseBody() = default ;
    ListScaleOutEcuResponseBody(const ListScaleOutEcuResponseBody &) = default ;
    ListScaleOutEcuResponseBody(ListScaleOutEcuResponseBody &&) = default ;
    ListScaleOutEcuResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScaleOutEcuResponseBody() = default ;
    ListScaleOutEcuResponseBody& operator=(const ListScaleOutEcuResponseBody &) = default ;
    ListScaleOutEcuResponseBody& operator=(ListScaleOutEcuResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->ecuInfoList_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScaleOutEcuResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecuInfoList Field Functions 
    bool hasEcuInfoList() const { return this->ecuInfoList_ != nullptr;};
    void deleteEcuInfoList() { this->ecuInfoList_ = nullptr;};
    inline const ListScaleOutEcuResponseBodyEcuInfoList & ecuInfoList() const { DARABONBA_PTR_GET_CONST(ecuInfoList_, ListScaleOutEcuResponseBodyEcuInfoList) };
    inline ListScaleOutEcuResponseBodyEcuInfoList ecuInfoList() { DARABONBA_PTR_GET(ecuInfoList_, ListScaleOutEcuResponseBodyEcuInfoList) };
    inline ListScaleOutEcuResponseBody& setEcuInfoList(const ListScaleOutEcuResponseBodyEcuInfoList & ecuInfoList) { DARABONBA_PTR_SET_VALUE(ecuInfoList_, ecuInfoList) };
    inline ListScaleOutEcuResponseBody& setEcuInfoList(ListScaleOutEcuResponseBodyEcuInfoList && ecuInfoList) { DARABONBA_PTR_SET_RVALUE(ecuInfoList_, ecuInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScaleOutEcuResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScaleOutEcuResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The ECUs.
    std::shared_ptr<ListScaleOutEcuResponseBodyEcuInfoList> ecuInfoList_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
