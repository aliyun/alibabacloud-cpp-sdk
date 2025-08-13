// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMPARECOPYRULEVARIABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CompareCopyRuleVariableResponseBodyResultObject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareCopyRuleVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CompareCopyRuleVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CompareCopyRuleVariableResponseBody() = default ;
    CompareCopyRuleVariableResponseBody(const CompareCopyRuleVariableResponseBody &) = default ;
    CompareCopyRuleVariableResponseBody(CompareCopyRuleVariableResponseBody &&) = default ;
    CompareCopyRuleVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareCopyRuleVariableResponseBody() = default ;
    CompareCopyRuleVariableResponseBody& operator=(const CompareCopyRuleVariableResponseBody &) = default ;
    CompareCopyRuleVariableResponseBody& operator=(CompareCopyRuleVariableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resultObject_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CompareCopyRuleVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CompareCopyRuleVariableResponseBodyResultObject & resultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CompareCopyRuleVariableResponseBodyResultObject) };
    inline CompareCopyRuleVariableResponseBodyResultObject resultObject() { DARABONBA_PTR_GET(resultObject_, CompareCopyRuleVariableResponseBodyResultObject) };
    inline CompareCopyRuleVariableResponseBody& setResultObject(const CompareCopyRuleVariableResponseBodyResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CompareCopyRuleVariableResponseBody& setResultObject(CompareCopyRuleVariableResponseBodyResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Result object.
    std::shared_ptr<CompareCopyRuleVariableResponseBodyResultObject> resultObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
