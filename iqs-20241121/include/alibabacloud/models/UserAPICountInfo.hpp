// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USERAPICOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_USERAPICOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class UserAPICountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UserAPICountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apiType, apiType_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(usedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, UserAPICountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apiType, apiType_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(usedCount, usedCount_);
    };
    UserAPICountInfo() = default ;
    UserAPICountInfo(const UserAPICountInfo &) = default ;
    UserAPICountInfo(UserAPICountInfo &&) = default ;
    UserAPICountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UserAPICountInfo() = default ;
    UserAPICountInfo& operator=(const UserAPICountInfo &) = default ;
    UserAPICountInfo& operator=(UserAPICountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiType_ == nullptr
        && this->scope_ == nullptr && this->usedCount_ == nullptr; };
    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline UserAPICountInfo& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UserAPICountInfo& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int32_t getUsedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0) };
    inline UserAPICountInfo& setUsedCount(int32_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    shared_ptr<string> apiType_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<int32_t> usedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
