// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYOVERSEASLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCATIONINFORESPONSEBODYOVERSEASLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeLocationInfoResponseBodyOverseasList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLocationInfoResponseBodyOverseasList& obj) { 
      DARABONBA_PTR_TO_JSON(LocId, locId_);
      DARABONBA_PTR_TO_JSON(LocName, locName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLocationInfoResponseBodyOverseasList& obj) { 
      DARABONBA_PTR_FROM_JSON(LocId, locId_);
      DARABONBA_PTR_FROM_JSON(LocName, locName_);
    };
    DescribeLocationInfoResponseBodyOverseasList() = default ;
    DescribeLocationInfoResponseBodyOverseasList(const DescribeLocationInfoResponseBodyOverseasList &) = default ;
    DescribeLocationInfoResponseBodyOverseasList(DescribeLocationInfoResponseBodyOverseasList &&) = default ;
    DescribeLocationInfoResponseBodyOverseasList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLocationInfoResponseBodyOverseasList() = default ;
    DescribeLocationInfoResponseBodyOverseasList& operator=(const DescribeLocationInfoResponseBodyOverseasList &) = default ;
    DescribeLocationInfoResponseBodyOverseasList& operator=(DescribeLocationInfoResponseBodyOverseasList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locId_ == nullptr
        && return this->locName_ == nullptr; };
    // locId Field Functions 
    bool hasLocId() const { return this->locId_ != nullptr;};
    void deleteLocId() { this->locId_ = nullptr;};
    inline string locId() const { DARABONBA_PTR_GET_DEFAULT(locId_, "") };
    inline DescribeLocationInfoResponseBodyOverseasList& setLocId(string locId) { DARABONBA_PTR_SET_VALUE(locId_, locId) };


    // locName Field Functions 
    bool hasLocName() const { return this->locName_ != nullptr;};
    void deleteLocName() { this->locName_ = nullptr;};
    inline string locName() const { DARABONBA_PTR_GET_DEFAULT(locName_, "") };
    inline DescribeLocationInfoResponseBodyOverseasList& setLocName(string locName) { DARABONBA_PTR_SET_VALUE(locName_, locName) };


  protected:
    std::shared_ptr<string> locId_ = nullptr;
    std::shared_ptr<string> locName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
