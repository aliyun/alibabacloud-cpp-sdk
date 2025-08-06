// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSSERVICEKEYRESPONSEBODYKMSKEYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETKMSSERVICEKEYRESPONSEBODYKMSKEYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetKMSServiceKeyResponseBodyKmsKeyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKMSServiceKeyResponseBodyKmsKeyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyState, keyState_);
      DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetKMSServiceKeyResponseBodyKmsKeyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyState, keyState_);
      DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
    };
    GetKMSServiceKeyResponseBodyKmsKeyInfoList() = default ;
    GetKMSServiceKeyResponseBodyKmsKeyInfoList(const GetKMSServiceKeyResponseBodyKmsKeyInfoList &) = default ;
    GetKMSServiceKeyResponseBodyKmsKeyInfoList(GetKMSServiceKeyResponseBodyKmsKeyInfoList &&) = default ;
    GetKMSServiceKeyResponseBodyKmsKeyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKMSServiceKeyResponseBodyKmsKeyInfoList() = default ;
    GetKMSServiceKeyResponseBodyKmsKeyInfoList& operator=(const GetKMSServiceKeyResponseBodyKmsKeyInfoList &) = default ;
    GetKMSServiceKeyResponseBodyKmsKeyInfoList& operator=(GetKMSServiceKeyResponseBodyKmsKeyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->creationDate_ != nullptr && this->creator_ != nullptr && this->deleteDate_ != nullptr && this->description_ != nullptr && this->keyId_ != nullptr
        && this->keyState_ != nullptr && this->keyUsage_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // creationDate Field Functions 
    bool hasCreationDate() const { return this->creationDate_ != nullptr;};
    void deleteCreationDate() { this->creationDate_ = nullptr;};
    inline string creationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyState Field Functions 
    bool hasKeyState() const { return this->keyState_ != nullptr;};
    void deleteKeyState() { this->keyState_ = nullptr;};
    inline string keyState() const { DARABONBA_PTR_GET_DEFAULT(keyState_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setKeyState(string keyState) { DARABONBA_PTR_SET_VALUE(keyState_, keyState) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string keyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline GetKMSServiceKeyResponseBodyKmsKeyInfoList& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> creationDate_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> deleteDate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> keyId_ = nullptr;
    std::shared_ptr<string> keyState_ = nullptr;
    std::shared_ptr<string> keyUsage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
