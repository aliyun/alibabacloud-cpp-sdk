// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class GetUserGroupInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
    };
    GetUserGroupInfoRequest() = default ;
    GetUserGroupInfoRequest(const GetUserGroupInfoRequest &) = default ;
    GetUserGroupInfoRequest(GetUserGroupInfoRequest &&) = default ;
    GetUserGroupInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupInfoRequest() = default ;
    GetUserGroupInfoRequest& operator=(const GetUserGroupInfoRequest &) = default ;
    GetUserGroupInfoRequest& operator=(GetUserGroupInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline GetUserGroupInfoRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // Keyword of the user group name.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
