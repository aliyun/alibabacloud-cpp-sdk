// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEBUCKETDELETETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEBUCKETDELETETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class TerminateBucketDeleteTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateBucketDeleteTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateBucketDeleteTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TerminateBucketDeleteTaskResponseBody() = default ;
    TerminateBucketDeleteTaskResponseBody(const TerminateBucketDeleteTaskResponseBody &) = default ;
    TerminateBucketDeleteTaskResponseBody(TerminateBucketDeleteTaskResponseBody &&) = default ;
    TerminateBucketDeleteTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateBucketDeleteTaskResponseBody() = default ;
    TerminateBucketDeleteTaskResponseBody& operator=(const TerminateBucketDeleteTaskResponseBody &) = default ;
    TerminateBucketDeleteTaskResponseBody& operator=(TerminateBucketDeleteTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TerminateBucketDeleteTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TerminateBucketDeleteTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
