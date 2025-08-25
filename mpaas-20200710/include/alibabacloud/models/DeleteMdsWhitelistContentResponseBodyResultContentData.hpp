// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMDSWHITELISTCONTENTRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEMDSWHITELISTCONTENTRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class DeleteMdsWhitelistContentResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMdsWhitelistContentResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMdsWhitelistContentResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteMdsWhitelistContentResponseBodyResultContentData() = default ;
    DeleteMdsWhitelistContentResponseBodyResultContentData(const DeleteMdsWhitelistContentResponseBodyResultContentData &) = default ;
    DeleteMdsWhitelistContentResponseBodyResultContentData(DeleteMdsWhitelistContentResponseBodyResultContentData &&) = default ;
    DeleteMdsWhitelistContentResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMdsWhitelistContentResponseBodyResultContentData() = default ;
    DeleteMdsWhitelistContentResponseBodyResultContentData& operator=(const DeleteMdsWhitelistContentResponseBodyResultContentData &) = default ;
    DeleteMdsWhitelistContentResponseBodyResultContentData& operator=(DeleteMdsWhitelistContentResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->errorCode_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DeleteMdsWhitelistContentResponseBodyResultContentData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteMdsWhitelistContentResponseBodyResultContentData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline DeleteMdsWhitelistContentResponseBodyResultContentData& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMdsWhitelistContentResponseBodyResultContentData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
