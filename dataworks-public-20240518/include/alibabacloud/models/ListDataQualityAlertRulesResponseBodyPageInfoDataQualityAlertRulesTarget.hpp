// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULESTARGET_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULESTARGET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget &&) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& operator=(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& operator=(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && return this->type_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of monitored target IDs
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The type of the monitored target. Only DataQualityScan is supported.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
