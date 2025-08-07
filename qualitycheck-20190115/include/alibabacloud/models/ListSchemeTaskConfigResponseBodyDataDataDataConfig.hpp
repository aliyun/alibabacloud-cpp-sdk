// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataDataDataConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataDataDataConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AssignConfigs, assignConfigs_);
      DARABONBA_PTR_TO_JSON(DataSets, dataSets_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ResultParam, resultParam_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataDataDataConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignConfigs, assignConfigs_);
      DARABONBA_PTR_FROM_JSON(DataSets, dataSets_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ResultParam, resultParam_);
    };
    ListSchemeTaskConfigResponseBodyDataDataDataConfig() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfig(const ListSchemeTaskConfigResponseBodyDataDataDataConfig &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfig(ListSchemeTaskConfigResponseBodyDataDataDataConfig &&) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataDataDataConfig() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfig& operator=(const ListSchemeTaskConfigResponseBodyDataDataDataConfig &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfig& operator=(ListSchemeTaskConfigResponseBodyDataDataDataConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignConfigs_ != nullptr
        && this->dataSets_ != nullptr && this->index_ != nullptr && this->resultParam_ != nullptr; };
    // assignConfigs Field Functions 
    bool hasAssignConfigs() const { return this->assignConfigs_ != nullptr;};
    void deleteAssignConfigs() { this->assignConfigs_ = nullptr;};
    inline const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs & assignConfigs() const { DARABONBA_PTR_GET_CONST(assignConfigs_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs) };
    inline Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs assignConfigs() { DARABONBA_PTR_GET(assignConfigs_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfig& setAssignConfigs(const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs & assignConfigs) { DARABONBA_PTR_SET_VALUE(assignConfigs_, assignConfigs) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfig& setAssignConfigs(Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs && assignConfigs) { DARABONBA_PTR_SET_RVALUE(assignConfigs_, assignConfigs) };


    // dataSets Field Functions 
    bool hasDataSets() const { return this->dataSets_ != nullptr;};
    void deleteDataSets() { this->dataSets_ = nullptr;};
    inline string dataSets() const { DARABONBA_PTR_GET_DEFAULT(dataSets_, "") };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfig& setDataSets(string dataSets) { DARABONBA_PTR_SET_VALUE(dataSets_, dataSets) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfig& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // resultParam Field Functions 
    bool hasResultParam() const { return this->resultParam_ != nullptr;};
    void deleteResultParam() { this->resultParam_ = nullptr;};
    inline string resultParam() const { DARABONBA_PTR_GET_DEFAULT(resultParam_, "") };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfig& setResultParam(string resultParam) { DARABONBA_PTR_SET_VALUE(resultParam_, resultParam) };


  protected:
    std::shared_ptr<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigs> assignConfigs_ = nullptr;
    std::shared_ptr<string> dataSets_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> resultParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
