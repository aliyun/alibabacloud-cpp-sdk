// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PushDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(PublishRemark, publishRemark_);
      DARABONBA_PTR_TO_JSON(ReceiverAccount, receiverAccount_);
    };
    friend void from_json(const Darabonba::Json& j, PushDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(PublishRemark, publishRemark_);
      DARABONBA_PTR_FROM_JSON(ReceiverAccount, receiverAccount_);
    };
    PushDomainsRequest() = default ;
    PushDomainsRequest(const PushDomainsRequest &) = default ;
    PushDomainsRequest(PushDomainsRequest &&) = default ;
    PushDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushDomainsRequest() = default ;
    PushDomainsRequest& operator=(const PushDomainsRequest &) = default ;
    PushDomainsRequest& operator=(PushDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainList_ == nullptr
        && return this->outBizId_ == nullptr && return this->publishRemark_ == nullptr && return this->receiverAccount_ == nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & domainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> domainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline PushDomainsRequest& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline PushDomainsRequest& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline PushDomainsRequest& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // publishRemark Field Functions 
    bool hasPublishRemark() const { return this->publishRemark_ != nullptr;};
    void deletePublishRemark() { this->publishRemark_ = nullptr;};
    inline string publishRemark() const { DARABONBA_PTR_GET_DEFAULT(publishRemark_, "") };
    inline PushDomainsRequest& setPublishRemark(string publishRemark) { DARABONBA_PTR_SET_VALUE(publishRemark_, publishRemark) };


    // receiverAccount Field Functions 
    bool hasReceiverAccount() const { return this->receiverAccount_ != nullptr;};
    void deleteReceiverAccount() { this->receiverAccount_ = nullptr;};
    inline string receiverAccount() const { DARABONBA_PTR_GET_DEFAULT(receiverAccount_, "") };
    inline PushDomainsRequest& setReceiverAccount(string receiverAccount) { DARABONBA_PTR_SET_VALUE(receiverAccount_, receiverAccount) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> domainList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<string> publishRemark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> receiverAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
