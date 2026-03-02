// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPBCSUBSCRIBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPBCSUBSCRIBERESPONSEBODY_HPP_
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
  class ListPbcSubscribeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPbcSubscribeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pbcListResult, pbcListResult_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPbcSubscribeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcListResult, pbcListResult_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListPbcSubscribeResponseBody() = default ;
    ListPbcSubscribeResponseBody(const ListPbcSubscribeResponseBody &) = default ;
    ListPbcSubscribeResponseBody(ListPbcSubscribeResponseBody &&) = default ;
    ListPbcSubscribeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPbcSubscribeResponseBody() = default ;
    ListPbcSubscribeResponseBody& operator=(const ListPbcSubscribeResponseBody &) = default ;
    ListPbcSubscribeResponseBody& operator=(ListPbcSubscribeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcListResult_ == nullptr
        && this->requestId_ == nullptr; };
    // pbcListResult Field Functions 
    bool hasPbcListResult() const { return this->pbcListResult_ != nullptr;};
    void deletePbcListResult() { this->pbcListResult_ = nullptr;};
    inline const PbcListResult & getPbcListResult() const { DARABONBA_PTR_GET_CONST(pbcListResult_, PbcListResult) };
    inline PbcListResult getPbcListResult() { DARABONBA_PTR_GET(pbcListResult_, PbcListResult) };
    inline ListPbcSubscribeResponseBody& setPbcListResult(const PbcListResult & pbcListResult) { DARABONBA_PTR_SET_VALUE(pbcListResult_, pbcListResult) };
    inline ListPbcSubscribeResponseBody& setPbcListResult(PbcListResult && pbcListResult) { DARABONBA_PTR_SET_RVALUE(pbcListResult_, pbcListResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPbcSubscribeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<PbcListResult> pbcListResult_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
