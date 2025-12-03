// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENEMERRISKRESPONSEBODYCLOUDHCRISKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENEMERRISKRESPONSEBODYCLOUDHCRISKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenEmerRiskResponseBodyCloudHcRiskItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& obj) { 
      DARABONBA_PTR_TO_JSON(AffectCount, affectCount_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(VulName, vulName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectCount, affectCount_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(VulName, vulName_);
    };
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems() = default ;
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems(const DescribeScreenEmerRiskResponseBodyCloudHcRiskItems &) = default ;
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems(DescribeScreenEmerRiskResponseBodyCloudHcRiskItems &&) = default ;
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenEmerRiskResponseBodyCloudHcRiskItems() = default ;
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& operator=(const DescribeScreenEmerRiskResponseBodyCloudHcRiskItems &) = default ;
    DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& operator=(DescribeScreenEmerRiskResponseBodyCloudHcRiskItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectCount_ == nullptr
        && return this->level_ == nullptr && return this->vulName_ == nullptr; };
    // affectCount Field Functions 
    bool hasAffectCount() const { return this->affectCount_ != nullptr;};
    void deleteAffectCount() { this->affectCount_ = nullptr;};
    inline int32_t affectCount() const { DARABONBA_PTR_GET_DEFAULT(affectCount_, 0) };
    inline DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& setAffectCount(int32_t affectCount) { DARABONBA_PTR_SET_VALUE(affectCount_, affectCount) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // vulName Field Functions 
    bool hasVulName() const { return this->vulName_ != nullptr;};
    void deleteVulName() { this->vulName_ = nullptr;};
    inline string vulName() const { DARABONBA_PTR_GET_DEFAULT(vulName_, "") };
    inline DescribeScreenEmerRiskResponseBodyCloudHcRiskItems& setVulName(string vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };


  protected:
    std::shared_ptr<int32_t> affectCount_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> vulName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
