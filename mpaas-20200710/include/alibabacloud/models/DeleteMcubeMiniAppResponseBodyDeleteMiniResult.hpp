// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPRESPONSEBODYDELETEMINIRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEMCUBEMINIAPPRESPONSEBODYDELETEMINIRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class DeleteMcubeMiniAppResponseBodyDeleteMiniResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMcubeMiniAppResponseBodyDeleteMiniResult& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMcubeMiniAppResponseBodyDeleteMiniResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult() = default ;
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult(const DeleteMcubeMiniAppResponseBodyDeleteMiniResult &) = default ;
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult(DeleteMcubeMiniAppResponseBodyDeleteMiniResult &&) = default ;
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMcubeMiniAppResponseBodyDeleteMiniResult() = default ;
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult& operator=(const DeleteMcubeMiniAppResponseBodyDeleteMiniResult &) = default ;
    DeleteMcubeMiniAppResponseBodyDeleteMiniResult& operator=(DeleteMcubeMiniAppResponseBodyDeleteMiniResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DeleteMcubeMiniAppResponseBodyDeleteMiniResult& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline DeleteMcubeMiniAppResponseBodyDeleteMiniResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMcubeMiniAppResponseBodyDeleteMiniResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
