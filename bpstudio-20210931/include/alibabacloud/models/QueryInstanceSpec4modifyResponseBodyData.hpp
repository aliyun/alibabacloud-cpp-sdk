// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCESPEC4MODIFYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInstanceSpec4ModifyResponseBodyDataOptionalValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class QueryInstanceSpec4ModifyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceSpec4ModifyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OptionalValues, optionalValues_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceSpec4ModifyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OptionalValues, optionalValues_);
    };
    QueryInstanceSpec4ModifyResponseBodyData() = default ;
    QueryInstanceSpec4ModifyResponseBodyData(const QueryInstanceSpec4ModifyResponseBodyData &) = default ;
    QueryInstanceSpec4ModifyResponseBodyData(QueryInstanceSpec4ModifyResponseBodyData &&) = default ;
    QueryInstanceSpec4ModifyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceSpec4ModifyResponseBodyData() = default ;
    QueryInstanceSpec4ModifyResponseBodyData& operator=(const QueryInstanceSpec4ModifyResponseBodyData &) = default ;
    QueryInstanceSpec4ModifyResponseBodyData& operator=(QueryInstanceSpec4ModifyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->optionalValues_ != nullptr; };
    // optionalValues Field Functions 
    bool hasOptionalValues() const { return this->optionalValues_ != nullptr;};
    void deleteOptionalValues() { this->optionalValues_ = nullptr;};
    inline const vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues> & optionalValues() const { DARABONBA_PTR_GET_CONST(optionalValues_, vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues>) };
    inline vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues> optionalValues() { DARABONBA_PTR_GET(optionalValues_, vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues>) };
    inline QueryInstanceSpec4ModifyResponseBodyData& setOptionalValues(const vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues> & optionalValues) { DARABONBA_PTR_SET_VALUE(optionalValues_, optionalValues) };
    inline QueryInstanceSpec4ModifyResponseBodyData& setOptionalValues(vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues> && optionalValues) { DARABONBA_PTR_SET_RVALUE(optionalValues_, optionalValues) };


  protected:
    std::shared_ptr<vector<Models::QueryInstanceSpec4ModifyResponseBodyDataOptionalValues>> optionalValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
