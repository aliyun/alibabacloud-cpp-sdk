// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHOBJECTCACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHOBJECTCACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class RefreshObjectCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshObjectCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshObjectCachesResponseBody() = default ;
    RefreshObjectCachesResponseBody(const RefreshObjectCachesResponseBody &) = default ;
    RefreshObjectCachesResponseBody(RefreshObjectCachesResponseBody &&) = default ;
    RefreshObjectCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshObjectCachesResponseBody() = default ;
    RefreshObjectCachesResponseBody& operator=(const RefreshObjectCachesResponseBody &) = default ;
    RefreshObjectCachesResponseBody& operator=(RefreshObjectCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->refreshTaskId_ != nullptr
        && this->requestId_ != nullptr; };
    // refreshTaskId Field Functions 
    bool hasRefreshTaskId() const { return this->refreshTaskId_ != nullptr;};
    void deleteRefreshTaskId() { this->refreshTaskId_ = nullptr;};
    inline string refreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(refreshTaskId_, "") };
    inline RefreshObjectCachesResponseBody& setRefreshTaskId(string refreshTaskId) { DARABONBA_PTR_SET_VALUE(refreshTaskId_, refreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshObjectCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> refreshTaskId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
