// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddDataSourceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class AddDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddDataSourceResponseBody() = default ;
    AddDataSourceResponseBody(const AddDataSourceResponseBody &) = default ;
    AddDataSourceResponseBody(AddDataSourceResponseBody &&) = default ;
    AddDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataSourceResponseBody() = default ;
    AddDataSourceResponseBody& operator=(const AddDataSourceResponseBody &) = default ;
    AddDataSourceResponseBody& operator=(AddDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddDataSourceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AddDataSourceResponseBodyData) };
    inline AddDataSourceResponseBodyData data() { DARABONBA_PTR_GET(data_, AddDataSourceResponseBodyData) };
    inline AddDataSourceResponseBody& setData(const AddDataSourceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddDataSourceResponseBody& setData(AddDataSourceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<AddDataSourceResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
