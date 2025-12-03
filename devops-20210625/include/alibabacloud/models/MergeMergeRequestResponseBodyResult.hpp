// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEMERGEREQUESTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MERGEMERGEREQUESTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class MergeMergeRequestResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeMergeRequestResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(mergedRevision, mergedRevision_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, MergeMergeRequestResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(mergedRevision, mergedRevision_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    MergeMergeRequestResponseBodyResult() = default ;
    MergeMergeRequestResponseBodyResult(const MergeMergeRequestResponseBodyResult &) = default ;
    MergeMergeRequestResponseBodyResult(MergeMergeRequestResponseBodyResult &&) = default ;
    MergeMergeRequestResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeMergeRequestResponseBodyResult() = default ;
    MergeMergeRequestResponseBodyResult& operator=(const MergeMergeRequestResponseBodyResult &) = default ;
    MergeMergeRequestResponseBodyResult& operator=(MergeMergeRequestResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->localId_ == nullptr && return this->mergedRevision_ == nullptr && return this->projectId_ == nullptr && return this->result_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline MergeMergeRequestResponseBodyResult& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline MergeMergeRequestResponseBodyResult& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // mergedRevision Field Functions 
    bool hasMergedRevision() const { return this->mergedRevision_ != nullptr;};
    void deleteMergedRevision() { this->mergedRevision_ = nullptr;};
    inline string mergedRevision() const { DARABONBA_PTR_GET_DEFAULT(mergedRevision_, "") };
    inline MergeMergeRequestResponseBodyResult& setMergedRevision(string mergedRevision) { DARABONBA_PTR_SET_VALUE(mergedRevision_, mergedRevision) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline MergeMergeRequestResponseBodyResult& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline MergeMergeRequestResponseBodyResult& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<int64_t> localId_ = nullptr;
    std::shared_ptr<string> mergedRevision_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
