// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTREQUESTFIELDSTOEXTRACT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTEXTRACTREQUESTFIELDSTOEXTRACT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractExtractRequestFieldsToExtract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractExtractRequestFieldsToExtract& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(extractItem, extractItem_);
      DARABONBA_PTR_TO_JSON(option, option_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractExtractRequestFieldsToExtract& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(extractItem, extractItem_);
      DARABONBA_PTR_FROM_JSON(option, option_);
    };
    RunContractExtractRequestFieldsToExtract() = default ;
    RunContractExtractRequestFieldsToExtract(const RunContractExtractRequestFieldsToExtract &) = default ;
    RunContractExtractRequestFieldsToExtract(RunContractExtractRequestFieldsToExtract &&) = default ;
    RunContractExtractRequestFieldsToExtract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractExtractRequestFieldsToExtract() = default ;
    RunContractExtractRequestFieldsToExtract& operator=(const RunContractExtractRequestFieldsToExtract &) = default ;
    RunContractExtractRequestFieldsToExtract& operator=(RunContractExtractRequestFieldsToExtract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->extractItem_ == nullptr && return this->option_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline RunContractExtractRequestFieldsToExtract& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // extractItem Field Functions 
    bool hasExtractItem() const { return this->extractItem_ != nullptr;};
    void deleteExtractItem() { this->extractItem_ = nullptr;};
    inline string extractItem() const { DARABONBA_PTR_GET_DEFAULT(extractItem_, "") };
    inline RunContractExtractRequestFieldsToExtract& setExtractItem(string extractItem) { DARABONBA_PTR_SET_VALUE(extractItem_, extractItem) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const vector<string> & option() const { DARABONBA_PTR_GET_CONST(option_, vector<string>) };
    inline vector<string> option() { DARABONBA_PTR_GET(option_, vector<string>) };
    inline RunContractExtractRequestFieldsToExtract& setOption(const vector<string> & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline RunContractExtractRequestFieldsToExtract& setOption(vector<string> && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> extractItem_ = nullptr;
    std::shared_ptr<vector<string>> option_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
