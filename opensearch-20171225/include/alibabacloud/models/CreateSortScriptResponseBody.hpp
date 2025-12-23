// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateSortScriptResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateSortScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSortScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSortScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateSortScriptResponseBody() = default ;
    CreateSortScriptResponseBody(const CreateSortScriptResponseBody &) = default ;
    CreateSortScriptResponseBody(CreateSortScriptResponseBody &&) = default ;
    CreateSortScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSortScriptResponseBody() = default ;
    CreateSortScriptResponseBody& operator=(const CreateSortScriptResponseBody &) = default ;
    CreateSortScriptResponseBody& operator=(CreateSortScriptResponseBody &&) = default ;
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
    inline CreateSortScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateSortScriptResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateSortScriptResponseBodyResult) };
    inline CreateSortScriptResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateSortScriptResponseBodyResult) };
    inline CreateSortScriptResponseBody& setResult(const CreateSortScriptResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateSortScriptResponseBody& setResult(CreateSortScriptResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<CreateSortScriptResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
