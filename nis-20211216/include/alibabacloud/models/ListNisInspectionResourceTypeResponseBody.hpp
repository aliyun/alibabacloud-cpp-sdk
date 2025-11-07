// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNISINSPECTIONRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNISINSPECTIONRESOURCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNisInspectionResourceTypeResponseBodyResourceTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class ListNisInspectionResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNisInspectionResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, ListNisInspectionResourceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
    };
    ListNisInspectionResourceTypeResponseBody() = default ;
    ListNisInspectionResourceTypeResponseBody(const ListNisInspectionResourceTypeResponseBody &) = default ;
    ListNisInspectionResourceTypeResponseBody(ListNisInspectionResourceTypeResponseBody &&) = default ;
    ListNisInspectionResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNisInspectionResourceTypeResponseBody() = default ;
    ListNisInspectionResourceTypeResponseBody& operator=(const ListNisInspectionResourceTypeResponseBody &) = default ;
    ListNisInspectionResourceTypeResponseBody& operator=(ListNisInspectionResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resourceTypeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNisInspectionResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeList Field Functions 
    bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
    void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
    inline const vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList> & resourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList>) };
    inline vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList> resourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList>) };
    inline ListNisInspectionResourceTypeResponseBody& setResourceTypeList(const vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
    inline ListNisInspectionResourceTypeResponseBody& setResourceTypeList(vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListNisInspectionResourceTypeResponseBodyResourceTypeList>> resourceTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
