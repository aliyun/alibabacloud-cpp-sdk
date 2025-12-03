// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSAPIS_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODYSUCCESSAPIS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportOASResponseBodySuccessApisSuccessApi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ImportOASResponseBodySuccessApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBodySuccessApis& obj) { 
      DARABONBA_PTR_TO_JSON(SuccessApi, successApi_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBodySuccessApis& obj) { 
      DARABONBA_PTR_FROM_JSON(SuccessApi, successApi_);
    };
    ImportOASResponseBodySuccessApis() = default ;
    ImportOASResponseBodySuccessApis(const ImportOASResponseBodySuccessApis &) = default ;
    ImportOASResponseBodySuccessApis(ImportOASResponseBodySuccessApis &&) = default ;
    ImportOASResponseBodySuccessApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBodySuccessApis() = default ;
    ImportOASResponseBodySuccessApis& operator=(const ImportOASResponseBodySuccessApis &) = default ;
    ImportOASResponseBodySuccessApis& operator=(ImportOASResponseBodySuccessApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->successApi_ == nullptr; };
    // successApi Field Functions 
    bool hasSuccessApi() const { return this->successApi_ != nullptr;};
    void deleteSuccessApi() { this->successApi_ = nullptr;};
    inline const vector<Models::ImportOASResponseBodySuccessApisSuccessApi> & successApi() const { DARABONBA_PTR_GET_CONST(successApi_, vector<Models::ImportOASResponseBodySuccessApisSuccessApi>) };
    inline vector<Models::ImportOASResponseBodySuccessApisSuccessApi> successApi() { DARABONBA_PTR_GET(successApi_, vector<Models::ImportOASResponseBodySuccessApisSuccessApi>) };
    inline ImportOASResponseBodySuccessApis& setSuccessApi(const vector<Models::ImportOASResponseBodySuccessApisSuccessApi> & successApi) { DARABONBA_PTR_SET_VALUE(successApi_, successApi) };
    inline ImportOASResponseBodySuccessApis& setSuccessApi(vector<Models::ImportOASResponseBodySuccessApisSuccessApi> && successApi) { DARABONBA_PTR_SET_RVALUE(successApi_, successApi) };


  protected:
    std::shared_ptr<vector<Models::ImportOASResponseBodySuccessApisSuccessApi>> successApi_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
