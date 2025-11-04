// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIACONNECTAVAILABLEREGIONRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIACONNECTAVAILABLEREGIONRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaConnectAvailableRegionResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaConnectAvailableRegionResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRegion, defaultRegion_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaConnectAvailableRegionResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRegion, defaultRegion_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
    };
    GetMediaConnectAvailableRegionResponseBodyContent() = default ;
    GetMediaConnectAvailableRegionResponseBodyContent(const GetMediaConnectAvailableRegionResponseBodyContent &) = default ;
    GetMediaConnectAvailableRegionResponseBodyContent(GetMediaConnectAvailableRegionResponseBodyContent &&) = default ;
    GetMediaConnectAvailableRegionResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaConnectAvailableRegionResponseBodyContent() = default ;
    GetMediaConnectAvailableRegionResponseBodyContent& operator=(const GetMediaConnectAvailableRegionResponseBodyContent &) = default ;
    GetMediaConnectAvailableRegionResponseBodyContent& operator=(GetMediaConnectAvailableRegionResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRegion_ == nullptr
        && return this->regionList_ == nullptr; };
    // defaultRegion Field Functions 
    bool hasDefaultRegion() const { return this->defaultRegion_ != nullptr;};
    void deleteDefaultRegion() { this->defaultRegion_ = nullptr;};
    inline string defaultRegion() const { DARABONBA_PTR_GET_DEFAULT(defaultRegion_, "") };
    inline GetMediaConnectAvailableRegionResponseBodyContent& setDefaultRegion(string defaultRegion) { DARABONBA_PTR_SET_VALUE(defaultRegion_, defaultRegion) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<string> & regionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<string>) };
    inline vector<string> regionList() { DARABONBA_PTR_GET(regionList_, vector<string>) };
    inline GetMediaConnectAvailableRegionResponseBodyContent& setRegionList(const vector<string> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline GetMediaConnectAvailableRegionResponseBodyContent& setRegionList(vector<string> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


  protected:
    // The default region. You can ignore the parameter.
    std::shared_ptr<string> defaultRegion_ = nullptr;
    // The supported regions.
    std::shared_ptr<vector<string>> regionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
