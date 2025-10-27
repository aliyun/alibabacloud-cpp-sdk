// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFlowAliasResponseBodyAlias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateFlowAliasResponseBody() = default ;
    UpdateFlowAliasResponseBody(const UpdateFlowAliasResponseBody &) = default ;
    UpdateFlowAliasResponseBody(UpdateFlowAliasResponseBody &&) = default ;
    UpdateFlowAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowAliasResponseBody() = default ;
    UpdateFlowAliasResponseBody& operator=(const UpdateFlowAliasResponseBody &) = default ;
    UpdateFlowAliasResponseBody& operator=(UpdateFlowAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->requestId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const UpdateFlowAliasResponseBodyAlias & alias() const { DARABONBA_PTR_GET_CONST(alias_, UpdateFlowAliasResponseBodyAlias) };
    inline UpdateFlowAliasResponseBodyAlias alias() { DARABONBA_PTR_GET(alias_, UpdateFlowAliasResponseBodyAlias) };
    inline UpdateFlowAliasResponseBody& setAlias(const UpdateFlowAliasResponseBodyAlias & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline UpdateFlowAliasResponseBody& setAlias(UpdateFlowAliasResponseBodyAlias && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateFlowAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<UpdateFlowAliasResponseBodyAlias> alias_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
