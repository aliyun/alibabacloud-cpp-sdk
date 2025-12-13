// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATAEXTRACTRESULTVALUE_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATAEXTRACTRESULTVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractResponseBodyDataExtractResultValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractResponseBodyDataExtractResultValue& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(originalText, originalText_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractResponseBodyDataExtractResultValue& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(originalText, originalText_);
    };
    RunContractExtractResponseBodyDataExtractResultValue() = default ;
    RunContractExtractResponseBodyDataExtractResultValue(const RunContractExtractResponseBodyDataExtractResultValue &) = default ;
    RunContractExtractResponseBodyDataExtractResultValue(RunContractExtractResponseBodyDataExtractResultValue &&) = default ;
    RunContractExtractResponseBodyDataExtractResultValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractResponseBodyDataExtractResultValue() = default ;
    RunContractExtractResponseBodyDataExtractResultValue& operator=(const RunContractExtractResponseBodyDataExtractResultValue &) = default ;
    RunContractExtractResponseBodyDataExtractResultValue& operator=(RunContractExtractResponseBodyDataExtractResultValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->originalText_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline RunContractExtractResponseBodyDataExtractResultValue& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // originalText Field Functions 
    bool hasOriginalText() const { return this->originalText_ != nullptr;};
    void deleteOriginalText() { this->originalText_ = nullptr;};
    inline string originalText() const { DARABONBA_PTR_GET_DEFAULT(originalText_, "") };
    inline RunContractExtractResponseBodyDataExtractResultValue& setOriginalText(string originalText) { DARABONBA_PTR_SET_VALUE(originalText_, originalText) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> originalText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
