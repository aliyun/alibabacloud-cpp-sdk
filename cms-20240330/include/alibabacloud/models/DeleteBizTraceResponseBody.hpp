// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBIZTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEBIZTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteBizTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBizTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBizTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteBizTraceResponseBody() = default ;
    DeleteBizTraceResponseBody(const DeleteBizTraceResponseBody &) = default ;
    DeleteBizTraceResponseBody(DeleteBizTraceResponseBody &&) = default ;
    DeleteBizTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBizTraceResponseBody() = default ;
    DeleteBizTraceResponseBody& operator=(const DeleteBizTraceResponseBody &) = default ;
    DeleteBizTraceResponseBody& operator=(DeleteBizTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteBizTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
