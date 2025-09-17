// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODYACCESSTOKENSACCESSTOKEN_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODYACCESSTOKENSACCESSTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ListAccessTokensResponseBodyAccessTokensAccessToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessTokensResponseBodyAccessTokensAccessToken& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegisteredCount, registeredCount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeToLiveInDays, timeToLiveInDays_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessTokensResponseBodyAccessTokensAccessToken& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegisteredCount, registeredCount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeToLiveInDays, timeToLiveInDays_);
    };
    ListAccessTokensResponseBodyAccessTokensAccessToken() = default ;
    ListAccessTokensResponseBodyAccessTokensAccessToken(const ListAccessTokensResponseBodyAccessTokensAccessToken &) = default ;
    ListAccessTokensResponseBodyAccessTokensAccessToken(ListAccessTokensResponseBodyAccessTokensAccessToken &&) = default ;
    ListAccessTokensResponseBodyAccessTokensAccessToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessTokensResponseBodyAccessTokensAccessToken() = default ;
    ListAccessTokensResponseBodyAccessTokensAccessToken& operator=(const ListAccessTokensResponseBodyAccessTokensAccessToken &) = default ;
    ListAccessTokensResponseBodyAccessTokensAccessToken& operator=(ListAccessTokensResponseBodyAccessTokensAccessToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenId_ != nullptr
        && this->count_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->registeredCount_ != nullptr
        && this->status_ != nullptr && this->timeToLiveInDays_ != nullptr; };
    // accessTokenId Field Functions 
    bool hasAccessTokenId() const { return this->accessTokenId_ != nullptr;};
    void deleteAccessTokenId() { this->accessTokenId_ = nullptr;};
    inline string accessTokenId() const { DARABONBA_PTR_GET_DEFAULT(accessTokenId_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setAccessTokenId(string accessTokenId) { DARABONBA_PTR_SET_VALUE(accessTokenId_, accessTokenId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // registeredCount Field Functions 
    bool hasRegisteredCount() const { return this->registeredCount_ != nullptr;};
    void deleteRegisteredCount() { this->registeredCount_ = nullptr;};
    inline string registeredCount() const { DARABONBA_PTR_GET_DEFAULT(registeredCount_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setRegisteredCount(string registeredCount) { DARABONBA_PTR_SET_VALUE(registeredCount_, registeredCount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeToLiveInDays Field Functions 
    bool hasTimeToLiveInDays() const { return this->timeToLiveInDays_ != nullptr;};
    void deleteTimeToLiveInDays() { this->timeToLiveInDays_ = nullptr;};
    inline string timeToLiveInDays() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInDays_, "") };
    inline ListAccessTokensResponseBodyAccessTokensAccessToken& setTimeToLiveInDays(string timeToLiveInDays) { DARABONBA_PTR_SET_VALUE(timeToLiveInDays_, timeToLiveInDays) };


  protected:
    // The ID of the activation code.
    std::shared_ptr<string> accessTokenId_ = nullptr;
    // The maximum number of times that the activation code can be used. Valid values: 1 to 1000.
    // 
    // Default value: 100.
    std::shared_ptr<string> count_ = nullptr;
    // The time when the activation code was created. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the activation code.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the activation code.
    std::shared_ptr<string> name_ = nullptr;
    // The number of migration sources whose information has been imported to Server Migration Center (SMC) by using the activation code.
    std::shared_ptr<string> registeredCount_ = nullptr;
    // The status of the activation code. Valid values:
    // 
    // *   activated
    // *   unactivated
    // *   expired
    std::shared_ptr<string> status_ = nullptr;
    // The validity period of the activation code. Unit: day. Valid values: 1 to 90. Default value: 30.
    std::shared_ptr<string> timeToLiveInDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
