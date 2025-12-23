// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppGroupCredentialsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppGroupCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateAppGroupCredentialsResponseBody() = default ;
    CreateAppGroupCredentialsResponseBody(const CreateAppGroupCredentialsResponseBody &) = default ;
    CreateAppGroupCredentialsResponseBody(CreateAppGroupCredentialsResponseBody &&) = default ;
    CreateAppGroupCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupCredentialsResponseBody() = default ;
    CreateAppGroupCredentialsResponseBody& operator=(const CreateAppGroupCredentialsResponseBody &) = default ;
    CreateAppGroupCredentialsResponseBody& operator=(CreateAppGroupCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppGroupCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateAppGroupCredentialsResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateAppGroupCredentialsResponseBodyResult) };
    inline CreateAppGroupCredentialsResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateAppGroupCredentialsResponseBodyResult) };
    inline CreateAppGroupCredentialsResponseBody& setResult(const CreateAppGroupCredentialsResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateAppGroupCredentialsResponseBody& setResult(CreateAppGroupCredentialsResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateAppGroupCredentialsResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
