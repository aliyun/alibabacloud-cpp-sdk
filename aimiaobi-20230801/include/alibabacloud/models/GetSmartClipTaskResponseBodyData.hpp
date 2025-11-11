// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTCLIPTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSmartClipTaskResponseBodyDataSubJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetSmartClipTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartClipTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubJobs, subJobs_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartClipTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubJobs, subJobs_);
    };
    GetSmartClipTaskResponseBodyData() = default ;
    GetSmartClipTaskResponseBodyData(const GetSmartClipTaskResponseBodyData &) = default ;
    GetSmartClipTaskResponseBodyData(GetSmartClipTaskResponseBodyData &&) = default ;
    GetSmartClipTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartClipTaskResponseBodyData() = default ;
    GetSmartClipTaskResponseBodyData& operator=(const GetSmartClipTaskResponseBodyData &) = default ;
    GetSmartClipTaskResponseBodyData& operator=(GetSmartClipTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->status_ == nullptr && return this->subJobs_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetSmartClipTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSmartClipTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobs Field Functions 
    bool hasSubJobs() const { return this->subJobs_ != nullptr;};
    void deleteSubJobs() { this->subJobs_ = nullptr;};
    inline const vector<Models::GetSmartClipTaskResponseBodyDataSubJobs> & subJobs() const { DARABONBA_PTR_GET_CONST(subJobs_, vector<Models::GetSmartClipTaskResponseBodyDataSubJobs>) };
    inline vector<Models::GetSmartClipTaskResponseBodyDataSubJobs> subJobs() { DARABONBA_PTR_GET(subJobs_, vector<Models::GetSmartClipTaskResponseBodyDataSubJobs>) };
    inline GetSmartClipTaskResponseBodyData& setSubJobs(const vector<Models::GetSmartClipTaskResponseBodyDataSubJobs> & subJobs) { DARABONBA_PTR_SET_VALUE(subJobs_, subJobs) };
    inline GetSmartClipTaskResponseBodyData& setSubJobs(vector<Models::GetSmartClipTaskResponseBodyDataSubJobs> && subJobs) { DARABONBA_PTR_SET_RVALUE(subJobs_, subJobs) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::GetSmartClipTaskResponseBodyDataSubJobs>> subJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
