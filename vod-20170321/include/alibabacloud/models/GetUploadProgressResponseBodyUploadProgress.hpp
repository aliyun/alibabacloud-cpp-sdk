// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODYUPLOADPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPROGRESSRESPONSEBODYUPLOADPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUploadProgressResponseBodyUploadProgressUploadProgressList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadProgressResponseBodyUploadProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadProgressResponseBodyUploadProgress& obj) { 
      DARABONBA_PTR_TO_JSON(UploadProgressList, uploadProgressList_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadProgressResponseBodyUploadProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(UploadProgressList, uploadProgressList_);
    };
    GetUploadProgressResponseBodyUploadProgress() = default ;
    GetUploadProgressResponseBodyUploadProgress(const GetUploadProgressResponseBodyUploadProgress &) = default ;
    GetUploadProgressResponseBodyUploadProgress(GetUploadProgressResponseBodyUploadProgress &&) = default ;
    GetUploadProgressResponseBodyUploadProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadProgressResponseBodyUploadProgress() = default ;
    GetUploadProgressResponseBodyUploadProgress& operator=(const GetUploadProgressResponseBodyUploadProgress &) = default ;
    GetUploadProgressResponseBodyUploadProgress& operator=(GetUploadProgressResponseBodyUploadProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uploadProgressList_ != nullptr; };
    // uploadProgressList Field Functions 
    bool hasUploadProgressList() const { return this->uploadProgressList_ != nullptr;};
    void deleteUploadProgressList() { this->uploadProgressList_ = nullptr;};
    inline const vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList> & uploadProgressList() const { DARABONBA_PTR_GET_CONST(uploadProgressList_, vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList>) };
    inline vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList> uploadProgressList() { DARABONBA_PTR_GET(uploadProgressList_, vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList>) };
    inline GetUploadProgressResponseBodyUploadProgress& setUploadProgressList(const vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList> & uploadProgressList) { DARABONBA_PTR_SET_VALUE(uploadProgressList_, uploadProgressList) };
    inline GetUploadProgressResponseBodyUploadProgress& setUploadProgressList(vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList> && uploadProgressList) { DARABONBA_PTR_SET_RVALUE(uploadProgressList_, uploadProgressList) };


  protected:
    std::shared_ptr<vector<Models::GetUploadProgressResponseBodyUploadProgressUploadProgressList>> uploadProgressList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
