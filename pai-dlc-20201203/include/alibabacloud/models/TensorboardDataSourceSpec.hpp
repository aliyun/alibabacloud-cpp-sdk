// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TENSORBOARDDATASOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_TENSORBOARDDATASOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class TensorboardDataSourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TensorboardDataSourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_TO_JSON(FullSummaryPath, fullSummaryPath_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, TensorboardDataSourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_FROM_JSON(FullSummaryPath, fullSummaryPath_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SummaryPath, summaryPath_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    TensorboardDataSourceSpec() = default ;
    TensorboardDataSourceSpec(const TensorboardDataSourceSpec &) = default ;
    TensorboardDataSourceSpec(TensorboardDataSourceSpec &&) = default ;
    TensorboardDataSourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TensorboardDataSourceSpec() = default ;
    TensorboardDataSourceSpec& operator=(const TensorboardDataSourceSpec &) = default ;
    TensorboardDataSourceSpec& operator=(TensorboardDataSourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceType_ != nullptr
        && this->directoryName_ != nullptr && this->fullSummaryPath_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->sourceType_ != nullptr
        && this->summaryPath_ != nullptr && this->uri_ != nullptr; };
    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline TensorboardDataSourceSpec& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // directoryName Field Functions 
    bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
    void deleteDirectoryName() { this->directoryName_ = nullptr;};
    inline string directoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
    inline TensorboardDataSourceSpec& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


    // fullSummaryPath Field Functions 
    bool hasFullSummaryPath() const { return this->fullSummaryPath_ != nullptr;};
    void deleteFullSummaryPath() { this->fullSummaryPath_ = nullptr;};
    inline string fullSummaryPath() const { DARABONBA_PTR_GET_DEFAULT(fullSummaryPath_, "") };
    inline TensorboardDataSourceSpec& setFullSummaryPath(string fullSummaryPath) { DARABONBA_PTR_SET_VALUE(fullSummaryPath_, fullSummaryPath) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline TensorboardDataSourceSpec& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TensorboardDataSourceSpec& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline TensorboardDataSourceSpec& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // summaryPath Field Functions 
    bool hasSummaryPath() const { return this->summaryPath_ != nullptr;};
    void deleteSummaryPath() { this->summaryPath_ = nullptr;};
    inline string summaryPath() const { DARABONBA_PTR_GET_DEFAULT(summaryPath_, "") };
    inline TensorboardDataSourceSpec& setSummaryPath(string summaryPath) { DARABONBA_PTR_SET_VALUE(summaryPath_, summaryPath) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline TensorboardDataSourceSpec& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> directoryName_ = nullptr;
    std::shared_ptr<string> fullSummaryPath_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> summaryPath_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
