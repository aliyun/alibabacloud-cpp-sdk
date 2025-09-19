// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddCloudVendorAccountAKResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCloudVendorAccountAKResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudVendorAccountAKResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudVendorAccountAKResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCloudVendorAccountAKResponseBody() = default ;
    AddCloudVendorAccountAKResponseBody(const AddCloudVendorAccountAKResponseBody &) = default ;
    AddCloudVendorAccountAKResponseBody(AddCloudVendorAccountAKResponseBody &&) = default ;
    AddCloudVendorAccountAKResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudVendorAccountAKResponseBody() = default ;
    AddCloudVendorAccountAKResponseBody& operator=(const AddCloudVendorAccountAKResponseBody &) = default ;
    AddCloudVendorAccountAKResponseBody& operator=(AddCloudVendorAccountAKResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddCloudVendorAccountAKResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AddCloudVendorAccountAKResponseBodyData) };
    inline AddCloudVendorAccountAKResponseBodyData data() { DARABONBA_PTR_GET(data_, AddCloudVendorAccountAKResponseBodyData) };
    inline AddCloudVendorAccountAKResponseBody& setData(const AddCloudVendorAccountAKResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddCloudVendorAccountAKResponseBody& setData(AddCloudVendorAccountAKResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCloudVendorAccountAKResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair that is added.
    std::shared_ptr<AddCloudVendorAccountAKResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
