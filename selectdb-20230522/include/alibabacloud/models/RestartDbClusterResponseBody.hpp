// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTDBCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTARTDBCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RestartDBClusterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class RestartDBClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartDBClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartDBClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RestartDBClusterResponseBody() = default ;
    RestartDBClusterResponseBody(const RestartDBClusterResponseBody &) = default ;
    RestartDBClusterResponseBody(RestartDBClusterResponseBody &&) = default ;
    RestartDBClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartDBClusterResponseBody() = default ;
    RestartDBClusterResponseBody& operator=(const RestartDBClusterResponseBody &) = default ;
    RestartDBClusterResponseBody& operator=(RestartDBClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RestartDBClusterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RestartDBClusterResponseBodyData) };
    inline RestartDBClusterResponseBodyData data() { DARABONBA_PTR_GET(data_, RestartDBClusterResponseBodyData) };
    inline RestartDBClusterResponseBody& setData(const RestartDBClusterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RestartDBClusterResponseBody& setData(RestartDBClusterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestartDBClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information returned.
    std::shared_ptr<RestartDBClusterResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
