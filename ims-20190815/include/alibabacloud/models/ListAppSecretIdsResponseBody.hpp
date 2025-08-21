// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppSecretIdsResponseBodyAppSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAppSecretIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppSecretIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecrets, appSecrets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppSecretIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecrets, appSecrets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAppSecretIdsResponseBody() = default ;
    ListAppSecretIdsResponseBody(const ListAppSecretIdsResponseBody &) = default ;
    ListAppSecretIdsResponseBody(ListAppSecretIdsResponseBody &&) = default ;
    ListAppSecretIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppSecretIdsResponseBody() = default ;
    ListAppSecretIdsResponseBody& operator=(const ListAppSecretIdsResponseBody &) = default ;
    ListAppSecretIdsResponseBody& operator=(ListAppSecretIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecrets_ != nullptr
        && this->requestId_ != nullptr; };
    // appSecrets Field Functions 
    bool hasAppSecrets() const { return this->appSecrets_ != nullptr;};
    void deleteAppSecrets() { this->appSecrets_ = nullptr;};
    inline const ListAppSecretIdsResponseBodyAppSecrets & appSecrets() const { DARABONBA_PTR_GET_CONST(appSecrets_, ListAppSecretIdsResponseBodyAppSecrets) };
    inline ListAppSecretIdsResponseBodyAppSecrets appSecrets() { DARABONBA_PTR_GET(appSecrets_, ListAppSecretIdsResponseBodyAppSecrets) };
    inline ListAppSecretIdsResponseBody& setAppSecrets(const ListAppSecretIdsResponseBodyAppSecrets & appSecrets) { DARABONBA_PTR_SET_VALUE(appSecrets_, appSecrets) };
    inline ListAppSecretIdsResponseBody& setAppSecrets(ListAppSecretIdsResponseBodyAppSecrets && appSecrets) { DARABONBA_PTR_SET_RVALUE(appSecrets_, appSecrets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppSecretIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application secret.
    std::shared_ptr<ListAppSecretIdsResponseBodyAppSecrets> appSecrets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
