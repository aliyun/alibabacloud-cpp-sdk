// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMdsMiniConfigResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMdsMiniConfigResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMdsMiniConfigResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMdsMiniConfigResponseBodyResultContentData() = default ;
    GetMdsMiniConfigResponseBodyResultContentData(const GetMdsMiniConfigResponseBodyResultContentData &) = default ;
    GetMdsMiniConfigResponseBodyResultContentData(GetMdsMiniConfigResponseBodyResultContentData &&) = default ;
    GetMdsMiniConfigResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMdsMiniConfigResponseBodyResultContentData() = default ;
    GetMdsMiniConfigResponseBodyResultContentData& operator=(const GetMdsMiniConfigResponseBodyResultContentData &) = default ;
    GetMdsMiniConfigResponseBodyResultContentData& operator=(GetMdsMiniConfigResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->requestId_ == nullptr && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::GetMdsMiniConfigResponseBodyResultContentDataContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::GetMdsMiniConfigResponseBodyResultContentDataContent) };
    inline Models::GetMdsMiniConfigResponseBodyResultContentDataContent content() { DARABONBA_PTR_GET(content_, Models::GetMdsMiniConfigResponseBodyResultContentDataContent) };
    inline GetMdsMiniConfigResponseBodyResultContentData& setContent(const Models::GetMdsMiniConfigResponseBodyResultContentDataContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetMdsMiniConfigResponseBodyResultContentData& setContent(Models::GetMdsMiniConfigResponseBodyResultContentDataContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentData& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMdsMiniConfigResponseBodyResultContentData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::GetMdsMiniConfigResponseBodyResultContentDataContent> content_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
