// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKCONFIGLOGPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKCONFIGLOGPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSparkConfigLogPathResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkConfigLogPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkConfigLogPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkConfigLogPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkConfigLogPathResponseBody() = default ;
    GetSparkConfigLogPathResponseBody(const GetSparkConfigLogPathResponseBody &) = default ;
    GetSparkConfigLogPathResponseBody(GetSparkConfigLogPathResponseBody &&) = default ;
    GetSparkConfigLogPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkConfigLogPathResponseBody() = default ;
    GetSparkConfigLogPathResponseBody& operator=(const GetSparkConfigLogPathResponseBody &) = default ;
    GetSparkConfigLogPathResponseBody& operator=(GetSparkConfigLogPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSparkConfigLogPathResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetSparkConfigLogPathResponseBodyData) };
    inline GetSparkConfigLogPathResponseBodyData data() { DARABONBA_PTR_GET(data_, GetSparkConfigLogPathResponseBodyData) };
    inline GetSparkConfigLogPathResponseBody& setData(const GetSparkConfigLogPathResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkConfigLogPathResponseBody& setData(GetSparkConfigLogPathResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkConfigLogPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried Spark log configuration.
    std::shared_ptr<GetSparkConfigLogPathResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
