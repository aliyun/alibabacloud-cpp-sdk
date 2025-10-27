// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODYSCENARIOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODYSCENARIOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSimilarEventScenariosResponseBodyScenarios : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarEventScenariosResponseBodyScenarios& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarEventScenariosResponseBodyScenarios& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    DescribeSimilarEventScenariosResponseBodyScenarios() = default ;
    DescribeSimilarEventScenariosResponseBodyScenarios(const DescribeSimilarEventScenariosResponseBodyScenarios &) = default ;
    DescribeSimilarEventScenariosResponseBodyScenarios(DescribeSimilarEventScenariosResponseBodyScenarios &&) = default ;
    DescribeSimilarEventScenariosResponseBodyScenarios(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarEventScenariosResponseBodyScenarios() = default ;
    DescribeSimilarEventScenariosResponseBodyScenarios& operator=(const DescribeSimilarEventScenariosResponseBodyScenarios &) = default ;
    DescribeSimilarEventScenariosResponseBodyScenarios& operator=(DescribeSimilarEventScenariosResponseBodyScenarios &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSimilarEventScenariosResponseBodyScenarios& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // The code of the scenario. Valid values:
    // 
    // *   **default**: the same alert type
    // *   **same_file_content**: the same file content rule.
    // *   **same_ip**: the same IP address rule.
    // *   **same_url**: the same URL rule.
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
