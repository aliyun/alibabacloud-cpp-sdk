// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCEAUTHORIZATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCEAUTHORIZATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ListProduceAuthorizationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProduceAuthorizationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserName, authorizedUserName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProduceAuthorizationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserName, authorizedUserName_);
    };
    ListProduceAuthorizationResponseBodyData() = default ;
    ListProduceAuthorizationResponseBodyData(const ListProduceAuthorizationResponseBodyData &) = default ;
    ListProduceAuthorizationResponseBodyData(ListProduceAuthorizationResponseBodyData &&) = default ;
    ListProduceAuthorizationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProduceAuthorizationResponseBodyData() = default ;
    ListProduceAuthorizationResponseBodyData& operator=(const ListProduceAuthorizationResponseBodyData &) = default ;
    ListProduceAuthorizationResponseBodyData& operator=(ListProduceAuthorizationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedUserId_ == nullptr
        && return this->authorizedUserName_ == nullptr; };
    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline string authorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
    inline ListProduceAuthorizationResponseBodyData& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // authorizedUserName Field Functions 
    bool hasAuthorizedUserName() const { return this->authorizedUserName_ != nullptr;};
    void deleteAuthorizedUserName() { this->authorizedUserName_ = nullptr;};
    inline string authorizedUserName() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserName_, "") };
    inline ListProduceAuthorizationResponseBodyData& setAuthorizedUserName(string authorizedUserName) { DARABONBA_PTR_SET_VALUE(authorizedUserName_, authorizedUserName) };


  protected:
    std::shared_ptr<string> authorizedUserId_ = nullptr;
    std::shared_ptr<string> authorizedUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
