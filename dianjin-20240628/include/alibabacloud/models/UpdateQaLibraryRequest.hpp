// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQALIBRARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQALIBRARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateQaLibraryRequestParseQaResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateQaLibraryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQaLibraryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(parseQaResults, parseQaResults_);
      DARABONBA_PTR_TO_JSON(qaLibraryId, qaLibraryId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQaLibraryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(parseQaResults, parseQaResults_);
      DARABONBA_PTR_FROM_JSON(qaLibraryId, qaLibraryId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    UpdateQaLibraryRequest() = default ;
    UpdateQaLibraryRequest(const UpdateQaLibraryRequest &) = default ;
    UpdateQaLibraryRequest(UpdateQaLibraryRequest &&) = default ;
    UpdateQaLibraryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQaLibraryRequest() = default ;
    UpdateQaLibraryRequest& operator=(const UpdateQaLibraryRequest &) = default ;
    UpdateQaLibraryRequest& operator=(UpdateQaLibraryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->parseQaResults_ != nullptr
        && this->qaLibraryId_ != nullptr && this->requestId_ != nullptr; };
    // parseQaResults Field Functions 
    bool hasParseQaResults() const { return this->parseQaResults_ != nullptr;};
    void deleteParseQaResults() { this->parseQaResults_ = nullptr;};
    inline const vector<UpdateQaLibraryRequestParseQaResults> & parseQaResults() const { DARABONBA_PTR_GET_CONST(parseQaResults_, vector<UpdateQaLibraryRequestParseQaResults>) };
    inline vector<UpdateQaLibraryRequestParseQaResults> parseQaResults() { DARABONBA_PTR_GET(parseQaResults_, vector<UpdateQaLibraryRequestParseQaResults>) };
    inline UpdateQaLibraryRequest& setParseQaResults(const vector<UpdateQaLibraryRequestParseQaResults> & parseQaResults) { DARABONBA_PTR_SET_VALUE(parseQaResults_, parseQaResults) };
    inline UpdateQaLibraryRequest& setParseQaResults(vector<UpdateQaLibraryRequestParseQaResults> && parseQaResults) { DARABONBA_PTR_SET_RVALUE(parseQaResults_, parseQaResults) };


    // qaLibraryId Field Functions 
    bool hasQaLibraryId() const { return this->qaLibraryId_ != nullptr;};
    void deleteQaLibraryId() { this->qaLibraryId_ = nullptr;};
    inline string qaLibraryId() const { DARABONBA_PTR_GET_DEFAULT(qaLibraryId_, "") };
    inline UpdateQaLibraryRequest& setQaLibraryId(string qaLibraryId) { DARABONBA_PTR_SET_VALUE(qaLibraryId_, qaLibraryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateQaLibraryRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<UpdateQaLibraryRequestParseQaResults>> parseQaResults_ = nullptr;
    std::shared_ptr<string> qaLibraryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
