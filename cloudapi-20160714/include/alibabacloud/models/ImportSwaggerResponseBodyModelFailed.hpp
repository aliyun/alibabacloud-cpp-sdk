// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYMODELFAILED_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYMODELFAILED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportSwaggerResponseBodyModelFailedApiImportModelFailed.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBodyModelFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBodyModelFailed& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportModelFailed, apiImportModelFailed_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBodyModelFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportModelFailed, apiImportModelFailed_);
    };
    ImportSwaggerResponseBodyModelFailed() = default ;
    ImportSwaggerResponseBodyModelFailed(const ImportSwaggerResponseBodyModelFailed &) = default ;
    ImportSwaggerResponseBodyModelFailed(ImportSwaggerResponseBodyModelFailed &&) = default ;
    ImportSwaggerResponseBodyModelFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBodyModelFailed() = default ;
    ImportSwaggerResponseBodyModelFailed& operator=(const ImportSwaggerResponseBodyModelFailed &) = default ;
    ImportSwaggerResponseBodyModelFailed& operator=(ImportSwaggerResponseBodyModelFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportModelFailed_ == nullptr; };
    // apiImportModelFailed Field Functions 
    bool hasApiImportModelFailed() const { return this->apiImportModelFailed_ != nullptr;};
    void deleteApiImportModelFailed() { this->apiImportModelFailed_ = nullptr;};
    inline const vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed> & apiImportModelFailed() const { DARABONBA_PTR_GET_CONST(apiImportModelFailed_, vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed>) };
    inline vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed> apiImportModelFailed() { DARABONBA_PTR_GET(apiImportModelFailed_, vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed>) };
    inline ImportSwaggerResponseBodyModelFailed& setApiImportModelFailed(const vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed> & apiImportModelFailed) { DARABONBA_PTR_SET_VALUE(apiImportModelFailed_, apiImportModelFailed) };
    inline ImportSwaggerResponseBodyModelFailed& setApiImportModelFailed(vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed> && apiImportModelFailed) { DARABONBA_PTR_SET_RVALUE(apiImportModelFailed_, apiImportModelFailed) };


  protected:
    std::shared_ptr<vector<Models::ImportSwaggerResponseBodyModelFailedApiImportModelFailed>> apiImportModelFailed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
