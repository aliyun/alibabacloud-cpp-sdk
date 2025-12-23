// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUESTENTRIES_HPP_
#define ALIBABACLOUD_MODELS_PUSHUSERANALYZERENTRIESREQUESTENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class PushUserAnalyzerEntriesRequestEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushUserAnalyzerEntriesRequestEntries& obj) { 
      DARABONBA_PTR_TO_JSON(cmd, cmd_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(splitEnabled, splitEnabled_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PushUserAnalyzerEntriesRequestEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(splitEnabled, splitEnabled_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    PushUserAnalyzerEntriesRequestEntries() = default ;
    PushUserAnalyzerEntriesRequestEntries(const PushUserAnalyzerEntriesRequestEntries &) = default ;
    PushUserAnalyzerEntriesRequestEntries(PushUserAnalyzerEntriesRequestEntries &&) = default ;
    PushUserAnalyzerEntriesRequestEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushUserAnalyzerEntriesRequestEntries() = default ;
    PushUserAnalyzerEntriesRequestEntries& operator=(const PushUserAnalyzerEntriesRequestEntries &) = default ;
    PushUserAnalyzerEntriesRequestEntries& operator=(PushUserAnalyzerEntriesRequestEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmd_ == nullptr
        && return this->key_ == nullptr && return this->splitEnabled_ == nullptr && return this->value_ == nullptr; };
    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline PushUserAnalyzerEntriesRequestEntries& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline PushUserAnalyzerEntriesRequestEntries& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // splitEnabled Field Functions 
    bool hasSplitEnabled() const { return this->splitEnabled_ != nullptr;};
    void deleteSplitEnabled() { this->splitEnabled_ = nullptr;};
    inline bool splitEnabled() const { DARABONBA_PTR_GET_DEFAULT(splitEnabled_, false) };
    inline PushUserAnalyzerEntriesRequestEntries& setSplitEnabled(bool splitEnabled) { DARABONBA_PTR_SET_VALUE(splitEnabled_, splitEnabled) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PushUserAnalyzerEntriesRequestEntries& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The operation to be performed on the entries.
    // 
    // Valid values:
    // 
    // *   add
    // *   delete
    std::shared_ptr<string> cmd_ = nullptr;
    // The key to be used to query entries.
    std::shared_ptr<string> key_ = nullptr;
    // Specifies whether to further analyze the terms that are generated after the search query is analyzed.
    // 
    // Default value: true.
    std::shared_ptr<bool> splitEnabled_ = nullptr;
    // The analysis result.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
