// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENCLOUDHCRISKRESPONSEBODYCLOUDHCRISKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENCLOUDHCRISKRESPONSEBODYCLOUDHCRISKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& obj) { 
      DARABONBA_PTR_TO_JSON(AffectCount, affectCount_);
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Pass, pass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectCount, affectCount_);
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Pass, pass_);
    };
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems() = default ;
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems(const DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems &) = default ;
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems(DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems &&) = default ;
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems() = default ;
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& operator=(const DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems &) = default ;
    DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& operator=(DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectCount_ == nullptr
        && return this->checkItem_ == nullptr && return this->level_ == nullptr && return this->pass_ == nullptr; };
    // affectCount Field Functions 
    bool hasAffectCount() const { return this->affectCount_ != nullptr;};
    void deleteAffectCount() { this->affectCount_ = nullptr;};
    inline int32_t affectCount() const { DARABONBA_PTR_GET_DEFAULT(affectCount_, 0) };
    inline DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& setAffectCount(int32_t affectCount) { DARABONBA_PTR_SET_VALUE(affectCount_, affectCount) };


    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline DescribeScreenCloudHcRiskResponseBodyCloudHcRiskItems& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


  protected:
    std::shared_ptr<int32_t> affectCount_ = nullptr;
    std::shared_ptr<string> checkItem_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<bool> pass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
