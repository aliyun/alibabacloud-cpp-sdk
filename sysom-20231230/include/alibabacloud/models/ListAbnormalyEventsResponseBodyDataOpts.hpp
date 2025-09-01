// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATAOPTS_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATAOPTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAbnormalyEventsResponseBodyDataOptsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBodyDataOpts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBodyDataOpts& obj) { 
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBodyDataOpts& obj) { 
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAbnormalyEventsResponseBodyDataOpts() = default ;
    ListAbnormalyEventsResponseBodyDataOpts(const ListAbnormalyEventsResponseBodyDataOpts &) = default ;
    ListAbnormalyEventsResponseBodyDataOpts(ListAbnormalyEventsResponseBodyDataOpts &&) = default ;
    ListAbnormalyEventsResponseBodyDataOpts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBodyDataOpts() = default ;
    ListAbnormalyEventsResponseBodyDataOpts& operator=(const ListAbnormalyEventsResponseBodyDataOpts &) = default ;
    ListAbnormalyEventsResponseBodyDataOpts& operator=(ListAbnormalyEventsResponseBodyDataOpts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->label_ != nullptr
        && this->result_ != nullptr && this->type_ != nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListAbnormalyEventsResponseBodyDataOpts& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const Models::ListAbnormalyEventsResponseBodyDataOptsResult & result() const { DARABONBA_PTR_GET_CONST(result_, Models::ListAbnormalyEventsResponseBodyDataOptsResult) };
    inline Models::ListAbnormalyEventsResponseBodyDataOptsResult result() { DARABONBA_PTR_GET(result_, Models::ListAbnormalyEventsResponseBodyDataOptsResult) };
    inline ListAbnormalyEventsResponseBodyDataOpts& setResult(const Models::ListAbnormalyEventsResponseBodyDataOptsResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListAbnormalyEventsResponseBodyDataOpts& setResult(Models::ListAbnormalyEventsResponseBodyDataOptsResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAbnormalyEventsResponseBodyDataOpts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<Models::ListAbnormalyEventsResponseBodyDataOptsResult> result_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
