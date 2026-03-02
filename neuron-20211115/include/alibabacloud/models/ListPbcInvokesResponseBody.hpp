// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPBCINVOKESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPBCINVOKESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcListResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPbcInvokesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPbcInvokesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPbcInvokesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListPbcInvokesResponseBody() = default ;
    ListPbcInvokesResponseBody(const ListPbcInvokesResponseBody &) = default ;
    ListPbcInvokesResponseBody(ListPbcInvokesResponseBody &&) = default ;
    ListPbcInvokesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPbcInvokesResponseBody() = default ;
    ListPbcInvokesResponseBody& operator=(const ListPbcInvokesResponseBody &) = default ;
    ListPbcInvokesResponseBody& operator=(ListPbcInvokesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPbcInvokesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const PbcListResult & getResult() const { DARABONBA_PTR_GET_CONST(result_, PbcListResult) };
    inline PbcListResult getResult() { DARABONBA_PTR_GET(result_, PbcListResult) };
    inline ListPbcInvokesResponseBody& setResult(const PbcListResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPbcInvokesResponseBody& setResult(PbcListResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<PbcListResult> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
