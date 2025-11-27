// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKDUCKDBDEPENDENCYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PrecheckDuckDBDependencyResponseBodyFailedCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PrecheckDuckDBDependencyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckDuckDBDependencyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCheckItems, failedCheckItems_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckDuckDBDependencyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCheckItems, failedCheckItems_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    PrecheckDuckDBDependencyResponseBody() = default ;
    PrecheckDuckDBDependencyResponseBody(const PrecheckDuckDBDependencyResponseBody &) = default ;
    PrecheckDuckDBDependencyResponseBody(PrecheckDuckDBDependencyResponseBody &&) = default ;
    PrecheckDuckDBDependencyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckDuckDBDependencyResponseBody() = default ;
    PrecheckDuckDBDependencyResponseBody& operator=(const PrecheckDuckDBDependencyResponseBody &) = default ;
    PrecheckDuckDBDependencyResponseBody& operator=(PrecheckDuckDBDependencyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedCheckItems_ == nullptr
        && return this->result_ == nullptr; };
    // failedCheckItems Field Functions 
    bool hasFailedCheckItems() const { return this->failedCheckItems_ != nullptr;};
    void deleteFailedCheckItems() { this->failedCheckItems_ = nullptr;};
    inline const vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems> & failedCheckItems() const { DARABONBA_PTR_GET_CONST(failedCheckItems_, vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems>) };
    inline vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems> failedCheckItems() { DARABONBA_PTR_GET(failedCheckItems_, vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems>) };
    inline PrecheckDuckDBDependencyResponseBody& setFailedCheckItems(const vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems> & failedCheckItems) { DARABONBA_PTR_SET_VALUE(failedCheckItems_, failedCheckItems) };
    inline PrecheckDuckDBDependencyResponseBody& setFailedCheckItems(vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems> && failedCheckItems) { DARABONBA_PTR_SET_RVALUE(failedCheckItems_, failedCheckItems) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline PrecheckDuckDBDependencyResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The check items that do not meet the requirements for creating DuckDB-based analytical instances.
    std::shared_ptr<vector<PrecheckDuckDBDependencyResponseBodyFailedCheckItems>> failedCheckItems_ = nullptr;
    // Indicates whether the primary instance meet the requirements for creating DuckDB-based analytical instances. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
