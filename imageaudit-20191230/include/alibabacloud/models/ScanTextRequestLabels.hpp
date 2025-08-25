// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTREQUESTLABELS_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTREQUESTLABELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextRequestLabels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextRequestLabels& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextRequestLabels& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    ScanTextRequestLabels() = default ;
    ScanTextRequestLabels(const ScanTextRequestLabels &) = default ;
    ScanTextRequestLabels(ScanTextRequestLabels &&) = default ;
    ScanTextRequestLabels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextRequestLabels() = default ;
    ScanTextRequestLabels& operator=(const ScanTextRequestLabels &) = default ;
    ScanTextRequestLabels& operator=(ScanTextRequestLabels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ScanTextRequestLabels& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
