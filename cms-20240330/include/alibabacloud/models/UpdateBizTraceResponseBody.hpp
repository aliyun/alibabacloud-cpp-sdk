// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBIZTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBIZTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateBizTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBizTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(bizTraceId, bizTraceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBizTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(bizTraceId, bizTraceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateBizTraceResponseBody() = default ;
    UpdateBizTraceResponseBody(const UpdateBizTraceResponseBody &) = default ;
    UpdateBizTraceResponseBody(UpdateBizTraceResponseBody &&) = default ;
    UpdateBizTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBizTraceResponseBody() = default ;
    UpdateBizTraceResponseBody& operator=(const UpdateBizTraceResponseBody &) = default ;
    UpdateBizTraceResponseBody& operator=(UpdateBizTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizTraceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // bizTraceId Field Functions 
    bool hasBizTraceId() const { return this->bizTraceId_ != nullptr;};
    void deleteBizTraceId() { this->bizTraceId_ = nullptr;};
    inline string bizTraceId() const { DARABONBA_PTR_GET_DEFAULT(bizTraceId_, "") };
    inline UpdateBizTraceResponseBody& setBizTraceId(string bizTraceId) { DARABONBA_PTR_SET_VALUE(bizTraceId_, bizTraceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateBizTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> bizTraceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
