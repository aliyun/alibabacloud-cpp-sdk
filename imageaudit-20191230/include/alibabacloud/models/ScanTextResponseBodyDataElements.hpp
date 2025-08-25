// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_SCANTEXTRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScanTextResponseBodyDataElementsResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanTextResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanTextResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ScanTextResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ScanTextResponseBodyDataElements() = default ;
    ScanTextResponseBodyDataElements(const ScanTextResponseBodyDataElements &) = default ;
    ScanTextResponseBodyDataElements(ScanTextResponseBodyDataElements &&) = default ;
    ScanTextResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanTextResponseBodyDataElements() = default ;
    ScanTextResponseBodyDataElements& operator=(const ScanTextResponseBodyDataElements &) = default ;
    ScanTextResponseBodyDataElements& operator=(ScanTextResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->results_ != nullptr
        && this->taskId_ != nullptr; };
    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ScanTextResponseBodyDataElementsResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ScanTextResponseBodyDataElementsResults>) };
    inline vector<Models::ScanTextResponseBodyDataElementsResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ScanTextResponseBodyDataElementsResults>) };
    inline ScanTextResponseBodyDataElements& setResults(const vector<Models::ScanTextResponseBodyDataElementsResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ScanTextResponseBodyDataElements& setResults(vector<Models::ScanTextResponseBodyDataElementsResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ScanTextResponseBodyDataElements& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<Models::ScanTextResponseBodyDataElementsResults>> results_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
