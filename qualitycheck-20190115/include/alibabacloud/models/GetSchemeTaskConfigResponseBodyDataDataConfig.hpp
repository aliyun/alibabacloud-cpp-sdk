// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATADATACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBodyDataDataConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBodyDataDataConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AssignConfigs, assignConfigs_);
      DARABONBA_PTR_TO_JSON(DataSets, dataSets_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ResultParam, resultParam_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBodyDataDataConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignConfigs, assignConfigs_);
      DARABONBA_PTR_FROM_JSON(DataSets, dataSets_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ResultParam, resultParam_);
    };
    GetSchemeTaskConfigResponseBodyDataDataConfig() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfig(const GetSchemeTaskConfigResponseBodyDataDataConfig &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfig(GetSchemeTaskConfigResponseBodyDataDataConfig &&) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBodyDataDataConfig() = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfig& operator=(const GetSchemeTaskConfigResponseBodyDataDataConfig &) = default ;
    GetSchemeTaskConfigResponseBodyDataDataConfig& operator=(GetSchemeTaskConfigResponseBodyDataDataConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignConfigs_ != nullptr
        && this->dataSets_ != nullptr && this->index_ != nullptr && this->resultParam_ != nullptr; };
    // assignConfigs Field Functions 
    bool hasAssignConfigs() const { return this->assignConfigs_ != nullptr;};
    void deleteAssignConfigs() { this->assignConfigs_ = nullptr;};
    inline const vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs> & assignConfigs() const { DARABONBA_PTR_GET_CONST(assignConfigs_, vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs>) };
    inline vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs> assignConfigs() { DARABONBA_PTR_GET(assignConfigs_, vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs>) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfig& setAssignConfigs(const vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs> & assignConfigs) { DARABONBA_PTR_SET_VALUE(assignConfigs_, assignConfigs) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfig& setAssignConfigs(vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs> && assignConfigs) { DARABONBA_PTR_SET_RVALUE(assignConfigs_, assignConfigs) };


    // dataSets Field Functions 
    bool hasDataSets() const { return this->dataSets_ != nullptr;};
    void deleteDataSets() { this->dataSets_ = nullptr;};
    inline string dataSets() const { DARABONBA_PTR_GET_DEFAULT(dataSets_, "") };
    inline GetSchemeTaskConfigResponseBodyDataDataConfig& setDataSets(string dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline GetSchemeTaskConfigResponseBodyDataDataConfig& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // resultParam Field Functions 
    bool hasResultParam() const { return this->resultParam_ != nullptr;};
    void deleteResultParam() { this->resultParam_ = nullptr;};
    inline string resultParam() const { DARABONBA_PTR_GET_DEFAULT(resultParam_, "") };
    inline GetSchemeTaskConfigResponseBodyDataDataConfig& setResultParam(string resultParam) { DARABONBA_PTR_SET_VALUE(resultParam_, resultParam) };


  protected:
    std::shared_ptr<vector<Models::GetSchemeTaskConfigResponseBodyDataDataConfigAssignConfigs>> assignConfigs_ = nullptr;
    std::shared_ptr<string> dataSets_ = nullptr;
    std::shared_ptr<int64_t> index_ = nullptr;
    std::shared_ptr<string> resultParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
