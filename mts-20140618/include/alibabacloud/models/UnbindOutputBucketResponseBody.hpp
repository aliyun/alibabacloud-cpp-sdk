// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDOUTPUTBUCKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDOUTPUTBUCKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UnbindOutputBucketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindOutputBucketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindOutputBucketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnbindOutputBucketResponseBody() = default ;
    UnbindOutputBucketResponseBody(const UnbindOutputBucketResponseBody &) = default ;
    UnbindOutputBucketResponseBody(UnbindOutputBucketResponseBody &&) = default ;
    UnbindOutputBucketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindOutputBucketResponseBody() = default ;
    UnbindOutputBucketResponseBody& operator=(const UnbindOutputBucketResponseBody &) = default ;
    UnbindOutputBucketResponseBody& operator=(UnbindOutputBucketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindOutputBucketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation that you want to perform. Set the value to **UnbindOutputBucket**.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
