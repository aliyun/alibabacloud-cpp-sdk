// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMAPPCENTERAPPSRESPONSEBODYLISTMAPPCENTERAPPRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMappCenterAppsResponseBodyListMappCenterAppResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMappCenterAppsResponseBodyListMappCenterAppResult& obj) { 
      DARABONBA_PTR_TO_JSON(MappCenterAppList, mappCenterAppList_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMappCenterAppsResponseBodyListMappCenterAppResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MappCenterAppList, mappCenterAppList_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMappCenterAppsResponseBodyListMappCenterAppResult() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResult(const ListMappCenterAppsResponseBodyListMappCenterAppResult &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResult(ListMappCenterAppsResponseBodyListMappCenterAppResult &&) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMappCenterAppsResponseBodyListMappCenterAppResult() = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResult& operator=(const ListMappCenterAppsResponseBodyListMappCenterAppResult &) = default ;
    ListMappCenterAppsResponseBodyListMappCenterAppResult& operator=(ListMappCenterAppsResponseBodyListMappCenterAppResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mappCenterAppList_ == nullptr
        && return this->resultMsg_ == nullptr && return this->success_ == nullptr; };
    // mappCenterAppList Field Functions 
    bool hasMappCenterAppList() const { return this->mappCenterAppList_ != nullptr;};
    void deleteMappCenterAppList() { this->mappCenterAppList_ = nullptr;};
    inline const vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList> & mappCenterAppList() const { DARABONBA_PTR_GET_CONST(mappCenterAppList_, vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList>) };
    inline vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList> mappCenterAppList() { DARABONBA_PTR_GET(mappCenterAppList_, vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList>) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResult& setMappCenterAppList(const vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList> & mappCenterAppList) { DARABONBA_PTR_SET_VALUE(mappCenterAppList_, mappCenterAppList) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResult& setMappCenterAppList(vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList> && mappCenterAppList) { DARABONBA_PTR_SET_RVALUE(mappCenterAppList_, mappCenterAppList) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMappCenterAppsResponseBodyListMappCenterAppResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<Models::ListMappCenterAppsResponseBodyListMappCenterAppResultMappCenterAppList>> mappCenterAppList_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
