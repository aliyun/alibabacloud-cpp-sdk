// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateRegistryTypeResponseBodyRegistryTypeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RegistryTypeInfos, registryTypeInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RegistryTypeInfos, registryTypeInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateRegistryTypeResponseBody() = default ;
    ListPrivateRegistryTypeResponseBody(const ListPrivateRegistryTypeResponseBody &) = default ;
    ListPrivateRegistryTypeResponseBody(ListPrivateRegistryTypeResponseBody &&) = default ;
    ListPrivateRegistryTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryTypeResponseBody() = default ;
    ListPrivateRegistryTypeResponseBody& operator=(const ListPrivateRegistryTypeResponseBody &) = default ;
    ListPrivateRegistryTypeResponseBody& operator=(ListPrivateRegistryTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->registryTypeInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // registryTypeInfos Field Functions 
    bool hasRegistryTypeInfos() const { return this->registryTypeInfos_ != nullptr;};
    void deleteRegistryTypeInfos() { this->registryTypeInfos_ = nullptr;};
    inline const vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos> & registryTypeInfos() const { DARABONBA_PTR_GET_CONST(registryTypeInfos_, vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos>) };
    inline vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos> registryTypeInfos() { DARABONBA_PTR_GET(registryTypeInfos_, vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos>) };
    inline ListPrivateRegistryTypeResponseBody& setRegistryTypeInfos(const vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos> & registryTypeInfos) { DARABONBA_PTR_SET_VALUE(registryTypeInfos_, registryTypeInfos) };
    inline ListPrivateRegistryTypeResponseBody& setRegistryTypeInfos(vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos> && registryTypeInfos) { DARABONBA_PTR_SET_RVALUE(registryTypeInfos_, registryTypeInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateRegistryTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of image repository types.
    std::shared_ptr<vector<ListPrivateRegistryTypeResponseBodyRegistryTypeInfos>> registryTypeInfos_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
