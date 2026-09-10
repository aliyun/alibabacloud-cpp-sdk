// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECMETADATACOMPONENTNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECMETADATACOMPONENTNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecMetaDataComponentNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecMetaDataComponentNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dsName, dsName_);
    };
    friend void from_json(const Darabonba::Json& j, ExecMetaDataComponentNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dsName, dsName_);
    };
    ExecMetaDataComponentNameRequest() = default ;
    ExecMetaDataComponentNameRequest(const ExecMetaDataComponentNameRequest &) = default ;
    ExecMetaDataComponentNameRequest(ExecMetaDataComponentNameRequest &&) = default ;
    ExecMetaDataComponentNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecMetaDataComponentNameRequest() = default ;
    ExecMetaDataComponentNameRequest& operator=(const ExecMetaDataComponentNameRequest &) = default ;
    ExecMetaDataComponentNameRequest& operator=(ExecMetaDataComponentNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dsName_ == nullptr; };
    // dsName Field Functions 
    bool hasDsName() const { return this->dsName_ != nullptr;};
    void deleteDsName() { this->dsName_ = nullptr;};
    inline string getDsName() const { DARABONBA_PTR_GET_DEFAULT(dsName_, "") };
    inline ExecMetaDataComponentNameRequest& setDsName(string dsName) { DARABONBA_PTR_SET_VALUE(dsName_, dsName) };


  protected:
    // The datasource name to check. The system performs an exact match against non-deleted datasources under the current tenant.
    shared_ptr<string> dsName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
