// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTINECANARYENVSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTINECANARYENVSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRoutineCanaryEnvsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoutineCanaryEnvsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoutineCanaryEnvsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRoutineCanaryEnvsResponseBody() = default ;
    DescribeRoutineCanaryEnvsResponseBody(const DescribeRoutineCanaryEnvsResponseBody &) = default ;
    DescribeRoutineCanaryEnvsResponseBody(DescribeRoutineCanaryEnvsResponseBody &&) = default ;
    DescribeRoutineCanaryEnvsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoutineCanaryEnvsResponseBody() = default ;
    DescribeRoutineCanaryEnvsResponseBody& operator=(const DescribeRoutineCanaryEnvsResponseBody &) = default ;
    DescribeRoutineCanaryEnvsResponseBody& operator=(DescribeRoutineCanaryEnvsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline DescribeRoutineCanaryEnvsResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline DescribeRoutineCanaryEnvsResponseBody& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRoutineCanaryEnvsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The canary release environments that are supported.
    Darabonba::Json content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
