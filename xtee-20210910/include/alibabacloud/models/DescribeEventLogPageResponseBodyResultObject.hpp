// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGPAGERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTLOGPAGERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventLogPageResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventLogPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(mobile, mobile_);
      DARABONBA_PTR_TO_JSON(nickName, nickName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(service, service_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(umid, umid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventLogPageResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(nickName, nickName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(service, service_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(umid, umid_);
    };
    DescribeEventLogPageResponseBodyResultObject() = default ;
    DescribeEventLogPageResponseBodyResultObject(const DescribeEventLogPageResponseBodyResultObject &) = default ;
    DescribeEventLogPageResponseBodyResultObject(DescribeEventLogPageResponseBodyResultObject &&) = default ;
    DescribeEventLogPageResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventLogPageResponseBodyResultObject() = default ;
    DescribeEventLogPageResponseBodyResultObject& operator=(const DescribeEventLogPageResponseBodyResultObject &) = default ;
    DescribeEventLogPageResponseBodyResultObject& operator=(DescribeEventLogPageResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->email_ == nullptr && return this->ip_ == nullptr && return this->mobile_ == nullptr && return this->nickName_ == nullptr && return this->requestId_ == nullptr
        && return this->score_ == nullptr && return this->service_ == nullptr && return this->tags_ == nullptr && return this->timestamp_ == nullptr && return this->umid_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // umid Field Functions 
    bool hasUmid() const { return this->umid_ != nullptr;};
    void deleteUmid() { this->umid_ = nullptr;};
    inline string umid() const { DARABONBA_PTR_GET_DEFAULT(umid_, "") };
    inline DescribeEventLogPageResponseBodyResultObject& setUmid(string umid) { DARABONBA_PTR_SET_VALUE(umid_, umid) };


  protected:
    // Account ID.
    std::shared_ptr<string> accountId_ = nullptr;
    // Email.
    std::shared_ptr<string> email_ = nullptr;
    // IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // Mobile phone number.
    std::shared_ptr<string> mobile_ = nullptr;
    // Nickname.
    std::shared_ptr<string> nickName_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Score.
    std::shared_ptr<string> score_ = nullptr;
    // Event name.
    std::shared_ptr<string> service_ = nullptr;
    // Tags.
    std::shared_ptr<string> tags_ = nullptr;
    // Transaction time.
    std::shared_ptr<string> timestamp_ = nullptr;
    // Device ID.
    std::shared_ptr<string> umid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
