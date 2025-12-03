// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExportInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    DescribeExportInfoRequest() = default ;
    DescribeExportInfoRequest(const DescribeExportInfoRequest &) = default ;
    DescribeExportInfoRequest(DescribeExportInfoRequest &&) = default ;
    DescribeExportInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportInfoRequest() = default ;
    DescribeExportInfoRequest& operator=(const DescribeExportInfoRequest &) = default ;
    DescribeExportInfoRequest& operator=(DescribeExportInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportId_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr; };
    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline int64_t exportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, 0L) };
    inline DescribeExportInfoRequest& setExportId(int64_t exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeExportInfoRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The ID of the export task.
    // 
    // > You can call the [ExportRecord](~~ExportRecord~~) operation to query the IDs of export tasks.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> exportId_ = nullptr;
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
