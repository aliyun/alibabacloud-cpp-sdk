// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODYINDEXJOBINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINDEXJOBRESPONSEBODYINDEXJOBINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaIndexJobResponseBodyIndexJobInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaIndexJobResponseBodyIndexJobInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(GmtFinish, gmtFinish_);
      DARABONBA_PTR_TO_JSON(GmtSubmit, gmtSubmit_);
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaIndexJobResponseBodyIndexJobInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtFinish, gmtFinish_);
      DARABONBA_PTR_FROM_JSON(GmtSubmit, gmtSubmit_);
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryMediaIndexJobResponseBodyIndexJobInfoList() = default ;
    QueryMediaIndexJobResponseBodyIndexJobInfoList(const QueryMediaIndexJobResponseBodyIndexJobInfoList &) = default ;
    QueryMediaIndexJobResponseBodyIndexJobInfoList(QueryMediaIndexJobResponseBodyIndexJobInfoList &&) = default ;
    QueryMediaIndexJobResponseBodyIndexJobInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaIndexJobResponseBodyIndexJobInfoList() = default ;
    QueryMediaIndexJobResponseBodyIndexJobInfoList& operator=(const QueryMediaIndexJobResponseBodyIndexJobInfoList &) = default ;
    QueryMediaIndexJobResponseBodyIndexJobInfoList& operator=(QueryMediaIndexJobResponseBodyIndexJobInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtFinish_ != nullptr
        && this->gmtSubmit_ != nullptr && this->indexType_ != nullptr && this->status_ != nullptr; };
    // gmtFinish Field Functions 
    bool hasGmtFinish() const { return this->gmtFinish_ != nullptr;};
    void deleteGmtFinish() { this->gmtFinish_ = nullptr;};
    inline string gmtFinish() const { DARABONBA_PTR_GET_DEFAULT(gmtFinish_, "") };
    inline QueryMediaIndexJobResponseBodyIndexJobInfoList& setGmtFinish(string gmtFinish) { DARABONBA_PTR_SET_VALUE(gmtFinish_, gmtFinish) };


    // gmtSubmit Field Functions 
    bool hasGmtSubmit() const { return this->gmtSubmit_ != nullptr;};
    void deleteGmtSubmit() { this->gmtSubmit_ = nullptr;};
    inline string gmtSubmit() const { DARABONBA_PTR_GET_DEFAULT(gmtSubmit_, "") };
    inline QueryMediaIndexJobResponseBodyIndexJobInfoList& setGmtSubmit(string gmtSubmit) { DARABONBA_PTR_SET_VALUE(gmtSubmit_, gmtSubmit) };


    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline QueryMediaIndexJobResponseBodyIndexJobInfoList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryMediaIndexJobResponseBodyIndexJobInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end time of the indexing job.
    std::shared_ptr<string> gmtFinish_ = nullptr;
    // The time when the index job was submitted.
    std::shared_ptr<string> gmtSubmit_ = nullptr;
    // The index type. Valid values:
    // 
    // *   mm: large visual model.
    // *   face: face recognition.
    // *   aiLabel: smart tagging.
    std::shared_ptr<string> indexType_ = nullptr;
    // The job status. Valid values:
    // 
    // *   Running
    // *   Success
    // *   Fail
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
