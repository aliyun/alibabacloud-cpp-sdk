// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDRENSTATISTICALINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDRENSTATISTICALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo() = default ;
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo(const GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo &) = default ;
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo(GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo &&) = default ;
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo() = default ;
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo& operator=(const GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo &) = default ;
    GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo& operator=(GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->wordCount_ != nullptr; };
    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline int64_t wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
    inline GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    // WordCount
    std::shared_ptr<int64_t> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
