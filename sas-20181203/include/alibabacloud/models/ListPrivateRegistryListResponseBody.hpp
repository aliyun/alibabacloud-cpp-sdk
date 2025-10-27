// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEREGISTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateRegistryListResponseBodyImageRegistryInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPrivateRegistryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateRegistryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRegistryInfos, imageRegistryInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateRegistryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRegistryInfos, imageRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrivateRegistryListResponseBody() = default ;
    ListPrivateRegistryListResponseBody(const ListPrivateRegistryListResponseBody &) = default ;
    ListPrivateRegistryListResponseBody(ListPrivateRegistryListResponseBody &&) = default ;
    ListPrivateRegistryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateRegistryListResponseBody() = default ;
    ListPrivateRegistryListResponseBody& operator=(const ListPrivateRegistryListResponseBody &) = default ;
    ListPrivateRegistryListResponseBody& operator=(ListPrivateRegistryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageRegistryInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageRegistryInfos Field Functions 
    bool hasImageRegistryInfos() const { return this->imageRegistryInfos_ != nullptr;};
    void deleteImageRegistryInfos() { this->imageRegistryInfos_ = nullptr;};
    inline const vector<ListPrivateRegistryListResponseBodyImageRegistryInfos> & imageRegistryInfos() const { DARABONBA_PTR_GET_CONST(imageRegistryInfos_, vector<ListPrivateRegistryListResponseBodyImageRegistryInfos>) };
    inline vector<ListPrivateRegistryListResponseBodyImageRegistryInfos> imageRegistryInfos() { DARABONBA_PTR_GET(imageRegistryInfos_, vector<ListPrivateRegistryListResponseBodyImageRegistryInfos>) };
    inline ListPrivateRegistryListResponseBody& setImageRegistryInfos(const vector<ListPrivateRegistryListResponseBodyImageRegistryInfos> & imageRegistryInfos) { DARABONBA_PTR_SET_VALUE(imageRegistryInfos_, imageRegistryInfos) };
    inline ListPrivateRegistryListResponseBody& setImageRegistryInfos(vector<ListPrivateRegistryListResponseBodyImageRegistryInfos> && imageRegistryInfos) { DARABONBA_PTR_SET_RVALUE(imageRegistryInfos_, imageRegistryInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateRegistryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the image repositories.
    std::shared_ptr<vector<ListPrivateRegistryListResponseBodyImageRegistryInfos>> imageRegistryInfos_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
