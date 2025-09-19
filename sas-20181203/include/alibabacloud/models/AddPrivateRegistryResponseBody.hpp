// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPRIVATEREGISTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddPrivateRegistryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddPrivateRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPrivateRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPrivateRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPrivateRegistryResponseBody() = default ;
    AddPrivateRegistryResponseBody(const AddPrivateRegistryResponseBody &) = default ;
    AddPrivateRegistryResponseBody(AddPrivateRegistryResponseBody &&) = default ;
    AddPrivateRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPrivateRegistryResponseBody() = default ;
    AddPrivateRegistryResponseBody& operator=(const AddPrivateRegistryResponseBody &) = default ;
    AddPrivateRegistryResponseBody& operator=(AddPrivateRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddPrivateRegistryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AddPrivateRegistryResponseBodyData) };
    inline AddPrivateRegistryResponseBodyData data() { DARABONBA_PTR_GET(data_, AddPrivateRegistryResponseBodyData) };
    inline AddPrivateRegistryResponseBody& setData(const AddPrivateRegistryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddPrivateRegistryResponseBody& setData(AddPrivateRegistryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPrivateRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The handling result.
    std::shared_ptr<AddPrivateRegistryResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
