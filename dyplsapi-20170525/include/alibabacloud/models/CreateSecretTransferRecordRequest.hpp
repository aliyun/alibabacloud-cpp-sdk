// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETTRANSFERRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETTRANSFERRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreateSecretTransferRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretTransferRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LastPartnerKey, lastPartnerKey_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(OriginPartnerKey, originPartnerKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretTransferRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LastPartnerKey, lastPartnerKey_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(OriginPartnerKey, originPartnerKey_);
    };
    CreateSecretTransferRecordRequest() = default ;
    CreateSecretTransferRecordRequest(const CreateSecretTransferRecordRequest &) = default ;
    CreateSecretTransferRecordRequest(CreateSecretTransferRecordRequest &&) = default ;
    CreateSecretTransferRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretTransferRecordRequest() = default ;
    CreateSecretTransferRecordRequest& operator=(const CreateSecretTransferRecordRequest &) = default ;
    CreateSecretTransferRecordRequest& operator=(CreateSecretTransferRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastPartnerKey_ == nullptr
        && this->numberList_ == nullptr && this->originPartnerKey_ == nullptr; };
    // lastPartnerKey Field Functions 
    bool hasLastPartnerKey() const { return this->lastPartnerKey_ != nullptr;};
    void deleteLastPartnerKey() { this->lastPartnerKey_ = nullptr;};
    inline string getLastPartnerKey() const { DARABONBA_PTR_GET_DEFAULT(lastPartnerKey_, "") };
    inline CreateSecretTransferRecordRequest& setLastPartnerKey(string lastPartnerKey) { DARABONBA_PTR_SET_VALUE(lastPartnerKey_, lastPartnerKey) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string getNumberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline CreateSecretTransferRecordRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // originPartnerKey Field Functions 
    bool hasOriginPartnerKey() const { return this->originPartnerKey_ != nullptr;};
    void deleteOriginPartnerKey() { this->originPartnerKey_ = nullptr;};
    inline string getOriginPartnerKey() const { DARABONBA_PTR_GET_DEFAULT(originPartnerKey_, "") };
    inline CreateSecretTransferRecordRequest& setOriginPartnerKey(string originPartnerKey) { DARABONBA_PTR_SET_VALUE(originPartnerKey_, originPartnerKey) };


  protected:
    // 迁移后的新号码池key
    shared_ptr<string> lastPartnerKey_ {};
    // 指定号码（单一、批量）迁移;一次最多可迁移500个号码，号码间请换行隔开.
    shared_ptr<string> numberList_ {};
    // 要迁移的原号码池key
    shared_ptr<string> originPartnerKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
