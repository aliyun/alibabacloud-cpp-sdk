// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCINVOKERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCINVOKERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcInvokeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcInvokeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pbcInvokeId, pbcInvokeId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcInvokeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcInvokeId, pbcInvokeId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePbcInvokeResponseBody() = default ;
    CreatePbcInvokeResponseBody(const CreatePbcInvokeResponseBody &) = default ;
    CreatePbcInvokeResponseBody(CreatePbcInvokeResponseBody &&) = default ;
    CreatePbcInvokeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcInvokeResponseBody() = default ;
    CreatePbcInvokeResponseBody& operator=(const CreatePbcInvokeResponseBody &) = default ;
    CreatePbcInvokeResponseBody& operator=(CreatePbcInvokeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcInvokeId_ == nullptr
        && this->requestId_ == nullptr; };
    // pbcInvokeId Field Functions 
    bool hasPbcInvokeId() const { return this->pbcInvokeId_ != nullptr;};
    void deletePbcInvokeId() { this->pbcInvokeId_ = nullptr;};
    inline int64_t getPbcInvokeId() const { DARABONBA_PTR_GET_DEFAULT(pbcInvokeId_, 0L) };
    inline CreatePbcInvokeResponseBody& setPbcInvokeId(int64_t pbcInvokeId) { DARABONBA_PTR_SET_VALUE(pbcInvokeId_, pbcInvokeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePbcInvokeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> pbcInvokeId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
