// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSITEPAUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSITEPAUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSitePauseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSitePauseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paused, paused_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSitePauseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paused, paused_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSitePauseResponseBody() = default ;
    GetSitePauseResponseBody(const GetSitePauseResponseBody &) = default ;
    GetSitePauseResponseBody(GetSitePauseResponseBody &&) = default ;
    GetSitePauseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSitePauseResponseBody() = default ;
    GetSitePauseResponseBody& operator=(const GetSitePauseResponseBody &) = default ;
    GetSitePauseResponseBody& operator=(GetSitePauseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paused_ == nullptr
        && return this->requestId_ == nullptr; };
    // paused Field Functions 
    bool hasPaused() const { return this->paused_ != nullptr;};
    void deletePaused() { this->paused_ = nullptr;};
    inline bool paused() const { DARABONBA_PTR_GET_DEFAULT(paused_, false) };
    inline GetSitePauseResponseBody& setPaused(bool paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSitePauseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether ESA is paused on the website. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> paused_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
