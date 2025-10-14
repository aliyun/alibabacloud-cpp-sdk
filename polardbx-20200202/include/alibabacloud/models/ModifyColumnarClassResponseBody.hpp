// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCOLUMNARCLASSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyColumnarClassResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyColumnarClassResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyColumnarClassResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyColumnarClassResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyColumnarClassResponseBody() = default ;
    ModifyColumnarClassResponseBody(const ModifyColumnarClassResponseBody &) = default ;
    ModifyColumnarClassResponseBody(ModifyColumnarClassResponseBody &&) = default ;
    ModifyColumnarClassResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyColumnarClassResponseBody() = default ;
    ModifyColumnarClassResponseBody& operator=(const ModifyColumnarClassResponseBody &) = default ;
    ModifyColumnarClassResponseBody& operator=(ModifyColumnarClassResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyColumnarClassResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyColumnarClassResponseBodyData) };
    inline ModifyColumnarClassResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyColumnarClassResponseBodyData) };
    inline ModifyColumnarClassResponseBody& setData(const ModifyColumnarClassResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyColumnarClassResponseBody& setData(ModifyColumnarClassResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyColumnarClassResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ModifyColumnarClassResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
