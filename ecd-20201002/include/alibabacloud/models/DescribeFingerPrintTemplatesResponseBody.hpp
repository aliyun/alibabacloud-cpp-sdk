// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFINGERPRINTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeFingerPrintTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFingerPrintTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FingerPrintTemplates, fingerPrintTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFingerPrintTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FingerPrintTemplates, fingerPrintTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFingerPrintTemplatesResponseBody() = default ;
    DescribeFingerPrintTemplatesResponseBody(const DescribeFingerPrintTemplatesResponseBody &) = default ;
    DescribeFingerPrintTemplatesResponseBody(DescribeFingerPrintTemplatesResponseBody &&) = default ;
    DescribeFingerPrintTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFingerPrintTemplatesResponseBody() = default ;
    DescribeFingerPrintTemplatesResponseBody& operator=(const DescribeFingerPrintTemplatesResponseBody &) = default ;
    DescribeFingerPrintTemplatesResponseBody& operator=(DescribeFingerPrintTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FingerPrintTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FingerPrintTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(LoginTime, loginTime_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      };
      friend void from_json(const Darabonba::Json& j, FingerPrintTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(LoginTime, loginTime_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      };
      FingerPrintTemplates() = default ;
      FingerPrintTemplates(const FingerPrintTemplates &) = default ;
      FingerPrintTemplates(FingerPrintTemplates &&) = default ;
      FingerPrintTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FingerPrintTemplates() = default ;
      FingerPrintTemplates& operator=(const FingerPrintTemplates &) = default ;
      FingerPrintTemplates& operator=(FingerPrintTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->endUserId_ == nullptr && this->index_ == nullptr && this->loginTime_ == nullptr
        && this->officeSiteId_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline FingerPrintTemplates& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline FingerPrintTemplates& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline FingerPrintTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline FingerPrintTemplates& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline FingerPrintTemplates& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // loginTime Field Functions 
      bool hasLoginTime() const { return this->loginTime_ != nullptr;};
      void deleteLoginTime() { this->loginTime_ = nullptr;};
      inline string getLoginTime() const { DARABONBA_PTR_GET_DEFAULT(loginTime_, "") };
      inline FingerPrintTemplates& setLoginTime(string loginTime) { DARABONBA_PTR_SET_VALUE(loginTime_, loginTime) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline FingerPrintTemplates& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    protected:
      // The client ID. The system generates a unique ID for each client.
      shared_ptr<string> clientId_ {};
      // The time when the template was created.
      shared_ptr<string> creationTime_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The user ID.
      shared_ptr<string> endUserId_ {};
      // The index.
      shared_ptr<int64_t> index_ {};
      // The logon time.
      shared_ptr<string> loginTime_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
    };

    virtual bool empty() const override { return this->fingerPrintTemplates_ == nullptr
        && this->requestId_ == nullptr; };
    // fingerPrintTemplates Field Functions 
    bool hasFingerPrintTemplates() const { return this->fingerPrintTemplates_ != nullptr;};
    void deleteFingerPrintTemplates() { this->fingerPrintTemplates_ = nullptr;};
    inline const vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates> & getFingerPrintTemplates() const { DARABONBA_PTR_GET_CONST(fingerPrintTemplates_, vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates>) };
    inline vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates> getFingerPrintTemplates() { DARABONBA_PTR_GET(fingerPrintTemplates_, vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates>) };
    inline DescribeFingerPrintTemplatesResponseBody& setFingerPrintTemplates(const vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates> & fingerPrintTemplates) { DARABONBA_PTR_SET_VALUE(fingerPrintTemplates_, fingerPrintTemplates) };
    inline DescribeFingerPrintTemplatesResponseBody& setFingerPrintTemplates(vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates> && fingerPrintTemplates) { DARABONBA_PTR_SET_RVALUE(fingerPrintTemplates_, fingerPrintTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFingerPrintTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The fingerprint templates.
    shared_ptr<vector<DescribeFingerPrintTemplatesResponseBody::FingerPrintTemplates>> fingerPrintTemplates_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
