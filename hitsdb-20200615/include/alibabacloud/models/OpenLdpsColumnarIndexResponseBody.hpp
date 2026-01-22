// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENLDPSCOLUMNARINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPENLDPSCOLUMNARINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class OpenLdpsColumnarIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenLdpsColumnarIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenLdpsColumnarIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OpenLdpsColumnarIndexResponseBody() = default ;
    OpenLdpsColumnarIndexResponseBody(const OpenLdpsColumnarIndexResponseBody &) = default ;
    OpenLdpsColumnarIndexResponseBody(OpenLdpsColumnarIndexResponseBody &&) = default ;
    OpenLdpsColumnarIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenLdpsColumnarIndexResponseBody() = default ;
    OpenLdpsColumnarIndexResponseBody& operator=(const OpenLdpsColumnarIndexResponseBody &) = default ;
    OpenLdpsColumnarIndexResponseBody& operator=(OpenLdpsColumnarIndexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline OpenLdpsColumnarIndexResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OpenLdpsColumnarIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
