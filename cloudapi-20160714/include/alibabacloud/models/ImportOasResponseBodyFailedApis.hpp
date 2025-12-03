// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDAPIS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYFAILEDAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportOASResponseBodyFailedApisFailedApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodyFailedApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodyFailedApis& obj) { 
      DARABONBA_PTR_TO_JSON(FailedApi, failedApi_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodyFailedApis& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedApi, failedApi_);
    };
    ImportOASResponseBodyFailedApis() = default ;
    ImportOASResponseBodyFailedApis(const ImportOASResponseBodyFailedApis &) = default ;
    ImportOASResponseBodyFailedApis(ImportOASResponseBodyFailedApis &&) = default ;
    ImportOASResponseBodyFailedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodyFailedApis() = default ;
    ImportOASResponseBodyFailedApis& operator=(const ImportOASResponseBodyFailedApis &) = default ;
    ImportOASResponseBodyFailedApis& operator=(ImportOASResponseBodyFailedApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedApi_ == nullptr; };
    // failedApi Field Functions 
    bool hasFailedApi() const { return this->failedApi_ != nullptr;};
    void deleteFailedApi() { this->failedApi_ = nullptr;};
    inline const vector<Models::ImportOASResponseBodyFailedApisFailedApi> & failedApi() const { DARABONBA_PTR_GET_CONST(failedApi_, vector<Models::ImportOASResponseBodyFailedApisFailedApi>) };
    inline vector<Models::ImportOASResponseBodyFailedApisFailedApi> failedApi() { DARABONBA_PTR_GET(failedApi_, vector<Models::ImportOASResponseBodyFailedApisFailedApi>) };
    inline ImportOASResponseBodyFailedApis& setFailedApi(const vector<Models::ImportOASResponseBodyFailedApisFailedApi> & failedApi) { DARABONBA_PTR_SET_VALUE(failedApi_, failedApi) };
    inline ImportOASResponseBodyFailedApis& setFailedApi(vector<Models::ImportOASResponseBodyFailedApisFailedApi> && failedApi) { DARABONBA_PTR_SET_RVALUE(failedApi_, failedApi) };


  protected:
    std::shared_ptr<vector<Models::ImportOASResponseBodyFailedApisFailedApi>> failedApi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
