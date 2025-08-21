// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUSHAPPLICATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushApplicationDataResponseBodyPushResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class PushApplicationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushResults, pushResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PushApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResults, pushResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PushApplicationDataResponseBody() = default ;
    PushApplicationDataResponseBody(const PushApplicationDataResponseBody &) = default ;
    PushApplicationDataResponseBody(PushApplicationDataResponseBody &&) = default ;
    PushApplicationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushApplicationDataResponseBody() = default ;
    PushApplicationDataResponseBody& operator=(const PushApplicationDataResponseBody &) = default ;
    PushApplicationDataResponseBody& operator=(PushApplicationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pushResults_ != nullptr
        && this->requestId_ != nullptr; };
    // pushResults Field Functions 
    bool hasPushResults() const { return this->pushResults_ != nullptr;};
    void deletePushResults() { this->pushResults_ = nullptr;};
    inline const PushApplicationDataResponseBodyPushResults & pushResults() const { DARABONBA_PTR_GET_CONST(pushResults_, PushApplicationDataResponseBodyPushResults) };
    inline PushApplicationDataResponseBodyPushResults pushResults() { DARABONBA_PTR_GET(pushResults_, PushApplicationDataResponseBodyPushResults) };
    inline PushApplicationDataResponseBody& setPushResults(const PushApplicationDataResponseBodyPushResults & pushResults) { DARABONBA_PTR_SET_VALUE(pushResults_, pushResults) };
    inline PushApplicationDataResponseBody& setPushResults(PushApplicationDataResponseBodyPushResults && pushResults) { DARABONBA_PTR_SET_RVALUE(pushResults_, pushResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PushApplicationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The push results of data files.
    std::shared_ptr<PushApplicationDataResponseBodyPushResults> pushResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
