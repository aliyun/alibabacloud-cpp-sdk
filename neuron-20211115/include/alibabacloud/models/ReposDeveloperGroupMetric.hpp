// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOSDEVELOPERGROUPMETRIC_HPP_
#define ALIBABACLOUD_MODELS_REPOSDEVELOPERGROUPMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ReposDeveloperGroupMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReposDeveloperGroupMetric& obj) { 
      DARABONBA_PTR_TO_JSON(addLines, addLines_);
      DARABONBA_PTR_TO_JSON(commentLines, commentLines_);
      DARABONBA_PTR_TO_JSON(commitCnt, commitCnt_);
      DARABONBA_PTR_TO_JSON(delLines, delLines_);
      DARABONBA_PTR_TO_JSON(modLines, modLines_);
      DARABONBA_PTR_TO_JSON(showName, showName_);
      DARABONBA_PTR_TO_JSON(workNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, ReposDeveloperGroupMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(addLines, addLines_);
      DARABONBA_PTR_FROM_JSON(commentLines, commentLines_);
      DARABONBA_PTR_FROM_JSON(commitCnt, commitCnt_);
      DARABONBA_PTR_FROM_JSON(delLines, delLines_);
      DARABONBA_PTR_FROM_JSON(modLines, modLines_);
      DARABONBA_PTR_FROM_JSON(showName, showName_);
      DARABONBA_PTR_FROM_JSON(workNo, workNo_);
    };
    ReposDeveloperGroupMetric() = default ;
    ReposDeveloperGroupMetric(const ReposDeveloperGroupMetric &) = default ;
    ReposDeveloperGroupMetric(ReposDeveloperGroupMetric &&) = default ;
    ReposDeveloperGroupMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReposDeveloperGroupMetric() = default ;
    ReposDeveloperGroupMetric& operator=(const ReposDeveloperGroupMetric &) = default ;
    ReposDeveloperGroupMetric& operator=(ReposDeveloperGroupMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addLines_ == nullptr
        && this->commentLines_ == nullptr && this->commitCnt_ == nullptr && this->delLines_ == nullptr && this->modLines_ == nullptr && this->showName_ == nullptr
        && this->workNo_ == nullptr; };
    // addLines Field Functions 
    bool hasAddLines() const { return this->addLines_ != nullptr;};
    void deleteAddLines() { this->addLines_ = nullptr;};
    inline int64_t getAddLines() const { DARABONBA_PTR_GET_DEFAULT(addLines_, 0L) };
    inline ReposDeveloperGroupMetric& setAddLines(int64_t addLines) { DARABONBA_PTR_SET_VALUE(addLines_, addLines) };


    // commentLines Field Functions 
    bool hasCommentLines() const { return this->commentLines_ != nullptr;};
    void deleteCommentLines() { this->commentLines_ = nullptr;};
    inline int64_t getCommentLines() const { DARABONBA_PTR_GET_DEFAULT(commentLines_, 0L) };
    inline ReposDeveloperGroupMetric& setCommentLines(int64_t commentLines) { DARABONBA_PTR_SET_VALUE(commentLines_, commentLines) };


    // commitCnt Field Functions 
    bool hasCommitCnt() const { return this->commitCnt_ != nullptr;};
    void deleteCommitCnt() { this->commitCnt_ = nullptr;};
    inline int64_t getCommitCnt() const { DARABONBA_PTR_GET_DEFAULT(commitCnt_, 0L) };
    inline ReposDeveloperGroupMetric& setCommitCnt(int64_t commitCnt) { DARABONBA_PTR_SET_VALUE(commitCnt_, commitCnt) };


    // delLines Field Functions 
    bool hasDelLines() const { return this->delLines_ != nullptr;};
    void deleteDelLines() { this->delLines_ = nullptr;};
    inline int64_t getDelLines() const { DARABONBA_PTR_GET_DEFAULT(delLines_, 0L) };
    inline ReposDeveloperGroupMetric& setDelLines(int64_t delLines) { DARABONBA_PTR_SET_VALUE(delLines_, delLines) };


    // modLines Field Functions 
    bool hasModLines() const { return this->modLines_ != nullptr;};
    void deleteModLines() { this->modLines_ = nullptr;};
    inline int64_t getModLines() const { DARABONBA_PTR_GET_DEFAULT(modLines_, 0L) };
    inline ReposDeveloperGroupMetric& setModLines(int64_t modLines) { DARABONBA_PTR_SET_VALUE(modLines_, modLines) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ReposDeveloperGroupMetric& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline ReposDeveloperGroupMetric& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    shared_ptr<int64_t> addLines_ {};
    shared_ptr<int64_t> commentLines_ {};
    shared_ptr<int64_t> commitCnt_ {};
    shared_ptr<int64_t> delLines_ {};
    shared_ptr<int64_t> modLines_ {};
    shared_ptr<string> showName_ {};
    shared_ptr<string> workNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
