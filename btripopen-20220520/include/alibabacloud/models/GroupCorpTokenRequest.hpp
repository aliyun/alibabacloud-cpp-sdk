// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GROUPCORPTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GROUPCORPTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class GroupCorpTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GroupCorpTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_secret, appSecret_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, GroupCorpTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_secret, appSecret_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
    };
    GroupCorpTokenRequest() = default ;
    GroupCorpTokenRequest(const GroupCorpTokenRequest &) = default ;
    GroupCorpTokenRequest(GroupCorpTokenRequest &&) = default ;
    GroupCorpTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GroupCorpTokenRequest() = default ;
    GroupCorpTokenRequest& operator=(const GroupCorpTokenRequest &) = default ;
    GroupCorpTokenRequest& operator=(GroupCorpTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecret_ != nullptr
        && this->corpId_ != nullptr && this->subCorpId_ != nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline GroupCorpTokenRequest& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GroupCorpTokenRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline GroupCorpTokenRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appSecret_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> corpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
