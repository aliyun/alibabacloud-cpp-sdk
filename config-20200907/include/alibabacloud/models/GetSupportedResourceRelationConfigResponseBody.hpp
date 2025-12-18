// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetSupportedResourceRelationConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedResourceRelationConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRelationConfigList, resourceRelationConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedResourceRelationConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRelationConfigList, resourceRelationConfigList_);
    };
    GetSupportedResourceRelationConfigResponseBody() = default ;
    GetSupportedResourceRelationConfigResponseBody(const GetSupportedResourceRelationConfigResponseBody &) = default ;
    GetSupportedResourceRelationConfigResponseBody(GetSupportedResourceRelationConfigResponseBody &&) = default ;
    GetSupportedResourceRelationConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedResourceRelationConfigResponseBody() = default ;
    GetSupportedResourceRelationConfigResponseBody& operator=(const GetSupportedResourceRelationConfigResponseBody &) = default ;
    GetSupportedResourceRelationConfigResponseBody& operator=(GetSupportedResourceRelationConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceRelationConfigList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupportedResourceRelationConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRelationConfigList Field Functions 
    bool hasResourceRelationConfigList() const { return this->resourceRelationConfigList_ != nullptr;};
    void deleteResourceRelationConfigList() { this->resourceRelationConfigList_ = nullptr;};
    inline const vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList> & resourceRelationConfigList() const { DARABONBA_PTR_GET_CONST(resourceRelationConfigList_, vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList>) };
    inline vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList> resourceRelationConfigList() { DARABONBA_PTR_GET(resourceRelationConfigList_, vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList>) };
    inline GetSupportedResourceRelationConfigResponseBody& setResourceRelationConfigList(const vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList> & resourceRelationConfigList) { DARABONBA_PTR_SET_VALUE(resourceRelationConfigList_, resourceRelationConfigList) };
    inline GetSupportedResourceRelationConfigResponseBody& setResourceRelationConfigList(vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList> && resourceRelationConfigList) { DARABONBA_PTR_SET_RVALUE(resourceRelationConfigList_, resourceRelationConfigList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that contains the relationships.
    std::shared_ptr<vector<GetSupportedResourceRelationConfigResponseBodyResourceRelationConfigList>> resourceRelationConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
