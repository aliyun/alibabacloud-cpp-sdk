// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetLiveStreamBlockResponseBody() = default ;
    SetLiveStreamBlockResponseBody(const SetLiveStreamBlockResponseBody &) = default ;
    SetLiveStreamBlockResponseBody(SetLiveStreamBlockResponseBody &&) = default ;
    SetLiveStreamBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamBlockResponseBody() = default ;
    SetLiveStreamBlockResponseBody& operator=(const SetLiveStreamBlockResponseBody &) = default ;
    SetLiveStreamBlockResponseBody& operator=(SetLiveStreamBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetLiveStreamBlockResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetLiveStreamBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetLiveStreamBlockResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The result description.
    // 
    // *   If the request was successful, ok is returned.
    // *   If the request failed, the failure detail is returned.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status. Valid values:
    // 
    // *   ok: The request was successful.
    // *   fail: The request failed.
    // 
    // >  If any parameter failed to be configured, the request failed.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
