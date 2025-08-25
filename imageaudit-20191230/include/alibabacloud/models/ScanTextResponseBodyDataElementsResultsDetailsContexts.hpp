// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTSDETAILSCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTSRESULTSDETAILSCONTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextResponseBodyDataElementsResultsDetailsContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextResponseBodyDataElementsResultsDetailsContexts& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextResponseBodyDataElementsResultsDetailsContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
    };
    ScanTextResponseBodyDataElementsResultsDetailsContexts() = default ;
    ScanTextResponseBodyDataElementsResultsDetailsContexts(const ScanTextResponseBodyDataElementsResultsDetailsContexts &) = default ;
    ScanTextResponseBodyDataElementsResultsDetailsContexts(ScanTextResponseBodyDataElementsResultsDetailsContexts &&) = default ;
    ScanTextResponseBodyDataElementsResultsDetailsContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextResponseBodyDataElementsResultsDetailsContexts() = default ;
    ScanTextResponseBodyDataElementsResultsDetailsContexts& operator=(const ScanTextResponseBodyDataElementsResultsDetailsContexts &) = default ;
    ScanTextResponseBodyDataElementsResultsDetailsContexts& operator=(ScanTextResponseBodyDataElementsResultsDetailsContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline ScanTextResponseBodyDataElementsResultsDetailsContexts& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


  protected:
    std::shared_ptr<string> context_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
