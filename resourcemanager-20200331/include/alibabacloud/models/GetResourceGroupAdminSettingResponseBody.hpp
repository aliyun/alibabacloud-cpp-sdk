// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPADMINSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPADMINSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetResourceGroupAdminSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupAdminSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorAsAdmin, creatorAsAdmin_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupAdminSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorAsAdmin, creatorAsAdmin_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceGroupAdminSettingResponseBody() = default ;
    GetResourceGroupAdminSettingResponseBody(const GetResourceGroupAdminSettingResponseBody &) = default ;
    GetResourceGroupAdminSettingResponseBody(GetResourceGroupAdminSettingResponseBody &&) = default ;
    GetResourceGroupAdminSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupAdminSettingResponseBody() = default ;
    GetResourceGroupAdminSettingResponseBody& operator=(const GetResourceGroupAdminSettingResponseBody &) = default ;
    GetResourceGroupAdminSettingResponseBody& operator=(GetResourceGroupAdminSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorAsAdmin_ == nullptr
        && return this->requestId_ == nullptr; };
    // creatorAsAdmin Field Functions 
    bool hasCreatorAsAdmin() const { return this->creatorAsAdmin_ != nullptr;};
    void deleteCreatorAsAdmin() { this->creatorAsAdmin_ = nullptr;};
    inline bool creatorAsAdmin() const { DARABONBA_PTR_GET_DEFAULT(creatorAsAdmin_, false) };
    inline GetResourceGroupAdminSettingResponseBody& setCreatorAsAdmin(bool creatorAsAdmin) { DARABONBA_PTR_SET_VALUE(creatorAsAdmin_, creatorAsAdmin) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupAdminSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> creatorAsAdmin_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
