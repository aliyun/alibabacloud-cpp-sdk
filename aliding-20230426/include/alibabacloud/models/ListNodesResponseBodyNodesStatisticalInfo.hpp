// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODESSTATISTICALINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYNODESSTATISTICALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListNodesResponseBodyNodesStatisticalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyNodesStatisticalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyNodesStatisticalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
    };
    ListNodesResponseBodyNodesStatisticalInfo() = default ;
    ListNodesResponseBodyNodesStatisticalInfo(const ListNodesResponseBodyNodesStatisticalInfo &) = default ;
    ListNodesResponseBodyNodesStatisticalInfo(ListNodesResponseBodyNodesStatisticalInfo &&) = default ;
    ListNodesResponseBodyNodesStatisticalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyNodesStatisticalInfo() = default ;
    ListNodesResponseBodyNodesStatisticalInfo& operator=(const ListNodesResponseBodyNodesStatisticalInfo &) = default ;
    ListNodesResponseBodyNodesStatisticalInfo& operator=(ListNodesResponseBodyNodesStatisticalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wordCount_ == nullptr; };
    // wordCount Field Functions 
    bool hasWordCount() const { return this->wordCount_ != nullptr;};
    void deleteWordCount() { this->wordCount_ = nullptr;};
    inline int64_t wordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
    inline ListNodesResponseBodyNodesStatisticalInfo& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


  protected:
    std::shared_ptr<int64_t> wordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
