// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMmsDataSourceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMmsDataSourceResponseBody() = default ;
    CreateMmsDataSourceResponseBody(const CreateMmsDataSourceResponseBody &) = default ;
    CreateMmsDataSourceResponseBody(CreateMmsDataSourceResponseBody &&) = default ;
    CreateMmsDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsDataSourceResponseBody() = default ;
    CreateMmsDataSourceResponseBody& operator=(const CreateMmsDataSourceResponseBody &) = default ;
    CreateMmsDataSourceResponseBody& operator=(CreateMmsDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMmsDataSourceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateMmsDataSourceResponseBodyData) };
    inline CreateMmsDataSourceResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateMmsDataSourceResponseBodyData) };
    inline CreateMmsDataSourceResponseBody& setData(const CreateMmsDataSourceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMmsDataSourceResponseBody& setData(CreateMmsDataSourceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMmsDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateMmsDataSourceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
