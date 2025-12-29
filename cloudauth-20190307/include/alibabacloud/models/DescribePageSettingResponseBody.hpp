// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAGESETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAGESETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribePageSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePageSettingResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(FailReasons, failReasons_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePageSettingResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(FailReasons, failReasons_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePageSettingResponseBody() = default ;
    DescribePageSettingResponseBody(const DescribePageSettingResponseBody &) = default ;
    DescribePageSettingResponseBody(DescribePageSettingResponseBody &&) = default ;
    DescribePageSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePageSettingResponseBody() = default ;
    DescribePageSettingResponseBody& operator=(const DescribePageSettingResponseBody &) = default ;
    DescribePageSettingResponseBody& operator=(DescribePageSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failReasons_ == nullptr
        && this->requestId_ == nullptr; };
    // failReasons Field Functions 
    bool hasFailReasons() const { return this->failReasons_ != nullptr;};
    void deleteFailReasons() { this->failReasons_ = nullptr;};
    inline     const Darabonba::Json & getFailReasons() const { DARABONBA_GET(failReasons_) };
    Darabonba::Json & getFailReasons() { DARABONBA_GET(failReasons_) };
    inline DescribePageSettingResponseBody& setFailReasons(const Darabonba::Json & failReasons) { DARABONBA_SET_VALUE(failReasons_, failReasons) };
    inline DescribePageSettingResponseBody& setFailReasons(Darabonba::Json && failReasons) { DARABONBA_SET_RVALUE(failReasons_, failReasons) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePageSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Failure reasons.
    Darabonba::Json failReasons_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
