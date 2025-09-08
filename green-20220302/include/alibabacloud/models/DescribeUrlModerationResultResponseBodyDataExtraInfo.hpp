// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATAEXTRAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATAEXTRAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUrlModerationResultResponseBodyDataExtraInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlModerationResultResponseBodyDataExtraInfo& obj) { 
      DARABONBA_PTR_TO_JSON(IcpNo, icpNo_);
      DARABONBA_PTR_TO_JSON(IcpType, icpType_);
      DARABONBA_PTR_TO_JSON(SiteType, siteType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlModerationResultResponseBodyDataExtraInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(IcpNo, icpNo_);
      DARABONBA_PTR_FROM_JSON(IcpType, icpType_);
      DARABONBA_PTR_FROM_JSON(SiteType, siteType_);
    };
    DescribeUrlModerationResultResponseBodyDataExtraInfo() = default ;
    DescribeUrlModerationResultResponseBodyDataExtraInfo(const DescribeUrlModerationResultResponseBodyDataExtraInfo &) = default ;
    DescribeUrlModerationResultResponseBodyDataExtraInfo(DescribeUrlModerationResultResponseBodyDataExtraInfo &&) = default ;
    DescribeUrlModerationResultResponseBodyDataExtraInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlModerationResultResponseBodyDataExtraInfo() = default ;
    DescribeUrlModerationResultResponseBodyDataExtraInfo& operator=(const DescribeUrlModerationResultResponseBodyDataExtraInfo &) = default ;
    DescribeUrlModerationResultResponseBodyDataExtraInfo& operator=(DescribeUrlModerationResultResponseBodyDataExtraInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icpNo_ != nullptr
        && this->icpType_ != nullptr && this->siteType_ != nullptr; };
    // icpNo Field Functions 
    bool hasIcpNo() const { return this->icpNo_ != nullptr;};
    void deleteIcpNo() { this->icpNo_ = nullptr;};
    inline string icpNo() const { DARABONBA_PTR_GET_DEFAULT(icpNo_, "") };
    inline DescribeUrlModerationResultResponseBodyDataExtraInfo& setIcpNo(string icpNo) { DARABONBA_PTR_SET_VALUE(icpNo_, icpNo) };


    // icpType Field Functions 
    bool hasIcpType() const { return this->icpType_ != nullptr;};
    void deleteIcpType() { this->icpType_ = nullptr;};
    inline string icpType() const { DARABONBA_PTR_GET_DEFAULT(icpType_, "") };
    inline DescribeUrlModerationResultResponseBodyDataExtraInfo& setIcpType(string icpType) { DARABONBA_PTR_SET_VALUE(icpType_, icpType) };


    // siteType Field Functions 
    bool hasSiteType() const { return this->siteType_ != nullptr;};
    void deleteSiteType() { this->siteType_ = nullptr;};
    inline string siteType() const { DARABONBA_PTR_GET_DEFAULT(siteType_, "") };
    inline DescribeUrlModerationResultResponseBodyDataExtraInfo& setSiteType(string siteType) { DARABONBA_PTR_SET_VALUE(siteType_, siteType) };


  protected:
    // The ICP number.
    std::shared_ptr<string> icpNo_ = nullptr;
    // The type of the ICP filing.
    std::shared_ptr<string> icpType_ = nullptr;
    // The type of site
    std::shared_ptr<string> siteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
