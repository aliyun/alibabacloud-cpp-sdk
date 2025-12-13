// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractExtractResponseBodyDataExtractResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(contractText, contractText_);
      DARABONBA_PTR_TO_JSON(extractResult, extractResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(contractText, contractText_);
      DARABONBA_PTR_FROM_JSON(extractResult, extractResult_);
    };
    RunContractExtractResponseBodyData() = default ;
    RunContractExtractResponseBodyData(const RunContractExtractResponseBodyData &) = default ;
    RunContractExtractResponseBodyData(RunContractExtractResponseBodyData &&) = default ;
    RunContractExtractResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractResponseBodyData() = default ;
    RunContractExtractResponseBodyData& operator=(const RunContractExtractResponseBodyData &) = default ;
    RunContractExtractResponseBodyData& operator=(RunContractExtractResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contractText_ == nullptr
        && return this->extractResult_ == nullptr; };
    // contractText Field Functions 
    bool hasContractText() const { return this->contractText_ != nullptr;};
    void deleteContractText() { this->contractText_ = nullptr;};
    inline string contractText() const { DARABONBA_PTR_GET_DEFAULT(contractText_, "") };
    inline RunContractExtractResponseBodyData& setContractText(string contractText) { DARABONBA_PTR_SET_VALUE(contractText_, contractText) };


    // extractResult Field Functions 
    bool hasExtractResult() const { return this->extractResult_ != nullptr;};
    void deleteExtractResult() { this->extractResult_ = nullptr;};
    inline const vector<Models::RunContractExtractResponseBodyDataExtractResult> & extractResult() const { DARABONBA_PTR_GET_CONST(extractResult_, vector<Models::RunContractExtractResponseBodyDataExtractResult>) };
    inline vector<Models::RunContractExtractResponseBodyDataExtractResult> extractResult() { DARABONBA_PTR_GET(extractResult_, vector<Models::RunContractExtractResponseBodyDataExtractResult>) };
    inline RunContractExtractResponseBodyData& setExtractResult(const vector<Models::RunContractExtractResponseBodyDataExtractResult> & extractResult) { DARABONBA_PTR_SET_VALUE(extractResult_, extractResult) };
    inline RunContractExtractResponseBodyData& setExtractResult(vector<Models::RunContractExtractResponseBodyDataExtractResult> && extractResult) { DARABONBA_PTR_SET_RVALUE(extractResult_, extractResult) };


  protected:
    std::shared_ptr<string> contractText_ = nullptr;
    std::shared_ptr<vector<Models::RunContractExtractResponseBodyDataExtractResult>> extractResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
