// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CORPTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CORPTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CorpTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CorpTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_secret, appSecret_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CorpTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_secret, appSecret_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CorpTokenRequest() = default ;
    CorpTokenRequest(const CorpTokenRequest &) = default ;
    CorpTokenRequest(CorpTokenRequest &&) = default ;
    CorpTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CorpTokenRequest() = default ;
    CorpTokenRequest& operator=(const CorpTokenRequest &) = default ;
    CorpTokenRequest& operator=(CorpTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecret_ != nullptr
        && this->corpId_ != nullptr && this->type_ != nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline CorpTokenRequest& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CorpTokenRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CorpTokenRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appSecret_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> corpId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
