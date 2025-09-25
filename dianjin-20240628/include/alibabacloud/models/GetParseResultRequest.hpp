// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARSERESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARSERESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetParseResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetParseResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(useUrlResult, useUrlResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetParseResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(useUrlResult, useUrlResult_);
    };
    GetParseResultRequest() = default ;
    GetParseResultRequest(const GetParseResultRequest &) = default ;
    GetParseResultRequest(GetParseResultRequest &&) = default ;
    GetParseResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetParseResultRequest() = default ;
    GetParseResultRequest& operator=(const GetParseResultRequest &) = default ;
    GetParseResultRequest& operator=(GetParseResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->libraryId_ != nullptr && this->useUrlResult_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetParseResultRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetParseResultRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // useUrlResult Field Functions 
    bool hasUseUrlResult() const { return this->useUrlResult_ != nullptr;};
    void deleteUseUrlResult() { this->useUrlResult_ = nullptr;};
    inline bool useUrlResult() const { DARABONBA_PTR_GET_DEFAULT(useUrlResult_, false) };
    inline GetParseResultRequest& setUseUrlResult(bool useUrlResult) { DARABONBA_PTR_SET_VALUE(useUrlResult_, useUrlResult) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> docId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<bool> useUrlResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
