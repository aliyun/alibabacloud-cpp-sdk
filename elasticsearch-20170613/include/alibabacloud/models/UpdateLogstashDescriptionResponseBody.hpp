// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTASHDESCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTASHDESCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLogstashDescriptionResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateLogstashDescriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogstashDescriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogstashDescriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateLogstashDescriptionResponseBody() = default ;
    UpdateLogstashDescriptionResponseBody(const UpdateLogstashDescriptionResponseBody &) = default ;
    UpdateLogstashDescriptionResponseBody(UpdateLogstashDescriptionResponseBody &&) = default ;
    UpdateLogstashDescriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogstashDescriptionResponseBody() = default ;
    UpdateLogstashDescriptionResponseBody& operator=(const UpdateLogstashDescriptionResponseBody &) = default ;
    UpdateLogstashDescriptionResponseBody& operator=(UpdateLogstashDescriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLogstashDescriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateLogstashDescriptionResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, UpdateLogstashDescriptionResponseBodyResult) };
    inline UpdateLogstashDescriptionResponseBodyResult result() { DARABONBA_PTR_GET(result_, UpdateLogstashDescriptionResponseBodyResult) };
    inline UpdateLogstashDescriptionResponseBody& setResult(const UpdateLogstashDescriptionResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateLogstashDescriptionResponseBody& setResult(UpdateLogstashDescriptionResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result returned.
    std::shared_ptr<UpdateLogstashDescriptionResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
