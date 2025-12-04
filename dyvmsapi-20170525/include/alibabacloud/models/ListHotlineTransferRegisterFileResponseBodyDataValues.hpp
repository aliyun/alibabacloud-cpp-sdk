// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODYDATAVALUES_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTLINETRANSFERREGISTERFILERESPONSEBODYDATAVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ListHotlineTransferRegisterFileResponseBodyDataValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotlineTransferRegisterFileResponseBodyDataValues& obj) { 
      DARABONBA_PTR_TO_JSON(Agree, agree_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_TO_JSON(MngOpIdentityCard, mngOpIdentityCard_);
      DARABONBA_PTR_TO_JSON(MngOpMail, mngOpMail_);
      DARABONBA_PTR_TO_JSON(MngOpMobile, mngOpMobile_);
      DARABONBA_PTR_TO_JSON(MngOpName, mngOpName_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(ResUniqueCode, resUniqueCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotlineTransferRegisterFileResponseBodyDataValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Agree, agree_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
      DARABONBA_PTR_FROM_JSON(MngOpIdentityCard, mngOpIdentityCard_);
      DARABONBA_PTR_FROM_JSON(MngOpMail, mngOpMail_);
      DARABONBA_PTR_FROM_JSON(MngOpMobile, mngOpMobile_);
      DARABONBA_PTR_FROM_JSON(MngOpName, mngOpName_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(ResUniqueCode, resUniqueCode_);
    };
    ListHotlineTransferRegisterFileResponseBodyDataValues() = default ;
    ListHotlineTransferRegisterFileResponseBodyDataValues(const ListHotlineTransferRegisterFileResponseBodyDataValues &) = default ;
    ListHotlineTransferRegisterFileResponseBodyDataValues(ListHotlineTransferRegisterFileResponseBodyDataValues &&) = default ;
    ListHotlineTransferRegisterFileResponseBodyDataValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotlineTransferRegisterFileResponseBodyDataValues() = default ;
    ListHotlineTransferRegisterFileResponseBodyDataValues& operator=(const ListHotlineTransferRegisterFileResponseBodyDataValues &) = default ;
    ListHotlineTransferRegisterFileResponseBodyDataValues& operator=(ListHotlineTransferRegisterFileResponseBodyDataValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agree_ == nullptr
        && return this->corpName_ == nullptr && return this->hotlineNumber_ == nullptr && return this->mngOpIdentityCard_ == nullptr && return this->mngOpMail_ == nullptr && return this->mngOpMobile_ == nullptr
        && return this->mngOpName_ == nullptr && return this->qualificationId_ == nullptr && return this->resUniqueCode_ == nullptr; };
    // agree Field Functions 
    bool hasAgree() const { return this->agree_ != nullptr;};
    void deleteAgree() { this->agree_ = nullptr;};
    inline string agree() const { DARABONBA_PTR_GET_DEFAULT(agree_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setAgree(string agree) { DARABONBA_PTR_SET_VALUE(agree_, agree) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // hotlineNumber Field Functions 
    bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
    void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
    inline string hotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


    // mngOpIdentityCard Field Functions 
    bool hasMngOpIdentityCard() const { return this->mngOpIdentityCard_ != nullptr;};
    void deleteMngOpIdentityCard() { this->mngOpIdentityCard_ = nullptr;};
    inline string mngOpIdentityCard() const { DARABONBA_PTR_GET_DEFAULT(mngOpIdentityCard_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setMngOpIdentityCard(string mngOpIdentityCard) { DARABONBA_PTR_SET_VALUE(mngOpIdentityCard_, mngOpIdentityCard) };


    // mngOpMail Field Functions 
    bool hasMngOpMail() const { return this->mngOpMail_ != nullptr;};
    void deleteMngOpMail() { this->mngOpMail_ = nullptr;};
    inline string mngOpMail() const { DARABONBA_PTR_GET_DEFAULT(mngOpMail_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setMngOpMail(string mngOpMail) { DARABONBA_PTR_SET_VALUE(mngOpMail_, mngOpMail) };


    // mngOpMobile Field Functions 
    bool hasMngOpMobile() const { return this->mngOpMobile_ != nullptr;};
    void deleteMngOpMobile() { this->mngOpMobile_ = nullptr;};
    inline string mngOpMobile() const { DARABONBA_PTR_GET_DEFAULT(mngOpMobile_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setMngOpMobile(string mngOpMobile) { DARABONBA_PTR_SET_VALUE(mngOpMobile_, mngOpMobile) };


    // mngOpName Field Functions 
    bool hasMngOpName() const { return this->mngOpName_ != nullptr;};
    void deleteMngOpName() { this->mngOpName_ = nullptr;};
    inline string mngOpName() const { DARABONBA_PTR_GET_DEFAULT(mngOpName_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setMngOpName(string mngOpName) { DARABONBA_PTR_SET_VALUE(mngOpName_, mngOpName) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline string qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, "") };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setQualificationId(string qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // resUniqueCode Field Functions 
    bool hasResUniqueCode() const { return this->resUniqueCode_ != nullptr;};
    void deleteResUniqueCode() { this->resUniqueCode_ = nullptr;};
    inline int64_t resUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(resUniqueCode_, 0L) };
    inline ListHotlineTransferRegisterFileResponseBodyDataValues& setResUniqueCode(int64_t resUniqueCode) { DARABONBA_PTR_SET_VALUE(resUniqueCode_, resUniqueCode) };


  protected:
    // The authenticity of the commitment.
    std::shared_ptr<string> agree_ = nullptr;
    // The enterprise name.
    std::shared_ptr<string> corpName_ = nullptr;
    // The China 400 number.
    std::shared_ptr<string> hotlineNumber_ = nullptr;
    // The ID card number of the handler.
    std::shared_ptr<string> mngOpIdentityCard_ = nullptr;
    // The email address of the handler.
    std::shared_ptr<string> mngOpMail_ = nullptr;
    // The mobile phone number of the handler.
    std::shared_ptr<string> mngOpMobile_ = nullptr;
    // The name of the handler.
    std::shared_ptr<string> mngOpName_ = nullptr;
    // The qualification ID.
    std::shared_ptr<string> qualificationId_ = nullptr;
    // The unique code of the query operation.
    std::shared_ptr<int64_t> resUniqueCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
