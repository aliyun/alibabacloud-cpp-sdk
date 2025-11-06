// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODYUPLOADMINIPACKAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMCUBEMINIPACKAGERESPONSEBODYUPLOADMINIPACKAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(ReturnPackageResult, returnPackageResult_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(ReturnPackageResult, returnPackageResult_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult() = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult(const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult &) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult(UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult &&) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult() = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& operator=(const UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult &) = default ;
    UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& operator=(UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultMsg_ == nullptr
        && return this->returnPackageResult_ == nullptr && return this->success_ == nullptr; };
    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // returnPackageResult Field Functions 
    bool hasReturnPackageResult() const { return this->returnPackageResult_ != nullptr;};
    void deleteReturnPackageResult() { this->returnPackageResult_ = nullptr;};
    inline const Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult & returnPackageResult() const { DARABONBA_PTR_GET_CONST(returnPackageResult_, Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult) };
    inline Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult returnPackageResult() { DARABONBA_PTR_GET(returnPackageResult_, Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult) };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& setReturnPackageResult(const Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult & returnPackageResult) { DARABONBA_PTR_SET_VALUE(returnPackageResult_, returnPackageResult) };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& setReturnPackageResult(Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult && returnPackageResult) { DARABONBA_PTR_SET_RVALUE(returnPackageResult_, returnPackageResult) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UploadMcubeMiniPackageResponseBodyUploadMiniPackageResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<Models::UploadMcubeMiniPackageResponseBodyUploadMiniPackageResultReturnPackageResult> returnPackageResult_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
