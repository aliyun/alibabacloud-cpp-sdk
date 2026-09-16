// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTDIGITALEMPLOYEEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTDIGITALEMPLOYEEUMODELCOMMONSCHEMAREFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class UpsertDigitalEmployeeUmodelCommonSchemaRefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertDigitalEmployeeUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertDigitalEmployeeUmodelCommonSchemaRefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest() = default ;
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest(const UpsertDigitalEmployeeUmodelCommonSchemaRefRequest &) = default ;
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest(UpsertDigitalEmployeeUmodelCommonSchemaRefRequest &&) = default ;
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertDigitalEmployeeUmodelCommonSchemaRefRequest() = default ;
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest& operator=(const UpsertDigitalEmployeeUmodelCommonSchemaRefRequest &) = default ;
    UpsertDigitalEmployeeUmodelCommonSchemaRefRequest& operator=(UpsertDigitalEmployeeUmodelCommonSchemaRefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpsertDigitalEmployeeUmodelCommonSchemaRefRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The version of the public schema.
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
