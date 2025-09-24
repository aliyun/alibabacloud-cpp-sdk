// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESELLERUSERQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESELLERUSERQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateResellerUserQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResellerUserQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResellerUserQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    CreateResellerUserQuotaRequest() = default ;
    CreateResellerUserQuotaRequest(const CreateResellerUserQuotaRequest &) = default ;
    CreateResellerUserQuotaRequest(CreateResellerUserQuotaRequest &&) = default ;
    CreateResellerUserQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResellerUserQuotaRequest() = default ;
    CreateResellerUserQuotaRequest& operator=(const CreateResellerUserQuotaRequest &) = default ;
    CreateResellerUserQuotaRequest& operator=(CreateResellerUserQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->currency_ != nullptr && this->outBizId_ != nullptr && this->ownerId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateResellerUserQuotaRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline CreateResellerUserQuotaRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline CreateResellerUserQuotaRequest& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateResellerUserQuotaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> amount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> outBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
