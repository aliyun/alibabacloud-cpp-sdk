// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListPipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(size, size_);
    };
    ListPipelineRequest() = default ;
    ListPipelineRequest(const ListPipelineRequest &) = default ;
    ListPipelineRequest(ListPipelineRequest &&) = default ;
    ListPipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelineRequest() = default ;
    ListPipelineRequest& operator=(const ListPipelineRequest &) = default ;
    ListPipelineRequest& operator=(ListPipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && this->pipelineId_ == nullptr && this->size_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListPipelineRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListPipelineRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPipelineRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The header of the response.
    shared_ptr<int32_t> page_ {};
    // The ID of the request.
    shared_ptr<string> pipelineId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
