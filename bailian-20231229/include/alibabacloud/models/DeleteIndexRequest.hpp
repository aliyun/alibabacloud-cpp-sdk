// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
    };
    DeleteIndexRequest() = default ;
    DeleteIndexRequest(const DeleteIndexRequest &) = default ;
    DeleteIndexRequest(DeleteIndexRequest &&) = default ;
    DeleteIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexRequest() = default ;
    DeleteIndexRequest& operator=(const DeleteIndexRequest &) = default ;
    DeleteIndexRequest& operator=(DeleteIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->indexId_ != nullptr; };
    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string indexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline DeleteIndexRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


  protected:
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
