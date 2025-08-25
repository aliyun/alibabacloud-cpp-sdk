// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanTextRequestLabels.hpp>
#include <alibabacloud/models/ScanTextRequestTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ScanTextRequest() = default ;
    ScanTextRequest(const ScanTextRequest &) = default ;
    ScanTextRequest(ScanTextRequest &&) = default ;
    ScanTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextRequest() = default ;
    ScanTextRequest& operator=(const ScanTextRequest &) = default ;
    ScanTextRequest& operator=(ScanTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labels_ != nullptr
        && this->tasks_ != nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ScanTextRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ScanTextRequestLabels>) };
    inline vector<ScanTextRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<ScanTextRequestLabels>) };
    inline ScanTextRequest& setLabels(const vector<ScanTextRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ScanTextRequest& setLabels(vector<ScanTextRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ScanTextRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ScanTextRequestTasks>) };
    inline vector<ScanTextRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ScanTextRequestTasks>) };
    inline ScanTextRequest& setTasks(const vector<ScanTextRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ScanTextRequest& setTasks(vector<ScanTextRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<ScanTextRequestLabels>> labels_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<ScanTextRequestTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
