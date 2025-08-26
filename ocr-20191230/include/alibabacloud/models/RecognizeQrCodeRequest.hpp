// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeQrCodeRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    RecognizeQrCodeRequest() = default ;
    RecognizeQrCodeRequest(const RecognizeQrCodeRequest &) = default ;
    RecognizeQrCodeRequest(RecognizeQrCodeRequest &&) = default ;
    RecognizeQrCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeRequest() = default ;
    RecognizeQrCodeRequest& operator=(const RecognizeQrCodeRequest &) = default ;
    RecognizeQrCodeRequest& operator=(RecognizeQrCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tasks_ != nullptr; };
    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<RecognizeQrCodeRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<RecognizeQrCodeRequestTasks>) };
    inline vector<RecognizeQrCodeRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<RecognizeQrCodeRequestTasks>) };
    inline RecognizeQrCodeRequest& setTasks(const vector<RecognizeQrCodeRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline RecognizeQrCodeRequest& setTasks(vector<RecognizeQrCodeRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<RecognizeQrCodeRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
