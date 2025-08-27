// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AllBaseCityInfoQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllBaseCityInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(all_city_base_info_list, allCityBaseInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, AllBaseCityInfoQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(all_city_base_info_list, allCityBaseInfoList_);
    };
    AllBaseCityInfoQueryResponseBodyModule() = default ;
    AllBaseCityInfoQueryResponseBodyModule(const AllBaseCityInfoQueryResponseBodyModule &) = default ;
    AllBaseCityInfoQueryResponseBodyModule(AllBaseCityInfoQueryResponseBodyModule &&) = default ;
    AllBaseCityInfoQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllBaseCityInfoQueryResponseBodyModule() = default ;
    AllBaseCityInfoQueryResponseBodyModule& operator=(const AllBaseCityInfoQueryResponseBodyModule &) = default ;
    AllBaseCityInfoQueryResponseBodyModule& operator=(AllBaseCityInfoQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allCityBaseInfoList_ != nullptr; };
    // allCityBaseInfoList Field Functions 
    bool hasAllCityBaseInfoList() const { return this->allCityBaseInfoList_ != nullptr;};
    void deleteAllCityBaseInfoList() { this->allCityBaseInfoList_ = nullptr;};
    inline const vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList> & allCityBaseInfoList() const { DARABONBA_PTR_GET_CONST(allCityBaseInfoList_, vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList>) };
    inline vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList> allCityBaseInfoList() { DARABONBA_PTR_GET(allCityBaseInfoList_, vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList>) };
    inline AllBaseCityInfoQueryResponseBodyModule& setAllCityBaseInfoList(const vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList> & allCityBaseInfoList) { DARABONBA_PTR_SET_VALUE(allCityBaseInfoList_, allCityBaseInfoList) };
    inline AllBaseCityInfoQueryResponseBodyModule& setAllCityBaseInfoList(vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList> && allCityBaseInfoList) { DARABONBA_PTR_SET_RVALUE(allCityBaseInfoList_, allCityBaseInfoList) };


  protected:
    std::shared_ptr<vector<Models::AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList>> allCityBaseInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
