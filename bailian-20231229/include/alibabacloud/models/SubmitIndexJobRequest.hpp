// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITINDEXJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITINDEXJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class SubmitIndexJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIndexJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIndexJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
    };
    SubmitIndexJobRequest() = default ;
    SubmitIndexJobRequest(const SubmitIndexJobRequest &) = default ;
    SubmitIndexJobRequest(SubmitIndexJobRequest &&) = default ;
    SubmitIndexJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIndexJobRequest() = default ;
    SubmitIndexJobRequest& operator=(const SubmitIndexJobRequest &) = default ;
    SubmitIndexJobRequest& operator=(SubmitIndexJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indexId_ == nullptr; };
    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline SubmitIndexJobRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


  protected:
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
