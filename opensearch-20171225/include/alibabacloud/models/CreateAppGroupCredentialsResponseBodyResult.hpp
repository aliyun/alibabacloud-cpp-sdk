// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPCREDENTIALSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppGroupCredentialsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupCredentialsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupCredentialsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appGroupId, appGroupId_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAppGroupCredentialsResponseBodyResult() = default ;
    CreateAppGroupCredentialsResponseBodyResult(const CreateAppGroupCredentialsResponseBodyResult &) = default ;
    CreateAppGroupCredentialsResponseBodyResult(CreateAppGroupCredentialsResponseBodyResult &&) = default ;
    CreateAppGroupCredentialsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupCredentialsResponseBodyResult() = default ;
    CreateAppGroupCredentialsResponseBodyResult& operator=(const CreateAppGroupCredentialsResponseBodyResult &) = default ;
    CreateAppGroupCredentialsResponseBodyResult& operator=(CreateAppGroupCredentialsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appGroupId_ == nullptr
        && return this->enabled_ == nullptr && return this->token_ == nullptr && return this->type_ == nullptr; };
    // appGroupId Field Functions 
    bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
    void deleteAppGroupId() { this->appGroupId_ = nullptr;};
    inline int64_t appGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
    inline CreateAppGroupCredentialsResponseBodyResult& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAppGroupCredentialsResponseBodyResult& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateAppGroupCredentialsResponseBodyResult& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAppGroupCredentialsResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> appGroupId_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
