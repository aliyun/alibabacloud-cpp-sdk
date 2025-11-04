// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DROPSEARCHINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DROPSEARCHINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DropSearchIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DropSearchIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IndexType, indexType_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, DropSearchIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    DropSearchIndexRequest() = default ;
    DropSearchIndexRequest(const DropSearchIndexRequest &) = default ;
    DropSearchIndexRequest(DropSearchIndexRequest &&) = default ;
    DropSearchIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DropSearchIndexRequest() = default ;
    DropSearchIndexRequest& operator=(const DropSearchIndexRequest &) = default ;
    DropSearchIndexRequest& operator=(DropSearchIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->indexType_ == nullptr
        && return this->searchLibName_ == nullptr; };
    // indexType Field Functions 
    bool hasIndexType() const { return this->indexType_ != nullptr;};
    void deleteIndexType() { this->indexType_ = nullptr;};
    inline string indexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
    inline DropSearchIndexRequest& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline DropSearchIndexRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The category of the index. Valid values:
    // 
    // *   mm: large visual model.
    // *   face: face recognition.
    // *   aiLabel: smart tagging.
    // 
    // This parameter is required.
    std::shared_ptr<string> indexType_ = nullptr;
    // The name of the search library.
    // 
    // *   If you leave this parameter empty, the search index is created in the default search library of Intelligent Media Service (IMS). Default value: ims-default-search-lib.
    // *   To query information about an existing search library, call the [QuerySearchLib](https://help.aliyun.com/document_detail/2584455.html) API operation.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
