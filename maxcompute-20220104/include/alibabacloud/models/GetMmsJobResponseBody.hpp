// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMmsJobResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsJobResponseBody() = default ;
    GetMmsJobResponseBody(const GetMmsJobResponseBody &) = default ;
    GetMmsJobResponseBody(GetMmsJobResponseBody &&) = default ;
    GetMmsJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsJobResponseBody() = default ;
    GetMmsJobResponseBody& operator=(const GetMmsJobResponseBody &) = default ;
    GetMmsJobResponseBody& operator=(GetMmsJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsJobResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetMmsJobResponseBodyData) };
    inline GetMmsJobResponseBodyData data() { DARABONBA_PTR_GET(data_, GetMmsJobResponseBodyData) };
    inline GetMmsJobResponseBody& setData(const GetMmsJobResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsJobResponseBody& setData(GetMmsJobResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMmsJobResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
