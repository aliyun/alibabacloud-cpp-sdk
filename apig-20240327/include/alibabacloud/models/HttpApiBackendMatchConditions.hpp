// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIBACKENDMATCHCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIBACKENDMATCHCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiBackendMatchCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiBackendMatchConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiBackendMatchConditions& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(default, default_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiBackendMatchConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(default, default_);
    };
    HttpApiBackendMatchConditions() = default ;
    HttpApiBackendMatchConditions(const HttpApiBackendMatchConditions &) = default ;
    HttpApiBackendMatchConditions(HttpApiBackendMatchConditions &&) = default ;
    HttpApiBackendMatchConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiBackendMatchConditions() = default ;
    HttpApiBackendMatchConditions& operator=(const HttpApiBackendMatchConditions &) = default ;
    HttpApiBackendMatchConditions& operator=(HttpApiBackendMatchConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->default_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<HttpApiBackendMatchCondition> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<HttpApiBackendMatchCondition>) };
    inline vector<HttpApiBackendMatchCondition> conditions() { DARABONBA_PTR_GET(conditions_, vector<HttpApiBackendMatchCondition>) };
    inline HttpApiBackendMatchConditions& setConditions(const vector<HttpApiBackendMatchCondition> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline HttpApiBackendMatchConditions& setConditions(vector<HttpApiBackendMatchCondition> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline bool _default() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
    inline HttpApiBackendMatchConditions& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


  protected:
    std::shared_ptr<vector<HttpApiBackendMatchCondition>> conditions_ = nullptr;
    std::shared_ptr<bool> default_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
