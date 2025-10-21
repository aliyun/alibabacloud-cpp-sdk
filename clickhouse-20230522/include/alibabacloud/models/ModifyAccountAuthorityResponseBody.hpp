// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAccountAuthorityResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountAuthorityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountAuthorityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyAccountAuthorityResponseBody() = default ;
    ModifyAccountAuthorityResponseBody(const ModifyAccountAuthorityResponseBody &) = default ;
    ModifyAccountAuthorityResponseBody(ModifyAccountAuthorityResponseBody &&) = default ;
    ModifyAccountAuthorityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountAuthorityResponseBody() = default ;
    ModifyAccountAuthorityResponseBody& operator=(const ModifyAccountAuthorityResponseBody &) = default ;
    ModifyAccountAuthorityResponseBody& operator=(ModifyAccountAuthorityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyAccountAuthorityResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyAccountAuthorityResponseBodyData) };
    inline ModifyAccountAuthorityResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyAccountAuthorityResponseBodyData) };
    inline ModifyAccountAuthorityResponseBody& setData(const ModifyAccountAuthorityResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyAccountAuthorityResponseBody& setData(ModifyAccountAuthorityResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyAccountAuthorityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    std::shared_ptr<ModifyAccountAuthorityResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
