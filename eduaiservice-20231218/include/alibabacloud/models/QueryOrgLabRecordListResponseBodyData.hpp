// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGLABRECORDLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGLABRECORDLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eduaiservice20231218
{
namespace Models
{
  class QueryOrgLabRecordListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgLabRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(LabRecordId, labRecordId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmittedAt, submittedAt_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgLabRecordListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(LabRecordId, labRecordId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmittedAt, submittedAt_);
    };
    QueryOrgLabRecordListResponseBodyData() = default ;
    QueryOrgLabRecordListResponseBodyData(const QueryOrgLabRecordListResponseBodyData &) = default ;
    QueryOrgLabRecordListResponseBodyData(QueryOrgLabRecordListResponseBodyData &&) = default ;
    QueryOrgLabRecordListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgLabRecordListResponseBodyData() = default ;
    QueryOrgLabRecordListResponseBodyData& operator=(const QueryOrgLabRecordListResponseBodyData &) = default ;
    QueryOrgLabRecordListResponseBodyData& operator=(QueryOrgLabRecordListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->labRecordId_ == nullptr && return this->status_ == nullptr && return this->submittedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline QueryOrgLabRecordListResponseBodyData& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // labRecordId Field Functions 
    bool hasLabRecordId() const { return this->labRecordId_ != nullptr;};
    void deleteLabRecordId() { this->labRecordId_ = nullptr;};
    inline string labRecordId() const { DARABONBA_PTR_GET_DEFAULT(labRecordId_, "") };
    inline QueryOrgLabRecordListResponseBodyData& setLabRecordId(string labRecordId) { DARABONBA_PTR_SET_VALUE(labRecordId_, labRecordId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryOrgLabRecordListResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submittedAt Field Functions 
    bool hasSubmittedAt() const { return this->submittedAt_ != nullptr;};
    void deleteSubmittedAt() { this->submittedAt_ = nullptr;};
    inline int64_t submittedAt() const { DARABONBA_PTR_GET_DEFAULT(submittedAt_, 0L) };
    inline QueryOrgLabRecordListResponseBodyData& setSubmittedAt(int64_t submittedAt) { DARABONBA_PTR_SET_VALUE(submittedAt_, submittedAt) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> labRecordId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> submittedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eduaiservice20231218
#endif
