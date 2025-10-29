// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDeploymentPackagesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDeploymentPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentPackagesResponseBody() = default ;
    ListDeploymentPackagesResponseBody(const ListDeploymentPackagesResponseBody &) = default ;
    ListDeploymentPackagesResponseBody(ListDeploymentPackagesResponseBody &&) = default ;
    ListDeploymentPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentPackagesResponseBody() = default ;
    ListDeploymentPackagesResponseBody& operator=(const ListDeploymentPackagesResponseBody &) = default ;
    ListDeploymentPackagesResponseBody& operator=(ListDeploymentPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDeploymentPackagesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListDeploymentPackagesResponseBodyData) };
    inline ListDeploymentPackagesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListDeploymentPackagesResponseBodyData) };
    inline ListDeploymentPackagesResponseBody& setData(const ListDeploymentPackagesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentPackagesResponseBody& setData(ListDeploymentPackagesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of deployment packages that meet the query conditions.
    std::shared_ptr<ListDeploymentPackagesResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
