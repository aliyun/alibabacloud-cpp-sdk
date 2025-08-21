// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODYPASSKEYS_HPP_
#define ALIBABACLOUD_MODELS_LISTPASSKEYSRESPONSEBODYPASSKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListPasskeysResponseBodyPasskeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPasskeysResponseBodyPasskeys& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(LastUseDate, lastUseDate_);
      DARABONBA_PTR_TO_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_TO_JSON(PasskeyName, passkeyName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPasskeysResponseBodyPasskeys& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(LastUseDate, lastUseDate_);
      DARABONBA_PTR_FROM_JSON(PasskeyId, passkeyId_);
      DARABONBA_PTR_FROM_JSON(PasskeyName, passkeyName_);
    };
    ListPasskeysResponseBodyPasskeys() = default ;
    ListPasskeysResponseBodyPasskeys(const ListPasskeysResponseBodyPasskeys &) = default ;
    ListPasskeysResponseBodyPasskeys(ListPasskeysResponseBodyPasskeys &&) = default ;
    ListPasskeysResponseBodyPasskeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPasskeysResponseBodyPasskeys() = default ;
    ListPasskeysResponseBodyPasskeys& operator=(const ListPasskeysResponseBodyPasskeys &) = default ;
    ListPasskeysResponseBodyPasskeys& operator=(ListPasskeysResponseBodyPasskeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createDate_ != nullptr
        && this->lastUseDate_ != nullptr && this->passkeyId_ != nullptr && this->passkeyName_ != nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListPasskeysResponseBodyPasskeys& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // lastUseDate Field Functions 
    bool hasLastUseDate() const { return this->lastUseDate_ != nullptr;};
    void deleteLastUseDate() { this->lastUseDate_ = nullptr;};
    inline string lastUseDate() const { DARABONBA_PTR_GET_DEFAULT(lastUseDate_, "") };
    inline ListPasskeysResponseBodyPasskeys& setLastUseDate(string lastUseDate) { DARABONBA_PTR_SET_VALUE(lastUseDate_, lastUseDate) };


    // passkeyId Field Functions 
    bool hasPasskeyId() const { return this->passkeyId_ != nullptr;};
    void deletePasskeyId() { this->passkeyId_ = nullptr;};
    inline string passkeyId() const { DARABONBA_PTR_GET_DEFAULT(passkeyId_, "") };
    inline ListPasskeysResponseBodyPasskeys& setPasskeyId(string passkeyId) { DARABONBA_PTR_SET_VALUE(passkeyId_, passkeyId) };


    // passkeyName Field Functions 
    bool hasPasskeyName() const { return this->passkeyName_ != nullptr;};
    void deletePasskeyName() { this->passkeyName_ = nullptr;};
    inline string passkeyName() const { DARABONBA_PTR_GET_DEFAULT(passkeyName_, "") };
    inline ListPasskeysResponseBodyPasskeys& setPasskeyName(string passkeyName) { DARABONBA_PTR_SET_VALUE(passkeyName_, passkeyName) };


  protected:
    // The time when the passkey was created. The value is a timestamp.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the passkey was last used. The value is a timestamp.
    std::shared_ptr<string> lastUseDate_ = nullptr;
    // The ID of the passkey.
    std::shared_ptr<string> passkeyId_ = nullptr;
    // The name of the passkey.
    std::shared_ptr<string> passkeyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
