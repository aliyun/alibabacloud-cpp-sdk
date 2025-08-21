// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHINSTANCESDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHINSTANCESDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetachInstanceSDGResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DetachInstanceSDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachInstanceSDGResponseBody() = default ;
    DetachInstanceSDGResponseBody(const DetachInstanceSDGResponseBody &) = default ;
    DetachInstanceSDGResponseBody(DetachInstanceSDGResponseBody &&) = default ;
    DetachInstanceSDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachInstanceSDGResponseBody() = default ;
    DetachInstanceSDGResponseBody& operator=(const DetachInstanceSDGResponseBody &) = default ;
    DetachInstanceSDGResponseBody& operator=(DetachInstanceSDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DetachInstanceSDGResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DetachInstanceSDGResponseBodyData) };
    inline DetachInstanceSDGResponseBodyData data() { DARABONBA_PTR_GET(data_, DetachInstanceSDGResponseBodyData) };
    inline DetachInstanceSDGResponseBody& setData(const DetachInstanceSDGResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DetachInstanceSDGResponseBody& setData(DetachInstanceSDGResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachInstanceSDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    std::shared_ptr<DetachInstanceSDGResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
