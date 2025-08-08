// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODYADDWHITELISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCUBEWHITELISTRESPONSEBODYADDWHITELISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateMcubeWhitelistResponseBodyAddWhitelistResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcubeWhitelistResponseBodyAddWhitelistResult& obj) { 
      DARABONBA_PTR_TO_JSON(AddWhitelistInfo, addWhitelistInfo_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcubeWhitelistResponseBodyAddWhitelistResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AddWhitelistInfo, addWhitelistInfo_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult() = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult(const UpdateMcubeWhitelistResponseBodyAddWhitelistResult &) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult(UpdateMcubeWhitelistResponseBodyAddWhitelistResult &&) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcubeWhitelistResponseBodyAddWhitelistResult() = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult& operator=(const UpdateMcubeWhitelistResponseBodyAddWhitelistResult &) = default ;
    UpdateMcubeWhitelistResponseBodyAddWhitelistResult& operator=(UpdateMcubeWhitelistResponseBodyAddWhitelistResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addWhitelistInfo_ != nullptr
        && this->resultMsg_ != nullptr && this->success_ != nullptr; };
    // addWhitelistInfo Field Functions 
    bool hasAddWhitelistInfo() const { return this->addWhitelistInfo_ != nullptr;};
    void deleteAddWhitelistInfo() { this->addWhitelistInfo_ = nullptr;};
    inline const Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo & addWhitelistInfo() const { DARABONBA_PTR_GET_CONST(addWhitelistInfo_, Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo) };
    inline Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo addWhitelistInfo() { DARABONBA_PTR_GET(addWhitelistInfo_, Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResult& setAddWhitelistInfo(const Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo & addWhitelistInfo) { DARABONBA_PTR_SET_VALUE(addWhitelistInfo_, addWhitelistInfo) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResult& setAddWhitelistInfo(Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo && addWhitelistInfo) { DARABONBA_PTR_SET_RVALUE(addWhitelistInfo_, addWhitelistInfo) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateMcubeWhitelistResponseBodyAddWhitelistResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Models::UpdateMcubeWhitelistResponseBodyAddWhitelistResultAddWhitelistInfo> addWhitelistInfo_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
