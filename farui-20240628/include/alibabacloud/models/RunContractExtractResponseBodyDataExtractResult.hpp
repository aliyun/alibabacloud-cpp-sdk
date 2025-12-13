// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATAEXTRACTRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATAEXTRACTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractExtractResponseBodyDataExtractResultValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractResponseBodyDataExtractResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractResponseBodyDataExtractResult& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(extractItem, extractItem_);
      DARABONBA_PTR_TO_JSON(option, option_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractResponseBodyDataExtractResult& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(extractItem, extractItem_);
      DARABONBA_PTR_FROM_JSON(option, option_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    RunContractExtractResponseBodyDataExtractResult() = default ;
    RunContractExtractResponseBodyDataExtractResult(const RunContractExtractResponseBodyDataExtractResult &) = default ;
    RunContractExtractResponseBodyDataExtractResult(RunContractExtractResponseBodyDataExtractResult &&) = default ;
    RunContractExtractResponseBodyDataExtractResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractResponseBodyDataExtractResult() = default ;
    RunContractExtractResponseBodyDataExtractResult& operator=(const RunContractExtractResponseBodyDataExtractResult &) = default ;
    RunContractExtractResponseBodyDataExtractResult& operator=(RunContractExtractResponseBodyDataExtractResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->extractItem_ == nullptr && return this->option_ == nullptr && return this->value_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline RunContractExtractResponseBodyDataExtractResult& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // extractItem Field Functions 
    bool hasExtractItem() const { return this->extractItem_ != nullptr;};
    void deleteExtractItem() { this->extractItem_ = nullptr;};
    inline string extractItem() const { DARABONBA_PTR_GET_DEFAULT(extractItem_, "") };
    inline RunContractExtractResponseBodyDataExtractResult& setExtractItem(string extractItem) { DARABONBA_PTR_SET_VALUE(extractItem_, extractItem) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline RunContractExtractResponseBodyDataExtractResult& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Models::RunContractExtractResponseBodyDataExtractResultValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Models::RunContractExtractResponseBodyDataExtractResultValue>) };
    inline vector<Models::RunContractExtractResponseBodyDataExtractResultValue> value() { DARABONBA_PTR_GET(value_, vector<Models::RunContractExtractResponseBodyDataExtractResultValue>) };
    inline RunContractExtractResponseBodyDataExtractResult& setValue(const vector<Models::RunContractExtractResponseBodyDataExtractResultValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline RunContractExtractResponseBodyDataExtractResult& setValue(vector<Models::RunContractExtractResponseBodyDataExtractResultValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> extractItem_ = nullptr;
    std::shared_ptr<string> option_ = nullptr;
    std::shared_ptr<vector<Models::RunContractExtractResponseBodyDataExtractResultValue>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
