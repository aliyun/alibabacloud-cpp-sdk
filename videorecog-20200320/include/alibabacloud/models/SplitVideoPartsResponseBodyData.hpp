// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SplitVideoPartsResponseBodyDataElements.hpp>
#include <alibabacloud/models/SplitVideoPartsResponseBodyDataSplitVideoPartResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(SplitVideoPartResults, splitVideoPartResults_);
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(SplitVideoPartResults, splitVideoPartResults_);
    };
    SplitVideoPartsResponseBodyData() = default ;
    SplitVideoPartsResponseBodyData(const SplitVideoPartsResponseBodyData &) = default ;
    SplitVideoPartsResponseBodyData(SplitVideoPartsResponseBodyData &&) = default ;
    SplitVideoPartsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsResponseBodyData() = default ;
    SplitVideoPartsResponseBodyData& operator=(const SplitVideoPartsResponseBodyData &) = default ;
    SplitVideoPartsResponseBodyData& operator=(SplitVideoPartsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->splitVideoPartResults_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::SplitVideoPartsResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::SplitVideoPartsResponseBodyDataElements>) };
    inline vector<Models::SplitVideoPartsResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::SplitVideoPartsResponseBodyDataElements>) };
    inline SplitVideoPartsResponseBodyData& setElements(const vector<Models::SplitVideoPartsResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline SplitVideoPartsResponseBodyData& setElements(vector<Models::SplitVideoPartsResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // splitVideoPartResults Field Functions 
    bool hasSplitVideoPartResults() const { return this->splitVideoPartResults_ != nullptr;};
    void deleteSplitVideoPartResults() { this->splitVideoPartResults_ = nullptr;};
    inline const vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults> & splitVideoPartResults() const { DARABONBA_PTR_GET_CONST(splitVideoPartResults_, vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults>) };
    inline vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults> splitVideoPartResults() { DARABONBA_PTR_GET(splitVideoPartResults_, vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults>) };
    inline SplitVideoPartsResponseBodyData& setSplitVideoPartResults(const vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults> & splitVideoPartResults) { DARABONBA_PTR_SET_VALUE(splitVideoPartResults_, splitVideoPartResults) };
    inline SplitVideoPartsResponseBodyData& setSplitVideoPartResults(vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults> && splitVideoPartResults) { DARABONBA_PTR_SET_RVALUE(splitVideoPartResults_, splitVideoPartResults) };


  protected:
    std::shared_ptr<vector<Models::SplitVideoPartsResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<vector<Models::SplitVideoPartsResponseBodyDataSplitVideoPartResults>> splitVideoPartResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
