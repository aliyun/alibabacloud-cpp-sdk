// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINSPECIALBIZDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryDomainSpecialBizDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainSpecialBizDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainSpecialBizDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainSpecialBizDetailRequest() = default ;
    QueryDomainSpecialBizDetailRequest(const QueryDomainSpecialBizDetailRequest &) = default ;
    QueryDomainSpecialBizDetailRequest(QueryDomainSpecialBizDetailRequest &&) = default ;
    QueryDomainSpecialBizDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainSpecialBizDetailRequest() = default ;
    QueryDomainSpecialBizDetailRequest& operator=(const QueryDomainSpecialBizDetailRequest &) = default ;
    QueryDomainSpecialBizDetailRequest& operator=(QueryDomainSpecialBizDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline QueryDomainSpecialBizDetailRequest& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainSpecialBizDetailRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The business ID.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
