// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERCNNFSTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterCnnfStatusDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClusterCnnfStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterCnnfStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterCnnfStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterCnnfStatusDetailResponseBody() = default ;
    ListClusterCnnfStatusDetailResponseBody(const ListClusterCnnfStatusDetailResponseBody &) = default ;
    ListClusterCnnfStatusDetailResponseBody(ListClusterCnnfStatusDetailResponseBody &&) = default ;
    ListClusterCnnfStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterCnnfStatusDetailResponseBody() = default ;
    ListClusterCnnfStatusDetailResponseBody& operator=(const ListClusterCnnfStatusDetailResponseBody &) = default ;
    ListClusterCnnfStatusDetailResponseBody& operator=(ListClusterCnnfStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListClusterCnnfStatusDetailResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListClusterCnnfStatusDetailResponseBodyData>) };
    inline vector<ListClusterCnnfStatusDetailResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListClusterCnnfStatusDetailResponseBodyData>) };
    inline ListClusterCnnfStatusDetailResponseBody& setData(const vector<ListClusterCnnfStatusDetailResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClusterCnnfStatusDetailResponseBody& setData(vector<ListClusterCnnfStatusDetailResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterCnnfStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the protection status of the container firewall.
    std::shared_ptr<vector<ListClusterCnnfStatusDetailResponseBodyData>> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
