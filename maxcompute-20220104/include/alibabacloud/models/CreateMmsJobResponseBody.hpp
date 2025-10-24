// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMSJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMSJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMmsJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class CreateMmsJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmsJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmsJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMmsJobResponseBody() = default ;
    CreateMmsJobResponseBody(const CreateMmsJobResponseBody &) = default ;
    CreateMmsJobResponseBody(CreateMmsJobResponseBody &&) = default ;
    CreateMmsJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmsJobResponseBody() = default ;
    CreateMmsJobResponseBody& operator=(const CreateMmsJobResponseBody &) = default ;
    CreateMmsJobResponseBody& operator=(CreateMmsJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateMmsJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateMmsJobResponseBodyData) };
    inline CreateMmsJobResponseBodyData data() { DARABONBA_PTR_GET(data_, CreateMmsJobResponseBodyData) };
    inline CreateMmsJobResponseBody& setData(const CreateMmsJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateMmsJobResponseBody& setData(CreateMmsJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMmsJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateMmsJobResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
