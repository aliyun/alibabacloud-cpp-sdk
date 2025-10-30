// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINENODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINENODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineNodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineNodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCodeList, errorCodeList_);
      DARABONBA_PTR_TO_JSON(ErrorMessageList, errorMessageList_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineNodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCodeList, errorCodeList_);
      DARABONBA_PTR_FROM_JSON(ErrorMessageList, errorMessageList_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
    };
    CreatePipelineNodeResponseBodyData() = default ;
    CreatePipelineNodeResponseBodyData(const CreatePipelineNodeResponseBodyData &) = default ;
    CreatePipelineNodeResponseBodyData(CreatePipelineNodeResponseBodyData &&) = default ;
    CreatePipelineNodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineNodeResponseBodyData() = default ;
    CreatePipelineNodeResponseBodyData& operator=(const CreatePipelineNodeResponseBodyData &) = default ;
    CreatePipelineNodeResponseBodyData& operator=(CreatePipelineNodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCodeList_ == nullptr
        && return this->errorMessageList_ == nullptr && return this->pipelineId_ == nullptr; };
    // errorCodeList Field Functions 
    bool hasErrorCodeList() const { return this->errorCodeList_ != nullptr;};
    void deleteErrorCodeList() { this->errorCodeList_ = nullptr;};
    inline const vector<string> & errorCodeList() const { DARABONBA_PTR_GET_CONST(errorCodeList_, vector<string>) };
    inline vector<string> errorCodeList() { DARABONBA_PTR_GET(errorCodeList_, vector<string>) };
    inline CreatePipelineNodeResponseBodyData& setErrorCodeList(const vector<string> & errorCodeList) { DARABONBA_PTR_SET_VALUE(errorCodeList_, errorCodeList) };
    inline CreatePipelineNodeResponseBodyData& setErrorCodeList(vector<string> && errorCodeList) { DARABONBA_PTR_SET_RVALUE(errorCodeList_, errorCodeList) };


    // errorMessageList Field Functions 
    bool hasErrorMessageList() const { return this->errorMessageList_ != nullptr;};
    void deleteErrorMessageList() { this->errorMessageList_ = nullptr;};
    inline const vector<string> & errorMessageList() const { DARABONBA_PTR_GET_CONST(errorMessageList_, vector<string>) };
    inline vector<string> errorMessageList() { DARABONBA_PTR_GET(errorMessageList_, vector<string>) };
    inline CreatePipelineNodeResponseBodyData& setErrorMessageList(const vector<string> & errorMessageList) { DARABONBA_PTR_SET_VALUE(errorMessageList_, errorMessageList) };
    inline CreatePipelineNodeResponseBodyData& setErrorMessageList(vector<string> && errorMessageList) { DARABONBA_PTR_SET_RVALUE(errorMessageList_, errorMessageList) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline int64_t pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
    inline CreatePipelineNodeResponseBodyData& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


  protected:
    std::shared_ptr<vector<string>> errorCodeList_ = nullptr;
    std::shared_ptr<vector<string>> errorMessageList_ = nullptr;
    std::shared_ptr<int64_t> pipelineId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
