// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApiImpactsResponseBodyPageResultImpactList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiImpactsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiImpactsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(ImpactList, impactList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiImpactsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ImpactList, impactList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceApiImpactsResponseBodyPageResult() = default ;
    ListDataServiceApiImpactsResponseBodyPageResult(const ListDataServiceApiImpactsResponseBodyPageResult &) = default ;
    ListDataServiceApiImpactsResponseBodyPageResult(ListDataServiceApiImpactsResponseBodyPageResult &&) = default ;
    ListDataServiceApiImpactsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiImpactsResponseBodyPageResult() = default ;
    ListDataServiceApiImpactsResponseBodyPageResult& operator=(const ListDataServiceApiImpactsResponseBodyPageResult &) = default ;
    ListDataServiceApiImpactsResponseBodyPageResult& operator=(ListDataServiceApiImpactsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->impactList_ != nullptr
        && this->totalCount_ != nullptr; };
    // impactList Field Functions 
    bool hasImpactList() const { return this->impactList_ != nullptr;};
    void deleteImpactList() { this->impactList_ = nullptr;};
    inline const vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList> & impactList() const { DARABONBA_PTR_GET_CONST(impactList_, vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList>) };
    inline vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList> impactList() { DARABONBA_PTR_GET(impactList_, vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList>) };
    inline ListDataServiceApiImpactsResponseBodyPageResult& setImpactList(const vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList> & impactList) { DARABONBA_PTR_SET_VALUE(impactList_, impactList) };
    inline ListDataServiceApiImpactsResponseBodyPageResult& setImpactList(vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList> && impactList) { DARABONBA_PTR_SET_RVALUE(impactList_, impactList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceApiImpactsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceApiImpactsResponseBodyPageResultImpactList>> impactList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
