// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_PROCESSTRANSCRIPTION_HPP_
#define ALIBABACLOUD_ENDTOENDREALTIMEDIALOG_MODELS_PROCESSTRANSCRIPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace EndToEndRealTimeDialog
{
namespace Models
{
  class ProcessTranscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessTranscription& obj) { 
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessTranscription& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    ProcessTranscription() = default ;
    ProcessTranscription(const ProcessTranscription &) = default ;
    ProcessTranscription(ProcessTranscription &&) = default ;
    ProcessTranscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessTranscription() = default ;
    ProcessTranscription& operator=(const ProcessTranscription &) = default ;
    ProcessTranscription& operator=(ProcessTranscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceType_ == nullptr
        && this->data_ == nullptr; };
    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ProcessTranscription& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<int64_t>) };
    inline vector<int64_t> getData() { DARABONBA_PTR_GET(data_, vector<int64_t>) };
    inline ProcessTranscription& setData(const vector<int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ProcessTranscription& setData(vector<int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    shared_ptr<string> dataSourceType_ {};
    // This parameter is required.
    shared_ptr<vector<int64_t>> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
} // namespace EndToEndRealTimeDialog
#endif
