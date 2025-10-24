// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMmsDbResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsDbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsDbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsDbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsDbResponseBody() = default ;
    GetMmsDbResponseBody(const GetMmsDbResponseBody &) = default ;
    GetMmsDbResponseBody(GetMmsDbResponseBody &&) = default ;
    GetMmsDbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsDbResponseBody() = default ;
    GetMmsDbResponseBody& operator=(const GetMmsDbResponseBody &) = default ;
    GetMmsDbResponseBody& operator=(GetMmsDbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsDbResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetMmsDbResponseBodyData) };
    inline GetMmsDbResponseBodyData data() { DARABONBA_PTR_GET(data_, GetMmsDbResponseBodyData) };
    inline GetMmsDbResponseBody& setData(const GetMmsDbResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsDbResponseBody& setData(GetMmsDbResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsDbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetMmsDbResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
