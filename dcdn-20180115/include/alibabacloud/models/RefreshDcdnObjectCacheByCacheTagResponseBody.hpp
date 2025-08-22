// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHDCDNOBJECTCACHEBYCACHETAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHDCDNOBJECTCACHEBYCACHETAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class RefreshDcdnObjectCacheByCacheTagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshDcdnObjectCacheByCacheTagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshDcdnObjectCacheByCacheTagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RefreshTaskId, refreshTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshDcdnObjectCacheByCacheTagResponseBody() = default ;
    RefreshDcdnObjectCacheByCacheTagResponseBody(const RefreshDcdnObjectCacheByCacheTagResponseBody &) = default ;
    RefreshDcdnObjectCacheByCacheTagResponseBody(RefreshDcdnObjectCacheByCacheTagResponseBody &&) = default ;
    RefreshDcdnObjectCacheByCacheTagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshDcdnObjectCacheByCacheTagResponseBody() = default ;
    RefreshDcdnObjectCacheByCacheTagResponseBody& operator=(const RefreshDcdnObjectCacheByCacheTagResponseBody &) = default ;
    RefreshDcdnObjectCacheByCacheTagResponseBody& operator=(RefreshDcdnObjectCacheByCacheTagResponseBody &&) = default ;
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
    inline RefreshDcdnObjectCacheByCacheTagResponseBody& setRefreshTaskId(string refreshTaskId) { DARABONBA_PTR_SET_VALUE(refreshTaskId_, refreshTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshDcdnObjectCacheByCacheTagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> refreshTaskId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
