// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPIMAGESECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEdgeContainerAppImageSecretsResponseBodyImageSecretList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppImageSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppImageSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageSecretList, imageSecretList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppImageSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageSecretList, imageSecretList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEdgeContainerAppImageSecretsResponseBody() = default ;
    ListEdgeContainerAppImageSecretsResponseBody(const ListEdgeContainerAppImageSecretsResponseBody &) = default ;
    ListEdgeContainerAppImageSecretsResponseBody(ListEdgeContainerAppImageSecretsResponseBody &&) = default ;
    ListEdgeContainerAppImageSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppImageSecretsResponseBody() = default ;
    ListEdgeContainerAppImageSecretsResponseBody& operator=(const ListEdgeContainerAppImageSecretsResponseBody &) = default ;
    ListEdgeContainerAppImageSecretsResponseBody& operator=(ListEdgeContainerAppImageSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageSecretList_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageSecretList Field Functions 
    bool hasImageSecretList() const { return this->imageSecretList_ != nullptr;};
    void deleteImageSecretList() { this->imageSecretList_ = nullptr;};
    inline const vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList> & imageSecretList() const { DARABONBA_PTR_GET_CONST(imageSecretList_, vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList>) };
    inline vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList> imageSecretList() { DARABONBA_PTR_GET(imageSecretList_, vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList>) };
    inline ListEdgeContainerAppImageSecretsResponseBody& setImageSecretList(const vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList> & imageSecretList) { DARABONBA_PTR_SET_VALUE(imageSecretList_, imageSecretList) };
    inline ListEdgeContainerAppImageSecretsResponseBody& setImageSecretList(vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList> && imageSecretList) { DARABONBA_PTR_SET_RVALUE(imageSecretList_, imageSecretList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEdgeContainerAppImageSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListEdgeContainerAppImageSecretsResponseBodyImageSecretList>> imageSecretList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
