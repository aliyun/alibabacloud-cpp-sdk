// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppGroupResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyAppGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ModifyAppGroupResponseBody() = default ;
    ModifyAppGroupResponseBody(const ModifyAppGroupResponseBody &) = default ;
    ModifyAppGroupResponseBody(ModifyAppGroupResponseBody &&) = default ;
    ModifyAppGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppGroupResponseBody() = default ;
    ModifyAppGroupResponseBody& operator=(const ModifyAppGroupResponseBody &) = default ;
    ModifyAppGroupResponseBody& operator=(ModifyAppGroupResponseBody &&) = default ;
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
    inline ModifyAppGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ModifyAppGroupResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ModifyAppGroupResponseBodyResult) };
    inline ModifyAppGroupResponseBodyResult result() { DARABONBA_PTR_GET(result_, ModifyAppGroupResponseBodyResult) };
    inline ModifyAppGroupResponseBody& setResult(const ModifyAppGroupResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ModifyAppGroupResponseBody& setResult(ModifyAppGroupResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Response parameters
    std::shared_ptr<ModifyAppGroupResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
