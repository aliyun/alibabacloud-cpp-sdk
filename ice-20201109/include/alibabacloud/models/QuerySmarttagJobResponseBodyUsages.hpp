// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYUSAGES_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYUSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySmarttagJobResponseBodyUsagesUsage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobResponseBodyUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBodyUsages& obj) { 
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBodyUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    QuerySmarttagJobResponseBodyUsages() = default ;
    QuerySmarttagJobResponseBodyUsages(const QuerySmarttagJobResponseBodyUsages &) = default ;
    QuerySmarttagJobResponseBodyUsages(QuerySmarttagJobResponseBodyUsages &&) = default ;
    QuerySmarttagJobResponseBodyUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBodyUsages() = default ;
    QuerySmarttagJobResponseBodyUsages& operator=(const QuerySmarttagJobResponseBodyUsages &) = default ;
    QuerySmarttagJobResponseBodyUsages& operator=(QuerySmarttagJobResponseBodyUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usage_ == nullptr; };
    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const vector<Models::QuerySmarttagJobResponseBodyUsagesUsage> & usage() const { DARABONBA_PTR_GET_CONST(usage_, vector<Models::QuerySmarttagJobResponseBodyUsagesUsage>) };
    inline vector<Models::QuerySmarttagJobResponseBodyUsagesUsage> usage() { DARABONBA_PTR_GET(usage_, vector<Models::QuerySmarttagJobResponseBodyUsagesUsage>) };
    inline QuerySmarttagJobResponseBodyUsages& setUsage(const vector<Models::QuerySmarttagJobResponseBodyUsagesUsage> & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline QuerySmarttagJobResponseBodyUsages& setUsage(vector<Models::QuerySmarttagJobResponseBodyUsagesUsage> && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    std::shared_ptr<vector<Models::QuerySmarttagJobResponseBodyUsagesUsage>> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
