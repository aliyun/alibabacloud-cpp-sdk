// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEncryptionKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionKeyList, encryptionKeyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionKeyList, encryptionKeyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterEncryptionKeyResponseBody() = default ;
    DescribeDBClusterEncryptionKeyResponseBody(const DescribeDBClusterEncryptionKeyResponseBody &) = default ;
    DescribeDBClusterEncryptionKeyResponseBody(DescribeDBClusterEncryptionKeyResponseBody &&) = default ;
    DescribeDBClusterEncryptionKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEncryptionKeyResponseBody() = default ;
    DescribeDBClusterEncryptionKeyResponseBody& operator=(const DescribeDBClusterEncryptionKeyResponseBody &) = default ;
    DescribeDBClusterEncryptionKeyResponseBody& operator=(DescribeDBClusterEncryptionKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EncryptionKeyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EncryptionKeyList& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
        DARABONBA_PTR_TO_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
        DARABONBA_PTR_TO_JSON(KeyType, keyType_);
        DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
        DARABONBA_PTR_TO_JSON(MaterialExpireTime, materialExpireTime_);
        DARABONBA_PTR_TO_JSON(Origin, origin_);
        DARABONBA_PTR_TO_JSON(UsedBy, usedBy_);
      };
      friend void from_json(const Darabonba::Json& j, EncryptionKeyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
        DARABONBA_PTR_FROM_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
        DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
        DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
        DARABONBA_PTR_FROM_JSON(MaterialExpireTime, materialExpireTime_);
        DARABONBA_PTR_FROM_JSON(Origin, origin_);
        DARABONBA_PTR_FROM_JSON(UsedBy, usedBy_);
      };
      EncryptionKeyList() = default ;
      EncryptionKeyList(const EncryptionKeyList &) = default ;
      EncryptionKeyList(EncryptionKeyList &&) = default ;
      EncryptionKeyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EncryptionKeyList() = default ;
      EncryptionKeyList& operator=(const EncryptionKeyList &) = default ;
      EncryptionKeyList& operator=(EncryptionKeyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->creator_ == nullptr && this->deleteDate_ == nullptr && this->description_ == nullptr && this->encryptionKey_ == nullptr && this->encryptionKeyStatus_ == nullptr
        && this->keyType_ == nullptr && this->keyUsage_ == nullptr && this->materialExpireTime_ == nullptr && this->origin_ == nullptr && this->usedBy_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline EncryptionKeyList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline EncryptionKeyList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // deleteDate Field Functions 
      bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
      void deleteDeleteDate() { this->deleteDate_ = nullptr;};
      inline string getDeleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
      inline EncryptionKeyList& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline EncryptionKeyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // encryptionKey Field Functions 
      bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
      void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
      inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
      inline EncryptionKeyList& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


      // encryptionKeyStatus Field Functions 
      bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
      void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
      inline string getEncryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
      inline EncryptionKeyList& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


      // keyType Field Functions 
      bool hasKeyType() const { return this->keyType_ != nullptr;};
      void deleteKeyType() { this->keyType_ = nullptr;};
      inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
      inline EncryptionKeyList& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


      // keyUsage Field Functions 
      bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
      void deleteKeyUsage() { this->keyUsage_ = nullptr;};
      inline string getKeyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
      inline EncryptionKeyList& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


      // materialExpireTime Field Functions 
      bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
      void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
      inline string getMaterialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
      inline EncryptionKeyList& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline EncryptionKeyList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // usedBy Field Functions 
      bool hasUsedBy() const { return this->usedBy_ != nullptr;};
      void deleteUsedBy() { this->usedBy_ = nullptr;};
      inline string getUsedBy() const { DARABONBA_PTR_GET_DEFAULT(usedBy_, "") };
      inline EncryptionKeyList& setUsedBy(string usedBy) { DARABONBA_PTR_SET_VALUE(usedBy_, usedBy) };


    protected:
      shared_ptr<string> aliasName_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> deleteDate_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> encryptionKey_ {};
      shared_ptr<string> encryptionKeyStatus_ {};
      shared_ptr<string> keyType_ {};
      shared_ptr<string> keyUsage_ {};
      shared_ptr<string> materialExpireTime_ {};
      shared_ptr<string> origin_ {};
      shared_ptr<string> usedBy_ {};
    };

    virtual bool empty() const override { return this->encryptionKeyList_ == nullptr
        && this->requestId_ == nullptr; };
    // encryptionKeyList Field Functions 
    bool hasEncryptionKeyList() const { return this->encryptionKeyList_ != nullptr;};
    void deleteEncryptionKeyList() { this->encryptionKeyList_ = nullptr;};
    inline const vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList> & getEncryptionKeyList() const { DARABONBA_PTR_GET_CONST(encryptionKeyList_, vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList>) };
    inline vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList> getEncryptionKeyList() { DARABONBA_PTR_GET(encryptionKeyList_, vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList>) };
    inline DescribeDBClusterEncryptionKeyResponseBody& setEncryptionKeyList(const vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList> & encryptionKeyList) { DARABONBA_PTR_SET_VALUE(encryptionKeyList_, encryptionKeyList) };
    inline DescribeDBClusterEncryptionKeyResponseBody& setEncryptionKeyList(vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList> && encryptionKeyList) { DARABONBA_PTR_SET_RVALUE(encryptionKeyList_, encryptionKeyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDBClusterEncryptionKeyResponseBody::EncryptionKeyList>> encryptionKeyList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
