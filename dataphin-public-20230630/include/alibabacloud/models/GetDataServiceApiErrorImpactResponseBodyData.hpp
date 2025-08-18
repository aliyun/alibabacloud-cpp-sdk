// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiErrorImpactResponseBodyDataErrorApiList.hpp>
#include <alibabacloud/models/GetDataServiceApiErrorImpactResponseBodyDataErrorAppList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiErrorImpactResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiErrorImpactResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorApiList, errorApiList_);
      DARABONBA_PTR_TO_JSON(ErrorAppList, errorAppList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiErrorImpactResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorApiList, errorApiList_);
      DARABONBA_PTR_FROM_JSON(ErrorAppList, errorAppList_);
    };
    GetDataServiceApiErrorImpactResponseBodyData() = default ;
    GetDataServiceApiErrorImpactResponseBodyData(const GetDataServiceApiErrorImpactResponseBodyData &) = default ;
    GetDataServiceApiErrorImpactResponseBodyData(GetDataServiceApiErrorImpactResponseBodyData &&) = default ;
    GetDataServiceApiErrorImpactResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiErrorImpactResponseBodyData() = default ;
    GetDataServiceApiErrorImpactResponseBodyData& operator=(const GetDataServiceApiErrorImpactResponseBodyData &) = default ;
    GetDataServiceApiErrorImpactResponseBodyData& operator=(GetDataServiceApiErrorImpactResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorApiList_ != nullptr
        && this->errorAppList_ != nullptr; };
    // errorApiList Field Functions 
    bool hasErrorApiList() const { return this->errorApiList_ != nullptr;};
    void deleteErrorApiList() { this->errorApiList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList> & errorApiList() const { DARABONBA_PTR_GET_CONST(errorApiList_, vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList>) };
    inline vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList> errorApiList() { DARABONBA_PTR_GET(errorApiList_, vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList>) };
    inline GetDataServiceApiErrorImpactResponseBodyData& setErrorApiList(const vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList> & errorApiList) { DARABONBA_PTR_SET_VALUE(errorApiList_, errorApiList) };
    inline GetDataServiceApiErrorImpactResponseBodyData& setErrorApiList(vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList> && errorApiList) { DARABONBA_PTR_SET_RVALUE(errorApiList_, errorApiList) };


    // errorAppList Field Functions 
    bool hasErrorAppList() const { return this->errorAppList_ != nullptr;};
    void deleteErrorAppList() { this->errorAppList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList> & errorAppList() const { DARABONBA_PTR_GET_CONST(errorAppList_, vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList>) };
    inline vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList> errorAppList() { DARABONBA_PTR_GET(errorAppList_, vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList>) };
    inline GetDataServiceApiErrorImpactResponseBodyData& setErrorAppList(const vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList> & errorAppList) { DARABONBA_PTR_SET_VALUE(errorAppList_, errorAppList) };
    inline GetDataServiceApiErrorImpactResponseBodyData& setErrorAppList(vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList> && errorAppList) { DARABONBA_PTR_SET_RVALUE(errorAppList_, errorAppList) };


  protected:
    std::shared_ptr<vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorApiList>> errorApiList_ = nullptr;
    std::shared_ptr<vector<Models::GetDataServiceApiErrorImpactResponseBodyDataErrorAppList>> errorAppList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
