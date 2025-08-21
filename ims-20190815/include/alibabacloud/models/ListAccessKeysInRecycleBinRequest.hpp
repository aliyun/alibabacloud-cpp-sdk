// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSINRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAccessKeysInRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysInRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysInRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListAccessKeysInRecycleBinRequest() = default ;
    ListAccessKeysInRecycleBinRequest(const ListAccessKeysInRecycleBinRequest &) = default ;
    ListAccessKeysInRecycleBinRequest(ListAccessKeysInRecycleBinRequest &&) = default ;
    ListAccessKeysInRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysInRecycleBinRequest() = default ;
    ListAccessKeysInRecycleBinRequest& operator=(const ListAccessKeysInRecycleBinRequest &) = default ;
    ListAccessKeysInRecycleBinRequest& operator=(ListAccessKeysInRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAccessKeysInRecycleBinRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the Resource Access Management (RAM) user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
