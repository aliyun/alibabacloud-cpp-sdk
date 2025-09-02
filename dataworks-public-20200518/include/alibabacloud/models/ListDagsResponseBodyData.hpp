// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDAGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDagsResponseBodyDataDags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDagsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDagsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Dags, dags_);
    };
    friend void from_json(const Darabonba::Json& j, ListDagsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Dags, dags_);
    };
    ListDagsResponseBodyData() = default ;
    ListDagsResponseBodyData(const ListDagsResponseBodyData &) = default ;
    ListDagsResponseBodyData(ListDagsResponseBodyData &&) = default ;
    ListDagsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDagsResponseBodyData() = default ;
    ListDagsResponseBodyData& operator=(const ListDagsResponseBodyData &) = default ;
    ListDagsResponseBodyData& operator=(ListDagsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dags_ != nullptr; };
    // dags Field Functions 
    bool hasDags() const { return this->dags_ != nullptr;};
    void deleteDags() { this->dags_ = nullptr;};
    inline const vector<Models::ListDagsResponseBodyDataDags> & dags() const { DARABONBA_PTR_GET_CONST(dags_, vector<Models::ListDagsResponseBodyDataDags>) };
    inline vector<Models::ListDagsResponseBodyDataDags> dags() { DARABONBA_PTR_GET(dags_, vector<Models::ListDagsResponseBodyDataDags>) };
    inline ListDagsResponseBodyData& setDags(const vector<Models::ListDagsResponseBodyDataDags> & dags) { DARABONBA_PTR_SET_VALUE(dags_, dags) };
    inline ListDagsResponseBodyData& setDags(vector<Models::ListDagsResponseBodyDataDags> && dags) { DARABONBA_PTR_SET_RVALUE(dags_, dags) };


  protected:
    // The entities returned.
    std::shared_ptr<vector<Models::ListDagsResponseBodyDataDags>> dags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
