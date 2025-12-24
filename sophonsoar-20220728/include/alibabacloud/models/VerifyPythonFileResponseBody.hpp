// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPYTHONFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyPythonFileResponseBodySyntax.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPythonFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPythonFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Syntax, syntax_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPythonFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Syntax, syntax_);
    };
    VerifyPythonFileResponseBody() = default ;
    VerifyPythonFileResponseBody(const VerifyPythonFileResponseBody &) = default ;
    VerifyPythonFileResponseBody(VerifyPythonFileResponseBody &&) = default ;
    VerifyPythonFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPythonFileResponseBody() = default ;
    VerifyPythonFileResponseBody& operator=(const VerifyPythonFileResponseBody &) = default ;
    VerifyPythonFileResponseBody& operator=(VerifyPythonFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->syntax_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyPythonFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // syntax Field Functions 
    bool hasSyntax() const { return this->syntax_ != nullptr;};
    void deleteSyntax() { this->syntax_ = nullptr;};
    inline const vector<VerifyPythonFileResponseBodySyntax> & syntax() const { DARABONBA_PTR_GET_CONST(syntax_, vector<VerifyPythonFileResponseBodySyntax>) };
    inline vector<VerifyPythonFileResponseBodySyntax> syntax() { DARABONBA_PTR_GET(syntax_, vector<VerifyPythonFileResponseBodySyntax>) };
    inline VerifyPythonFileResponseBody& setSyntax(const vector<VerifyPythonFileResponseBodySyntax> & syntax) { DARABONBA_PTR_SET_VALUE(syntax_, syntax) };
    inline VerifyPythonFileResponseBody& setSyntax(vector<VerifyPythonFileResponseBodySyntax> && syntax) { DARABONBA_PTR_SET_RVALUE(syntax_, syntax) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The verification result. If the parameter is left empty, the syntax of the code snippet is correct.
    std::shared_ptr<vector<VerifyPythonFileResponseBodySyntax>> syntax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
