// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetReleaseTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetReleaseTimeResponseBody() = default ;
    GetReleaseTimeResponseBody(const GetReleaseTimeResponseBody &) = default ;
    GetReleaseTimeResponseBody(GetReleaseTimeResponseBody &&) = default ;
    GetReleaseTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseTimeResponseBody() = default ;
    GetReleaseTimeResponseBody& operator=(const GetReleaseTimeResponseBody &) = default ;
    GetReleaseTimeResponseBody& operator=(GetReleaseTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->releaseTime_ == nullptr
        && this->requestId_ == nullptr; };
    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline GetReleaseTimeResponseBody& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReleaseTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The scheduled release time.
    shared_ptr<string> releaseTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
