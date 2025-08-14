// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNDACCOUNTPAYRELATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CreateFundAccountPayRelationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFundAccountPayRelationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFundAccountPayRelationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(FundAccountId, fundAccountId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    CreateFundAccountPayRelationShrinkRequest() = default ;
    CreateFundAccountPayRelationShrinkRequest(const CreateFundAccountPayRelationShrinkRequest &) = default ;
    CreateFundAccountPayRelationShrinkRequest(CreateFundAccountPayRelationShrinkRequest &&) = default ;
    CreateFundAccountPayRelationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFundAccountPayRelationShrinkRequest() = default ;
    CreateFundAccountPayRelationShrinkRequest& operator=(const CreateFundAccountPayRelationShrinkRequest &) = default ;
    CreateFundAccountPayRelationShrinkRequest& operator=(CreateFundAccountPayRelationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecIdAccountIdsShrink_ != nullptr
        && this->fundAccountId_ != nullptr && this->nbid_ != nullptr; };
    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string ecIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline CreateFundAccountPayRelationShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // fundAccountId Field Functions 
    bool hasFundAccountId() const { return this->fundAccountId_ != nullptr;};
    void deleteFundAccountId() { this->fundAccountId_ = nullptr;};
    inline string fundAccountId() const { DARABONBA_PTR_GET_DEFAULT(fundAccountId_, "") };
    inline CreateFundAccountPayRelationShrinkRequest& setFundAccountId(string fundAccountId) { DARABONBA_PTR_SET_VALUE(fundAccountId_, fundAccountId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CreateFundAccountPayRelationShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ecIdAccountIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fundAccountId_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
