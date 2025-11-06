// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODYCREATEMINITASKRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCUBEMINITASKRESPONSEBODYCREATEMINITASKRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& obj) { 
      DARABONBA_PTR_TO_JSON(MiniTaskId, miniTaskId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MiniTaskId, miniTaskId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult() = default ;
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult(const CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult &) = default ;
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult(CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult &&) = default ;
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult() = default ;
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& operator=(const CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult &) = default ;
    CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& operator=(CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->miniTaskId_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // miniTaskId Field Functions 
    bool hasMiniTaskId() const { return this->miniTaskId_ != nullptr;};
    void deleteMiniTaskId() { this->miniTaskId_ = nullptr;};
    inline string miniTaskId() const { DARABONBA_PTR_GET_DEFAULT(miniTaskId_, "") };
    inline CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& setMiniTaskId(string miniTaskId) { DARABONBA_PTR_SET_VALUE(miniTaskId_, miniTaskId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateMcubeMiniTaskResponseBodyCreateMiniTaskResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> miniTaskId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
