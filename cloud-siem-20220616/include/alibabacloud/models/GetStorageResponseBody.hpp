// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStorageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class GetStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetStorageResponseBody() = default ;
    GetStorageResponseBody(const GetStorageResponseBody &) = default ;
    GetStorageResponseBody(GetStorageResponseBody &&) = default ;
    GetStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageResponseBody() = default ;
    GetStorageResponseBody& operator=(const GetStorageResponseBody &) = default ;
    GetStorageResponseBody& operator=(GetStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStorageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetStorageResponseBodyData) };
    inline GetStorageResponseBodyData data() { DARABONBA_PTR_GET(data_, GetStorageResponseBodyData) };
    inline GetStorageResponseBody& setData(const GetStorageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStorageResponseBody& setData(GetStorageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the storage.
    std::shared_ptr<GetStorageResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
