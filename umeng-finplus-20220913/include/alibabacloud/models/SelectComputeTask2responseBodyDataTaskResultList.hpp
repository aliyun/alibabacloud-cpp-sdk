// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATATASKRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_SELECTCOMPUTETASK2RESPONSEBODYDATATASKRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SelectComputeTask2ResponseBodyDataTaskResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectComputeTask2ResponseBodyDataTaskResultList& obj) { 
      DARABONBA_PTR_TO_JSON(bcId, bcId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(lineNum, lineNum_);
    };
    friend void from_json(const Darabonba::Json& j, SelectComputeTask2ResponseBodyDataTaskResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(bcId, bcId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(lineNum, lineNum_);
    };
    SelectComputeTask2ResponseBodyDataTaskResultList() = default ;
    SelectComputeTask2ResponseBodyDataTaskResultList(const SelectComputeTask2ResponseBodyDataTaskResultList &) = default ;
    SelectComputeTask2ResponseBodyDataTaskResultList(SelectComputeTask2ResponseBodyDataTaskResultList &&) = default ;
    SelectComputeTask2ResponseBodyDataTaskResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectComputeTask2ResponseBodyDataTaskResultList() = default ;
    SelectComputeTask2ResponseBodyDataTaskResultList& operator=(const SelectComputeTask2ResponseBodyDataTaskResultList &) = default ;
    SelectComputeTask2ResponseBodyDataTaskResultList& operator=(SelectComputeTask2ResponseBodyDataTaskResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bcId_ != nullptr
        && this->code_ != nullptr && this->lineNum_ != nullptr; };
    // bcId Field Functions 
    bool hasBcId() const { return this->bcId_ != nullptr;};
    void deleteBcId() { this->bcId_ = nullptr;};
    inline int64_t bcId() const { DARABONBA_PTR_GET_DEFAULT(bcId_, 0L) };
    inline SelectComputeTask2ResponseBodyDataTaskResultList& setBcId(int64_t bcId) { DARABONBA_PTR_SET_VALUE(bcId_, bcId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SelectComputeTask2ResponseBodyDataTaskResultList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // lineNum Field Functions 
    bool hasLineNum() const { return this->lineNum_ != nullptr;};
    void deleteLineNum() { this->lineNum_ = nullptr;};
    inline int64_t lineNum() const { DARABONBA_PTR_GET_DEFAULT(lineNum_, 0L) };
    inline SelectComputeTask2ResponseBodyDataTaskResultList& setLineNum(int64_t lineNum) { DARABONBA_PTR_SET_VALUE(lineNum_, lineNum) };


  protected:
    std::shared_ptr<int64_t> bcId_ = nullptr;
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int64_t> lineNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
