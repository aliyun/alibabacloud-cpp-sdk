// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODYFINGERPRINTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODYFINGERPRINTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(LoginTime, loginTime_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(LoginTime, loginTime_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
    };
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates() = default ;
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates(const DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates &) = default ;
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates(DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates &&) = default ;
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates() = default ;
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& operator=(const DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates &) = default ;
    DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& operator=(DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->endUserId_ != nullptr && this->index_ != nullptr && this->loginTime_ != nullptr
        && this->officeSiteId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // loginTime Field Functions 
    bool hasLoginTime() const { return this->loginTime_ != nullptr;};
    void deleteLoginTime() { this->loginTime_ = nullptr;};
    inline string loginTime() const { DARABONBA_PTR_GET_DEFAULT(loginTime_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setLoginTime(string loginTime) { DARABONBA_PTR_SET_VALUE(loginTime_, loginTime) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


  protected:
    // The client ID. The system generates a unique ID for each client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The user ID.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The index.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The logon time.
    std::shared_ptr<string> loginTime_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
