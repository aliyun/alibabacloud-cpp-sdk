// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECULIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPLICATIONSTATUSRESPONSEBODYAPPINFOECULIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryApplicationStatusResponseBodyAppInfoEcuListEcu.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryApplicationStatusResponseBodyAppInfoEcuList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryApplicationStatusResponseBodyAppInfoEcuList& obj) { 
      DARABONBA_PTR_TO_JSON(Ecu, ecu_);
    };
    friend void from_json(const Darabonba::Json& j, QueryApplicationStatusResponseBodyAppInfoEcuList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ecu, ecu_);
    };
    QueryApplicationStatusResponseBodyAppInfoEcuList() = default ;
    QueryApplicationStatusResponseBodyAppInfoEcuList(const QueryApplicationStatusResponseBodyAppInfoEcuList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEcuList(QueryApplicationStatusResponseBodyAppInfoEcuList &&) = default ;
    QueryApplicationStatusResponseBodyAppInfoEcuList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryApplicationStatusResponseBodyAppInfoEcuList() = default ;
    QueryApplicationStatusResponseBodyAppInfoEcuList& operator=(const QueryApplicationStatusResponseBodyAppInfoEcuList &) = default ;
    QueryApplicationStatusResponseBodyAppInfoEcuList& operator=(QueryApplicationStatusResponseBodyAppInfoEcuList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecu_ == nullptr; };
    // ecu Field Functions 
    bool hasEcu() const { return this->ecu_ != nullptr;};
    void deleteEcu() { this->ecu_ = nullptr;};
    inline const vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu> & ecu() const { DARABONBA_PTR_GET_CONST(ecu_, vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu>) };
    inline vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu> ecu() { DARABONBA_PTR_GET(ecu_, vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu>) };
    inline QueryApplicationStatusResponseBodyAppInfoEcuList& setEcu(const vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu> & ecu) { DARABONBA_PTR_SET_VALUE(ecu_, ecu) };
    inline QueryApplicationStatusResponseBodyAppInfoEcuList& setEcu(vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu> && ecu) { DARABONBA_PTR_SET_RVALUE(ecu_, ecu) };


  protected:
    std::shared_ptr<vector<Models::QueryApplicationStatusResponseBodyAppInfoEcuListEcu>> ecu_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
