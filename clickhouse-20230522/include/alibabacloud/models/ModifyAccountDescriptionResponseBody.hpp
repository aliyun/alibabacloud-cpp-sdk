// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTDESCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAccountDescriptionResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountDescriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountDescriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAccountDescriptionResponseBody() = default ;
    ModifyAccountDescriptionResponseBody(const ModifyAccountDescriptionResponseBody &) = default ;
    ModifyAccountDescriptionResponseBody(ModifyAccountDescriptionResponseBody &&) = default ;
    ModifyAccountDescriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountDescriptionResponseBody() = default ;
    ModifyAccountDescriptionResponseBody& operator=(const ModifyAccountDescriptionResponseBody &) = default ;
    ModifyAccountDescriptionResponseBody& operator=(ModifyAccountDescriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyAccountDescriptionResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyAccountDescriptionResponseBodyData) };
    inline ModifyAccountDescriptionResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyAccountDescriptionResponseBodyData) };
    inline ModifyAccountDescriptionResponseBody& setData(const ModifyAccountDescriptionResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyAccountDescriptionResponseBody& setData(ModifyAccountDescriptionResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAccountDescriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<ModifyAccountDescriptionResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
