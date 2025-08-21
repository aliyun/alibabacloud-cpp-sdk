// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSaasPermissionGroupInfosResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasPermissionGroupInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasPermissionGroupInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasPermissionGroupInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSaasPermissionGroupInfosResponseBody() = default ;
    ListSaasPermissionGroupInfosResponseBody(const ListSaasPermissionGroupInfosResponseBody &) = default ;
    ListSaasPermissionGroupInfosResponseBody(ListSaasPermissionGroupInfosResponseBody &&) = default ;
    ListSaasPermissionGroupInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasPermissionGroupInfosResponseBody() = default ;
    ListSaasPermissionGroupInfosResponseBody& operator=(const ListSaasPermissionGroupInfosResponseBody &) = default ;
    ListSaasPermissionGroupInfosResponseBody& operator=(ListSaasPermissionGroupInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSaasPermissionGroupInfosResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSaasPermissionGroupInfosResponseBodyData>) };
    inline vector<ListSaasPermissionGroupInfosResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListSaasPermissionGroupInfosResponseBodyData>) };
    inline ListSaasPermissionGroupInfosResponseBody& setData(const vector<ListSaasPermissionGroupInfosResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSaasPermissionGroupInfosResponseBody& setData(vector<ListSaasPermissionGroupInfosResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSaasPermissionGroupInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListSaasPermissionGroupInfosResponseBodyData>> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
