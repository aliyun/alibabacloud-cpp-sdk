// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATECONTAINER_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATECONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The container format.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
