// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDPRODUCEAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class BindProduceAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindProduceAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
    };
    friend void from_json(const Darabonba::Json& j, BindProduceAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserIds, authorizedUserIds_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
    };
    BindProduceAuthorizationRequest() = default ;
    BindProduceAuthorizationRequest(const BindProduceAuthorizationRequest &) = default ;
    BindProduceAuthorizationRequest(BindProduceAuthorizationRequest &&) = default ;
    BindProduceAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindProduceAuthorizationRequest() = default ;
    BindProduceAuthorizationRequest& operator=(const BindProduceAuthorizationRequest &) = default ;
    BindProduceAuthorizationRequest& operator=(BindProduceAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedUserIds_ == nullptr
        && this->bizId_ == nullptr && this->bizType_ == nullptr; };
    // authorizedUserIds Field Functions 
    bool hasAuthorizedUserIds() const { return this->authorizedUserIds_ != nullptr;};
    void deleteAuthorizedUserIds() { this->authorizedUserIds_ = nullptr;};
    inline string getAuthorizedUserIds() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserIds_, "") };
    inline BindProduceAuthorizationRequest& setAuthorizedUserIds(string authorizedUserIds) { DARABONBA_PTR_SET_VALUE(authorizedUserIds_, authorizedUserIds) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline BindProduceAuthorizationRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline BindProduceAuthorizationRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    shared_ptr<string> authorizedUserIds_ {};
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> bizType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
