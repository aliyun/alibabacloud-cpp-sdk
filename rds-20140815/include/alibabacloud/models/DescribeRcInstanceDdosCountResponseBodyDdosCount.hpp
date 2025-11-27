// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODYDDOSCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEDDOSCOUNTRESPONSEBODYDDOSCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceDdosCountResponseBodyDdosCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceDdosCountResponseBodyDdosCount& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeCount, blackholeCount_);
      DARABONBA_PTR_TO_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_TO_JSON(InstacenCount, instacenCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceDdosCountResponseBodyDdosCount& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeCount, blackholeCount_);
      DARABONBA_PTR_FROM_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_FROM_JSON(InstacenCount, instacenCount_);
    };
    DescribeRCInstanceDdosCountResponseBodyDdosCount() = default ;
    DescribeRCInstanceDdosCountResponseBodyDdosCount(const DescribeRCInstanceDdosCountResponseBodyDdosCount &) = default ;
    DescribeRCInstanceDdosCountResponseBodyDdosCount(DescribeRCInstanceDdosCountResponseBodyDdosCount &&) = default ;
    DescribeRCInstanceDdosCountResponseBodyDdosCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceDdosCountResponseBodyDdosCount() = default ;
    DescribeRCInstanceDdosCountResponseBodyDdosCount& operator=(const DescribeRCInstanceDdosCountResponseBodyDdosCount &) = default ;
    DescribeRCInstanceDdosCountResponseBodyDdosCount& operator=(DescribeRCInstanceDdosCountResponseBodyDdosCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackholeCount_ == nullptr
        && return this->defenseCount_ == nullptr && return this->instacenCount_ == nullptr; };
    // blackholeCount Field Functions 
    bool hasBlackholeCount() const { return this->blackholeCount_ != nullptr;};
    void deleteBlackholeCount() { this->blackholeCount_ = nullptr;};
    inline string blackholeCount() const { DARABONBA_PTR_GET_DEFAULT(blackholeCount_, "") };
    inline DescribeRCInstanceDdosCountResponseBodyDdosCount& setBlackholeCount(string blackholeCount) { DARABONBA_PTR_SET_VALUE(blackholeCount_, blackholeCount) };


    // defenseCount Field Functions 
    bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
    void deleteDefenseCount() { this->defenseCount_ = nullptr;};
    inline string defenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, "") };
    inline DescribeRCInstanceDdosCountResponseBodyDdosCount& setDefenseCount(string defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


    // instacenCount Field Functions 
    bool hasInstacenCount() const { return this->instacenCount_ != nullptr;};
    void deleteInstacenCount() { this->instacenCount_ = nullptr;};
    inline string instacenCount() const { DARABONBA_PTR_GET_DEFAULT(instacenCount_, "") };
    inline DescribeRCInstanceDdosCountResponseBodyDdosCount& setInstacenCount(string instacenCount) { DARABONBA_PTR_SET_VALUE(instacenCount_, instacenCount) };


  protected:
    // The number of instances for which blackhole filtering is triggered.
    std::shared_ptr<string> blackholeCount_ = nullptr;
    // The number of instances for which traffic scrubbing is triggered.
    std::shared_ptr<string> defenseCount_ = nullptr;
    // The total number of instances.
    std::shared_ptr<string> instacenCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
