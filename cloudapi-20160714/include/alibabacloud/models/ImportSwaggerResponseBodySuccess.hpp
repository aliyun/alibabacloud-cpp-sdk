// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYSUCCESS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSWAGGERRESPONSEBODYSUCCESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportSwaggerResponseBodySuccess : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportSwaggerResponseBodySuccess& obj) { 
      DARABONBA_PTR_TO_JSON(ApiImportSwaggerSuccess, apiImportSwaggerSuccess_);
    };
    friend void from_json(const Darabonba::Json& j, ImportSwaggerResponseBodySuccess& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiImportSwaggerSuccess, apiImportSwaggerSuccess_);
    };
    ImportSwaggerResponseBodySuccess() = default ;
    ImportSwaggerResponseBodySuccess(const ImportSwaggerResponseBodySuccess &) = default ;
    ImportSwaggerResponseBodySuccess(ImportSwaggerResponseBodySuccess &&) = default ;
    ImportSwaggerResponseBodySuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportSwaggerResponseBodySuccess() = default ;
    ImportSwaggerResponseBodySuccess& operator=(const ImportSwaggerResponseBodySuccess &) = default ;
    ImportSwaggerResponseBodySuccess& operator=(ImportSwaggerResponseBodySuccess &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiImportSwaggerSuccess_ == nullptr; };
    // apiImportSwaggerSuccess Field Functions 
    bool hasApiImportSwaggerSuccess() const { return this->apiImportSwaggerSuccess_ != nullptr;};
    void deleteApiImportSwaggerSuccess() { this->apiImportSwaggerSuccess_ = nullptr;};
    inline const vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess> & apiImportSwaggerSuccess() const { DARABONBA_PTR_GET_CONST(apiImportSwaggerSuccess_, vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess>) };
    inline vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess> apiImportSwaggerSuccess() { DARABONBA_PTR_GET(apiImportSwaggerSuccess_, vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess>) };
    inline ImportSwaggerResponseBodySuccess& setApiImportSwaggerSuccess(const vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess> & apiImportSwaggerSuccess) { DARABONBA_PTR_SET_VALUE(apiImportSwaggerSuccess_, apiImportSwaggerSuccess) };
    inline ImportSwaggerResponseBodySuccess& setApiImportSwaggerSuccess(vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess> && apiImportSwaggerSuccess) { DARABONBA_PTR_SET_RVALUE(apiImportSwaggerSuccess_, apiImportSwaggerSuccess) };


  protected:
    std::shared_ptr<vector<Models::ImportSwaggerResponseBodySuccessApiImportSwaggerSuccess>> apiImportSwaggerSuccess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
