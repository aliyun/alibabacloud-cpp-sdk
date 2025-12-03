// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMERGEREQUESTCHANGETREERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMERGEREQUESTCHANGETREERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetMergeRequestChangeTreeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMergeRequestChangeTreeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(changedFilesCount, changedFilesCount_);
      DARABONBA_PTR_TO_JSON(changedFilesInfos, changedFilesInfos_);
      DARABONBA_PTR_TO_JSON(totalAddLines, totalAddLines_);
      DARABONBA_PTR_TO_JSON(totalDelLines, totalDelLines_);
    };
    friend void from_json(const Darabonba::Json& j, GetMergeRequestChangeTreeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(changedFilesCount, changedFilesCount_);
      DARABONBA_PTR_FROM_JSON(changedFilesInfos, changedFilesInfos_);
      DARABONBA_PTR_FROM_JSON(totalAddLines, totalAddLines_);
      DARABONBA_PTR_FROM_JSON(totalDelLines, totalDelLines_);
    };
    GetMergeRequestChangeTreeResponseBodyResult() = default ;
    GetMergeRequestChangeTreeResponseBodyResult(const GetMergeRequestChangeTreeResponseBodyResult &) = default ;
    GetMergeRequestChangeTreeResponseBodyResult(GetMergeRequestChangeTreeResponseBodyResult &&) = default ;
    GetMergeRequestChangeTreeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMergeRequestChangeTreeResponseBodyResult() = default ;
    GetMergeRequestChangeTreeResponseBodyResult& operator=(const GetMergeRequestChangeTreeResponseBodyResult &) = default ;
    GetMergeRequestChangeTreeResponseBodyResult& operator=(GetMergeRequestChangeTreeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changedFilesCount_ == nullptr
        && return this->changedFilesInfos_ == nullptr && return this->totalAddLines_ == nullptr && return this->totalDelLines_ == nullptr; };
    // changedFilesCount Field Functions 
    bool hasChangedFilesCount() const { return this->changedFilesCount_ != nullptr;};
    void deleteChangedFilesCount() { this->changedFilesCount_ = nullptr;};
    inline int64_t changedFilesCount() const { DARABONBA_PTR_GET_DEFAULT(changedFilesCount_, 0L) };
    inline GetMergeRequestChangeTreeResponseBodyResult& setChangedFilesCount(int64_t changedFilesCount) { DARABONBA_PTR_SET_VALUE(changedFilesCount_, changedFilesCount) };


    // changedFilesInfos Field Functions 
    bool hasChangedFilesInfos() const { return this->changedFilesInfos_ != nullptr;};
    void deleteChangedFilesInfos() { this->changedFilesInfos_ = nullptr;};
    inline const vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos> & changedFilesInfos() const { DARABONBA_PTR_GET_CONST(changedFilesInfos_, vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos>) };
    inline vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos> changedFilesInfos() { DARABONBA_PTR_GET(changedFilesInfos_, vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos>) };
    inline GetMergeRequestChangeTreeResponseBodyResult& setChangedFilesInfos(const vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos> & changedFilesInfos) { DARABONBA_PTR_SET_VALUE(changedFilesInfos_, changedFilesInfos) };
    inline GetMergeRequestChangeTreeResponseBodyResult& setChangedFilesInfos(vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos> && changedFilesInfos) { DARABONBA_PTR_SET_RVALUE(changedFilesInfos_, changedFilesInfos) };


    // totalAddLines Field Functions 
    bool hasTotalAddLines() const { return this->totalAddLines_ != nullptr;};
    void deleteTotalAddLines() { this->totalAddLines_ = nullptr;};
    inline int64_t totalAddLines() const { DARABONBA_PTR_GET_DEFAULT(totalAddLines_, 0L) };
    inline GetMergeRequestChangeTreeResponseBodyResult& setTotalAddLines(int64_t totalAddLines) { DARABONBA_PTR_SET_VALUE(totalAddLines_, totalAddLines) };


    // totalDelLines Field Functions 
    bool hasTotalDelLines() const { return this->totalDelLines_ != nullptr;};
    void deleteTotalDelLines() { this->totalDelLines_ = nullptr;};
    inline int64_t totalDelLines() const { DARABONBA_PTR_GET_DEFAULT(totalDelLines_, 0L) };
    inline GetMergeRequestChangeTreeResponseBodyResult& setTotalDelLines(int64_t totalDelLines) { DARABONBA_PTR_SET_VALUE(totalDelLines_, totalDelLines) };


  protected:
    std::shared_ptr<int64_t> changedFilesCount_ = nullptr;
    std::shared_ptr<vector<Models::GetMergeRequestChangeTreeResponseBodyResultChangedFilesInfos>> changedFilesInfos_ = nullptr;
    std::shared_ptr<int64_t> totalAddLines_ = nullptr;
    std::shared_ptr<int64_t> totalDelLines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
