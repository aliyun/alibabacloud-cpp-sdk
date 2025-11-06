// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUBECARDFILETOKENRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUBECARDFILETOKENRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCubecardFiletokenResponseBodyResultContentDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryCubecardFiletokenResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCubecardFiletokenResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCubecardFiletokenResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryCubecardFiletokenResponseBodyResultContentData() = default ;
    QueryCubecardFiletokenResponseBodyResultContentData(const QueryCubecardFiletokenResponseBodyResultContentData &) = default ;
    QueryCubecardFiletokenResponseBodyResultContentData(QueryCubecardFiletokenResponseBodyResultContentData &&) = default ;
    QueryCubecardFiletokenResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCubecardFiletokenResponseBodyResultContentData() = default ;
    QueryCubecardFiletokenResponseBodyResultContentData& operator=(const QueryCubecardFiletokenResponseBodyResultContentData &) = default ;
    QueryCubecardFiletokenResponseBodyResultContentData& operator=(QueryCubecardFiletokenResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->errorCode_ == nullptr && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::QueryCubecardFiletokenResponseBodyResultContentDataContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::QueryCubecardFiletokenResponseBodyResultContentDataContent) };
    inline Models::QueryCubecardFiletokenResponseBodyResultContentDataContent content() { DARABONBA_PTR_GET(content_, Models::QueryCubecardFiletokenResponseBodyResultContentDataContent) };
    inline QueryCubecardFiletokenResponseBodyResultContentData& setContent(const Models::QueryCubecardFiletokenResponseBodyResultContentDataContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline QueryCubecardFiletokenResponseBodyResultContentData& setContent(Models::QueryCubecardFiletokenResponseBodyResultContentDataContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryCubecardFiletokenResponseBodyResultContentData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline QueryCubecardFiletokenResponseBodyResultContentData& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryCubecardFiletokenResponseBodyResultContentData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::QueryCubecardFiletokenResponseBodyResultContentDataContent> content_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
