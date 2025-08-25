// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTSDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanTextResponseBodyDataElementsResultsDetailsContexts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextResponseBodyDataElementsResultsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextResponseBodyDataElementsResultsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Contexts, contexts_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextResponseBodyDataElementsResultsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Contexts, contexts_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    ScanTextResponseBodyDataElementsResultsDetails() = default ;
    ScanTextResponseBodyDataElementsResultsDetails(const ScanTextResponseBodyDataElementsResultsDetails &) = default ;
    ScanTextResponseBodyDataElementsResultsDetails(ScanTextResponseBodyDataElementsResultsDetails &&) = default ;
    ScanTextResponseBodyDataElementsResultsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextResponseBodyDataElementsResultsDetails() = default ;
    ScanTextResponseBodyDataElementsResultsDetails& operator=(const ScanTextResponseBodyDataElementsResultsDetails &) = default ;
    ScanTextResponseBodyDataElementsResultsDetails& operator=(ScanTextResponseBodyDataElementsResultsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contexts_ != nullptr
        && this->label_ != nullptr; };
    // contexts Field Functions 
    bool hasContexts() const { return this->contexts_ != nullptr;};
    void deleteContexts() { this->contexts_ = nullptr;};
    inline const vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts> & contexts() const { DARABONBA_PTR_GET_CONST(contexts_, vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts>) };
    inline vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts> contexts() { DARABONBA_PTR_GET(contexts_, vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts>) };
    inline ScanTextResponseBodyDataElementsResultsDetails& setContexts(const vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts> & contexts) { DARABONBA_PTR_SET_VALUE(contexts_, contexts) };
    inline ScanTextResponseBodyDataElementsResultsDetails& setContexts(vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts> && contexts) { DARABONBA_PTR_SET_RVALUE(contexts_, contexts) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ScanTextResponseBodyDataElementsResultsDetails& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    std::shared_ptr<vector<Models::ScanTextResponseBodyDataElementsResultsDetailsContexts>> contexts_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
