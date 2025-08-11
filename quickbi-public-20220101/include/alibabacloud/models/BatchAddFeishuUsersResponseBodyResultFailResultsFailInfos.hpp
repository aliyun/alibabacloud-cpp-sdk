// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULTFAILRESULTSFAILINFOS_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULTFAILRESULTSFAILINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeDesc, codeDesc_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeDesc, codeDesc_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos() = default ;
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos(const BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos &) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos(BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos &&) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos() = default ;
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& operator=(const BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos &) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& operator=(BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->codeDesc_ != nullptr && this->input_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeDesc Field Functions 
    bool hasCodeDesc() const { return this->codeDesc_ != nullptr;};
    void deleteCodeDesc() { this->codeDesc_ = nullptr;};
    inline string codeDesc() const { DARABONBA_PTR_GET_DEFAULT(codeDesc_, "") };
    inline BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& setCodeDesc(string codeDesc) { DARABONBA_PTR_SET_VALUE(codeDesc_, codeDesc) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> codeDesc_ = nullptr;
    std::shared_ptr<string> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
