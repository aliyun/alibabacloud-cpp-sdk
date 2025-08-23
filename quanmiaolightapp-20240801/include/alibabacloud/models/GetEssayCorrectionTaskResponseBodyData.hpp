// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETESSAYCORRECTIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETESSAYCORRECTIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEssayCorrectionTaskResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEssayCorrectionTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEssayCorrectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetEssayCorrectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetEssayCorrectionTaskResponseBodyData() = default ;
    GetEssayCorrectionTaskResponseBodyData(const GetEssayCorrectionTaskResponseBodyData &) = default ;
    GetEssayCorrectionTaskResponseBodyData(GetEssayCorrectionTaskResponseBodyData &&) = default ;
    GetEssayCorrectionTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEssayCorrectionTaskResponseBodyData() = default ;
    GetEssayCorrectionTaskResponseBodyData& operator=(const GetEssayCorrectionTaskResponseBodyData &) = default ;
    GetEssayCorrectionTaskResponseBodyData& operator=(GetEssayCorrectionTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->results_ != nullptr && this->status_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetEssayCorrectionTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::GetEssayCorrectionTaskResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::GetEssayCorrectionTaskResponseBodyDataResults>) };
    inline vector<Models::GetEssayCorrectionTaskResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::GetEssayCorrectionTaskResponseBodyDataResults>) };
    inline GetEssayCorrectionTaskResponseBodyData& setResults(const vector<Models::GetEssayCorrectionTaskResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetEssayCorrectionTaskResponseBodyData& setResults(vector<Models::GetEssayCorrectionTaskResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEssayCorrectionTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<Models::GetEssayCorrectionTaskResponseBodyDataResults>> results_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
