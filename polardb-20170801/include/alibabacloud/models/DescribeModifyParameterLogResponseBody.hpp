// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModifyParameterLogResponseBodyItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody(DescribeModifyParameterLogResponseBody &&) = default ;
    DescribeModifyParameterLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBody() = default ;
    DescribeModifyParameterLogResponseBody& operator=(const DescribeModifyParameterLogResponseBody &) = default ;
    DescribeModifyParameterLogResponseBody& operator=(DescribeModifyParameterLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->items_ != nullptr && this->requestId_ != nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeModifyParameterLogResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeModifyParameterLogResponseBodyItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeModifyParameterLogResponseBodyItems>) };
    inline vector<DescribeModifyParameterLogResponseBodyItems> items() { DARABONBA_PTR_GET(items_, vector<DescribeModifyParameterLogResponseBodyItems>) };
    inline DescribeModifyParameterLogResponseBody& setItems(const vector<DescribeModifyParameterLogResponseBodyItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeModifyParameterLogResponseBody& setItems(vector<DescribeModifyParameterLogResponseBodyItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModifyParameterLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> engine_ = nullptr;
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<vector<DescribeModifyParameterLogResponseBodyItems>> items_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
