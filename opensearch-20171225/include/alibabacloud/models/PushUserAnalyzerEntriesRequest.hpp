// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PushUserAnalyzerEntriesRequestEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class PushUserAnalyzerEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushUserAnalyzerEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entries, entries_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, PushUserAnalyzerEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entries, entries_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    PushUserAnalyzerEntriesRequest() = default ;
    PushUserAnalyzerEntriesRequest(const PushUserAnalyzerEntriesRequest &) = default ;
    PushUserAnalyzerEntriesRequest(PushUserAnalyzerEntriesRequest &&) = default ;
    PushUserAnalyzerEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushUserAnalyzerEntriesRequest() = default ;
    PushUserAnalyzerEntriesRequest& operator=(const PushUserAnalyzerEntriesRequest &) = default ;
    PushUserAnalyzerEntriesRequest& operator=(PushUserAnalyzerEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entries_ == nullptr
        && return this->dryRun_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<PushUserAnalyzerEntriesRequestEntries> & entries() const { DARABONBA_PTR_GET_CONST(entries_, vector<PushUserAnalyzerEntriesRequestEntries>) };
    inline vector<PushUserAnalyzerEntriesRequestEntries> entries() { DARABONBA_PTR_GET(entries_, vector<PushUserAnalyzerEntriesRequestEntries>) };
    inline PushUserAnalyzerEntriesRequest& setEntries(const vector<PushUserAnalyzerEntriesRequestEntries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline PushUserAnalyzerEntriesRequest& setEntries(vector<PushUserAnalyzerEntriesRequestEntries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PushUserAnalyzerEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The entries of the custom analyzer.
    std::shared_ptr<vector<PushUserAnalyzerEntriesRequestEntries>> entries_ = nullptr;
    // Specifies whether to perform a dry run. This parameter is only used to check whether the data source is valid. Valid values: true and false.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
