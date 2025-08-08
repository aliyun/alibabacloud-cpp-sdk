// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODYGETFILETOKENRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMCUBEFILETOKENRESPONSEBODYGETFILETOKENRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMcubeFileTokenResponseBodyGetFileTokenResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMcubeFileTokenResponseBodyGetFileTokenResult& obj) { 
      DARABONBA_PTR_TO_JSON(FileToken, fileToken_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMcubeFileTokenResponseBodyGetFileTokenResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FileToken, fileToken_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMcubeFileTokenResponseBodyGetFileTokenResult() = default ;
    GetMcubeFileTokenResponseBodyGetFileTokenResult(const GetMcubeFileTokenResponseBodyGetFileTokenResult &) = default ;
    GetMcubeFileTokenResponseBodyGetFileTokenResult(GetMcubeFileTokenResponseBodyGetFileTokenResult &&) = default ;
    GetMcubeFileTokenResponseBodyGetFileTokenResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMcubeFileTokenResponseBodyGetFileTokenResult() = default ;
    GetMcubeFileTokenResponseBodyGetFileTokenResult& operator=(const GetMcubeFileTokenResponseBodyGetFileTokenResult &) = default ;
    GetMcubeFileTokenResponseBodyGetFileTokenResult& operator=(GetMcubeFileTokenResponseBodyGetFileTokenResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileToken_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // fileToken Field Functions 
    bool hasFileToken() const { return this->fileToken_ != nullptr;};
    void deleteFileToken() { this->fileToken_ = nullptr;};
    inline const Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken & fileToken() const { DARABONBA_PTR_GET_CONST(fileToken_, Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken) };
    inline Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken fileToken() { DARABONBA_PTR_GET(fileToken_, Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken) };
    inline GetMcubeFileTokenResponseBodyGetFileTokenResult& setFileToken(const Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken & fileToken) { DARABONBA_PTR_SET_VALUE(fileToken_, fileToken) };
    inline GetMcubeFileTokenResponseBodyGetFileTokenResult& setFileToken(Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken && fileToken) { DARABONBA_PTR_SET_RVALUE(fileToken_, fileToken) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline GetMcubeFileTokenResponseBodyGetFileTokenResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMcubeFileTokenResponseBodyGetFileTokenResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::GetMcubeFileTokenResponseBodyGetFileTokenResultFileToken> fileToken_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
