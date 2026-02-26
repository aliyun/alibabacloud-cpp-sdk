// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALIPAYURLRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEALIPAYURLRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CreateAliPayUrlResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAliPayUrlResult& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(memberId, memberId_);
      DARABONBA_PTR_TO_JSON(zftWithholdSignUrl, zftWithholdSignUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAliPayUrlResult& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(memberId, memberId_);
      DARABONBA_PTR_FROM_JSON(zftWithholdSignUrl, zftWithholdSignUrl_);
    };
    CreateAliPayUrlResult() = default ;
    CreateAliPayUrlResult(const CreateAliPayUrlResult &) = default ;
    CreateAliPayUrlResult(CreateAliPayUrlResult &&) = default ;
    CreateAliPayUrlResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAliPayUrlResult() = default ;
    CreateAliPayUrlResult& operator=(const CreateAliPayUrlResult &) = default ;
    CreateAliPayUrlResult& operator=(CreateAliPayUrlResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->memberId_ == nullptr && this->zftWithholdSignUrl_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateAliPayUrlResult& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline CreateAliPayUrlResult& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // zftWithholdSignUrl Field Functions 
    bool hasZftWithholdSignUrl() const { return this->zftWithholdSignUrl_ != nullptr;};
    void deleteZftWithholdSignUrl() { this->zftWithholdSignUrl_ = nullptr;};
    inline string getZftWithholdSignUrl() const { DARABONBA_PTR_GET_DEFAULT(zftWithholdSignUrl_, "") };
    inline CreateAliPayUrlResult& setZftWithholdSignUrl(string zftWithholdSignUrl) { DARABONBA_PTR_SET_VALUE(zftWithholdSignUrl_, zftWithholdSignUrl) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> memberId_ {};
    shared_ptr<string> zftWithholdSignUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
