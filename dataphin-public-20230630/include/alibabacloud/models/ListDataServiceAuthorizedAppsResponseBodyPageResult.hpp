// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAUTHORIZEDAPPSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceAuthorizedAppsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAuthorizedAppsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedAppList, authorizedAppList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAuthorizedAppsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedAppList, authorizedAppList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceAuthorizedAppsResponseBodyPageResult() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResult(const ListDataServiceAuthorizedAppsResponseBodyPageResult &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResult(ListDataServiceAuthorizedAppsResponseBodyPageResult &&) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAuthorizedAppsResponseBodyPageResult() = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResult& operator=(const ListDataServiceAuthorizedAppsResponseBodyPageResult &) = default ;
    ListDataServiceAuthorizedAppsResponseBodyPageResult& operator=(ListDataServiceAuthorizedAppsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedAppList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // authorizedAppList Field Functions 
    bool hasAuthorizedAppList() const { return this->authorizedAppList_ != nullptr;};
    void deleteAuthorizedAppList() { this->authorizedAppList_ = nullptr;};
    inline const vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList> & authorizedAppList() const { DARABONBA_PTR_GET_CONST(authorizedAppList_, vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList>) };
    inline vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList> authorizedAppList() { DARABONBA_PTR_GET(authorizedAppList_, vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList>) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResult& setAuthorizedAppList(const vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList> & authorizedAppList) { DARABONBA_PTR_SET_VALUE(authorizedAppList_, authorizedAppList) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResult& setAuthorizedAppList(vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList> && authorizedAppList) { DARABONBA_PTR_SET_RVALUE(authorizedAppList_, authorizedAppList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceAuthorizedAppsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceAuthorizedAppsResponseBodyPageResultAuthorizedAppList>> authorizedAppList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
