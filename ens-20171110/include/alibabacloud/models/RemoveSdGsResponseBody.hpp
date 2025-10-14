// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVESDGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveSDGsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RemoveSDGsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveSDGsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveSDGsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveSDGsResponseBody() = default ;
    RemoveSDGsResponseBody(const RemoveSDGsResponseBody &) = default ;
    RemoveSDGsResponseBody(RemoveSDGsResponseBody &&) = default ;
    RemoveSDGsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveSDGsResponseBody() = default ;
    RemoveSDGsResponseBody& operator=(const RemoveSDGsResponseBody &) = default ;
    RemoveSDGsResponseBody& operator=(RemoveSDGsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveSDGsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RemoveSDGsResponseBodyData) };
    inline RemoveSDGsResponseBodyData data() { DARABONBA_PTR_GET(data_, RemoveSDGsResponseBodyData) };
    inline RemoveSDGsResponseBody& setData(const RemoveSDGsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveSDGsResponseBody& setData(RemoveSDGsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveSDGsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<RemoveSDGsResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
