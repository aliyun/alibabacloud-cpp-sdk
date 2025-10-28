// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIYUNREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAliyunRegionResponseBodyRegionEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListAliyunRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliyunRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliyunRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAliyunRegionResponseBody() = default ;
    ListAliyunRegionResponseBody(const ListAliyunRegionResponseBody &) = default ;
    ListAliyunRegionResponseBody(ListAliyunRegionResponseBody &&) = default ;
    ListAliyunRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliyunRegionResponseBody() = default ;
    ListAliyunRegionResponseBody& operator=(const ListAliyunRegionResponseBody &) = default ;
    ListAliyunRegionResponseBody& operator=(ListAliyunRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->regionEntityList_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAliyunRegionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAliyunRegionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionEntityList Field Functions 
    bool hasRegionEntityList() const { return this->regionEntityList_ != nullptr;};
    void deleteRegionEntityList() { this->regionEntityList_ = nullptr;};
    inline const ListAliyunRegionResponseBodyRegionEntityList & regionEntityList() const { DARABONBA_PTR_GET_CONST(regionEntityList_, ListAliyunRegionResponseBodyRegionEntityList) };
    inline ListAliyunRegionResponseBodyRegionEntityList regionEntityList() { DARABONBA_PTR_GET(regionEntityList_, ListAliyunRegionResponseBodyRegionEntityList) };
    inline ListAliyunRegionResponseBody& setRegionEntityList(const ListAliyunRegionResponseBodyRegionEntityList & regionEntityList) { DARABONBA_PTR_SET_VALUE(regionEntityList_, regionEntityList) };
    inline ListAliyunRegionResponseBody& setRegionEntityList(ListAliyunRegionResponseBodyRegionEntityList && regionEntityList) { DARABONBA_PTR_SET_RVALUE(regionEntityList_, regionEntityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliyunRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The details of the regions.
    std::shared_ptr<ListAliyunRegionResponseBodyRegionEntityList> regionEntityList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
