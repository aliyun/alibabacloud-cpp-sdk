// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYFAILED_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYFAILED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportSwaggerResponseBodyFailedApiImportSwaggerFailed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBodyFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBodyFailed& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBodyFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
    };
    ImportSwaggerResponseBodyFailed() = default ;
    ImportSwaggerResponseBodyFailed(const ImportSwaggerResponseBodyFailed &) = default ;
    ImportSwaggerResponseBodyFailed(ImportSwaggerResponseBodyFailed &&) = default ;
    ImportSwaggerResponseBodyFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBodyFailed() = default ;
    ImportSwaggerResponseBodyFailed& operator=(const ImportSwaggerResponseBodyFailed &) = default ;
    ImportSwaggerResponseBodyFailed& operator=(ImportSwaggerResponseBodyFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportSwaggerFailed_ == nullptr; };
    // apiImportSwaggerFailed Field Functions 
    bool hasApiImportSwaggerFailed() const { return this->apiImportSwaggerFailed_ != nullptr;};
    void deleteApiImportSwaggerFailed() { this->apiImportSwaggerFailed_ = nullptr;};
    inline const vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed> & apiImportSwaggerFailed() const { DARABONBA_PTR_GET_CONST(apiImportSwaggerFailed_, vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed>) };
    inline vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed> apiImportSwaggerFailed() { DARABONBA_PTR_GET(apiImportSwaggerFailed_, vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed>) };
    inline ImportSwaggerResponseBodyFailed& setApiImportSwaggerFailed(const vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed> & apiImportSwaggerFailed) { DARABONBA_PTR_SET_VALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };
    inline ImportSwaggerResponseBodyFailed& setApiImportSwaggerFailed(vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed> && apiImportSwaggerFailed) { DARABONBA_PTR_SET_RVALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };


  protected:
    std::shared_ptr<vector<Models::ImportSwaggerResponseBodyFailedApiImportSwaggerFailed>> apiImportSwaggerFailed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
