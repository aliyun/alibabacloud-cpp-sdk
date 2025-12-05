// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
    };
    DeleteAliasRequest() = default ;
    DeleteAliasRequest(const DeleteAliasRequest &) = default ;
    DeleteAliasRequest(DeleteAliasRequest &&) = default ;
    DeleteAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAliasRequest() = default ;
    DeleteAliasRequest& operator=(const DeleteAliasRequest &) = default ;
    DeleteAliasRequest& operator=(DeleteAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DeleteAliasRequest& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


  protected:
    // The alias that you want to delete.
    // 
    // The value must be 1 to 255 characters in length and must include the alias/ prefix.
    // 
    // This parameter is required.
    std::shared_ptr<string> aliasName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
