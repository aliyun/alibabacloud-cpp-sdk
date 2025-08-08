// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODYCREATEWHITELISTFORIDERESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEWHITELISTFORIDERESPONSEBODYCREATEWHITELISTFORIDERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& obj) { 
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WhitelistId, whitelistId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WhitelistId, whitelistId_);
    };
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult() = default ;
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult(const CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult &) = default ;
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult(CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult &&) = default ;
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult() = default ;
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& operator=(const CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult &) = default ;
    CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& operator=(CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultMsg_ != nullptr
        && this->success_ != nullptr && this->whitelistId_ != nullptr; };
    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // whitelistId Field Functions 
    bool hasWhitelistId() const { return this->whitelistId_ != nullptr;};
    void deleteWhitelistId() { this->whitelistId_ = nullptr;};
    inline string whitelistId() const { DARABONBA_PTR_GET_DEFAULT(whitelistId_, "") };
    inline CreateMcubeWhitelistForIdeResponseBodyCreateWhitelistForIdeResult& setWhitelistId(string whitelistId) { DARABONBA_PTR_SET_VALUE(whitelistId_, whitelistId) };


  protected:
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> whitelistId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
