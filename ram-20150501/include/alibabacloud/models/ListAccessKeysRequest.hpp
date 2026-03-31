// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class ListAccessKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListAccessKeysRequest() = default ;
    ListAccessKeysRequest(const ListAccessKeysRequest &) = default ;
    ListAccessKeysRequest(ListAccessKeysRequest &&) = default ;
    ListAccessKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessKeysRequest() = default ;
    ListAccessKeysRequest& operator=(const ListAccessKeysRequest &) = default ;
    ListAccessKeysRequest& operator=(ListAccessKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userName_ == nullptr; };
    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListAccessKeysRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The name of the RAM user. If a RAM user calls this operation and does not specify this parameter, the AccessKey pairs of the RAM user are returned.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
