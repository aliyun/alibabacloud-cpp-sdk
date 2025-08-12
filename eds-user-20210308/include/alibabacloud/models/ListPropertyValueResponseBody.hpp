// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROPERTYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROPERTYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPropertyValueResponseBodyPropertyValueInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class ListPropertyValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyValueInfos, propertyValueInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPropertyValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyValueInfos, propertyValueInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPropertyValueResponseBody() = default ;
    ListPropertyValueResponseBody(const ListPropertyValueResponseBody &) = default ;
    ListPropertyValueResponseBody(ListPropertyValueResponseBody &&) = default ;
    ListPropertyValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPropertyValueResponseBody() = default ;
    ListPropertyValueResponseBody& operator=(const ListPropertyValueResponseBody &) = default ;
    ListPropertyValueResponseBody& operator=(ListPropertyValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyValueInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // propertyValueInfos Field Functions 
    bool hasPropertyValueInfos() const { return this->propertyValueInfos_ != nullptr;};
    void deletePropertyValueInfos() { this->propertyValueInfos_ = nullptr;};
    inline const vector<ListPropertyValueResponseBodyPropertyValueInfos> & propertyValueInfos() const { DARABONBA_PTR_GET_CONST(propertyValueInfos_, vector<ListPropertyValueResponseBodyPropertyValueInfos>) };
    inline vector<ListPropertyValueResponseBodyPropertyValueInfos> propertyValueInfos() { DARABONBA_PTR_GET(propertyValueInfos_, vector<ListPropertyValueResponseBodyPropertyValueInfos>) };
    inline ListPropertyValueResponseBody& setPropertyValueInfos(const vector<ListPropertyValueResponseBodyPropertyValueInfos> & propertyValueInfos) { DARABONBA_PTR_SET_VALUE(propertyValueInfos_, propertyValueInfos) };
    inline ListPropertyValueResponseBody& setPropertyValueInfos(vector<ListPropertyValueResponseBodyPropertyValueInfos> && propertyValueInfos) { DARABONBA_PTR_SET_RVALUE(propertyValueInfos_, propertyValueInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPropertyValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about property values.
    std::shared_ptr<vector<ListPropertyValueResponseBodyPropertyValueInfos>> propertyValueInfos_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
