// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODYDDOSCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCOUNTRESPONSEBODYDDOSCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCountResponseBodyDdosCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCountResponseBodyDdosCount& obj) { 
      DARABONBA_PTR_TO_JSON(BlackholeCount, blackholeCount_);
      DARABONBA_PTR_TO_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_TO_JSON(InstacenCount, instacenCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCountResponseBodyDdosCount& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackholeCount, blackholeCount_);
      DARABONBA_PTR_FROM_JSON(DefenseCount, defenseCount_);
      DARABONBA_PTR_FROM_JSON(InstacenCount, instacenCount_);
    };
    DescribeDdosCountResponseBodyDdosCount() = default ;
    DescribeDdosCountResponseBodyDdosCount(const DescribeDdosCountResponseBodyDdosCount &) = default ;
    DescribeDdosCountResponseBodyDdosCount(DescribeDdosCountResponseBodyDdosCount &&) = default ;
    DescribeDdosCountResponseBodyDdosCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCountResponseBodyDdosCount() = default ;
    DescribeDdosCountResponseBodyDdosCount& operator=(const DescribeDdosCountResponseBodyDdosCount &) = default ;
    DescribeDdosCountResponseBodyDdosCount& operator=(DescribeDdosCountResponseBodyDdosCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blackholeCount_ != nullptr
        && this->defenseCount_ != nullptr && this->instacenCount_ != nullptr; };
    // blackholeCount Field Functions 
    bool hasBlackholeCount() const { return this->blackholeCount_ != nullptr;};
    void deleteBlackholeCount() { this->blackholeCount_ = nullptr;};
    inline int32_t blackholeCount() const { DARABONBA_PTR_GET_DEFAULT(blackholeCount_, 0) };
    inline DescribeDdosCountResponseBodyDdosCount& setBlackholeCount(int32_t blackholeCount) { DARABONBA_PTR_SET_VALUE(blackholeCount_, blackholeCount) };


    // defenseCount Field Functions 
    bool hasDefenseCount() const { return this->defenseCount_ != nullptr;};
    void deleteDefenseCount() { this->defenseCount_ = nullptr;};
    inline int32_t defenseCount() const { DARABONBA_PTR_GET_DEFAULT(defenseCount_, 0) };
    inline DescribeDdosCountResponseBodyDdosCount& setDefenseCount(int32_t defenseCount) { DARABONBA_PTR_SET_VALUE(defenseCount_, defenseCount) };


    // instacenCount Field Functions 
    bool hasInstacenCount() const { return this->instacenCount_ != nullptr;};
    void deleteInstacenCount() { this->instacenCount_ = nullptr;};
    inline int32_t instacenCount() const { DARABONBA_PTR_GET_DEFAULT(instacenCount_, 0) };
    inline DescribeDdosCountResponseBodyDdosCount& setInstacenCount(int32_t instacenCount) { DARABONBA_PTR_SET_VALUE(instacenCount_, instacenCount) };


  protected:
    // The number of assets for which blackhole filtering is triggered.
    std::shared_ptr<int32_t> blackholeCount_ = nullptr;
    // The number of assets for which traffic scrubbing is triggered.
    std::shared_ptr<int32_t> defenseCount_ = nullptr;
    // The total number of assets.
    std::shared_ptr<int32_t> instacenCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
