// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultMasterDiskList.hpp>
#include <map>
#include <alibabacloud/models/ResultSpecInfoMapValue.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange.hpp>
#include <alibabacloud/models/GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionalInstanceConfigResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionalInstanceConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(clientNodeAmountRange, clientNodeAmountRange_);
      DARABONBA_PTR_TO_JSON(clientNodeDiskList, clientNodeDiskList_);
      DARABONBA_PTR_TO_JSON(clientSpecs, clientSpecs_);
      DARABONBA_PTR_TO_JSON(dataNodeAmountRange, dataNodeAmountRange_);
      DARABONBA_PTR_TO_JSON(dataNodeDiskList, dataNodeDiskList_);
      DARABONBA_PTR_TO_JSON(dataNodeSpecs, dataNodeSpecs_);
      DARABONBA_PTR_TO_JSON(kibanaSpecs, kibanaSpecs_);
      DARABONBA_PTR_TO_JSON(masterAmountRange, masterAmountRange_);
      DARABONBA_PTR_TO_JSON(masterDiskList, masterDiskList_);
      DARABONBA_PTR_TO_JSON(masterSpecs, masterSpecs_);
      DARABONBA_PTR_TO_JSON(specInfoMap, specInfoMap_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
      DARABONBA_PTR_TO_JSON(warmNodeAmountRange, warmNodeAmountRange_);
      DARABONBA_PTR_TO_JSON(warmNodeDiskList, warmNodeDiskList_);
      DARABONBA_PTR_TO_JSON(warmNodeSpecs, warmNodeSpecs_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionalInstanceConfigResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(clientNodeAmountRange, clientNodeAmountRange_);
      DARABONBA_PTR_FROM_JSON(clientNodeDiskList, clientNodeDiskList_);
      DARABONBA_PTR_FROM_JSON(clientSpecs, clientSpecs_);
      DARABONBA_PTR_FROM_JSON(dataNodeAmountRange, dataNodeAmountRange_);
      DARABONBA_PTR_FROM_JSON(dataNodeDiskList, dataNodeDiskList_);
      DARABONBA_PTR_FROM_JSON(dataNodeSpecs, dataNodeSpecs_);
      DARABONBA_PTR_FROM_JSON(kibanaSpecs, kibanaSpecs_);
      DARABONBA_PTR_FROM_JSON(masterAmountRange, masterAmountRange_);
      DARABONBA_PTR_FROM_JSON(masterDiskList, masterDiskList_);
      DARABONBA_PTR_FROM_JSON(masterSpecs, masterSpecs_);
      DARABONBA_PTR_FROM_JSON(specInfoMap, specInfoMap_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
      DARABONBA_PTR_FROM_JSON(warmNodeAmountRange, warmNodeAmountRange_);
      DARABONBA_PTR_FROM_JSON(warmNodeDiskList, warmNodeDiskList_);
      DARABONBA_PTR_FROM_JSON(warmNodeSpecs, warmNodeSpecs_);
    };
    GetRegionalInstanceConfigResponseBodyResult() = default ;
    GetRegionalInstanceConfigResponseBodyResult(const GetRegionalInstanceConfigResponseBodyResult &) = default ;
    GetRegionalInstanceConfigResponseBodyResult(GetRegionalInstanceConfigResponseBodyResult &&) = default ;
    GetRegionalInstanceConfigResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionalInstanceConfigResponseBodyResult() = default ;
    GetRegionalInstanceConfigResponseBodyResult& operator=(const GetRegionalInstanceConfigResponseBodyResult &) = default ;
    GetRegionalInstanceConfigResponseBodyResult& operator=(GetRegionalInstanceConfigResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientNodeAmountRange_ != nullptr
        && this->clientNodeDiskList_ != nullptr && this->clientSpecs_ != nullptr && this->dataNodeAmountRange_ != nullptr && this->dataNodeDiskList_ != nullptr && this->dataNodeSpecs_ != nullptr
        && this->kibanaSpecs_ != nullptr && this->masterAmountRange_ != nullptr && this->masterDiskList_ != nullptr && this->masterSpecs_ != nullptr && this->specInfoMap_ != nullptr
        && this->versions_ != nullptr && this->warmNodeAmountRange_ != nullptr && this->warmNodeDiskList_ != nullptr && this->warmNodeSpecs_ != nullptr; };
    // clientNodeAmountRange Field Functions 
    bool hasClientNodeAmountRange() const { return this->clientNodeAmountRange_ != nullptr;};
    void deleteClientNodeAmountRange() { this->clientNodeAmountRange_ = nullptr;};
    inline const Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange & clientNodeAmountRange() const { DARABONBA_PTR_GET_CONST(clientNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange) };
    inline Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange clientNodeAmountRange() { DARABONBA_PTR_GET(clientNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientNodeAmountRange(const Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange & clientNodeAmountRange) { DARABONBA_PTR_SET_VALUE(clientNodeAmountRange_, clientNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientNodeAmountRange(Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange && clientNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(clientNodeAmountRange_, clientNodeAmountRange) };


    // clientNodeDiskList Field Functions 
    bool hasClientNodeDiskList() const { return this->clientNodeDiskList_ != nullptr;};
    void deleteClientNodeDiskList() { this->clientNodeDiskList_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList> & clientNodeDiskList() const { DARABONBA_PTR_GET_CONST(clientNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList> clientNodeDiskList() { DARABONBA_PTR_GET(clientNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientNodeDiskList(const vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList> & clientNodeDiskList) { DARABONBA_PTR_SET_VALUE(clientNodeDiskList_, clientNodeDiskList) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientNodeDiskList(vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList> && clientNodeDiskList) { DARABONBA_PTR_SET_RVALUE(clientNodeDiskList_, clientNodeDiskList) };


    // clientSpecs Field Functions 
    bool hasClientSpecs() const { return this->clientSpecs_ != nullptr;};
    void deleteClientSpecs() { this->clientSpecs_ = nullptr;};
    inline const vector<string> & clientSpecs() const { DARABONBA_PTR_GET_CONST(clientSpecs_, vector<string>) };
    inline vector<string> clientSpecs() { DARABONBA_PTR_GET(clientSpecs_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientSpecs(const vector<string> & clientSpecs) { DARABONBA_PTR_SET_VALUE(clientSpecs_, clientSpecs) };
    inline GetRegionalInstanceConfigResponseBodyResult& setClientSpecs(vector<string> && clientSpecs) { DARABONBA_PTR_SET_RVALUE(clientSpecs_, clientSpecs) };


    // dataNodeAmountRange Field Functions 
    bool hasDataNodeAmountRange() const { return this->dataNodeAmountRange_ != nullptr;};
    void deleteDataNodeAmountRange() { this->dataNodeAmountRange_ = nullptr;};
    inline const Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange & dataNodeAmountRange() const { DARABONBA_PTR_GET_CONST(dataNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange) };
    inline Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange dataNodeAmountRange() { DARABONBA_PTR_GET(dataNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeAmountRange(const Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange & dataNodeAmountRange) { DARABONBA_PTR_SET_VALUE(dataNodeAmountRange_, dataNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeAmountRange(Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange && dataNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(dataNodeAmountRange_, dataNodeAmountRange) };


    // dataNodeDiskList Field Functions 
    bool hasDataNodeDiskList() const { return this->dataNodeDiskList_ != nullptr;};
    void deleteDataNodeDiskList() { this->dataNodeDiskList_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList> & dataNodeDiskList() const { DARABONBA_PTR_GET_CONST(dataNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList> dataNodeDiskList() { DARABONBA_PTR_GET(dataNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeDiskList(const vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList> & dataNodeDiskList) { DARABONBA_PTR_SET_VALUE(dataNodeDiskList_, dataNodeDiskList) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeDiskList(vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList> && dataNodeDiskList) { DARABONBA_PTR_SET_RVALUE(dataNodeDiskList_, dataNodeDiskList) };


    // dataNodeSpecs Field Functions 
    bool hasDataNodeSpecs() const { return this->dataNodeSpecs_ != nullptr;};
    void deleteDataNodeSpecs() { this->dataNodeSpecs_ = nullptr;};
    inline const vector<string> & dataNodeSpecs() const { DARABONBA_PTR_GET_CONST(dataNodeSpecs_, vector<string>) };
    inline vector<string> dataNodeSpecs() { DARABONBA_PTR_GET(dataNodeSpecs_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeSpecs(const vector<string> & dataNodeSpecs) { DARABONBA_PTR_SET_VALUE(dataNodeSpecs_, dataNodeSpecs) };
    inline GetRegionalInstanceConfigResponseBodyResult& setDataNodeSpecs(vector<string> && dataNodeSpecs) { DARABONBA_PTR_SET_RVALUE(dataNodeSpecs_, dataNodeSpecs) };


    // kibanaSpecs Field Functions 
    bool hasKibanaSpecs() const { return this->kibanaSpecs_ != nullptr;};
    void deleteKibanaSpecs() { this->kibanaSpecs_ = nullptr;};
    inline const vector<string> & kibanaSpecs() const { DARABONBA_PTR_GET_CONST(kibanaSpecs_, vector<string>) };
    inline vector<string> kibanaSpecs() { DARABONBA_PTR_GET(kibanaSpecs_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setKibanaSpecs(const vector<string> & kibanaSpecs) { DARABONBA_PTR_SET_VALUE(kibanaSpecs_, kibanaSpecs) };
    inline GetRegionalInstanceConfigResponseBodyResult& setKibanaSpecs(vector<string> && kibanaSpecs) { DARABONBA_PTR_SET_RVALUE(kibanaSpecs_, kibanaSpecs) };


    // masterAmountRange Field Functions 
    bool hasMasterAmountRange() const { return this->masterAmountRange_ != nullptr;};
    void deleteMasterAmountRange() { this->masterAmountRange_ = nullptr;};
    inline const vector<string> & masterAmountRange() const { DARABONBA_PTR_GET_CONST(masterAmountRange_, vector<string>) };
    inline vector<string> masterAmountRange() { DARABONBA_PTR_GET(masterAmountRange_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterAmountRange(const vector<string> & masterAmountRange) { DARABONBA_PTR_SET_VALUE(masterAmountRange_, masterAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterAmountRange(vector<string> && masterAmountRange) { DARABONBA_PTR_SET_RVALUE(masterAmountRange_, masterAmountRange) };


    // masterDiskList Field Functions 
    bool hasMasterDiskList() const { return this->masterDiskList_ != nullptr;};
    void deleteMasterDiskList() { this->masterDiskList_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList> & masterDiskList() const { DARABONBA_PTR_GET_CONST(masterDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList> masterDiskList() { DARABONBA_PTR_GET(masterDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterDiskList(const vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList> & masterDiskList) { DARABONBA_PTR_SET_VALUE(masterDiskList_, masterDiskList) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterDiskList(vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList> && masterDiskList) { DARABONBA_PTR_SET_RVALUE(masterDiskList_, masterDiskList) };


    // masterSpecs Field Functions 
    bool hasMasterSpecs() const { return this->masterSpecs_ != nullptr;};
    void deleteMasterSpecs() { this->masterSpecs_ = nullptr;};
    inline const vector<string> & masterSpecs() const { DARABONBA_PTR_GET_CONST(masterSpecs_, vector<string>) };
    inline vector<string> masterSpecs() { DARABONBA_PTR_GET(masterSpecs_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterSpecs(const vector<string> & masterSpecs) { DARABONBA_PTR_SET_VALUE(masterSpecs_, masterSpecs) };
    inline GetRegionalInstanceConfigResponseBodyResult& setMasterSpecs(vector<string> && masterSpecs) { DARABONBA_PTR_SET_RVALUE(masterSpecs_, masterSpecs) };


    // specInfoMap Field Functions 
    bool hasSpecInfoMap() const { return this->specInfoMap_ != nullptr;};
    void deleteSpecInfoMap() { this->specInfoMap_ = nullptr;};
    inline const map<string, Models::ResultSpecInfoMapValue> & specInfoMap() const { DARABONBA_PTR_GET_CONST(specInfoMap_, map<string, Models::ResultSpecInfoMapValue>) };
    inline map<string, Models::ResultSpecInfoMapValue> specInfoMap() { DARABONBA_PTR_GET(specInfoMap_, map<string, Models::ResultSpecInfoMapValue>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setSpecInfoMap(const map<string, Models::ResultSpecInfoMapValue> & specInfoMap) { DARABONBA_PTR_SET_VALUE(specInfoMap_, specInfoMap) };
    inline GetRegionalInstanceConfigResponseBodyResult& setSpecInfoMap(map<string, Models::ResultSpecInfoMapValue> && specInfoMap) { DARABONBA_PTR_SET_RVALUE(specInfoMap_, specInfoMap) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetRegionalInstanceConfigResponseBodyResult& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    // warmNodeAmountRange Field Functions 
    bool hasWarmNodeAmountRange() const { return this->warmNodeAmountRange_ != nullptr;};
    void deleteWarmNodeAmountRange() { this->warmNodeAmountRange_ = nullptr;};
    inline const Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange & warmNodeAmountRange() const { DARABONBA_PTR_GET_CONST(warmNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange) };
    inline Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange warmNodeAmountRange() { DARABONBA_PTR_GET(warmNodeAmountRange_, Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeAmountRange(const Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange & warmNodeAmountRange) { DARABONBA_PTR_SET_VALUE(warmNodeAmountRange_, warmNodeAmountRange) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeAmountRange(Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange && warmNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(warmNodeAmountRange_, warmNodeAmountRange) };


    // warmNodeDiskList Field Functions 
    bool hasWarmNodeDiskList() const { return this->warmNodeDiskList_ != nullptr;};
    void deleteWarmNodeDiskList() { this->warmNodeDiskList_ = nullptr;};
    inline const vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList> & warmNodeDiskList() const { DARABONBA_PTR_GET_CONST(warmNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList>) };
    inline vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList> warmNodeDiskList() { DARABONBA_PTR_GET(warmNodeDiskList_, vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeDiskList(const vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList> & warmNodeDiskList) { DARABONBA_PTR_SET_VALUE(warmNodeDiskList_, warmNodeDiskList) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeDiskList(vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList> && warmNodeDiskList) { DARABONBA_PTR_SET_RVALUE(warmNodeDiskList_, warmNodeDiskList) };


    // warmNodeSpecs Field Functions 
    bool hasWarmNodeSpecs() const { return this->warmNodeSpecs_ != nullptr;};
    void deleteWarmNodeSpecs() { this->warmNodeSpecs_ = nullptr;};
    inline const vector<string> & warmNodeSpecs() const { DARABONBA_PTR_GET_CONST(warmNodeSpecs_, vector<string>) };
    inline vector<string> warmNodeSpecs() { DARABONBA_PTR_GET(warmNodeSpecs_, vector<string>) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeSpecs(const vector<string> & warmNodeSpecs) { DARABONBA_PTR_SET_VALUE(warmNodeSpecs_, warmNodeSpecs) };
    inline GetRegionalInstanceConfigResponseBodyResult& setWarmNodeSpecs(vector<string> && warmNodeSpecs) { DARABONBA_PTR_SET_RVALUE(warmNodeSpecs_, warmNodeSpecs) };


  protected:
    std::shared_ptr<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeAmountRange> clientNodeAmountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultClientNodeDiskList>> clientNodeDiskList_ = nullptr;
    std::shared_ptr<vector<string>> clientSpecs_ = nullptr;
    std::shared_ptr<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeAmountRange> dataNodeAmountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultDataNodeDiskList>> dataNodeDiskList_ = nullptr;
    std::shared_ptr<vector<string>> dataNodeSpecs_ = nullptr;
    std::shared_ptr<vector<string>> kibanaSpecs_ = nullptr;
    std::shared_ptr<vector<string>> masterAmountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultMasterDiskList>> masterDiskList_ = nullptr;
    std::shared_ptr<vector<string>> masterSpecs_ = nullptr;
    std::shared_ptr<map<string, Models::ResultSpecInfoMapValue>> specInfoMap_ = nullptr;
    std::shared_ptr<vector<string>> versions_ = nullptr;
    std::shared_ptr<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeAmountRange> warmNodeAmountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionalInstanceConfigResponseBodyResultWarmNodeDiskList>> warmNodeDiskList_ = nullptr;
    std::shared_ptr<vector<string>> warmNodeSpecs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
