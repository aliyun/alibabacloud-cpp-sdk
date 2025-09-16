// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESULTCLUSTERVALUE_HPP_
#define ALIBABACLOUD_MODELS_RESULTCLUSTERVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ResultClusterValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResultClusterValue& obj) { 
      DARABONBA_PTR_TO_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_TO_JSON(mergeParallelNum, mergeParallelNum_);
    };
    friend void from_json(const Darabonba::Json& j, ResultClusterValue& obj) { 
      DARABONBA_PTR_FROM_JSON(buildParallelNum, buildParallelNum_);
      DARABONBA_PTR_FROM_JSON(mergeParallelNum, mergeParallelNum_);
    };
    ResultClusterValue() = default ;
    ResultClusterValue(const ResultClusterValue &) = default ;
    ResultClusterValue(ResultClusterValue &&) = default ;
    ResultClusterValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResultClusterValue() = default ;
    ResultClusterValue& operator=(const ResultClusterValue &) = default ;
    ResultClusterValue& operator=(ResultClusterValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildParallelNum_ != nullptr
        && this->mergeParallelNum_ != nullptr; };
    // buildParallelNum Field Functions 
    bool hasBuildParallelNum() const { return this->buildParallelNum_ != nullptr;};
    void deleteBuildParallelNum() { this->buildParallelNum_ = nullptr;};
    inline int32_t buildParallelNum() const { DARABONBA_PTR_GET_DEFAULT(buildParallelNum_, 0) };
    inline ResultClusterValue& setBuildParallelNum(int32_t buildParallelNum) { DARABONBA_PTR_SET_VALUE(buildParallelNum_, buildParallelNum) };


    // mergeParallelNum Field Functions 
    bool hasMergeParallelNum() const { return this->mergeParallelNum_ != nullptr;};
    void deleteMergeParallelNum() { this->mergeParallelNum_ = nullptr;};
    inline int32_t mergeParallelNum() const { DARABONBA_PTR_GET_DEFAULT(mergeParallelNum_, 0) };
    inline ResultClusterValue& setMergeParallelNum(int32_t mergeParallelNum) { DARABONBA_PTR_SET_VALUE(mergeParallelNum_, mergeParallelNum) };


  protected:
    // The maximum number of full indexes that can be concurrently built.
    std::shared_ptr<int32_t> buildParallelNum_ = nullptr;
    // The maximum number of full indexes that can be concurrently merged.
    std::shared_ptr<int32_t> mergeParallelNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
