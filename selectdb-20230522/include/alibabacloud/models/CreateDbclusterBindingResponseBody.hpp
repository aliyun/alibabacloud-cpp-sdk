// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERBINDINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERBINDINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDBClusterBindingResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateDBClusterBindingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterBindingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterBindingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDBClusterBindingResponseBody() = default ;
    CreateDBClusterBindingResponseBody(const CreateDBClusterBindingResponseBody &) = default ;
    CreateDBClusterBindingResponseBody(CreateDBClusterBindingResponseBody &&) = default ;
    CreateDBClusterBindingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterBindingResponseBody() = default ;
    CreateDBClusterBindingResponseBody& operator=(const CreateDBClusterBindingResponseBody &) = default ;
    CreateDBClusterBindingResponseBody& operator=(CreateDBClusterBindingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateDBClusterBindingResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateDBClusterBindingResponseBodyData) };
    inline CreateDBClusterBindingResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateDBClusterBindingResponseBodyData) };
    inline CreateDBClusterBindingResponseBody& setData(const CreateDBClusterBindingResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateDBClusterBindingResponseBody& setData(CreateDBClusterBindingResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDBClusterBindingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<CreateDBClusterBindingResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
