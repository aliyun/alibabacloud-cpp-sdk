// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyLakeCacheSizeResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyLakeCacheSizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLakeCacheSizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLakeCacheSizeResponseBody() = default ;
    ModifyLakeCacheSizeResponseBody(const ModifyLakeCacheSizeResponseBody &) = default ;
    ModifyLakeCacheSizeResponseBody(ModifyLakeCacheSizeResponseBody &&) = default ;
    ModifyLakeCacheSizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLakeCacheSizeResponseBody() = default ;
    ModifyLakeCacheSizeResponseBody& operator=(const ModifyLakeCacheSizeResponseBody &) = default ;
    ModifyLakeCacheSizeResponseBody& operator=(ModifyLakeCacheSizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ModifyLakeCacheSizeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyLakeCacheSizeResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyLakeCacheSizeResponseBodyData) };
    inline ModifyLakeCacheSizeResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyLakeCacheSizeResponseBodyData) };
    inline ModifyLakeCacheSizeResponseBody& setData(const ModifyLakeCacheSizeResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyLakeCacheSizeResponseBody& setData(ModifyLakeCacheSizeResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLakeCacheSizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. The value 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned data.
    std::shared_ptr<ModifyLakeCacheSizeResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
