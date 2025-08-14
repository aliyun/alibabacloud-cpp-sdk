// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODYPRIVATEZONEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODYPRIVATEZONEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateZoneInfo, privateZoneInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateZoneInfo, privateZoneInfo_);
    };
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos() = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos(const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos &) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos(DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos &&) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos() = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& operator=(const DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos &) = default ;
    DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& operator=(DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateZoneInfo_ != nullptr; };
    // privateZoneInfo Field Functions 
    bool hasPrivateZoneInfo() const { return this->privateZoneInfo_ != nullptr;};
    void deletePrivateZoneInfo() { this->privateZoneInfo_ = nullptr;};
    inline const vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo> & privateZoneInfo() const { DARABONBA_PTR_GET_CONST(privateZoneInfo_, vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo>) };
    inline vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo> privateZoneInfo() { DARABONBA_PTR_GET(privateZoneInfo_, vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo>) };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& setPrivateZoneInfo(const vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo> & privateZoneInfo) { DARABONBA_PTR_SET_VALUE(privateZoneInfo_, privateZoneInfo) };
    inline DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfos& setPrivateZoneInfo(vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo> && privateZoneInfo) { DARABONBA_PTR_SET_RVALUE(privateZoneInfo_, privateZoneInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCenPrivateZoneRoutesResponseBodyPrivateZoneInfosPrivateZoneInfo>> privateZoneInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
