// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARINTERVENESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLEARINTERVENESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ClearIntervenesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearIntervenesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailIdList, failIdList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearIntervenesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailIdList, failIdList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ClearIntervenesResponseBodyData() = default ;
    ClearIntervenesResponseBodyData(const ClearIntervenesResponseBodyData &) = default ;
    ClearIntervenesResponseBodyData(ClearIntervenesResponseBodyData &&) = default ;
    ClearIntervenesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearIntervenesResponseBodyData() = default ;
    ClearIntervenesResponseBodyData& operator=(const ClearIntervenesResponseBodyData &) = default ;
    ClearIntervenesResponseBodyData& operator=(ClearIntervenesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->failIdList_ == nullptr && return this->taskId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ClearIntervenesResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failIdList Field Functions 
    bool hasFailIdList() const { return this->failIdList_ != nullptr;};
    void deleteFailIdList() { this->failIdList_ = nullptr;};
    inline const vector<string> & failIdList() const { DARABONBA_PTR_GET_CONST(failIdList_, vector<string>) };
    inline vector<string> failIdList() { DARABONBA_PTR_GET(failIdList_, vector<string>) };
    inline ClearIntervenesResponseBodyData& setFailIdList(const vector<string> & failIdList) { DARABONBA_PTR_SET_VALUE(failIdList_, failIdList) };
    inline ClearIntervenesResponseBodyData& setFailIdList(vector<string> && failIdList) { DARABONBA_PTR_SET_RVALUE(failIdList_, failIdList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ClearIntervenesResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<vector<string>> failIdList_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
