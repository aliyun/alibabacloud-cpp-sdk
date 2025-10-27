// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MASSPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MassPushResponseBodyMessageIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class MassPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MassPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MassPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageIds, messageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MassPushResponseBody() = default ;
    MassPushResponseBody(const MassPushResponseBody &) = default ;
    MassPushResponseBody(MassPushResponseBody &&) = default ;
    MassPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MassPushResponseBody() = default ;
    MassPushResponseBody& operator=(const MassPushResponseBody &) = default ;
    MassPushResponseBody& operator=(MassPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageIds_ == nullptr
        && return this->requestId_ == nullptr; };
    // messageIds Field Functions 
    bool hasMessageIds() const { return this->messageIds_ != nullptr;};
    void deleteMessageIds() { this->messageIds_ = nullptr;};
    inline const MassPushResponseBodyMessageIds & messageIds() const { DARABONBA_PTR_GET_CONST(messageIds_, MassPushResponseBodyMessageIds) };
    inline MassPushResponseBodyMessageIds messageIds() { DARABONBA_PTR_GET(messageIds_, MassPushResponseBodyMessageIds) };
    inline MassPushResponseBody& setMessageIds(const MassPushResponseBodyMessageIds & messageIds) { DARABONBA_PTR_SET_VALUE(messageIds_, messageIds) };
    inline MassPushResponseBody& setMessageIds(MassPushResponseBodyMessageIds && messageIds) { DARABONBA_PTR_SET_RVALUE(messageIds_, messageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MassPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<MassPushResponseBodyMessageIds> messageIds_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
