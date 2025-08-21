// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITEIPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWhiteIpsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateWhiteIpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteIpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateWhiteIpsResponseBody() = default ;
    UpdateWhiteIpsResponseBody(const UpdateWhiteIpsResponseBody &) = default ;
    UpdateWhiteIpsResponseBody(UpdateWhiteIpsResponseBody &&) = default ;
    UpdateWhiteIpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteIpsResponseBody() = default ;
    UpdateWhiteIpsResponseBody& operator=(const UpdateWhiteIpsResponseBody &) = default ;
    UpdateWhiteIpsResponseBody& operator=(UpdateWhiteIpsResponseBody &&) = default ;
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
    inline UpdateWhiteIpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateWhiteIpsResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, UpdateWhiteIpsResponseBodyResult) };
    inline UpdateWhiteIpsResponseBodyResult result() { DARABONBA_PTR_GET(result_, UpdateWhiteIpsResponseBodyResult) };
    inline UpdateWhiteIpsResponseBody& setResult(const UpdateWhiteIpsResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateWhiteIpsResponseBody& setResult(UpdateWhiteIpsResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The updated whitelist.
    std::shared_ptr<string> requestId_ = nullptr;
    // The network configurations.
    std::shared_ptr<UpdateWhiteIpsResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
