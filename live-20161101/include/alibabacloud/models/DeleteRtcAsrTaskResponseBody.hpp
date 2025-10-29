// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERTCASRTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETERTCASRTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteRtcAsrTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRtcAsrTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRtcAsrTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
    };
    DeleteRtcAsrTaskResponseBody() = default ;
    DeleteRtcAsrTaskResponseBody(const DeleteRtcAsrTaskResponseBody &) = default ;
    DeleteRtcAsrTaskResponseBody(DeleteRtcAsrTaskResponseBody &&) = default ;
    DeleteRtcAsrTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRtcAsrTaskResponseBody() = default ;
    DeleteRtcAsrTaskResponseBody& operator=(const DeleteRtcAsrTaskResponseBody &) = default ;
    DeleteRtcAsrTaskResponseBody& operator=(DeleteRtcAsrTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->requestId_ == nullptr && return this->retCode_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DeleteRtcAsrTaskResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteRtcAsrTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int64_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0L) };
    inline DeleteRtcAsrTaskResponseBody& setRetCode(int64_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


  protected:
    // The result of the request. If success is returned, the request is successful. If an error message is returned, the request failed.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned HTTP status code. HTTP status code 2000 indicates that the request is successful. If another HTTP status code is returned, the request failed.
    std::shared_ptr<int64_t> retCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
