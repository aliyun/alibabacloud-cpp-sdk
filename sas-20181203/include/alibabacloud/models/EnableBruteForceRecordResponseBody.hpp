// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEBRUTEFORCERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLEBRUTEFORCERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class EnableBruteForceRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableBruteForceRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableBruteForceRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableBruteForceRecordResponseBody() = default ;
    EnableBruteForceRecordResponseBody(const EnableBruteForceRecordResponseBody &) = default ;
    EnableBruteForceRecordResponseBody(EnableBruteForceRecordResponseBody &&) = default ;
    EnableBruteForceRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableBruteForceRecordResponseBody() = default ;
    EnableBruteForceRecordResponseBody& operator=(const EnableBruteForceRecordResponseBody &) = default ;
    EnableBruteForceRecordResponseBody& operator=(EnableBruteForceRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableBruteForceRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
