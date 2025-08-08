// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMdsMiniConfigResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMdsMiniConfigResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMdsMiniConfigResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMdsMiniConfigResponseBodyResultContent() = default ;
    GetMdsMiniConfigResponseBodyResultContent(const GetMdsMiniConfigResponseBodyResultContent &) = default ;
    GetMdsMiniConfigResponseBodyResultContent(GetMdsMiniConfigResponseBodyResultContent &&) = default ;
    GetMdsMiniConfigResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMdsMiniConfigResponseBodyResultContent() = default ;
    GetMdsMiniConfigResponseBodyResultContent& operator=(const GetMdsMiniConfigResponseBodyResultContent &) = default ;
    GetMdsMiniConfigResponseBodyResultContent& operator=(GetMdsMiniConfigResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetMdsMiniConfigResponseBodyResultContentData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetMdsMiniConfigResponseBodyResultContentData) };
    inline Models::GetMdsMiniConfigResponseBodyResultContentData data() { DARABONBA_PTR_GET(data_, Models::GetMdsMiniConfigResponseBodyResultContentData) };
    inline GetMdsMiniConfigResponseBodyResultContent& setData(const Models::GetMdsMiniConfigResponseBodyResultContentData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMdsMiniConfigResponseBodyResultContent& setData(Models::GetMdsMiniConfigResponseBodyResultContentData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMdsMiniConfigResponseBodyResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<Models::GetMdsMiniConfigResponseBodyResultContentData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
