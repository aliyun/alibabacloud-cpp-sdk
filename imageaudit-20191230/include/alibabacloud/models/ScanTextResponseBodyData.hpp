// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanTextResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    ScanTextResponseBodyData() = default ;
    ScanTextResponseBodyData(const ScanTextResponseBodyData &) = default ;
    ScanTextResponseBodyData(ScanTextResponseBodyData &&) = default ;
    ScanTextResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextResponseBodyData() = default ;
    ScanTextResponseBodyData& operator=(const ScanTextResponseBodyData &) = default ;
    ScanTextResponseBodyData& operator=(ScanTextResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::ScanTextResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::ScanTextResponseBodyDataElements>) };
    inline vector<Models::ScanTextResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::ScanTextResponseBodyDataElements>) };
    inline ScanTextResponseBodyData& setElements(const vector<Models::ScanTextResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline ScanTextResponseBodyData& setElements(vector<Models::ScanTextResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::ScanTextResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
