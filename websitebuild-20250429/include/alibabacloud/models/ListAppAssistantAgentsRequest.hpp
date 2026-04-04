// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPASSISTANTAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPASSISTANTAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppAssistantAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppAssistantAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppAssistantAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
    };
    ListAppAssistantAgentsRequest() = default ;
    ListAppAssistantAgentsRequest(const ListAppAssistantAgentsRequest &) = default ;
    ListAppAssistantAgentsRequest(ListAppAssistantAgentsRequest &&) = default ;
    ListAppAssistantAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppAssistantAgentsRequest() = default ;
    ListAppAssistantAgentsRequest& operator=(const ListAppAssistantAgentsRequest &) = default ;
    ListAppAssistantAgentsRequest& operator=(ListAppAssistantAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->platformType_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListAppAssistantAgentsRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline ListAppAssistantAgentsRequest& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> platformType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
