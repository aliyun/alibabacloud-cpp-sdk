// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYMODELSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYMODELSUCCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBodyModelSuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBodyModelSuccess& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBodyModelSuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
    };
    ImportSwaggerResponseBodyModelSuccess() = default ;
    ImportSwaggerResponseBodyModelSuccess(const ImportSwaggerResponseBodyModelSuccess &) = default ;
    ImportSwaggerResponseBodyModelSuccess(ImportSwaggerResponseBodyModelSuccess &&) = default ;
    ImportSwaggerResponseBodyModelSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBodyModelSuccess() = default ;
    ImportSwaggerResponseBodyModelSuccess& operator=(const ImportSwaggerResponseBodyModelSuccess &) = default ;
    ImportSwaggerResponseBodyModelSuccess& operator=(ImportSwaggerResponseBodyModelSuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportModelSuccess_ == nullptr; };
    // apiImportModelSuccess Field Functions 
    bool hasApiImportModelSuccess() const { return this->apiImportModelSuccess_ != nullptr;};
    void deleteApiImportModelSuccess() { this->apiImportModelSuccess_ = nullptr;};
    inline const vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess> & apiImportModelSuccess() const { DARABONBA_PTR_GET_CONST(apiImportModelSuccess_, vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess>) };
    inline vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess> apiImportModelSuccess() { DARABONBA_PTR_GET(apiImportModelSuccess_, vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess>) };
    inline ImportSwaggerResponseBodyModelSuccess& setApiImportModelSuccess(const vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess> & apiImportModelSuccess) { DARABONBA_PTR_SET_VALUE(apiImportModelSuccess_, apiImportModelSuccess) };
    inline ImportSwaggerResponseBodyModelSuccess& setApiImportModelSuccess(vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess> && apiImportModelSuccess) { DARABONBA_PTR_SET_RVALUE(apiImportModelSuccess_, apiImportModelSuccess) };


  protected:
    std::shared_ptr<vector<Models::ImportSwaggerResponseBodyModelSuccessApiImportModelSuccess>> apiImportModelSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
