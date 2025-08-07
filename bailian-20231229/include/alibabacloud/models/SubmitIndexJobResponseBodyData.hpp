// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINDEXJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINDEXJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class SubmitIndexJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIndexJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIndexJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
    };
    SubmitIndexJobResponseBodyData() = default ;
    SubmitIndexJobResponseBodyData(const SubmitIndexJobResponseBodyData &) = default ;
    SubmitIndexJobResponseBodyData(SubmitIndexJobResponseBodyData &&) = default ;
    SubmitIndexJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIndexJobResponseBodyData() = default ;
    SubmitIndexJobResponseBodyData& operator=(const SubmitIndexJobResponseBodyData &) = default ;
    SubmitIndexJobResponseBodyData& operator=(SubmitIndexJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->indexId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitIndexJobResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline SubmitIndexJobResponseBodyData& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


  protected:
    // The primary key ID of the job, which is the `JobId` parameter of the [GetIndexJobStatus](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-getindexjobstatus) operation.
    std::shared_ptr<string> id_ = nullptr;
    // The primary key ID of the knowledge base.
    std::shared_ptr<string> indexId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
