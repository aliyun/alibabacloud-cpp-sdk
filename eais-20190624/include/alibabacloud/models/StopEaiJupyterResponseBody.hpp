// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPEAIJUPYTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPEAIJUPYTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopEaiJupyterResponseBodyAccessDeniedDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class StopEaiJupyterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopEaiJupyterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StopEaiJupyterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StopEaiJupyterResponseBody() = default ;
    StopEaiJupyterResponseBody(const StopEaiJupyterResponseBody &) = default ;
    StopEaiJupyterResponseBody(StopEaiJupyterResponseBody &&) = default ;
    StopEaiJupyterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopEaiJupyterResponseBody() = default ;
    StopEaiJupyterResponseBody& operator=(const StopEaiJupyterResponseBody &) = default ;
    StopEaiJupyterResponseBody& operator=(StopEaiJupyterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const StopEaiJupyterResponseBodyAccessDeniedDetail & accessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, StopEaiJupyterResponseBodyAccessDeniedDetail) };
    inline StopEaiJupyterResponseBodyAccessDeniedDetail accessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, StopEaiJupyterResponseBodyAccessDeniedDetail) };
    inline StopEaiJupyterResponseBody& setAccessDeniedDetail(const StopEaiJupyterResponseBodyAccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline StopEaiJupyterResponseBody& setAccessDeniedDetail(StopEaiJupyterResponseBodyAccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopEaiJupyterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<StopEaiJupyterResponseBodyAccessDeniedDetail> accessDeniedDetail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
