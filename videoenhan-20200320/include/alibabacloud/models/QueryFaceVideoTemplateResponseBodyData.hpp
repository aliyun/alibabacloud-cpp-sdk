// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEVIDEOTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEVIDEOTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryFaceVideoTemplateResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class QueryFaceVideoTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceVideoTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceVideoTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryFaceVideoTemplateResponseBodyData() = default ;
    QueryFaceVideoTemplateResponseBodyData(const QueryFaceVideoTemplateResponseBodyData &) = default ;
    QueryFaceVideoTemplateResponseBodyData(QueryFaceVideoTemplateResponseBodyData &&) = default ;
    QueryFaceVideoTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceVideoTemplateResponseBodyData() = default ;
    QueryFaceVideoTemplateResponseBodyData& operator=(const QueryFaceVideoTemplateResponseBodyData &) = default ;
    QueryFaceVideoTemplateResponseBodyData& operator=(QueryFaceVideoTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->total_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::QueryFaceVideoTemplateResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::QueryFaceVideoTemplateResponseBodyDataElements>) };
    inline vector<Models::QueryFaceVideoTemplateResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::QueryFaceVideoTemplateResponseBodyDataElements>) };
    inline QueryFaceVideoTemplateResponseBodyData& setElements(const vector<Models::QueryFaceVideoTemplateResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline QueryFaceVideoTemplateResponseBodyData& setElements(vector<Models::QueryFaceVideoTemplateResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryFaceVideoTemplateResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::QueryFaceVideoTemplateResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
