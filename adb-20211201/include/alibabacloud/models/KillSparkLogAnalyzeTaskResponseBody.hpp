// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLSPARKLOGANALYZETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KILLSPARKLOGANALYZETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SparkAnalyzeLogTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class KillSparkLogAnalyzeTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillSparkLogAnalyzeTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, KillSparkLogAnalyzeTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    KillSparkLogAnalyzeTaskResponseBody() = default ;
    KillSparkLogAnalyzeTaskResponseBody(const KillSparkLogAnalyzeTaskResponseBody &) = default ;
    KillSparkLogAnalyzeTaskResponseBody(KillSparkLogAnalyzeTaskResponseBody &&) = default ;
    KillSparkLogAnalyzeTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillSparkLogAnalyzeTaskResponseBody() = default ;
    KillSparkLogAnalyzeTaskResponseBody& operator=(const KillSparkLogAnalyzeTaskResponseBody &) = default ;
    KillSparkLogAnalyzeTaskResponseBody& operator=(KillSparkLogAnalyzeTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SparkAnalyzeLogTask & data() const { DARABONBA_PTR_GET_CONST(data_, SparkAnalyzeLogTask) };
    inline SparkAnalyzeLogTask data() { DARABONBA_PTR_GET(data_, SparkAnalyzeLogTask) };
    inline KillSparkLogAnalyzeTaskResponseBody& setData(const SparkAnalyzeLogTask & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KillSparkLogAnalyzeTaskResponseBody& setData(SparkAnalyzeLogTask && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KillSparkLogAnalyzeTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the Spark log analysis task.
    std::shared_ptr<SparkAnalyzeLogTask> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
