// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamDelayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetLiveStreamDelayConfigResponseBody() = default ;
    SetLiveStreamDelayConfigResponseBody(const SetLiveStreamDelayConfigResponseBody &) = default ;
    SetLiveStreamDelayConfigResponseBody(SetLiveStreamDelayConfigResponseBody &&) = default ;
    SetLiveStreamDelayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamDelayConfigResponseBody() = default ;
    SetLiveStreamDelayConfigResponseBody& operator=(const SetLiveStreamDelayConfigResponseBody &) = default ;
    SetLiveStreamDelayConfigResponseBody& operator=(SetLiveStreamDelayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetLiveStreamDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
