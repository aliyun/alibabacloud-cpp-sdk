// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODYALIASESALIAS_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESRESPONSEBODYALIASESALIAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListAliasesResponseBodyAliasesAlias : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesResponseBodyAliasesAlias& obj) { 
      DARABONBA_PTR_TO_JSON(AliasArn, aliasArn_);
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesResponseBodyAliasesAlias& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasArn, aliasArn_);
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
    };
    ListAliasesResponseBodyAliasesAlias() = default ;
    ListAliasesResponseBodyAliasesAlias(const ListAliasesResponseBodyAliasesAlias &) = default ;
    ListAliasesResponseBodyAliasesAlias(ListAliasesResponseBodyAliasesAlias &&) = default ;
    ListAliasesResponseBodyAliasesAlias(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesResponseBodyAliasesAlias() = default ;
    ListAliasesResponseBodyAliasesAlias& operator=(const ListAliasesResponseBodyAliasesAlias &) = default ;
    ListAliasesResponseBodyAliasesAlias& operator=(ListAliasesResponseBodyAliasesAlias &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasArn_ == nullptr
        && return this->aliasName_ == nullptr && return this->keyId_ == nullptr; };
    // aliasArn Field Functions 
    bool hasAliasArn() const { return this->aliasArn_ != nullptr;};
    void deleteAliasArn() { this->aliasArn_ = nullptr;};
    inline string aliasArn() const { DARABONBA_PTR_GET_DEFAULT(aliasArn_, "") };
    inline ListAliasesResponseBodyAliasesAlias& setAliasArn(string aliasArn) { DARABONBA_PTR_SET_VALUE(aliasArn_, aliasArn) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline ListAliasesResponseBodyAliasesAlias& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ListAliasesResponseBodyAliasesAlias& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the alias.
    std::shared_ptr<string> aliasArn_ = nullptr;
    // The ID of the alias.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The CMK to which the alias belongs.
    std::shared_ptr<string> keyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
