// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFUNDACCOUNTCREDITAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETFUNDACCOUNTCREDITAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SetFundAccountCreditAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetFundAccountCreditAmountResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetFundAccountCreditAmountResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetFundAccountCreditAmountResponseBody() = default ;
    SetFundAccountCreditAmountResponseBody(const SetFundAccountCreditAmountResponseBody &) = default ;
    SetFundAccountCreditAmountResponseBody(SetFundAccountCreditAmountResponseBody &&) = default ;
    SetFundAccountCreditAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetFundAccountCreditAmountResponseBody() = default ;
    SetFundAccountCreditAmountResponseBody& operator=(const SetFundAccountCreditAmountResponseBody &) = default ;
    SetFundAccountCreditAmountResponseBody& operator=(SetFundAccountCreditAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metadata_ == nullptr
        && this->requestId_ == nullptr; };
    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline SetFundAccountCreditAmountResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline SetFundAccountCreditAmountResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetFundAccountCreditAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json metadata_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
