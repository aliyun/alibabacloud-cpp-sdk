// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBUSINESSCATEGORYLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetBusinessCategoryListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusinessCategoryListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusinessCategoryListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessCategoryBasicInfo, businessCategoryBasicInfo_);
    };
    GetBusinessCategoryListResponseBodyData() = default ;
    GetBusinessCategoryListResponseBodyData(const GetBusinessCategoryListResponseBodyData &) = default ;
    GetBusinessCategoryListResponseBodyData(GetBusinessCategoryListResponseBodyData &&) = default ;
    GetBusinessCategoryListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusinessCategoryListResponseBodyData() = default ;
    GetBusinessCategoryListResponseBodyData& operator=(const GetBusinessCategoryListResponseBodyData &) = default ;
    GetBusinessCategoryListResponseBodyData& operator=(GetBusinessCategoryListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessCategoryBasicInfo_ == nullptr; };
    // businessCategoryBasicInfo Field Functions 
    bool hasBusinessCategoryBasicInfo() const { return this->businessCategoryBasicInfo_ != nullptr;};
    void deleteBusinessCategoryBasicInfo() { this->businessCategoryBasicInfo_ = nullptr;};
    inline const vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo> & businessCategoryBasicInfo() const { DARABONBA_PTR_GET_CONST(businessCategoryBasicInfo_, vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo>) };
    inline vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo> businessCategoryBasicInfo() { DARABONBA_PTR_GET(businessCategoryBasicInfo_, vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo>) };
    inline GetBusinessCategoryListResponseBodyData& setBusinessCategoryBasicInfo(const vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo> & businessCategoryBasicInfo) { DARABONBA_PTR_SET_VALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };
    inline GetBusinessCategoryListResponseBodyData& setBusinessCategoryBasicInfo(vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo> && businessCategoryBasicInfo) { DARABONBA_PTR_SET_RVALUE(businessCategoryBasicInfo_, businessCategoryBasicInfo) };


  protected:
    std::shared_ptr<vector<Models::GetBusinessCategoryListResponseBodyDataBusinessCategoryBasicInfo>> businessCategoryBasicInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
