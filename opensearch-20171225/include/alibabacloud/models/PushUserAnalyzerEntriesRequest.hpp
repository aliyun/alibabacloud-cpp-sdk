// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(cmd, cmd_);
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(splitEnabled, splitEnabled_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(cmd, cmd_);
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(splitEnabled, splitEnabled_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cmd_ == nullptr
        && this->key_ == nullptr && this->splitEnabled_ == nullptr && this->value_ == nullptr; };
      // cmd Field Functions 
      bool hasCmd() const { return this->cmd_ != nullptr;};
      void deleteCmd() { this->cmd_ = nullptr;};
      inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
      inline Entries& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Entries& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // splitEnabled Field Functions 
      bool hasSplitEnabled() const { return this->splitEnabled_ != nullptr;};
      void deleteSplitEnabled() { this->splitEnabled_ = nullptr;};
      inline bool getSplitEnabled() const { DARABONBA_PTR_GET_DEFAULT(splitEnabled_, false) };
      inline Entries& setSplitEnabled(bool splitEnabled) { DARABONBA_PTR_SET_VALUE(splitEnabled_, splitEnabled) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Entries& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The operation to perform on the entries.
      // 
      // Valid values:
      // 
      // - add
      // 
      // - delete
      shared_ptr<string> cmd_ {};
      // The key to be used to query entries.
      shared_ptr<string> key_ {};
      // Specifies whether to enable fine-grained splitting.
      // 
      // Default: true
      shared_ptr<bool> splitEnabled_ {};
      // The analysis result.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->entries_ == nullptr
        && this->dryRun_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<PushUserAnalyzerEntriesRequest::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<PushUserAnalyzerEntriesRequest::Entries>) };
    inline vector<PushUserAnalyzerEntriesRequest::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<PushUserAnalyzerEntriesRequest::Entries>) };
    inline PushUserAnalyzerEntriesRequest& setEntries(const vector<PushUserAnalyzerEntriesRequest::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline PushUserAnalyzerEntriesRequest& setEntries(vector<PushUserAnalyzerEntriesRequest::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PushUserAnalyzerEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The entries of the custom analyzer.
    shared_ptr<vector<PushUserAnalyzerEntriesRequest::Entries>> entries_ {};
    // Specifies whether to perform a dry run. This parameter is only used to check whether the data source is valid. Valid values: true and false.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
