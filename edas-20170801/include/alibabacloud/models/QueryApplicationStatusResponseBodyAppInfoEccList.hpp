// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECCLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECCLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoEccListEcc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoEccList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoEccList& obj) { 
      DARABONBA_PTR_TO_JSON(Ecc, ecc_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoEccList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ecc, ecc_);
    };
    QueryApplicationStatusResponseBodyAppInfoEccList() = default ;
    QueryApplicationStatusResponseBodyAppInfoEccList(const QueryApplicationStatusResponseBodyAppInfoEccList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccList(QueryApplicationStatusResponseBodyAppInfoEccList &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoEccList() = default ;
    QueryApplicationStatusResponseBodyAppInfoEccList& operator=(const QueryApplicationStatusResponseBodyAppInfoEccList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEccList& operator=(QueryApplicationStatusResponseBodyAppInfoEccList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecc_ == nullptr; };
    // ecc Field Functions 
    bool hasEcc() const { return this->ecc_ != nullptr;};
    void deleteEcc() { this->ecc_ = nullptr;};
    inline const vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc> & ecc() const { DARABONBA_PTR_GET_CONST(ecc_, vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc>) };
    inline vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc> ecc() { DARABONBA_PTR_GET(ecc_, vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc>) };
    inline QueryApplicationStatusResponseBodyAppInfoEccList& setEcc(const vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc> & ecc) { DARABONBA_PTR_SET_VALUE(ecc_, ecc) };
    inline QueryApplicationStatusResponseBodyAppInfoEccList& setEcc(vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc> && ecc) { DARABONBA_PTR_SET_RVALUE(ecc_, ecc) };


  protected:
    std::shared_ptr<vector<Models::QueryApplicationStatusResponseBodyAppInfoEccListEcc>> ecc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
