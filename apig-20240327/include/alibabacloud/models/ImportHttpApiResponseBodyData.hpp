// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMPORTHTTPAPIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImportHttpApiResponseBodyDataDryRunInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ImportHttpApiResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dryRunInfo, dryRunInfo_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ImportHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dryRunInfo, dryRunInfo_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ImportHttpApiResponseBodyData() = default ;
    ImportHttpApiResponseBodyData(const ImportHttpApiResponseBodyData &) = default ;
    ImportHttpApiResponseBodyData(ImportHttpApiResponseBodyData &&) = default ;
    ImportHttpApiResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportHttpApiResponseBodyData() = default ;
    ImportHttpApiResponseBodyData& operator=(const ImportHttpApiResponseBodyData &) = default ;
    ImportHttpApiResponseBodyData& operator=(ImportHttpApiResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRunInfo_ == nullptr
        && return this->httpApiId_ == nullptr && return this->name_ == nullptr; };
    // dryRunInfo Field Functions 
    bool hasDryRunInfo() const { return this->dryRunInfo_ != nullptr;};
    void deleteDryRunInfo() { this->dryRunInfo_ = nullptr;};
    inline const Models::ImportHttpApiResponseBodyDataDryRunInfo & dryRunInfo() const { DARABONBA_PTR_GET_CONST(dryRunInfo_, Models::ImportHttpApiResponseBodyDataDryRunInfo) };
    inline Models::ImportHttpApiResponseBodyDataDryRunInfo dryRunInfo() { DARABONBA_PTR_GET(dryRunInfo_, Models::ImportHttpApiResponseBodyDataDryRunInfo) };
    inline ImportHttpApiResponseBodyData& setDryRunInfo(const Models::ImportHttpApiResponseBodyDataDryRunInfo & dryRunInfo) { DARABONBA_PTR_SET_VALUE(dryRunInfo_, dryRunInfo) };
    inline ImportHttpApiResponseBodyData& setDryRunInfo(Models::ImportHttpApiResponseBodyDataDryRunInfo && dryRunInfo) { DARABONBA_PTR_SET_RVALUE(dryRunInfo_, dryRunInfo) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string httpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline ImportHttpApiResponseBodyData& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImportHttpApiResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The dry run result.
    std::shared_ptr<Models::ImportHttpApiResponseBodyDataDryRunInfo> dryRunInfo_ = nullptr;
    // The API ID.
    std::shared_ptr<string> httpApiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
