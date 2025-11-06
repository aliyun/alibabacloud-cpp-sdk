// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERREDEEMREQUESTORDERREDEEMPARAM_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORCREATINGORDERREDEEMREQUESTORDERREDEEMPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentExpirationDate, currentExpirationDate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam() = default ;
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam(const SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam &) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam(SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam &&) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam() = default ;
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& operator=(const SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam &) = default ;
    SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& operator=(SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentExpirationDate_ == nullptr
        && return this->domainName_ == nullptr; };
    // currentExpirationDate Field Functions 
    bool hasCurrentExpirationDate() const { return this->currentExpirationDate_ != nullptr;};
    void deleteCurrentExpirationDate() { this->currentExpirationDate_ = nullptr;};
    inline int64_t currentExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(currentExpirationDate_, 0L) };
    inline SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& setCurrentExpirationDate(int64_t currentExpirationDate) { DARABONBA_PTR_SET_VALUE(currentExpirationDate_, currentExpirationDate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveBatchTaskForCreatingOrderRedeemRequestOrderRedeemParam& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<int64_t> currentExpirationDate_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
