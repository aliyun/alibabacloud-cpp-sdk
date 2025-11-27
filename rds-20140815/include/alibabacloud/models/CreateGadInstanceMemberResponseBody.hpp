// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGADINSTANCEMEMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGadInstanceMemberResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateGadInstanceMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGadInstanceMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGadInstanceMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CreateGadInstanceMemberResponseBody() = default ;
    CreateGadInstanceMemberResponseBody(const CreateGadInstanceMemberResponseBody &) = default ;
    CreateGadInstanceMemberResponseBody(CreateGadInstanceMemberResponseBody &&) = default ;
    CreateGadInstanceMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGadInstanceMemberResponseBody() = default ;
    CreateGadInstanceMemberResponseBody& operator=(const CreateGadInstanceMemberResponseBody &) = default ;
    CreateGadInstanceMemberResponseBody& operator=(CreateGadInstanceMemberResponseBody &&) = default ;
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
    inline CreateGadInstanceMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateGadInstanceMemberResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CreateGadInstanceMemberResponseBodyResult) };
    inline CreateGadInstanceMemberResponseBodyResult result() { DARABONBA_PTR_GET(result_, CreateGadInstanceMemberResponseBodyResult) };
    inline CreateGadInstanceMemberResponseBody& setResult(const CreateGadInstanceMemberResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateGadInstanceMemberResponseBody& setResult(CreateGadInstanceMemberResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the information returned.
    std::shared_ptr<CreateGadInstanceMemberResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
