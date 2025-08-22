// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRUMUPLOADFILESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRumUploadFilesResponseBodyDataFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumUploadFilesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumUploadFilesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumUploadFilesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    GetRumUploadFilesResponseBodyData() = default ;
    GetRumUploadFilesResponseBodyData(const GetRumUploadFilesResponseBodyData &) = default ;
    GetRumUploadFilesResponseBodyData(GetRumUploadFilesResponseBodyData &&) = default ;
    GetRumUploadFilesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumUploadFilesResponseBodyData() = default ;
    GetRumUploadFilesResponseBodyData& operator=(const GetRumUploadFilesResponseBodyData &) = default ;
    GetRumUploadFilesResponseBodyData& operator=(GetRumUploadFilesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileList_ != nullptr
        && this->nextToken_ != nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<Models::GetRumUploadFilesResponseBodyDataFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Models::GetRumUploadFilesResponseBodyDataFileList>) };
    inline vector<Models::GetRumUploadFilesResponseBodyDataFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<Models::GetRumUploadFilesResponseBodyDataFileList>) };
    inline GetRumUploadFilesResponseBodyData& setFileList(const vector<Models::GetRumUploadFilesResponseBodyDataFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline GetRumUploadFilesResponseBodyData& setFileList(vector<Models::GetRumUploadFilesResponseBodyDataFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetRumUploadFilesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<vector<Models::GetRumUploadFilesResponseBodyDataFileList>> fileList_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
