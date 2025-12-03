// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSLATEIMAGEBATCHRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTranslateImageBatchResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetTranslateImageBatchResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranslateImageBatchResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranslateImageBatchResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetTranslateImageBatchResultResponseBodyData() = default ;
    GetTranslateImageBatchResultResponseBodyData(const GetTranslateImageBatchResultResponseBodyData &) = default ;
    GetTranslateImageBatchResultResponseBodyData(GetTranslateImageBatchResultResponseBodyData &&) = default ;
    GetTranslateImageBatchResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranslateImageBatchResultResponseBodyData() = default ;
    GetTranslateImageBatchResultResponseBodyData& operator=(const GetTranslateImageBatchResultResponseBodyData &) = default ;
    GetTranslateImageBatchResultResponseBodyData& operator=(GetTranslateImageBatchResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->result_ == nullptr
        && return this->status_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetTranslateImageBatchResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetTranslateImageBatchResultResponseBodyDataResult>) };
    inline vector<Models::GetTranslateImageBatchResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetTranslateImageBatchResultResponseBodyDataResult>) };
    inline GetTranslateImageBatchResultResponseBodyData& setResult(const vector<Models::GetTranslateImageBatchResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTranslateImageBatchResultResponseBodyData& setResult(vector<Models::GetTranslateImageBatchResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTranslateImageBatchResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<Models::GetTranslateImageBatchResultResponseBodyDataResult>> result_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
