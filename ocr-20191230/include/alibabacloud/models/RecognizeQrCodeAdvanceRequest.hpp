// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeQrCodeAdvanceRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    RecognizeQrCodeAdvanceRequest() = default ;
    RecognizeQrCodeAdvanceRequest(const RecognizeQrCodeAdvanceRequest &) = default ;
    RecognizeQrCodeAdvanceRequest(RecognizeQrCodeAdvanceRequest &&) = default ;
    RecognizeQrCodeAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeAdvanceRequest() = default ;
    RecognizeQrCodeAdvanceRequest& operator=(const RecognizeQrCodeAdvanceRequest &) = default ;
    RecognizeQrCodeAdvanceRequest& operator=(RecognizeQrCodeAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tasks_ == nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<RecognizeQrCodeAdvanceRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<RecognizeQrCodeAdvanceRequestTasks>) };
    inline vector<RecognizeQrCodeAdvanceRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<RecognizeQrCodeAdvanceRequestTasks>) };
    inline RecognizeQrCodeAdvanceRequest& setTasks(const vector<RecognizeQrCodeAdvanceRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline RecognizeQrCodeAdvanceRequest& setTasks(vector<RecognizeQrCodeAdvanceRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<RecognizeQrCodeAdvanceRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
