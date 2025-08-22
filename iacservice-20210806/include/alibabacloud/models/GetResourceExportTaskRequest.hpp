// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetResourceExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(exportVersion, exportVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(exportVersion, exportVersion_);
    };
    GetResourceExportTaskRequest() = default ;
    GetResourceExportTaskRequest(const GetResourceExportTaskRequest &) = default ;
    GetResourceExportTaskRequest(GetResourceExportTaskRequest &&) = default ;
    GetResourceExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceExportTaskRequest() = default ;
    GetResourceExportTaskRequest& operator=(const GetResourceExportTaskRequest &) = default ;
    GetResourceExportTaskRequest& operator=(GetResourceExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exportVersion_ != nullptr; };
    // exportVersion Field Functions 
    bool hasExportVersion() const { return this->exportVersion_ != nullptr;};
    void deleteExportVersion() { this->exportVersion_ = nullptr;};
    inline string exportVersion() const { DARABONBA_PTR_GET_DEFAULT(exportVersion_, "") };
    inline GetResourceExportTaskRequest& setExportVersion(string exportVersion) { DARABONBA_PTR_SET_VALUE(exportVersion_, exportVersion) };


  protected:
    std::shared_ptr<string> exportVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
