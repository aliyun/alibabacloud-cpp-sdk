// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENTITLESRESPONSEBODYSASSCREENSETTINGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENTITLESRESPONSEBODYSASSCREENSETTINGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenTitlesResponseBodySasScreenSettingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenTitlesResponseBodySasScreenSettingList& obj) { 
      DARABONBA_PTR_TO_JSON(ScreenID, screenID_);
      DARABONBA_PTR_TO_JSON(ScreenTitle, screenTitle_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenTitlesResponseBodySasScreenSettingList& obj) { 
      DARABONBA_PTR_FROM_JSON(ScreenID, screenID_);
      DARABONBA_PTR_FROM_JSON(ScreenTitle, screenTitle_);
    };
    DescribeScreenTitlesResponseBodySasScreenSettingList() = default ;
    DescribeScreenTitlesResponseBodySasScreenSettingList(const DescribeScreenTitlesResponseBodySasScreenSettingList &) = default ;
    DescribeScreenTitlesResponseBodySasScreenSettingList(DescribeScreenTitlesResponseBodySasScreenSettingList &&) = default ;
    DescribeScreenTitlesResponseBodySasScreenSettingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenTitlesResponseBodySasScreenSettingList() = default ;
    DescribeScreenTitlesResponseBodySasScreenSettingList& operator=(const DescribeScreenTitlesResponseBodySasScreenSettingList &) = default ;
    DescribeScreenTitlesResponseBodySasScreenSettingList& operator=(DescribeScreenTitlesResponseBodySasScreenSettingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->screenID_ == nullptr
        && return this->screenTitle_ == nullptr; };
    // screenID Field Functions 
    bool hasScreenID() const { return this->screenID_ != nullptr;};
    void deleteScreenID() { this->screenID_ = nullptr;};
    inline int64_t screenID() const { DARABONBA_PTR_GET_DEFAULT(screenID_, 0L) };
    inline DescribeScreenTitlesResponseBodySasScreenSettingList& setScreenID(int64_t screenID) { DARABONBA_PTR_SET_VALUE(screenID_, screenID) };


    // screenTitle Field Functions 
    bool hasScreenTitle() const { return this->screenTitle_ != nullptr;};
    void deleteScreenTitle() { this->screenTitle_ = nullptr;};
    inline string screenTitle() const { DARABONBA_PTR_GET_DEFAULT(screenTitle_, "") };
    inline DescribeScreenTitlesResponseBodySasScreenSettingList& setScreenTitle(string screenTitle) { DARABONBA_PTR_SET_VALUE(screenTitle_, screenTitle) };


  protected:
    std::shared_ptr<int64_t> screenID_ = nullptr;
    std::shared_ptr<string> screenTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
