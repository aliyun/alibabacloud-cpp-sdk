// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTIMPORTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFpShotImportJobResponseBodyFpShotImportJobList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotImportJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotImportJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotImportJobList, fpShotImportJobList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotImportJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotImportJobList, fpShotImportJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotImportJobResponseBody() = default ;
    ListFpShotImportJobResponseBody(const ListFpShotImportJobResponseBody &) = default ;
    ListFpShotImportJobResponseBody(ListFpShotImportJobResponseBody &&) = default ;
    ListFpShotImportJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotImportJobResponseBody() = default ;
    ListFpShotImportJobResponseBody& operator=(const ListFpShotImportJobResponseBody &) = default ;
    ListFpShotImportJobResponseBody& operator=(ListFpShotImportJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotImportJobList_ == nullptr
        && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // fpShotImportJobList Field Functions 
    bool hasFpShotImportJobList() const { return this->fpShotImportJobList_ != nullptr;};
    void deleteFpShotImportJobList() { this->fpShotImportJobList_ = nullptr;};
    inline const vector<ListFpShotImportJobResponseBodyFpShotImportJobList> & fpShotImportJobList() const { DARABONBA_PTR_GET_CONST(fpShotImportJobList_, vector<ListFpShotImportJobResponseBodyFpShotImportJobList>) };
    inline vector<ListFpShotImportJobResponseBodyFpShotImportJobList> fpShotImportJobList() { DARABONBA_PTR_GET(fpShotImportJobList_, vector<ListFpShotImportJobResponseBodyFpShotImportJobList>) };
    inline ListFpShotImportJobResponseBody& setFpShotImportJobList(const vector<ListFpShotImportJobResponseBodyFpShotImportJobList> & fpShotImportJobList) { DARABONBA_PTR_SET_VALUE(fpShotImportJobList_, fpShotImportJobList) };
    inline ListFpShotImportJobResponseBody& setFpShotImportJobList(vector<ListFpShotImportJobResponseBodyFpShotImportJobList> && fpShotImportJobList) { DARABONBA_PTR_SET_RVALUE(fpShotImportJobList_, fpShotImportJobList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const vector<string> & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, vector<string>) };
    inline vector<string> nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, vector<string>) };
    inline ListFpShotImportJobResponseBody& setNonExistIds(const vector<string> & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline ListFpShotImportJobResponseBody& setNonExistIds(vector<string> && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotImportJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The jobs of importing text files to a text fingerprint library.
    std::shared_ptr<vector<ListFpShotImportJobResponseBodyFpShotImportJobList>> fpShotImportJobList_ = nullptr;
    // The job IDs that do not exist. This parameter is not returned if all specified job IDs exist.
    std::shared_ptr<vector<string>> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
