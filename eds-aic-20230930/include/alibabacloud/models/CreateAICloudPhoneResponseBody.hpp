// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICLOUDPHONERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICLOUDPHONERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAICloudPhoneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICloudPhoneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICloudPhoneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAICloudPhoneResponseBody() = default ;
    CreateAICloudPhoneResponseBody(const CreateAICloudPhoneResponseBody &) = default ;
    CreateAICloudPhoneResponseBody(CreateAICloudPhoneResponseBody &&) = default ;
    CreateAICloudPhoneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICloudPhoneResponseBody() = default ;
    CreateAICloudPhoneResponseBody& operator=(const CreateAICloudPhoneResponseBody &) = default ;
    CreateAICloudPhoneResponseBody& operator=(CreateAICloudPhoneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderId_ == nullptr
        && this->packageIds_ == nullptr; };
      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // packageIds Field Functions 
      bool hasPackageIds() const { return this->packageIds_ != nullptr;};
      void deletePackageIds() { this->packageIds_ = nullptr;};
      inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
      inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
      inline Data& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
      inline Data& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


    protected:
      // The order ID.
      shared_ptr<int64_t> orderId_ {};
      // The list of package IDs. After the payment is successful, instances are created based on these IDs through a callback.
      shared_ptr<vector<string>> packageIds_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateAICloudPhoneResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateAICloudPhoneResponseBody::Data) };
    inline CreateAICloudPhoneResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateAICloudPhoneResponseBody::Data) };
    inline CreateAICloudPhoneResponseBody& setData(const CreateAICloudPhoneResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateAICloudPhoneResponseBody& setData(CreateAICloudPhoneResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAICloudPhoneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data object.
    shared_ptr<CreateAICloudPhoneResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
