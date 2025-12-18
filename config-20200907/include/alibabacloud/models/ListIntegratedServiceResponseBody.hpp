// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATEDSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegratedServiceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListIntegratedServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegratedServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegratedServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListIntegratedServiceResponseBody() = default ;
    ListIntegratedServiceResponseBody(const ListIntegratedServiceResponseBody &) = default ;
    ListIntegratedServiceResponseBody(ListIntegratedServiceResponseBody &&) = default ;
    ListIntegratedServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegratedServiceResponseBody() = default ;
    ListIntegratedServiceResponseBody& operator=(const ListIntegratedServiceResponseBody &) = default ;
    ListIntegratedServiceResponseBody& operator=(ListIntegratedServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListIntegratedServiceResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListIntegratedServiceResponseBodyData>) };
    inline vector<ListIntegratedServiceResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListIntegratedServiceResponseBodyData>) };
    inline ListIntegratedServiceResponseBody& setData(const vector<ListIntegratedServiceResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListIntegratedServiceResponseBody& setData(vector<ListIntegratedServiceResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegratedServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the cloud service that can be integrated.
    std::shared_ptr<vector<ListIntegratedServiceResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
