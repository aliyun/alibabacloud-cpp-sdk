// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeploymentJobCertResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentJobCertResponseBody() = default ;
    ListDeploymentJobCertResponseBody(const ListDeploymentJobCertResponseBody &) = default ;
    ListDeploymentJobCertResponseBody(ListDeploymentJobCertResponseBody &&) = default ;
    ListDeploymentJobCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobCertResponseBody() = default ;
    ListDeploymentJobCertResponseBody& operator=(const ListDeploymentJobCertResponseBody &) = default ;
    ListDeploymentJobCertResponseBody& operator=(ListDeploymentJobCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDeploymentJobCertResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDeploymentJobCertResponseBodyData>) };
    inline vector<ListDeploymentJobCertResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListDeploymentJobCertResponseBodyData>) };
    inline ListDeploymentJobCertResponseBody& setData(const vector<ListDeploymentJobCertResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentJobCertResponseBody& setData(vector<ListDeploymentJobCertResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentJobCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    std::shared_ptr<vector<ListDeploymentJobCertResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
