// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateLiveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(liveId, liveId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(liveId, liveId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateLiveResponseBody() = default ;
    CreateLiveResponseBody(const CreateLiveResponseBody &) = default ;
    CreateLiveResponseBody(CreateLiveResponseBody &&) = default ;
    CreateLiveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveResponseBody() = default ;
    CreateLiveResponseBody& operator=(const CreateLiveResponseBody &) = default ;
    CreateLiveResponseBody& operator=(CreateLiveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveId_ == nullptr
        && this->requestId_ == nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline CreateLiveResponseBody& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLiveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> liveId_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
