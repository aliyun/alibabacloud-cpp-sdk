// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTSUMMARIZATION_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTSUMMARIZATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestSummarization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestSummarization& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestSummarization& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartCloudNoteRequestSummarization() = default ;
    StartCloudNoteRequestSummarization(const StartCloudNoteRequestSummarization &) = default ;
    StartCloudNoteRequestSummarization(StartCloudNoteRequestSummarization &&) = default ;
    StartCloudNoteRequestSummarization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestSummarization() = default ;
    StartCloudNoteRequestSummarization& operator=(const StartCloudNoteRequestSummarization &) = default ;
    StartCloudNoteRequestSummarization& operator=(StartCloudNoteRequestSummarization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->type_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestSummarization& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline const vector<string> & type() const { DARABONBA_PTR_GET_CONST(type_, vector<string>) };
    inline vector<string> type() { DARABONBA_PTR_GET(type_, vector<string>) };
    inline StartCloudNoteRequestSummarization& setType(const vector<string> & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
    inline StartCloudNoteRequestSummarization& setType(vector<string> && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
