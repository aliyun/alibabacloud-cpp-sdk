// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYLASTACCELERATIONENGINEJOBRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryLastAccelerationEngineJobResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLastAccelerationEngineJobResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLastAccelerationEngineJobResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryLastAccelerationEngineJobResponseBodyResult() = default ;
    QueryLastAccelerationEngineJobResponseBodyResult(const QueryLastAccelerationEngineJobResponseBodyResult &) = default ;
    QueryLastAccelerationEngineJobResponseBodyResult(QueryLastAccelerationEngineJobResponseBodyResult &&) = default ;
    QueryLastAccelerationEngineJobResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLastAccelerationEngineJobResponseBodyResult() = default ;
    QueryLastAccelerationEngineJobResponseBodyResult& operator=(const QueryLastAccelerationEngineJobResponseBodyResult &) = default ;
    QueryLastAccelerationEngineJobResponseBodyResult& operator=(QueryLastAccelerationEngineJobResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->jobHistoryId_ != nullptr && this->status_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryLastAccelerationEngineJobResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryLastAccelerationEngineJobResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // jobHistoryId Field Functions 
    bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
    void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
    inline string jobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
    inline QueryLastAccelerationEngineJobResponseBodyResult& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryLastAccelerationEngineJobResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> jobHistoryId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
