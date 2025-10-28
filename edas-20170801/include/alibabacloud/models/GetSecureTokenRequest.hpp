// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetSecureTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecureTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecureTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    GetSecureTokenRequest() = default ;
    GetSecureTokenRequest(const GetSecureTokenRequest &) = default ;
    GetSecureTokenRequest(GetSecureTokenRequest &&) = default ;
    GetSecureTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecureTokenRequest() = default ;
    GetSecureTokenRequest& operator=(const GetSecureTokenRequest &) = default ;
    GetSecureTokenRequest& operator=(GetSecureTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetSecureTokenRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of the namespace, such as cn-beijing or cn-beijing:prod````.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
