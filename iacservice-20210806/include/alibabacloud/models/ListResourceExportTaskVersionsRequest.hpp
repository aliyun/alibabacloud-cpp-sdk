// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXPORTTASKVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListResourceExportTaskVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExportTaskVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExportTaskVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListResourceExportTaskVersionsRequest() = default ;
    ListResourceExportTaskVersionsRequest(const ListResourceExportTaskVersionsRequest &) = default ;
    ListResourceExportTaskVersionsRequest(ListResourceExportTaskVersionsRequest &&) = default ;
    ListResourceExportTaskVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExportTaskVersionsRequest() = default ;
    ListResourceExportTaskVersionsRequest& operator=(const ListResourceExportTaskVersionsRequest &) = default ;
    ListResourceExportTaskVersionsRequest& operator=(ListResourceExportTaskVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportVersion_ != nullptr
        && this->keyword_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr; };
    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline ListResourceExportTaskVersionsRequest& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListResourceExportTaskVersionsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceExportTaskVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceExportTaskVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceExportTaskVersionsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> exportVersion_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
