// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODYMODULEALLCITYBASEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODYMODULEALLCITYBASEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(adcode, adcode_);
      DARABONBA_PTR_TO_JSON(city_code, cityCode_);
      DARABONBA_PTR_TO_JSON(city_level, cityLevel_);
      DARABONBA_PTR_TO_JSON(city_name, cityName_);
      DARABONBA_PTR_TO_JSON(cn_name_tree, cnNameTree_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(other_name_list, otherNameList_);
    };
    friend void from_json(const Darabonba::Json& j, AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(adcode, adcode_);
      DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
      DARABONBA_PTR_FROM_JSON(city_level, cityLevel_);
      DARABONBA_PTR_FROM_JSON(city_name, cityName_);
      DARABONBA_PTR_FROM_JSON(cn_name_tree, cnNameTree_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(other_name_list, otherNameList_);
    };
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList() = default ;
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList(const AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList &) = default ;
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList(AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList &&) = default ;
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList() = default ;
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& operator=(const AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList &) = default ;
    AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& operator=(AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adcode_ != nullptr
        && this->cityCode_ != nullptr && this->cityLevel_ != nullptr && this->cityName_ != nullptr && this->cnNameTree_ != nullptr && this->id_ != nullptr
        && this->otherNameList_ != nullptr; };
    // adcode Field Functions 
    bool hasAdcode() const { return this->adcode_ != nullptr;};
    void deleteAdcode() { this->adcode_ = nullptr;};
    inline string adcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


    // cityCode Field Functions 
    bool hasCityCode() const { return this->cityCode_ != nullptr;};
    void deleteCityCode() { this->cityCode_ = nullptr;};
    inline string cityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


    // cityLevel Field Functions 
    bool hasCityLevel() const { return this->cityLevel_ != nullptr;};
    void deleteCityLevel() { this->cityLevel_ = nullptr;};
    inline string cityLevel() const { DARABONBA_PTR_GET_DEFAULT(cityLevel_, "") };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setCityLevel(string cityLevel) { DARABONBA_PTR_SET_VALUE(cityLevel_, cityLevel) };


    // cityName Field Functions 
    bool hasCityName() const { return this->cityName_ != nullptr;};
    void deleteCityName() { this->cityName_ = nullptr;};
    inline string cityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


    // cnNameTree Field Functions 
    bool hasCnNameTree() const { return this->cnNameTree_ != nullptr;};
    void deleteCnNameTree() { this->cnNameTree_ = nullptr;};
    inline string cnNameTree() const { DARABONBA_PTR_GET_DEFAULT(cnNameTree_, "") };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setCnNameTree(string cnNameTree) { DARABONBA_PTR_SET_VALUE(cnNameTree_, cnNameTree) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // otherNameList Field Functions 
    bool hasOtherNameList() const { return this->otherNameList_ != nullptr;};
    void deleteOtherNameList() { this->otherNameList_ = nullptr;};
    inline const vector<string> & otherNameList() const { DARABONBA_PTR_GET_CONST(otherNameList_, vector<string>) };
    inline vector<string> otherNameList() { DARABONBA_PTR_GET(otherNameList_, vector<string>) };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setOtherNameList(const vector<string> & otherNameList) { DARABONBA_PTR_SET_VALUE(otherNameList_, otherNameList) };
    inline AllBaseCityInfoQueryResponseBodyModuleAllCityBaseInfoList& setOtherNameList(vector<string> && otherNameList) { DARABONBA_PTR_SET_RVALUE(otherNameList_, otherNameList) };


  protected:
    std::shared_ptr<string> adcode_ = nullptr;
    std::shared_ptr<string> cityCode_ = nullptr;
    std::shared_ptr<string> cityLevel_ = nullptr;
    std::shared_ptr<string> cityName_ = nullptr;
    std::shared_ptr<string> cnNameTree_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<string>> otherNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
