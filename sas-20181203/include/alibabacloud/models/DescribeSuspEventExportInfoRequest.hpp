// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTEXPORTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTEXPORTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventExportInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventExportInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExportId, exportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventExportInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportId, exportId_);
    };
    DescribeSuspEventExportInfoRequest() = default ;
    DescribeSuspEventExportInfoRequest(const DescribeSuspEventExportInfoRequest &) = default ;
    DescribeSuspEventExportInfoRequest(DescribeSuspEventExportInfoRequest &&) = default ;
    DescribeSuspEventExportInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventExportInfoRequest() = default ;
    DescribeSuspEventExportInfoRequest& operator=(const DescribeSuspEventExportInfoRequest &) = default ;
    DescribeSuspEventExportInfoRequest& operator=(DescribeSuspEventExportInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportId_ == nullptr; };
    // exportId Field Functions 
    bool hasExportId() const { return this->exportId_ != nullptr;};
    void deleteExportId() { this->exportId_ = nullptr;};
    inline int32_t getExportId() const { DARABONBA_PTR_GET_DEFAULT(exportId_, 0) };
    inline DescribeSuspEventExportInfoRequest& setExportId(int32_t exportId) { DARABONBA_PTR_SET_VALUE(exportId_, exportId) };


  protected:
    // The ID of the export task.
    // 
    // > You can call the [ExportSuspEvents](~~ExportSuspEvents~~) operation to query the ID.
    shared_ptr<int32_t> exportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
