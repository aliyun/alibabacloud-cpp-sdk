// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYERRORACCESSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYERRORACCESSLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayErrorAccessLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayErrorAccessLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayErrorAccessLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayErrorAccessLogsResponseBody() = default ;
    ListGatewayErrorAccessLogsResponseBody(const ListGatewayErrorAccessLogsResponseBody &) = default ;
    ListGatewayErrorAccessLogsResponseBody(ListGatewayErrorAccessLogsResponseBody &&) = default ;
    ListGatewayErrorAccessLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayErrorAccessLogsResponseBody() = default ;
    ListGatewayErrorAccessLogsResponseBody& operator=(const ListGatewayErrorAccessLogsResponseBody &) = default ;
    ListGatewayErrorAccessLogsResponseBody& operator=(ListGatewayErrorAccessLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<map<string, string>> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<map<string, string>>) };
    inline vector<map<string, string>> getData() { DARABONBA_PTR_GET(data_, vector<map<string, string>>) };
    inline ListGatewayErrorAccessLogsResponseBody& setData(const vector<map<string, string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayErrorAccessLogsResponseBody& setData(vector<map<string, string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayErrorAccessLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<map<string, string>>> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
