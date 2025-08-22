// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPROMINSTALLSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPromInstallStatusResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryPromInstallStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPromInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPromInstallStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPromInstallStatusResponseBody() = default ;
    QueryPromInstallStatusResponseBody(const QueryPromInstallStatusResponseBody &) = default ;
    QueryPromInstallStatusResponseBody(QueryPromInstallStatusResponseBody &&) = default ;
    QueryPromInstallStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPromInstallStatusResponseBody() = default ;
    QueryPromInstallStatusResponseBody& operator=(const QueryPromInstallStatusResponseBody &) = default ;
    QueryPromInstallStatusResponseBody& operator=(QueryPromInstallStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPromInstallStatusResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QueryPromInstallStatusResponseBodyData) };
    inline QueryPromInstallStatusResponseBodyData data() { DARABONBA_PTR_GET(data_, QueryPromInstallStatusResponseBodyData) };
    inline QueryPromInstallStatusResponseBody& setData(const QueryPromInstallStatusResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPromInstallStatusResponseBody& setData(QueryPromInstallStatusResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPromInstallStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    std::shared_ptr<QueryPromInstallStatusResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
