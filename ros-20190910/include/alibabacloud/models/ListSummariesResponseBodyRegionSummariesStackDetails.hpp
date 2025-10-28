// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYREGIONSUMMARIESSTACKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYREGIONSUMMARIESSTACKDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesResponseBodyRegionSummariesStackDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesResponseBodyRegionSummariesStackDetails& obj) { 
      DARABONBA_PTR_TO_JSON(BriefStatus, briefStatus_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesResponseBodyRegionSummariesStackDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(BriefStatus, briefStatus_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    ListSummariesResponseBodyRegionSummariesStackDetails() = default ;
    ListSummariesResponseBodyRegionSummariesStackDetails(const ListSummariesResponseBodyRegionSummariesStackDetails &) = default ;
    ListSummariesResponseBodyRegionSummariesStackDetails(ListSummariesResponseBodyRegionSummariesStackDetails &&) = default ;
    ListSummariesResponseBodyRegionSummariesStackDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesResponseBodyRegionSummariesStackDetails() = default ;
    ListSummariesResponseBodyRegionSummariesStackDetails& operator=(const ListSummariesResponseBodyRegionSummariesStackDetails &) = default ;
    ListSummariesResponseBodyRegionSummariesStackDetails& operator=(ListSummariesResponseBodyRegionSummariesStackDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->briefStatus_ == nullptr
        && return this->count_ == nullptr; };
    // briefStatus Field Functions 
    bool hasBriefStatus() const { return this->briefStatus_ != nullptr;};
    void deleteBriefStatus() { this->briefStatus_ = nullptr;};
    inline string briefStatus() const { DARABONBA_PTR_GET_DEFAULT(briefStatus_, "") };
    inline ListSummariesResponseBodyRegionSummariesStackDetails& setBriefStatus(string briefStatus) { DARABONBA_PTR_SET_VALUE(briefStatus_, briefStatus) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListSummariesResponseBodyRegionSummariesStackDetails& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    std::shared_ptr<string> briefStatus_ = nullptr;
    std::shared_ptr<string> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
